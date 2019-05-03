/*
  * Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
  *
  * Licensed under the Apache License, Version 2.0 (the "License").
  * You may not use this file except in compliance with the License.
  * A copy of the License is located at
  *
  *  http://aws.amazon.com/apache2.0
  *
  * or in the "license" file accompanying this file. This file is distributed
  * on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
  * express or implied. See the License for the specific language governing
  * permissions and limitations under the License.
  */

#include <aws/core/platform/FileSystem.h>
#include <aws/core/utils/FileSystemUtils.h>
#include <aws/core/utils/memory/stl/AWSSet.h>
#include <aws/external/gtest.h>
#include <fstream>
#if defined(HAS_PATHCONF)
#include <unistd.h>
#include <climits>
#endif

using namespace Aws;
using namespace Aws::Utils;


TEST(FileTest, HomeDirectory)
{
    auto homeDirectory = Aws::FileSystem::GetHomeDirectory();

    ASSERT_TRUE(homeDirectory.size() > 0);
    ASSERT_EQ(Aws::FileSystem::PATH_DELIM, homeDirectory.back());
}

TEST(FileTest, TestInvalidDirectoryPath)
{
    auto badDir = Aws::FileSystem::OpenDirectory("boogieMan");
    bool dirGood = *badDir;
    ASSERT_FALSE(dirGood);    
}

TEST(FileTest, TempFile)
{
    Aws::String filePath; 

    {
        TempFile tempFile(std::ios_base::out | std::ios_base::trunc);
        ASSERT_TRUE(tempFile.GetFileName().size() > 0);

        tempFile << "1" << std::endl;
        ASSERT_TRUE(tempFile.good());

        tempFile.close();

        int32_t test = 0;
        std::ifstream testIn(tempFile.GetFileName().c_str());
        testIn >> test;
        testIn.close();

        ASSERT_EQ(test, 1);
        filePath = tempFile.GetFileName();
    }

    std::ifstream testIn(filePath.c_str());
    ASSERT_FALSE(testIn.good());
}

class DirectoryTreeTest : public ::testing::Test
{
public:
    Aws::String dir1, dir2, file1, file2;
    bool dir1Created, dir2Created;
    size_t file1Size, file2Size;

    DirectoryTreeTest() : dir1Created(false), dir2Created(false), file1Size(0), file2Size(0) {}

    void SetUp() override
    {
        auto homeDirectory = Aws::FileSystem::GetHomeDirectory();
        ASSERT_FALSE(homeDirectory.empty());

        dir1 = Aws::FileSystem::Join(homeDirectory, "dir1");
        dir2 = Aws::FileSystem::Join(dir1, "dir2");

        file1 = Aws::FileSystem::Join(dir1, "file1");
        file2 = Aws::FileSystem::Join(dir2, "file2");

        dir1Created = Aws::FileSystem::CreateDirectoryIfNotExists(dir1.c_str());
        ASSERT_TRUE(dir1Created);

        dir2Created = Aws::FileSystem::CreateDirectoryIfNotExists(dir2.c_str());
        ASSERT_TRUE(dir2Created);
        
        {
            Aws::OFStream file1Stream(file1.c_str());
            ASSERT_TRUE(file1Stream.good());
            file1Stream << "Test Data1" << std::endl;
            file1Stream.seekp(0, std::ios_base::end);
            file1Size = static_cast<size_t>(file1Stream.tellp());
        }
        
        {
            Aws::OFStream file2Stream(file2.c_str());
            ASSERT_TRUE(file2Stream.good());
            file2Stream << "Test Data2" << std::endl;
            file2Stream.seekp(0, std::ios_base::end);
            file2Size = static_cast<size_t>(file2Stream.tellp());
        }
    }

    void TearDown() override
    {
        EXPECT_TRUE(Aws::FileSystem::DeepDeleteDirectory(dir1.c_str()));
    }
};

