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

#include <aws/core/platform/Android.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/StringUtils.h>

#include <unistd.h>
#include <sys/stat.h>
#include <cerrno>
#include <dirent.h>
#include <cassert>

#include <mutex>

namespace Aws
{
namespace FileSystem
{

static const char* FILE_SYSTEM_UTILS_LOG_TAG = "FileSystem";

    class AndroidDirectory : public Directory
    {
    public:
        AndroidDirectory(const Aws::String& path) : Directory(path), m_dir(nullptr)
        {
            if((m_dir = opendir(path.c_str())))
            {
                dirent* entry;
                if((entry = readdir(m_dir)))
                {
                    m_directoryEntry = ParseFileInfo(entry);
                }
            }
        }

        ~AndroidDirectory()
        {
            if (m_dir)
            {
                closedir(m_dir);
            }
        }

        DirectoryEntry Next() override
        {
            assert(m_dir);
            DirectoryEntry entry;

            dirent* dirEntry;
            if ((dirEntry = readdir(m_dir)))
            {
                entry = ParseFileInfo(dirEntry);
            }

            return entry;
        }

    private:
        DirectoryEntry ParseFileInfo(dirent* dirEnt)
        {
            DirectoryEntry entry;
            entry.path = dirEnt->d_name;

            if(dirEnt->d_type == DT_DIR)
            {
                entry.fileType = FileType::Directory;
            }
            else if(dirEnt->d_type == DT_LNK)
            {
                entry.fileType = FileType::Symlink;
            }
            else
            {
                entry.fileType = FileType::File;
                FILE* fp = fopen(dirEnt->d_name, "r");
                if(fp)
                {
                    auto pos = ftell(fp);
                    fseek(fp, 0, SEEK_END);
                    auto end = ftell(fp);
                    fseek(fp, pos, SEEK_SET);
                    entry.fileSize = static_cast<int64_t>(end);
                    fclose(fp);
                }
            }

            return entry;
        }

        DIR* m_dir;
    };

Aws::String GetHomeDirectory()
{
    return Aws::Platform::GetCacheDirectory();
}

bool CreateDirectoryIfNotExists(const char* path)
{
    AWS_LOGSTREAM_INFO(FILE_SYSTEM_UTILS_LOG_TAG, "Creating directory " << path);

    int errorCode = mkdir(path, S_IRWXU | S_IRWXG | S_IRWXO);
    AWS_LOGSTREAM_DEBUG(FILE_SYSTEM_UTILS_LOG_TAG, "Creation of directory " << path << " returned code: " << errno);
    return errorCode == 0 || errno == EEXIST;
}

bool RemoveFileIfExists(const char* path)
{
    AWS_LOGSTREAM_INFO(FILE_SYSTEM_UTILS_LOG_TAG, "Deleting file: " << path);

    int errorCode = unlink(path);
    AWS_LOGSTREAM_DEBUG(FILE_SYSTEM_UTILS_LOG_TAG, "Deletion of file: " << path << " Returned error code: " << errno);
    return errorCode == 0 || errno == ENOENT;
}

bool RelocateFileOrDirectory(const char* from, const char* to)
{
    AWS_LOGSTREAM_INFO(FILE_SYSTEM_UTILS_LOG_TAG, "Moving file at " << from << " to " << to);

    int errorCode = rename(from, to);

    AWS_LOGSTREAM_DEBUG(FILE_SYSTEM_UTILS_LOG_TAG,  "The moving operation of file at " << from << " to " << to << " Returned error code of " << errno);
    return errorCode == 0;
}

std::mutex tempFileMutex;
uint32_t tempFileIndex(0);

Aws::String CreateTempFilePath()
{
    std::lock_guard<std::mutex> tempFileLock(tempFileMutex);

    Aws::StringStream pathStream;
    pathStream << Aws::Platform::GetCacheDirectory();
    pathStream << PATH_DELIM << "temp" << tempFileIndex;
    ++tempFileIndex;

    AWS_LOGSTREAM_DEBUG(FILE_SYSTEM_UTILS_LOG_TAG, "CreateTempFilePath generated: " << pathStream.str());

    return pathStream.str();
}

Directory* OpenDirectory(const DirectoryEntry& directoryEntry)
{
    assert(directoryEntry.fileType != FileType::File);
    return Aws::New<AndroidDirectory>(FILE_SYSTEM_UTILS_LOG_TAG, directoryEntry.path);
}

} // namespace FileSystem
} // namespace Aws

