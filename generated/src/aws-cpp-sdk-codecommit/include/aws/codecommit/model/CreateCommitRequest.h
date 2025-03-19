/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecommit/CodeCommit_EXPORTS.h>
#include <aws/codecommit/CodeCommitRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codecommit/model/PutFileEntry.h>
#include <aws/codecommit/model/DeleteFileEntry.h>
#include <aws/codecommit/model/SetFileModeEntry.h>
#include <utility>

namespace Aws
{
namespace CodeCommit
{
namespace Model
{

  /**
   */
  class CreateCommitRequest : public CodeCommitRequest
  {
  public:
    AWS_CODECOMMIT_API CreateCommitRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateCommit"; }

    AWS_CODECOMMIT_API Aws::String SerializePayload() const override;

    AWS_CODECOMMIT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the repository where you create the commit.</p>
     */
    inline const Aws::String& GetRepositoryName() const { return m_repositoryName; }
    inline bool RepositoryNameHasBeenSet() const { return m_repositoryNameHasBeenSet; }
    template<typename RepositoryNameT = Aws::String>
    void SetRepositoryName(RepositoryNameT&& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = std::forward<RepositoryNameT>(value); }
    template<typename RepositoryNameT = Aws::String>
    CreateCommitRequest& WithRepositoryName(RepositoryNameT&& value) { SetRepositoryName(std::forward<RepositoryNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the branch where you create the commit.</p>
     */
    inline const Aws::String& GetBranchName() const { return m_branchName; }
    inline bool BranchNameHasBeenSet() const { return m_branchNameHasBeenSet; }
    template<typename BranchNameT = Aws::String>
    void SetBranchName(BranchNameT&& value) { m_branchNameHasBeenSet = true; m_branchName = std::forward<BranchNameT>(value); }
    template<typename BranchNameT = Aws::String>
    CreateCommitRequest& WithBranchName(BranchNameT&& value) { SetBranchName(std::forward<BranchNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the commit that is the parent of the commit you create. Not
     * required if this is an empty repository.</p>
     */
    inline const Aws::String& GetParentCommitId() const { return m_parentCommitId; }
    inline bool ParentCommitIdHasBeenSet() const { return m_parentCommitIdHasBeenSet; }
    template<typename ParentCommitIdT = Aws::String>
    void SetParentCommitId(ParentCommitIdT&& value) { m_parentCommitIdHasBeenSet = true; m_parentCommitId = std::forward<ParentCommitIdT>(value); }
    template<typename ParentCommitIdT = Aws::String>
    CreateCommitRequest& WithParentCommitId(ParentCommitIdT&& value) { SetParentCommitId(std::forward<ParentCommitIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the author who created the commit. This information is used as
     * both the author and committer for the commit.</p>
     */
    inline const Aws::String& GetAuthorName() const { return m_authorName; }
    inline bool AuthorNameHasBeenSet() const { return m_authorNameHasBeenSet; }
    template<typename AuthorNameT = Aws::String>
    void SetAuthorName(AuthorNameT&& value) { m_authorNameHasBeenSet = true; m_authorName = std::forward<AuthorNameT>(value); }
    template<typename AuthorNameT = Aws::String>
    CreateCommitRequest& WithAuthorName(AuthorNameT&& value) { SetAuthorName(std::forward<AuthorNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The email address of the person who created the commit.</p>
     */
    inline const Aws::String& GetEmail() const { return m_email; }
    inline bool EmailHasBeenSet() const { return m_emailHasBeenSet; }
    template<typename EmailT = Aws::String>
    void SetEmail(EmailT&& value) { m_emailHasBeenSet = true; m_email = std::forward<EmailT>(value); }
    template<typename EmailT = Aws::String>
    CreateCommitRequest& WithEmail(EmailT&& value) { SetEmail(std::forward<EmailT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The commit message you want to include in the commit. Commit messages are
     * limited to 256 KB. If no message is specified, a default message is used.</p>
     */
    inline const Aws::String& GetCommitMessage() const { return m_commitMessage; }
    inline bool CommitMessageHasBeenSet() const { return m_commitMessageHasBeenSet; }
    template<typename CommitMessageT = Aws::String>
    void SetCommitMessage(CommitMessageT&& value) { m_commitMessageHasBeenSet = true; m_commitMessage = std::forward<CommitMessageT>(value); }
    template<typename CommitMessageT = Aws::String>
    CreateCommitRequest& WithCommitMessage(CommitMessageT&& value) { SetCommitMessage(std::forward<CommitMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the commit contains deletions, whether to keep a folder or folder
     * structure if the changes leave the folders empty. If true, a ..gitkeep file is
     * created for empty folders. The default is false.</p>
     */
    inline bool GetKeepEmptyFolders() const { return m_keepEmptyFolders; }
    inline bool KeepEmptyFoldersHasBeenSet() const { return m_keepEmptyFoldersHasBeenSet; }
    inline void SetKeepEmptyFolders(bool value) { m_keepEmptyFoldersHasBeenSet = true; m_keepEmptyFolders = value; }
    inline CreateCommitRequest& WithKeepEmptyFolders(bool value) { SetKeepEmptyFolders(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The files to add or update in this commit.</p>
     */
    inline const Aws::Vector<PutFileEntry>& GetPutFiles() const { return m_putFiles; }
    inline bool PutFilesHasBeenSet() const { return m_putFilesHasBeenSet; }
    template<typename PutFilesT = Aws::Vector<PutFileEntry>>
    void SetPutFiles(PutFilesT&& value) { m_putFilesHasBeenSet = true; m_putFiles = std::forward<PutFilesT>(value); }
    template<typename PutFilesT = Aws::Vector<PutFileEntry>>
    CreateCommitRequest& WithPutFiles(PutFilesT&& value) { SetPutFiles(std::forward<PutFilesT>(value)); return *this;}
    template<typename PutFilesT = PutFileEntry>
    CreateCommitRequest& AddPutFiles(PutFilesT&& value) { m_putFilesHasBeenSet = true; m_putFiles.emplace_back(std::forward<PutFilesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The files to delete in this commit. These files still exist in earlier
     * commits.</p>
     */
    inline const Aws::Vector<DeleteFileEntry>& GetDeleteFiles() const { return m_deleteFiles; }
    inline bool DeleteFilesHasBeenSet() const { return m_deleteFilesHasBeenSet; }
    template<typename DeleteFilesT = Aws::Vector<DeleteFileEntry>>
    void SetDeleteFiles(DeleteFilesT&& value) { m_deleteFilesHasBeenSet = true; m_deleteFiles = std::forward<DeleteFilesT>(value); }
    template<typename DeleteFilesT = Aws::Vector<DeleteFileEntry>>
    CreateCommitRequest& WithDeleteFiles(DeleteFilesT&& value) { SetDeleteFiles(std::forward<DeleteFilesT>(value)); return *this;}
    template<typename DeleteFilesT = DeleteFileEntry>
    CreateCommitRequest& AddDeleteFiles(DeleteFilesT&& value) { m_deleteFilesHasBeenSet = true; m_deleteFiles.emplace_back(std::forward<DeleteFilesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The file modes to update for files in this commit.</p>
     */
    inline const Aws::Vector<SetFileModeEntry>& GetSetFileModes() const { return m_setFileModes; }
    inline bool SetFileModesHasBeenSet() const { return m_setFileModesHasBeenSet; }
    template<typename SetFileModesT = Aws::Vector<SetFileModeEntry>>
    void SetSetFileModes(SetFileModesT&& value) { m_setFileModesHasBeenSet = true; m_setFileModes = std::forward<SetFileModesT>(value); }
    template<typename SetFileModesT = Aws::Vector<SetFileModeEntry>>
    CreateCommitRequest& WithSetFileModes(SetFileModesT&& value) { SetSetFileModes(std::forward<SetFileModesT>(value)); return *this;}
    template<typename SetFileModesT = SetFileModeEntry>
    CreateCommitRequest& AddSetFileModes(SetFileModesT&& value) { m_setFileModesHasBeenSet = true; m_setFileModes.emplace_back(std::forward<SetFileModesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_repositoryName;
    bool m_repositoryNameHasBeenSet = false;

    Aws::String m_branchName;
    bool m_branchNameHasBeenSet = false;

    Aws::String m_parentCommitId;
    bool m_parentCommitIdHasBeenSet = false;

    Aws::String m_authorName;
    bool m_authorNameHasBeenSet = false;

    Aws::String m_email;
    bool m_emailHasBeenSet = false;

    Aws::String m_commitMessage;
    bool m_commitMessageHasBeenSet = false;

    bool m_keepEmptyFolders{false};
    bool m_keepEmptyFoldersHasBeenSet = false;

    Aws::Vector<PutFileEntry> m_putFiles;
    bool m_putFilesHasBeenSet = false;

    Aws::Vector<DeleteFileEntry> m_deleteFiles;
    bool m_deleteFilesHasBeenSet = false;

    Aws::Vector<SetFileModeEntry> m_setFileModes;
    bool m_setFileModesHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
