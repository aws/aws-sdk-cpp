/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <cassert>

namespace Aws
{
    namespace FileSystem
    {
        Directory::Directory(const Aws::String& path)
        {
            if (path[path.length() - 1] == PATH_DELIM)
            {
                m_directoryEntry.path = path.substr(0, path.length() - 1);
            }
            else
            {
                m_directoryEntry.path = path;
            }
        }

        Directory::~Directory()
        {
            for (auto directory : m_openDirectories)
            {
                Aws::Delete(directory);
            }

            m_openDirectories.clear();
        }

        Directory& Directory::Descend(const DirectoryEntry& directoryEntry)
        {
            assert(directoryEntry.fileType != FileType::File);
            Directory* openDir = OpenDirectory(directoryEntry.path);
            m_openDirectories.push_back(openDir);
            return *openDir;
        }

        DirectoryTree::DirectoryTree(const Aws::String& path)
        {
            m_dir = OpenDirectory(path);
        }

        DirectoryTree::~DirectoryTree()
        {
            if (m_dir)
            {
                Aws::Delete(m_dir);
            }
        }

        DirectoryTree::operator bool() const
        {
            return m_dir->operator bool();
        }

        void DirectoryTree::Traverse(const DirectoryEntryVisitor& visitor)
        {
            Traverse(*m_dir, visitor);
        }


        void DirectoryTree::Traverse(Directory& dir, const DirectoryEntryVisitor& visitor)
        {
            if (!dir)
            {
                return;
            }

            while (DirectoryEntry&& entry = dir.Next())
            {
                visitor(this, entry);

                if (entry.fileType == FileType::Directory)
                {
                    Traverse(dir.Descend(entry), visitor);
                }                
            }
        }

    }
}