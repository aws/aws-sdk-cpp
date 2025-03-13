/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecommit/CodeCommit_EXPORTS.h>
#include <aws/codecommit/CodeCommitRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CodeCommit
{
namespace Model
{

  /**
   */
  class DeleteFileRequest : public CodeCommitRequest
  {
  public:
    AWS_CODECOMMIT_API DeleteFileRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteFile"; }

    AWS_CODECOMMIT_API Aws::String SerializePayload() const override;

    AWS_CODECOMMIT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the repository that contains the file to delete.</p>
     */
    inline const Aws::String& GetRepositoryName() const { return m_repositoryName; }
    inline bool RepositoryNameHasBeenSet() const { return m_repositoryNameHasBeenSet; }
    template<typename RepositoryNameT = Aws::String>
    void SetRepositoryName(RepositoryNameT&& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = std::forward<RepositoryNameT>(value); }
    template<typename RepositoryNameT = Aws::String>
    DeleteFileRequest& WithRepositoryName(RepositoryNameT&& value) { SetRepositoryName(std::forward<RepositoryNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the branch where the commit that deletes the file is made.</p>
     */
    inline const Aws::String& GetBranchName() const { return m_branchName; }
    inline bool BranchNameHasBeenSet() const { return m_branchNameHasBeenSet; }
    template<typename BranchNameT = Aws::String>
    void SetBranchName(BranchNameT&& value) { m_branchNameHasBeenSet = true; m_branchName = std::forward<BranchNameT>(value); }
    template<typename BranchNameT = Aws::String>
    DeleteFileRequest& WithBranchName(BranchNameT&& value) { SetBranchName(std::forward<BranchNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The fully qualified path to the file that to be deleted, including the full
     * name and extension of that file. For example, /examples/file.md is a fully
     * qualified path to a file named file.md in a folder named examples.</p>
     */
    inline const Aws::String& GetFilePath() const { return m_filePath; }
    inline bool FilePathHasBeenSet() const { return m_filePathHasBeenSet; }
    template<typename FilePathT = Aws::String>
    void SetFilePath(FilePathT&& value) { m_filePathHasBeenSet = true; m_filePath = std::forward<FilePathT>(value); }
    template<typename FilePathT = Aws::String>
    DeleteFileRequest& WithFilePath(FilePathT&& value) { SetFilePath(std::forward<FilePathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the commit that is the tip of the branch where you want to create
     * the commit that deletes the file. This must be the HEAD commit for the branch.
     * The commit that deletes the file is created from this commit ID.</p>
     */
    inline const Aws::String& GetParentCommitId() const { return m_parentCommitId; }
    inline bool ParentCommitIdHasBeenSet() const { return m_parentCommitIdHasBeenSet; }
    template<typename ParentCommitIdT = Aws::String>
    void SetParentCommitId(ParentCommitIdT&& value) { m_parentCommitIdHasBeenSet = true; m_parentCommitId = std::forward<ParentCommitIdT>(value); }
    template<typename ParentCommitIdT = Aws::String>
    DeleteFileRequest& WithParentCommitId(ParentCommitIdT&& value) { SetParentCommitId(std::forward<ParentCommitIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If a file is the only object in the folder or directory, specifies whether to
     * delete the folder or directory that contains the file. By default, empty folders
     * are deleted. This includes empty folders that are part of the directory
     * structure. For example, if the path to a file is dir1/dir2/dir3/dir4, and dir2
     * and dir3 are empty, deleting the last file in dir4 also deletes the empty
     * folders dir4, dir3, and dir2.</p>
     */
    inline bool GetKeepEmptyFolders() const { return m_keepEmptyFolders; }
    inline bool KeepEmptyFoldersHasBeenSet() const { return m_keepEmptyFoldersHasBeenSet; }
    inline void SetKeepEmptyFolders(bool value) { m_keepEmptyFoldersHasBeenSet = true; m_keepEmptyFolders = value; }
    inline DeleteFileRequest& WithKeepEmptyFolders(bool value) { SetKeepEmptyFolders(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The commit message you want to include as part of deleting the file. Commit
     * messages are limited to 256 KB. If no message is specified, a default message is
     * used.</p>
     */
    inline const Aws::String& GetCommitMessage() const { return m_commitMessage; }
    inline bool CommitMessageHasBeenSet() const { return m_commitMessageHasBeenSet; }
    template<typename CommitMessageT = Aws::String>
    void SetCommitMessage(CommitMessageT&& value) { m_commitMessageHasBeenSet = true; m_commitMessage = std::forward<CommitMessageT>(value); }
    template<typename CommitMessageT = Aws::String>
    DeleteFileRequest& WithCommitMessage(CommitMessageT&& value) { SetCommitMessage(std::forward<CommitMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the author of the commit that deletes the file. If no name is
     * specified, the user's ARN is used as the author name and committer name.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    DeleteFileRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The email address for the commit that deletes the file. If no email address
     * is specified, the email address is left blank.</p>
     */
    inline const Aws::String& GetEmail() const { return m_email; }
    inline bool EmailHasBeenSet() const { return m_emailHasBeenSet; }
    template<typename EmailT = Aws::String>
    void SetEmail(EmailT&& value) { m_emailHasBeenSet = true; m_email = std::forward<EmailT>(value); }
    template<typename EmailT = Aws::String>
    DeleteFileRequest& WithEmail(EmailT&& value) { SetEmail(std::forward<EmailT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_repositoryName;
    bool m_repositoryNameHasBeenSet = false;

    Aws::String m_branchName;
    bool m_branchNameHasBeenSet = false;

    Aws::String m_filePath;
    bool m_filePathHasBeenSet = false;

    Aws::String m_parentCommitId;
    bool m_parentCommitIdHasBeenSet = false;

    bool m_keepEmptyFolders{false};
    bool m_keepEmptyFoldersHasBeenSet = false;

    Aws::String m_commitMessage;
    bool m_commitMessageHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_email;
    bool m_emailHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
