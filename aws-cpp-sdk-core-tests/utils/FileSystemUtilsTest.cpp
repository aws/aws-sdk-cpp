/*
  * Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/external/gtest.h>
#include <aws/testing/MemoryTesting.h>

#include <fstream>

using namespace Aws::Utils;


TEST(FileTest, HomeDirectory)
{
    auto homeDirectory = Aws::FileSystem::GetHomeDirectory();

    ASSERT_TRUE(homeDirectory.size() > 0);
}

TEST(FileTest, TestInvalidDirectoryPath)
{
    Aws::FileSystem::Directory* badDir = Aws::FileSystem::OpenDirectory("boogieMan");
    bool dirGood = *badDir;
    ASSERT_FALSE(dirGood);
    Aws::Delete(badDir);
}

TEST(FileTest, TestDirectoryTraversal)
{
    auto homeDirectory = Aws::FileSystem::GetHomeDirectory();
    ASSERT_FALSE(homeDirectory.empty());
        
    auto dir1 = homeDirectory + Aws::FileSystem::PATH_DELIM + "dir1";    
    auto dir2 = dir1 + Aws::FileSystem::PATH_DELIM + "dir2";

    auto file1 = dir1 + Aws::FileSystem::PATH_DELIM + "file1";
    auto file2 = dir2 + Aws::FileSystem::PATH_DELIM + "file2";

    bool dir1Created = Aws::FileSystem::CreateDirectoryIfNotExists(dir1.c_str());
    ASSERT_TRUE(dir1Created);

    bool dir2Created = Aws::FileSystem::CreateDirectoryIfNotExists(dir2.c_str());
    ASSERT_TRUE(dir2Created);

    size_t file1Size;
    {
        Aws::OFStream file1Stream(file1.c_str());
        ASSERT_TRUE(file1Stream.good());
        file1Stream << "Test Data1" << std::endl;
        file1Stream.seekp(0, std::ios_base::end);
        file1Size = static_cast<size_t>(file1Stream.tellp());
    }

    size_t file2Size;

    {
        Aws::OFStream file2Stream(file2.c_str());
        ASSERT_TRUE(file2Stream.good());
        file2Stream << "Test Data2" << std::endl;
        file2Stream.seekp(0, std::ios_base::end);
        file2Size = static_cast<size_t>(file2Stream.tellp());
    }

    //let one have the delimiter after it just to make sure both paths get handled.
    auto dir1WithExtraDelimiter = dir1 + Aws::FileSystem::PATH_DELIM;
    Aws::FileSystem::Directory* dir = Aws::FileSystem::OpenDirectory(dir1WithExtraDelimiter);

    ASSERT_STREQ(dir1.c_str(), dir->GetPath().c_str());
    ASSERT_TRUE(dir->operator bool());

    auto entry = dir->Next();
    Aws::FileSystem::DirectoryEntry dir2Entry;
    Aws::FileSystem::DirectoryEntry file1Entry;

    if(entry.fileType == Aws::FileSystem::FileType::File)
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

    auto& nextDir = dir->Descend(dir2Entry);
    ASSERT_STREQ(dir2.c_str(), nextDir.GetPath().c_str());
    
    entry = nextDir.Next();
    ASSERT_EQ(Aws::FileSystem::FileType::File, entry.fileType);
    ASSERT_STREQ(file2.c_str(), entry.path.c_str());
    ASSERT_EQ(static_cast<int64_t>(file2Size), entry.fileSize);
    ASSERT_TRUE(entry.operator bool());

    entry = nextDir.Next();
    ASSERT_FALSE(entry.operator bool());

    ASSERT_EQ(Aws::FileSystem::FileType::File, file1Entry.fileType);
    ASSERT_STREQ(file1.c_str(), file1Entry.path.c_str());
    ASSERT_EQ(static_cast<int64_t>(file1Size), file1Entry.fileSize);
    ASSERT_TRUE(file1Entry.operator bool());

    entry = dir->Next();
    ASSERT_FALSE(entry.operator bool());

    Aws::Delete(dir);
    Aws::FileSystem::RemoveFileIfExists(file1.c_str());
    Aws::FileSystem::RemoveFileIfExists(file2.c_str());
    Aws::FileSystem::RemoveDirectoryIfExists(dir2.c_str());
    Aws::FileSystem::RemoveDirectoryIfExists(dir1.c_str());
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
