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
#pragma once
#include <aws/core/Core_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <cassert>

namespace Aws
{
namespace FileSystem
{
    struct DirectoryEntry;
    class Directory;

    #ifdef _WIN32
        static const char PATH_DELIM = '\\';
    #else
        static const char PATH_DELIM = '/';
    #endif

    /**
    * Returns the directory path for the home dir env variable
    */
    AWS_CORE_API Aws::String GetHomeDirectory();

    /**
    * Creates directory if it doesn't exist. Returns true if the directory was created
    * or already exists. False for failure.
    */
    AWS_CORE_API bool CreateDirectoryIfNotExists(const char* path);

    /**
    * Creates directory if it doesn't exist. Returns true if the directory was created
    * or already exists. False for failure.
    */
    AWS_CORE_API bool RemoveDirectoryIfExists(const char* path);

    /**
    * Deletes file if it exists. Returns true if file doesn't exist or on success.
    */
    AWS_CORE_API bool RemoveFileIfExists(const char* fileName);

    /**
    * Moves the file. Returns true on success
    */
    AWS_CORE_API bool RelocateFileOrDirectory(const char* from, const char* to);

    /**
    * Computes a unique tmp file path
    */
    AWS_CORE_API Aws::String CreateTempFilePath();

    /**
     * Opens a directory for traversal.
     * User is responsible for the returned allocated memory. Call Aws::Delete();
     */
    AWS_CORE_API Directory* OpenDirectory(const Aws::String& path);

    enum class FileType
    {
        None,
        File,
        Symlink,
        Directory
    };

    struct DirectoryEntry
    {
        DirectoryEntry() : fileType(FileType::None), fileSize(0) {}

        operator bool() const { return !path.empty() && fileType != FileType::None; }

        Aws::String path;
        FileType fileType;
        int64_t fileSize;
    };

    class AWS_CORE_API Directory
    {
    public:
        Directory(const Aws::String& path) 
        { 
            if(path[path.length() - 1] == PATH_DELIM)
            {
                m_directoryEntry.path = path.substr(0, path.length() - 1); 
            }
            else
            {
                m_directoryEntry.path = path;
            }
        }

        virtual ~Directory()
        {
            for (auto directory : m_openDirectories)
            {
                Aws::Delete(directory);
            }

            m_openDirectories.clear();
        }

        operator bool() const { return m_directoryEntry.operator bool(); }

        const DirectoryEntry GetDirectoryEntry() const { return m_directoryEntry; }
        const Aws::String GetPath() const { return m_directoryEntry.path; }

        virtual DirectoryEntry Next() = 0;

        Directory& Descend(const DirectoryEntry& directoryEntry)
        {
            assert(directoryEntry.fileType != FileType::File);
            Directory* openDir = OpenDirectory(directoryEntry.path);
            m_openDirectories.push_back(openDir);
            return *openDir;
        }

    protected:
        DirectoryEntry m_directoryEntry;

    private:
        Aws::Vector<Directory*> m_openDirectories;
    };

} // namespace FileSystem
} // namespace Aws
