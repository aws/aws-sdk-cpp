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
#include <aws/core/utils/memory/stl/AWSQueue.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/StringUtils.h>
#include <cassert>

namespace Aws
{
    namespace FileSystem
    {
        Directory::Directory(const Aws::String& path, const Aws::String& relativePath)
        {
            auto trimmedPath = Utils::StringUtils::Trim(path.c_str());
            auto trimmedRelativePath = Utils::StringUtils::Trim(relativePath.c_str());

            if (trimmedPath[trimmedPath.length() - 1] == PATH_DELIM)
            {
                m_directoryEntry.path = trimmedPath.substr(0, trimmedPath.length() - 1);
            }
            else
            {
                m_directoryEntry.path = trimmedPath;
            }     
            
            m_directoryEntry.relativePath = trimmedRelativePath;
        }        

        Directory& Directory::Descend(const DirectoryEntry& directoryEntry)
        {
            assert(directoryEntry.fileType != FileType::File);
            auto openDir = OpenDirectory(directoryEntry.path, directoryEntry.relativePath);
            m_openDirectories.push_back(openDir);
            return *openDir;
        }

        DirectoryTree::DirectoryTree(const Aws::String& path)
        {
            m_dir = OpenDirectory(path);
        }

        DirectoryTree::operator bool() const
        {
            return m_dir->operator bool();
        }

        void DirectoryTree::TraverseDepthFirst(const DirectoryEntryVisitor& visitor)
        {
            TraverseDepthFirst(*m_dir, visitor);
        }

        void DirectoryTree::TraverseBreadthFirst(const DirectoryEntryVisitor& visitor)
        {
            TraverseBreadthFirst(*m_dir, visitor);
        }

         
        void DirectoryTree::TraverseBreadthFirst(Directory& dir, const DirectoryEntryVisitor& visitor)
        {
            if (!dir)
            {
                return;
            }

            Aws::Queue<DirectoryEntry> queue;
            while (DirectoryEntry&& entry = dir.Next())
            {
                queue.push(std::move(entry));
            }

            while (queue.size() > 0)
            {
                auto entry = queue.front();
                queue.pop();
                if(visitor(this, entry))               
                {
                    if(entry.fileType == FileType::Directory)
                    {
                        auto& currentDir = dir.Descend(entry);

                        while (DirectoryEntry&& dirEntry = currentDir.Next())
                        {
                            queue.push(std::move(dirEntry));
                        }
                    }
                }
                else
                {
                    return;
                }
            }
        }

        bool DirectoryTree::TraverseDepthFirst(Directory& dir, const DirectoryEntryVisitor& visitor)
        {
            if (!dir)
            {
                return true;
            }

            bool exitTraversal(false);
            DirectoryEntry entry;

            while ((entry = dir.Next()) && !exitTraversal)
            {
                if(!visitor(this, entry))
                {                    
                    return false;
                }

                if (entry.fileType == FileType::Directory)
                {
                    exitTraversal = !TraverseDepthFirst(dir.Descend(entry), visitor);
                }                
            }

            return !exitTraversal;
        }

        Aws::String Join(const Aws::String& leftSegment, const Aws::String& rightSegment)
        {
            Aws::StringStream ss;

            if (!leftSegment.empty())
            {
                if (leftSegment.back() == PATH_DELIM)
                {
                    ss << leftSegment.substr(0, leftSegment.length() - 1);
                }
                else
                {
                    ss << leftSegment;
                }
            }

            ss << PATH_DELIM;

            if (!rightSegment.empty())
            {
                if (rightSegment.front() == PATH_DELIM)
                {
                    ss << rightSegment.substr(1);
                }
                else
                {
                    ss << rightSegment;
                }
            }

            return ss.str();
        }

    }
}