TEST_F(DirectoryTreeTest, TestManualDirectoryTraversal)
{
    //let one have the delimiter after it just to make sure both paths get handled.
    auto dir1WithExtraDelimiter = dir1 + Aws::FileSystem::PATH_DELIM;
    auto dir = Aws::FileSystem::OpenDirectory(dir1WithExtraDelimiter);

    ASSERT_STREQ(dir1.c_str(), dir->GetPath().c_str());
    ASSERT_TRUE(dir->operator bool());

    auto entry = dir->Next();
    Aws::FileSystem::DirectoryEntry dir2Entry;
    Aws::FileSystem::DirectoryEntry file1Entry;

    if (entry.fileType == Aws::FileSystem::FileType::File)
    {
        file1Entry = entry;
        dir2Entry = dir->Next();
    }
    else
    {
        dir2Entry = entry;
        file1Entry = dir->Next();
    }

    ASSERT_EQ(Aws::FileSystem::FileType::Directory, dir2Entry.fileType);
    ASSERT_STREQ(dir2.c_str(), dir2Entry.path.c_str());

    auto nextDir = dir->Descend(dir2Entry);
    ASSERT_STREQ(dir2.c_str(), nextDir->GetPath().c_str());

    entry = nextDir->Next();
    ASSERT_EQ(Aws::FileSystem::FileType::File, entry.fileType);
    ASSERT_STREQ(file2.c_str(), entry.path.c_str());
    ASSERT_EQ(static_cast<int64_t>(file2Size), entry.fileSize);
    ASSERT_TRUE(entry.operator bool());

    entry = nextDir->Next();
    ASSERT_FALSE(entry.operator bool());

    ASSERT_EQ(Aws::FileSystem::FileType::File, file1Entry.fileType);
    ASSERT_STREQ(file1.c_str(), file1Entry.path.c_str());
    ASSERT_EQ(static_cast<int64_t>(file1Size), file1Entry.fileSize);
    ASSERT_TRUE(file1Entry.operator bool());

    entry = dir->Next();
    ASSERT_FALSE(entry.operator bool());
}

TEST_F(DirectoryTreeTest, TestDirectoryTreeDepthFirstTraversal)
{
    Aws::FileSystem::DirectoryTree tree(dir1);

    Aws::Set<Aws::String> paths({dir2, file1, file2});
   
    auto visitor = [&](const Aws::FileSystem::DirectoryTree*, const Aws::FileSystem::DirectoryEntry& entry) { paths.erase(entry.path); return true; };

    tree.TraverseDepthFirst(visitor);

    ASSERT_TRUE(paths.empty());
}

TEST_F(DirectoryTreeTest, TestDirectoryTreeEqualityOperator)
{
    Aws::FileSystem::DirectoryTree tree(dir1);

    ASSERT_TRUE(tree);

    Aws::String comparisonDirectory = Aws::FileSystem::Join(Aws::FileSystem::GetHomeDirectory(), "compDir");
    ASSERT_TRUE(Aws::FileSystem::DeepCopyDirectory(dir1.c_str(), comparisonDirectory.c_str()));
    EXPECT_TRUE(tree == comparisonDirectory);
    ASSERT_TRUE(Aws::FileSystem::DeepDeleteDirectory(comparisonDirectory.c_str()));
}

TEST_F(DirectoryTreeTest, TestDirectoryTreeDiff)
{
    Aws::FileSystem::DirectoryTree tree(dir1);

    Aws::String comparisonDirectory = Aws::FileSystem::Join(Aws::FileSystem::GetHomeDirectory(), "compDir");
    ASSERT_TRUE(Aws::FileSystem::DeepCopyDirectory(dir1.c_str(), comparisonDirectory.c_str()));
    
    {
        Aws::FileSystem::DirectoryTree comparisonTree(comparisonDirectory);
        auto diff = tree.Diff(comparisonTree);
        ASSERT_EQ(0u, diff.size());
    }

    auto additionalFile = Aws::FileSystem::Join(comparisonDirectory, "additionalFile");
    {
        Aws::OFStream additionalFileStrm(additionalFile.c_str());
        ASSERT_TRUE(additionalFileStrm.good());
        additionalFileStrm << "Additional File input." << std::endl;
    }

    auto missingFile = Aws::FileSystem::Join(Aws::FileSystem::Join(comparisonDirectory, "dir2"), "file2");
    Aws::FileSystem::RemoveFileIfExists(missingFile.c_str());

    Aws::FileSystem::DirectoryTree comparisonTree(comparisonDirectory);
    auto diff = tree.Diff(comparisonTree);
    Aws::FileSystem::DeepDeleteDirectory(comparisonDirectory.c_str());

    ASSERT_EQ(2u, diff.size());
    auto entry = diff.begin();
    ASSERT_STREQ(additionalFile.c_str(), entry->second.path.c_str());
    entry++;
    ASSERT_STREQ(file2.c_str(), entry->second.path.c_str());
}

TEST_F(DirectoryTreeTest, TestDirectoryTreeBreadthFirstTraversal)
{
    Aws::FileSystem::DirectoryTree tree(dir1);

    ASSERT_TRUE(tree);

    Aws::Set<Aws::String> paths({ dir2, file1, file2 });

    auto visitor = [&](const Aws::FileSystem::DirectoryTree*, const Aws::FileSystem::DirectoryEntry& entry) { paths.erase(entry.path); return true; };

    tree.TraverseBreadthFirst(visitor);

    ASSERT_TRUE(paths.empty());
}

TEST_F(DirectoryTreeTest, TestDirectoryTreeBreadthFirstTraversalGetAllFiles)
{
    Aws::Vector<Aws::String> filesVector = Aws::FileSystem::Directory::GetAllFilePathsInDirectory(dir1);
    ASSERT_EQ(filesVector.size(), 2u);
    ASSERT_STREQ(filesVector[0].c_str(), file1.c_str());
    ASSERT_STREQ(filesVector[1].c_str(), file2.c_str());
}

