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

#pragma once
#include <aws/codecommit/CodeCommit_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codecommit/model/Folder.h>
#include <aws/codecommit/model/File.h>
#include <aws/codecommit/model/SymbolicLink.h>
#include <aws/codecommit/model/SubModule.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace CodeCommit
{
namespace Model
{
  class AWS_CODECOMMIT_API GetFolderResult
  {
  public:
    GetFolderResult();
    GetFolderResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetFolderResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The full commit ID used as a reference for which version of the folder
     * content is returned.</p>
     */
    inline const Aws::String& GetCommitId() const{ return m_commitId; }

    /**
     * <p>The full commit ID used as a reference for which version of the folder
     * content is returned.</p>
     */
    inline void SetCommitId(const Aws::String& value) { m_commitId = value; }

    /**
     * <p>The full commit ID used as a reference for which version of the folder
     * content is returned.</p>
     */
    inline void SetCommitId(Aws::String&& value) { m_commitId = std::move(value); }

    /**
     * <p>The full commit ID used as a reference for which version of the folder
     * content is returned.</p>
     */
    inline void SetCommitId(const char* value) { m_commitId.assign(value); }

    /**
     * <p>The full commit ID used as a reference for which version of the folder
     * content is returned.</p>
     */
    inline GetFolderResult& WithCommitId(const Aws::String& value) { SetCommitId(value); return *this;}

    /**
     * <p>The full commit ID used as a reference for which version of the folder
     * content is returned.</p>
     */
    inline GetFolderResult& WithCommitId(Aws::String&& value) { SetCommitId(std::move(value)); return *this;}

    /**
     * <p>The full commit ID used as a reference for which version of the folder
     * content is returned.</p>
     */
    inline GetFolderResult& WithCommitId(const char* value) { SetCommitId(value); return *this;}


    /**
     * <p>The fully-qualified path of the folder whose contents are returned.</p>
     */
    inline const Aws::String& GetFolderPath() const{ return m_folderPath; }

    /**
     * <p>The fully-qualified path of the folder whose contents are returned.</p>
     */
    inline void SetFolderPath(const Aws::String& value) { m_folderPath = value; }

    /**
     * <p>The fully-qualified path of the folder whose contents are returned.</p>
     */
    inline void SetFolderPath(Aws::String&& value) { m_folderPath = std::move(value); }

    /**
     * <p>The fully-qualified path of the folder whose contents are returned.</p>
     */
    inline void SetFolderPath(const char* value) { m_folderPath.assign(value); }

    /**
     * <p>The fully-qualified path of the folder whose contents are returned.</p>
     */
    inline GetFolderResult& WithFolderPath(const Aws::String& value) { SetFolderPath(value); return *this;}

    /**
     * <p>The fully-qualified path of the folder whose contents are returned.</p>
     */
    inline GetFolderResult& WithFolderPath(Aws::String&& value) { SetFolderPath(std::move(value)); return *this;}

    /**
     * <p>The fully-qualified path of the folder whose contents are returned.</p>
     */
    inline GetFolderResult& WithFolderPath(const char* value) { SetFolderPath(value); return *this;}


    /**
     * <p>The full SHA-1 pointer of the tree information for the commit that contains
     * the folder.</p>
     */
    inline const Aws::String& GetTreeId() const{ return m_treeId; }

    /**
     * <p>The full SHA-1 pointer of the tree information for the commit that contains
     * the folder.</p>
     */
    inline void SetTreeId(const Aws::String& value) { m_treeId = value; }

    /**
     * <p>The full SHA-1 pointer of the tree information for the commit that contains
     * the folder.</p>
     */
    inline void SetTreeId(Aws::String&& value) { m_treeId = std::move(value); }

    /**
     * <p>The full SHA-1 pointer of the tree information for the commit that contains
     * the folder.</p>
     */
    inline void SetTreeId(const char* value) { m_treeId.assign(value); }

    /**
     * <p>The full SHA-1 pointer of the tree information for the commit that contains
     * the folder.</p>
     */
    inline GetFolderResult& WithTreeId(const Aws::String& value) { SetTreeId(value); return *this;}

    /**
     * <p>The full SHA-1 pointer of the tree information for the commit that contains
     * the folder.</p>
     */
    inline GetFolderResult& WithTreeId(Aws::String&& value) { SetTreeId(std::move(value)); return *this;}

    /**
     * <p>The full SHA-1 pointer of the tree information for the commit that contains
     * the folder.</p>
     */
    inline GetFolderResult& WithTreeId(const char* value) { SetTreeId(value); return *this;}


    /**
     * <p>The list of folders that exist beneath the specified folder, if any.</p>
     */
    inline const Aws::Vector<Folder>& GetSubFolders() const{ return m_subFolders; }

    /**
     * <p>The list of folders that exist beneath the specified folder, if any.</p>
     */
    inline void SetSubFolders(const Aws::Vector<Folder>& value) { m_subFolders = value; }

    /**
     * <p>The list of folders that exist beneath the specified folder, if any.</p>
     */
    inline void SetSubFolders(Aws::Vector<Folder>&& value) { m_subFolders = std::move(value); }

    /**
     * <p>The list of folders that exist beneath the specified folder, if any.</p>
     */
    inline GetFolderResult& WithSubFolders(const Aws::Vector<Folder>& value) { SetSubFolders(value); return *this;}

    /**
     * <p>The list of folders that exist beneath the specified folder, if any.</p>
     */
    inline GetFolderResult& WithSubFolders(Aws::Vector<Folder>&& value) { SetSubFolders(std::move(value)); return *this;}

    /**
     * <p>The list of folders that exist beneath the specified folder, if any.</p>
     */
    inline GetFolderResult& AddSubFolders(const Folder& value) { m_subFolders.push_back(value); return *this; }

    /**
     * <p>The list of folders that exist beneath the specified folder, if any.</p>
     */
    inline GetFolderResult& AddSubFolders(Folder&& value) { m_subFolders.push_back(std::move(value)); return *this; }


    /**
     * <p>The list of files that exist in the specified folder, if any.</p>
     */
    inline const Aws::Vector<File>& GetFiles() const{ return m_files; }

    /**
     * <p>The list of files that exist in the specified folder, if any.</p>
     */
    inline void SetFiles(const Aws::Vector<File>& value) { m_files = value; }

    /**
     * <p>The list of files that exist in the specified folder, if any.</p>
     */
    inline void SetFiles(Aws::Vector<File>&& value) { m_files = std::move(value); }

    /**
     * <p>The list of files that exist in the specified folder, if any.</p>
     */
    inline GetFolderResult& WithFiles(const Aws::Vector<File>& value) { SetFiles(value); return *this;}

    /**
     * <p>The list of files that exist in the specified folder, if any.</p>
     */
    inline GetFolderResult& WithFiles(Aws::Vector<File>&& value) { SetFiles(std::move(value)); return *this;}

    /**
     * <p>The list of files that exist in the specified folder, if any.</p>
     */
    inline GetFolderResult& AddFiles(const File& value) { m_files.push_back(value); return *this; }

    /**
     * <p>The list of files that exist in the specified folder, if any.</p>
     */
    inline GetFolderResult& AddFiles(File&& value) { m_files.push_back(std::move(value)); return *this; }


    /**
     * <p>The list of symbolic links to other files and folders that exist in the
     * specified folder, if any.</p>
     */
    inline const Aws::Vector<SymbolicLink>& GetSymbolicLinks() const{ return m_symbolicLinks; }

    /**
     * <p>The list of symbolic links to other files and folders that exist in the
     * specified folder, if any.</p>
     */
    inline void SetSymbolicLinks(const Aws::Vector<SymbolicLink>& value) { m_symbolicLinks = value; }

    /**
     * <p>The list of symbolic links to other files and folders that exist in the
     * specified folder, if any.</p>
     */
    inline void SetSymbolicLinks(Aws::Vector<SymbolicLink>&& value) { m_symbolicLinks = std::move(value); }

    /**
     * <p>The list of symbolic links to other files and folders that exist in the
     * specified folder, if any.</p>
     */
    inline GetFolderResult& WithSymbolicLinks(const Aws::Vector<SymbolicLink>& value) { SetSymbolicLinks(value); return *this;}

    /**
     * <p>The list of symbolic links to other files and folders that exist in the
     * specified folder, if any.</p>
     */
    inline GetFolderResult& WithSymbolicLinks(Aws::Vector<SymbolicLink>&& value) { SetSymbolicLinks(std::move(value)); return *this;}

    /**
     * <p>The list of symbolic links to other files and folders that exist in the
     * specified folder, if any.</p>
     */
    inline GetFolderResult& AddSymbolicLinks(const SymbolicLink& value) { m_symbolicLinks.push_back(value); return *this; }

    /**
     * <p>The list of symbolic links to other files and folders that exist in the
     * specified folder, if any.</p>
     */
    inline GetFolderResult& AddSymbolicLinks(SymbolicLink&& value) { m_symbolicLinks.push_back(std::move(value)); return *this; }


    /**
     * <p>The list of submodules that exist in the specified folder, if any.</p>
     */
    inline const Aws::Vector<SubModule>& GetSubModules() const{ return m_subModules; }

    /**
     * <p>The list of submodules that exist in the specified folder, if any.</p>
     */
    inline void SetSubModules(const Aws::Vector<SubModule>& value) { m_subModules = value; }

    /**
     * <p>The list of submodules that exist in the specified folder, if any.</p>
     */
    inline void SetSubModules(Aws::Vector<SubModule>&& value) { m_subModules = std::move(value); }

    /**
     * <p>The list of submodules that exist in the specified folder, if any.</p>
     */
    inline GetFolderResult& WithSubModules(const Aws::Vector<SubModule>& value) { SetSubModules(value); return *this;}

    /**
     * <p>The list of submodules that exist in the specified folder, if any.</p>
     */
    inline GetFolderResult& WithSubModules(Aws::Vector<SubModule>&& value) { SetSubModules(std::move(value)); return *this;}

    /**
     * <p>The list of submodules that exist in the specified folder, if any.</p>
     */
    inline GetFolderResult& AddSubModules(const SubModule& value) { m_subModules.push_back(value); return *this; }

    /**
     * <p>The list of submodules that exist in the specified folder, if any.</p>
     */
    inline GetFolderResult& AddSubModules(SubModule&& value) { m_subModules.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_commitId;

    Aws::String m_folderPath;

    Aws::String m_treeId;

    Aws::Vector<Folder> m_subFolders;

    Aws::Vector<File> m_files;

    Aws::Vector<SymbolicLink> m_symbolicLinks;

    Aws::Vector<SubModule> m_subModules;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
