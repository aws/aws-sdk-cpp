﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class GetFolderResult
  {
  public:
    AWS_CODECOMMIT_API GetFolderResult();
    AWS_CODECOMMIT_API GetFolderResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODECOMMIT_API GetFolderResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The full commit ID used as a reference for the returned version of the folder
     * content.</p>
     */
    inline const Aws::String& GetCommitId() const{ return m_commitId; }
    inline void SetCommitId(const Aws::String& value) { m_commitId = value; }
    inline void SetCommitId(Aws::String&& value) { m_commitId = std::move(value); }
    inline void SetCommitId(const char* value) { m_commitId.assign(value); }
    inline GetFolderResult& WithCommitId(const Aws::String& value) { SetCommitId(value); return *this;}
    inline GetFolderResult& WithCommitId(Aws::String&& value) { SetCommitId(std::move(value)); return *this;}
    inline GetFolderResult& WithCommitId(const char* value) { SetCommitId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The fully qualified path of the folder whose contents are returned.</p>
     */
    inline const Aws::String& GetFolderPath() const{ return m_folderPath; }
    inline void SetFolderPath(const Aws::String& value) { m_folderPath = value; }
    inline void SetFolderPath(Aws::String&& value) { m_folderPath = std::move(value); }
    inline void SetFolderPath(const char* value) { m_folderPath.assign(value); }
    inline GetFolderResult& WithFolderPath(const Aws::String& value) { SetFolderPath(value); return *this;}
    inline GetFolderResult& WithFolderPath(Aws::String&& value) { SetFolderPath(std::move(value)); return *this;}
    inline GetFolderResult& WithFolderPath(const char* value) { SetFolderPath(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The full SHA-1 pointer of the tree information for the commit that contains
     * the folder.</p>
     */
    inline const Aws::String& GetTreeId() const{ return m_treeId; }
    inline void SetTreeId(const Aws::String& value) { m_treeId = value; }
    inline void SetTreeId(Aws::String&& value) { m_treeId = std::move(value); }
    inline void SetTreeId(const char* value) { m_treeId.assign(value); }
    inline GetFolderResult& WithTreeId(const Aws::String& value) { SetTreeId(value); return *this;}
    inline GetFolderResult& WithTreeId(Aws::String&& value) { SetTreeId(std::move(value)); return *this;}
    inline GetFolderResult& WithTreeId(const char* value) { SetTreeId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of folders that exist under the specified folder, if any.</p>
     */
    inline const Aws::Vector<Folder>& GetSubFolders() const{ return m_subFolders; }
    inline void SetSubFolders(const Aws::Vector<Folder>& value) { m_subFolders = value; }
    inline void SetSubFolders(Aws::Vector<Folder>&& value) { m_subFolders = std::move(value); }
    inline GetFolderResult& WithSubFolders(const Aws::Vector<Folder>& value) { SetSubFolders(value); return *this;}
    inline GetFolderResult& WithSubFolders(Aws::Vector<Folder>&& value) { SetSubFolders(std::move(value)); return *this;}
    inline GetFolderResult& AddSubFolders(const Folder& value) { m_subFolders.push_back(value); return *this; }
    inline GetFolderResult& AddSubFolders(Folder&& value) { m_subFolders.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of files in the specified folder, if any.</p>
     */
    inline const Aws::Vector<File>& GetFiles() const{ return m_files; }
    inline void SetFiles(const Aws::Vector<File>& value) { m_files = value; }
    inline void SetFiles(Aws::Vector<File>&& value) { m_files = std::move(value); }
    inline GetFolderResult& WithFiles(const Aws::Vector<File>& value) { SetFiles(value); return *this;}
    inline GetFolderResult& WithFiles(Aws::Vector<File>&& value) { SetFiles(std::move(value)); return *this;}
    inline GetFolderResult& AddFiles(const File& value) { m_files.push_back(value); return *this; }
    inline GetFolderResult& AddFiles(File&& value) { m_files.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of symbolic links to other files and folders in the specified
     * folder, if any.</p>
     */
    inline const Aws::Vector<SymbolicLink>& GetSymbolicLinks() const{ return m_symbolicLinks; }
    inline void SetSymbolicLinks(const Aws::Vector<SymbolicLink>& value) { m_symbolicLinks = value; }
    inline void SetSymbolicLinks(Aws::Vector<SymbolicLink>&& value) { m_symbolicLinks = std::move(value); }
    inline GetFolderResult& WithSymbolicLinks(const Aws::Vector<SymbolicLink>& value) { SetSymbolicLinks(value); return *this;}
    inline GetFolderResult& WithSymbolicLinks(Aws::Vector<SymbolicLink>&& value) { SetSymbolicLinks(std::move(value)); return *this;}
    inline GetFolderResult& AddSymbolicLinks(const SymbolicLink& value) { m_symbolicLinks.push_back(value); return *this; }
    inline GetFolderResult& AddSymbolicLinks(SymbolicLink&& value) { m_symbolicLinks.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of submodules in the specified folder, if any.</p>
     */
    inline const Aws::Vector<SubModule>& GetSubModules() const{ return m_subModules; }
    inline void SetSubModules(const Aws::Vector<SubModule>& value) { m_subModules = value; }
    inline void SetSubModules(Aws::Vector<SubModule>&& value) { m_subModules = std::move(value); }
    inline GetFolderResult& WithSubModules(const Aws::Vector<SubModule>& value) { SetSubModules(value); return *this;}
    inline GetFolderResult& WithSubModules(Aws::Vector<SubModule>&& value) { SetSubModules(std::move(value)); return *this;}
    inline GetFolderResult& AddSubModules(const SubModule& value) { m_subModules.push_back(value); return *this; }
    inline GetFolderResult& AddSubModules(SubModule&& value) { m_subModules.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetFolderResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetFolderResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetFolderResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_commitId;

    Aws::String m_folderPath;

    Aws::String m_treeId;

    Aws::Vector<Folder> m_subFolders;

    Aws::Vector<File> m_files;

    Aws::Vector<SymbolicLink> m_symbolicLinks;

    Aws::Vector<SubModule> m_subModules;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