TEST_F(DirectoryTreeTest, TestPathUtilsGetFileNameWithExt)
{
    ASSERT_STREQ(Aws::Utils::PathUtils::GetFileNameFromPathWithExt("").c_str(), "");
    ASSERT_STREQ(Aws::Utils::PathUtils::GetFileNameFromPathWithExt(".").c_str(), ".");
    ASSERT_STREQ(Aws::Utils::PathUtils::GetFileNameFromPathWithExt(Aws::FileSystem::Join("","")).c_str(), "");
    ASSERT_STREQ(Aws::Utils::PathUtils::GetFileNameFromPathWithExt("file.ext").c_str(), "file.ext");
    ASSERT_STREQ(Aws::Utils::PathUtils::GetFileNameFromPathWithExt(Aws::FileSystem::Join(Aws::FileSystem::Join("path", "to"), "file")).c_str(), "file");
    ASSERT_STREQ(Aws::Utils::PathUtils::GetFileNameFromPathWithExt(Aws::FileSystem::Join(Aws::FileSystem::Join("path", "to"), "file.dll")).c_str(), "file.dll");
    ASSERT_STREQ(Aws::Utils::PathUtils::GetFileNameFromPathWithExt(Aws::FileSystem::Join(Aws::FileSystem::Join("path", "to"), "file.dll.so")).c_str(), "file.dll.so");
    ASSERT_STREQ(Aws::Utils::PathUtils::GetFileNameFromPathWithExt(Aws::FileSystem::Join(Aws::FileSystem::Join("path", "to.so"), "file.dll.so")).c_str(), "file.dll.so");
    ASSERT_STREQ(Aws::Utils::PathUtils::GetFileNameFromPathWithExt(Aws::FileSystem::Join(Aws::FileSystem::Join(Aws::FileSystem::Join("path", "to"), "file.dll"), "")).c_str(), "");
}

TEST_F(DirectoryTreeTest, TestPathUtilsGetFileNameWithoutExt)
{
    ASSERT_STREQ(Aws::Utils::PathUtils::GetFileNameFromPathWithoutExt("").c_str(), "");
    ASSERT_STREQ(Aws::Utils::PathUtils::GetFileNameFromPathWithoutExt(".").c_str(), "");
    ASSERT_STREQ(Aws::Utils::PathUtils::GetFileNameFromPathWithoutExt(Aws::FileSystem::Join("", "")).c_str(), "");
    ASSERT_STREQ(Aws::Utils::PathUtils::GetFileNameFromPathWithoutExt("file.ext").c_str(), "file");
    ASSERT_STREQ(Aws::Utils::PathUtils::GetFileNameFromPathWithoutExt(Aws::FileSystem::Join(Aws::FileSystem::Join("path", "to"), "file")).c_str(), "file");
    ASSERT_STREQ(Aws::Utils::PathUtils::GetFileNameFromPathWithoutExt(Aws::FileSystem::Join(Aws::FileSystem::Join("path", "to"), "file.dll")).c_str(), "file");
    ASSERT_STREQ(Aws::Utils::PathUtils::GetFileNameFromPathWithoutExt(Aws::FileSystem::Join(Aws::FileSystem::Join("path", "to"), "file.dll.so")).c_str(), "file.dll");
    ASSERT_STREQ(Aws::Utils::PathUtils::GetFileNameFromPathWithoutExt(Aws::FileSystem::Join(Aws::FileSystem::Join("path", "to.so"), "file.dll.so")).c_str(), "file.dll");
    ASSERT_STREQ(Aws::Utils::PathUtils::GetFileNameFromPathWithoutExt(Aws::FileSystem::Join(Aws::FileSystem::Join(Aws::FileSystem::Join("path", "to"), "file.dll"), "")).c_str(), "");
}

TEST_F(DirectoryTreeTest, CreateDirectoryIfNotExistedTest)
{
#if defined(HAS_PATHCONF)
    errno = 0;
    long longNameLength = pathconf(".", _PC_NAME_MAX);
    ASSERT_TRUE(longNameLength >= 0 || errno == 0);
    if (longNameLength <= 0)
    {
        longNameLength = NAME_MAX;
    }
#else
    // Path compoments on Windows can't exceed 255(_MAX_FNAME) chars.
    // To cover the Windows case where the path with length over 260(MAX_PATH) chars,
    // set one path part to be 255 characters, so dir1/dir2/dir3/[longDirName] is over 260 chars.
    long longNameLength = 255;
#endif
    Aws::String longDirName(longNameLength, 'a');
    // The directory is created under root directory "dir1", "dir1" will be deleted during TearDown().
    ASSERT_TRUE(FileSystem::CreateDirectoryIfNotExists(FileSystem::Join(FileSystem::Join(dir2, "dir3"), longDirName).c_str(), true/*create all intermediate directories on the path*/));
}
