/**
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
    AWS_CODECOMMIT_API GetFolderResult() = default;
    AWS_CODECOMMIT_API GetFolderResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODECOMMIT_API GetFolderResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The full commit ID used as a reference for the returned version of the folder
     * content.</p>
     */
    inline const Aws::String& GetCommitId() const { return m_commitId; }
    template<typename CommitIdT = Aws::String>
    void SetCommitId(CommitIdT&& value) { m_commitIdHasBeenSet = true; m_commitId = std::forward<CommitIdT>(value); }
    template<typename CommitIdT = Aws::String>
    GetFolderResult& WithCommitId(CommitIdT&& value) { SetCommitId(std::forward<CommitIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The fully qualified path of the folder whose contents are returned.</p>
     */
    inline const Aws::String& GetFolderPath() const { return m_folderPath; }
    template<typename FolderPathT = Aws::String>
    void SetFolderPath(FolderPathT&& value) { m_folderPathHasBeenSet = true; m_folderPath = std::forward<FolderPathT>(value); }
    template<typename FolderPathT = Aws::String>
    GetFolderResult& WithFolderPath(FolderPathT&& value) { SetFolderPath(std::forward<FolderPathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The full SHA-1 pointer of the tree information for the commit that contains
     * the folder.</p>
     */
    inline const Aws::String& GetTreeId() const { return m_treeId; }
    template<typename TreeIdT = Aws::String>
    void SetTreeId(TreeIdT&& value) { m_treeIdHasBeenSet = true; m_treeId = std::forward<TreeIdT>(value); }
    template<typename TreeIdT = Aws::String>
    GetFolderResult& WithTreeId(TreeIdT&& value) { SetTreeId(std::forward<TreeIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of folders that exist under the specified folder, if any.</p>
     */
    inline const Aws::Vector<Folder>& GetSubFolders() const { return m_subFolders; }
    template<typename SubFoldersT = Aws::Vector<Folder>>
    void SetSubFolders(SubFoldersT&& value) { m_subFoldersHasBeenSet = true; m_subFolders = std::forward<SubFoldersT>(value); }
    template<typename SubFoldersT = Aws::Vector<Folder>>
    GetFolderResult& WithSubFolders(SubFoldersT&& value) { SetSubFolders(std::forward<SubFoldersT>(value)); return *this;}
    template<typename SubFoldersT = Folder>
    GetFolderResult& AddSubFolders(SubFoldersT&& value) { m_subFoldersHasBeenSet = true; m_subFolders.emplace_back(std::forward<SubFoldersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of files in the specified folder, if any.</p>
     */
    inline const Aws::Vector<File>& GetFiles() const { return m_files; }
    template<typename FilesT = Aws::Vector<File>>
    void SetFiles(FilesT&& value) { m_filesHasBeenSet = true; m_files = std::forward<FilesT>(value); }
    template<typename FilesT = Aws::Vector<File>>
    GetFolderResult& WithFiles(FilesT&& value) { SetFiles(std::forward<FilesT>(value)); return *this;}
    template<typename FilesT = File>
    GetFolderResult& AddFiles(FilesT&& value) { m_filesHasBeenSet = true; m_files.emplace_back(std::forward<FilesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of symbolic links to other files and folders in the specified
     * folder, if any.</p>
     */
    inline const Aws::Vector<SymbolicLink>& GetSymbolicLinks() const { return m_symbolicLinks; }
    template<typename SymbolicLinksT = Aws::Vector<SymbolicLink>>
    void SetSymbolicLinks(SymbolicLinksT&& value) { m_symbolicLinksHasBeenSet = true; m_symbolicLinks = std::forward<SymbolicLinksT>(value); }
    template<typename SymbolicLinksT = Aws::Vector<SymbolicLink>>
    GetFolderResult& WithSymbolicLinks(SymbolicLinksT&& value) { SetSymbolicLinks(std::forward<SymbolicLinksT>(value)); return *this;}
    template<typename SymbolicLinksT = SymbolicLink>
    GetFolderResult& AddSymbolicLinks(SymbolicLinksT&& value) { m_symbolicLinksHasBeenSet = true; m_symbolicLinks.emplace_back(std::forward<SymbolicLinksT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of submodules in the specified folder, if any.</p>
     */
    inline const Aws::Vector<SubModule>& GetSubModules() const { return m_subModules; }
    template<typename SubModulesT = Aws::Vector<SubModule>>
    void SetSubModules(SubModulesT&& value) { m_subModulesHasBeenSet = true; m_subModules = std::forward<SubModulesT>(value); }
    template<typename SubModulesT = Aws::Vector<SubModule>>
    GetFolderResult& WithSubModules(SubModulesT&& value) { SetSubModules(std::forward<SubModulesT>(value)); return *this;}
    template<typename SubModulesT = SubModule>
    GetFolderResult& AddSubModules(SubModulesT&& value) { m_subModulesHasBeenSet = true; m_subModules.emplace_back(std::forward<SubModulesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetFolderResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_commitId;
    bool m_commitIdHasBeenSet = false;

    Aws::String m_folderPath;
    bool m_folderPathHasBeenSet = false;

    Aws::String m_treeId;
    bool m_treeIdHasBeenSet = false;

    Aws::Vector<Folder> m_subFolders;
    bool m_subFoldersHasBeenSet = false;

    Aws::Vector<File> m_files;
    bool m_filesHasBeenSet = false;

    Aws::Vector<SymbolicLink> m_symbolicLinks;
    bool m_symbolicLinksHasBeenSet = false;

    Aws::Vector<SubModule> m_subModules;
    bool m_subModulesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
