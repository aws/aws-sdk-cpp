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
    AWS_CODECOMMIT_API CreateCommitRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateCommit"; }

    AWS_CODECOMMIT_API Aws::String SerializePayload() const override;

    AWS_CODECOMMIT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the repository where you create the commit.</p>
     */
    inline const Aws::String& GetRepositoryName() const{ return m_repositoryName; }

    /**
     * <p>The name of the repository where you create the commit.</p>
     */
    inline bool RepositoryNameHasBeenSet() const { return m_repositoryNameHasBeenSet; }

    /**
     * <p>The name of the repository where you create the commit.</p>
     */
    inline void SetRepositoryName(const Aws::String& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = value; }

    /**
     * <p>The name of the repository where you create the commit.</p>
     */
    inline void SetRepositoryName(Aws::String&& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = std::move(value); }

    /**
     * <p>The name of the repository where you create the commit.</p>
     */
    inline void SetRepositoryName(const char* value) { m_repositoryNameHasBeenSet = true; m_repositoryName.assign(value); }

    /**
     * <p>The name of the repository where you create the commit.</p>
     */
    inline CreateCommitRequest& WithRepositoryName(const Aws::String& value) { SetRepositoryName(value); return *this;}

    /**
     * <p>The name of the repository where you create the commit.</p>
     */
    inline CreateCommitRequest& WithRepositoryName(Aws::String&& value) { SetRepositoryName(std::move(value)); return *this;}

    /**
     * <p>The name of the repository where you create the commit.</p>
     */
    inline CreateCommitRequest& WithRepositoryName(const char* value) { SetRepositoryName(value); return *this;}


    /**
     * <p>The name of the branch where you create the commit.</p>
     */
    inline const Aws::String& GetBranchName() const{ return m_branchName; }

    /**
     * <p>The name of the branch where you create the commit.</p>
     */
    inline bool BranchNameHasBeenSet() const { return m_branchNameHasBeenSet; }

    /**
     * <p>The name of the branch where you create the commit.</p>
     */
    inline void SetBranchName(const Aws::String& value) { m_branchNameHasBeenSet = true; m_branchName = value; }

    /**
     * <p>The name of the branch where you create the commit.</p>
     */
    inline void SetBranchName(Aws::String&& value) { m_branchNameHasBeenSet = true; m_branchName = std::move(value); }

    /**
     * <p>The name of the branch where you create the commit.</p>
     */
    inline void SetBranchName(const char* value) { m_branchNameHasBeenSet = true; m_branchName.assign(value); }

    /**
     * <p>The name of the branch where you create the commit.</p>
     */
    inline CreateCommitRequest& WithBranchName(const Aws::String& value) { SetBranchName(value); return *this;}

    /**
     * <p>The name of the branch where you create the commit.</p>
     */
    inline CreateCommitRequest& WithBranchName(Aws::String&& value) { SetBranchName(std::move(value)); return *this;}

    /**
     * <p>The name of the branch where you create the commit.</p>
     */
    inline CreateCommitRequest& WithBranchName(const char* value) { SetBranchName(value); return *this;}


    /**
     * <p>The ID of the commit that is the parent of the commit you create. Not
     * required if this is an empty repository.</p>
     */
    inline const Aws::String& GetParentCommitId() const{ return m_parentCommitId; }

    /**
     * <p>The ID of the commit that is the parent of the commit you create. Not
     * required if this is an empty repository.</p>
     */
    inline bool ParentCommitIdHasBeenSet() const { return m_parentCommitIdHasBeenSet; }

    /**
     * <p>The ID of the commit that is the parent of the commit you create. Not
     * required if this is an empty repository.</p>
     */
    inline void SetParentCommitId(const Aws::String& value) { m_parentCommitIdHasBeenSet = true; m_parentCommitId = value; }

    /**
     * <p>The ID of the commit that is the parent of the commit you create. Not
     * required if this is an empty repository.</p>
     */
    inline void SetParentCommitId(Aws::String&& value) { m_parentCommitIdHasBeenSet = true; m_parentCommitId = std::move(value); }

    /**
     * <p>The ID of the commit that is the parent of the commit you create. Not
     * required if this is an empty repository.</p>
     */
    inline void SetParentCommitId(const char* value) { m_parentCommitIdHasBeenSet = true; m_parentCommitId.assign(value); }

    /**
     * <p>The ID of the commit that is the parent of the commit you create. Not
     * required if this is an empty repository.</p>
     */
    inline CreateCommitRequest& WithParentCommitId(const Aws::String& value) { SetParentCommitId(value); return *this;}

    /**
     * <p>The ID of the commit that is the parent of the commit you create. Not
     * required if this is an empty repository.</p>
     */
    inline CreateCommitRequest& WithParentCommitId(Aws::String&& value) { SetParentCommitId(std::move(value)); return *this;}

    /**
     * <p>The ID of the commit that is the parent of the commit you create. Not
     * required if this is an empty repository.</p>
     */
    inline CreateCommitRequest& WithParentCommitId(const char* value) { SetParentCommitId(value); return *this;}


    /**
     * <p>The name of the author who created the commit. This information is used as
     * both the author and committer for the commit.</p>
     */
    inline const Aws::String& GetAuthorName() const{ return m_authorName; }

    /**
     * <p>The name of the author who created the commit. This information is used as
     * both the author and committer for the commit.</p>
     */
    inline bool AuthorNameHasBeenSet() const { return m_authorNameHasBeenSet; }

    /**
     * <p>The name of the author who created the commit. This information is used as
     * both the author and committer for the commit.</p>
     */
    inline void SetAuthorName(const Aws::String& value) { m_authorNameHasBeenSet = true; m_authorName = value; }

    /**
     * <p>The name of the author who created the commit. This information is used as
     * both the author and committer for the commit.</p>
     */
    inline void SetAuthorName(Aws::String&& value) { m_authorNameHasBeenSet = true; m_authorName = std::move(value); }

    /**
     * <p>The name of the author who created the commit. This information is used as
     * both the author and committer for the commit.</p>
     */
    inline void SetAuthorName(const char* value) { m_authorNameHasBeenSet = true; m_authorName.assign(value); }

    /**
     * <p>The name of the author who created the commit. This information is used as
     * both the author and committer for the commit.</p>
     */
    inline CreateCommitRequest& WithAuthorName(const Aws::String& value) { SetAuthorName(value); return *this;}

    /**
     * <p>The name of the author who created the commit. This information is used as
     * both the author and committer for the commit.</p>
     */
    inline CreateCommitRequest& WithAuthorName(Aws::String&& value) { SetAuthorName(std::move(value)); return *this;}

    /**
     * <p>The name of the author who created the commit. This information is used as
     * both the author and committer for the commit.</p>
     */
    inline CreateCommitRequest& WithAuthorName(const char* value) { SetAuthorName(value); return *this;}


    /**
     * <p>The email address of the person who created the commit.</p>
     */
    inline const Aws::String& GetEmail() const{ return m_email; }

    /**
     * <p>The email address of the person who created the commit.</p>
     */
    inline bool EmailHasBeenSet() const { return m_emailHasBeenSet; }

    /**
     * <p>The email address of the person who created the commit.</p>
     */
    inline void SetEmail(const Aws::String& value) { m_emailHasBeenSet = true; m_email = value; }

    /**
     * <p>The email address of the person who created the commit.</p>
     */
    inline void SetEmail(Aws::String&& value) { m_emailHasBeenSet = true; m_email = std::move(value); }

    /**
     * <p>The email address of the person who created the commit.</p>
     */
    inline void SetEmail(const char* value) { m_emailHasBeenSet = true; m_email.assign(value); }

    /**
     * <p>The email address of the person who created the commit.</p>
     */
    inline CreateCommitRequest& WithEmail(const Aws::String& value) { SetEmail(value); return *this;}

    /**
     * <p>The email address of the person who created the commit.</p>
     */
    inline CreateCommitRequest& WithEmail(Aws::String&& value) { SetEmail(std::move(value)); return *this;}

    /**
     * <p>The email address of the person who created the commit.</p>
     */
    inline CreateCommitRequest& WithEmail(const char* value) { SetEmail(value); return *this;}


    /**
     * <p>The commit message you want to include in the commit. Commit messages are
     * limited to 256 KB. If no message is specified, a default message is used.</p>
     */
    inline const Aws::String& GetCommitMessage() const{ return m_commitMessage; }

    /**
     * <p>The commit message you want to include in the commit. Commit messages are
     * limited to 256 KB. If no message is specified, a default message is used.</p>
     */
    inline bool CommitMessageHasBeenSet() const { return m_commitMessageHasBeenSet; }

    /**
     * <p>The commit message you want to include in the commit. Commit messages are
     * limited to 256 KB. If no message is specified, a default message is used.</p>
     */
    inline void SetCommitMessage(const Aws::String& value) { m_commitMessageHasBeenSet = true; m_commitMessage = value; }

    /**
     * <p>The commit message you want to include in the commit. Commit messages are
     * limited to 256 KB. If no message is specified, a default message is used.</p>
     */
    inline void SetCommitMessage(Aws::String&& value) { m_commitMessageHasBeenSet = true; m_commitMessage = std::move(value); }

    /**
     * <p>The commit message you want to include in the commit. Commit messages are
     * limited to 256 KB. If no message is specified, a default message is used.</p>
     */
    inline void SetCommitMessage(const char* value) { m_commitMessageHasBeenSet = true; m_commitMessage.assign(value); }

    /**
     * <p>The commit message you want to include in the commit. Commit messages are
     * limited to 256 KB. If no message is specified, a default message is used.</p>
     */
    inline CreateCommitRequest& WithCommitMessage(const Aws::String& value) { SetCommitMessage(value); return *this;}

    /**
     * <p>The commit message you want to include in the commit. Commit messages are
     * limited to 256 KB. If no message is specified, a default message is used.</p>
     */
    inline CreateCommitRequest& WithCommitMessage(Aws::String&& value) { SetCommitMessage(std::move(value)); return *this;}

    /**
     * <p>The commit message you want to include in the commit. Commit messages are
     * limited to 256 KB. If no message is specified, a default message is used.</p>
     */
    inline CreateCommitRequest& WithCommitMessage(const char* value) { SetCommitMessage(value); return *this;}


    /**
     * <p>If the commit contains deletions, whether to keep a folder or folder
     * structure if the changes leave the folders empty. If true, a ..gitkeep file is
     * created for empty folders. The default is false.</p>
     */
    inline bool GetKeepEmptyFolders() const{ return m_keepEmptyFolders; }

    /**
     * <p>If the commit contains deletions, whether to keep a folder or folder
     * structure if the changes leave the folders empty. If true, a ..gitkeep file is
     * created for empty folders. The default is false.</p>
     */
    inline bool KeepEmptyFoldersHasBeenSet() const { return m_keepEmptyFoldersHasBeenSet; }

    /**
     * <p>If the commit contains deletions, whether to keep a folder or folder
     * structure if the changes leave the folders empty. If true, a ..gitkeep file is
     * created for empty folders. The default is false.</p>
     */
    inline void SetKeepEmptyFolders(bool value) { m_keepEmptyFoldersHasBeenSet = true; m_keepEmptyFolders = value; }

    /**
     * <p>If the commit contains deletions, whether to keep a folder or folder
     * structure if the changes leave the folders empty. If true, a ..gitkeep file is
     * created for empty folders. The default is false.</p>
     */
    inline CreateCommitRequest& WithKeepEmptyFolders(bool value) { SetKeepEmptyFolders(value); return *this;}


    /**
     * <p>The files to add or update in this commit.</p>
     */
    inline const Aws::Vector<PutFileEntry>& GetPutFiles() const{ return m_putFiles; }

    /**
     * <p>The files to add or update in this commit.</p>
     */
    inline bool PutFilesHasBeenSet() const { return m_putFilesHasBeenSet; }

    /**
     * <p>The files to add or update in this commit.</p>
     */
    inline void SetPutFiles(const Aws::Vector<PutFileEntry>& value) { m_putFilesHasBeenSet = true; m_putFiles = value; }

    /**
     * <p>The files to add or update in this commit.</p>
     */
    inline void SetPutFiles(Aws::Vector<PutFileEntry>&& value) { m_putFilesHasBeenSet = true; m_putFiles = std::move(value); }

    /**
     * <p>The files to add or update in this commit.</p>
     */
    inline CreateCommitRequest& WithPutFiles(const Aws::Vector<PutFileEntry>& value) { SetPutFiles(value); return *this;}

    /**
     * <p>The files to add or update in this commit.</p>
     */
    inline CreateCommitRequest& WithPutFiles(Aws::Vector<PutFileEntry>&& value) { SetPutFiles(std::move(value)); return *this;}

    /**
     * <p>The files to add or update in this commit.</p>
     */
    inline CreateCommitRequest& AddPutFiles(const PutFileEntry& value) { m_putFilesHasBeenSet = true; m_putFiles.push_back(value); return *this; }

    /**
     * <p>The files to add or update in this commit.</p>
     */
    inline CreateCommitRequest& AddPutFiles(PutFileEntry&& value) { m_putFilesHasBeenSet = true; m_putFiles.push_back(std::move(value)); return *this; }


    /**
     * <p>The files to delete in this commit. These files still exist in earlier
     * commits.</p>
     */
    inline const Aws::Vector<DeleteFileEntry>& GetDeleteFiles() const{ return m_deleteFiles; }

    /**
     * <p>The files to delete in this commit. These files still exist in earlier
     * commits.</p>
     */
    inline bool DeleteFilesHasBeenSet() const { return m_deleteFilesHasBeenSet; }

    /**
     * <p>The files to delete in this commit. These files still exist in earlier
     * commits.</p>
     */
    inline void SetDeleteFiles(const Aws::Vector<DeleteFileEntry>& value) { m_deleteFilesHasBeenSet = true; m_deleteFiles = value; }

    /**
     * <p>The files to delete in this commit. These files still exist in earlier
     * commits.</p>
     */
    inline void SetDeleteFiles(Aws::Vector<DeleteFileEntry>&& value) { m_deleteFilesHasBeenSet = true; m_deleteFiles = std::move(value); }

    /**
     * <p>The files to delete in this commit. These files still exist in earlier
     * commits.</p>
     */
    inline CreateCommitRequest& WithDeleteFiles(const Aws::Vector<DeleteFileEntry>& value) { SetDeleteFiles(value); return *this;}

    /**
     * <p>The files to delete in this commit. These files still exist in earlier
     * commits.</p>
     */
    inline CreateCommitRequest& WithDeleteFiles(Aws::Vector<DeleteFileEntry>&& value) { SetDeleteFiles(std::move(value)); return *this;}

    /**
     * <p>The files to delete in this commit. These files still exist in earlier
     * commits.</p>
     */
    inline CreateCommitRequest& AddDeleteFiles(const DeleteFileEntry& value) { m_deleteFilesHasBeenSet = true; m_deleteFiles.push_back(value); return *this; }

    /**
     * <p>The files to delete in this commit. These files still exist in earlier
     * commits.</p>
     */
    inline CreateCommitRequest& AddDeleteFiles(DeleteFileEntry&& value) { m_deleteFilesHasBeenSet = true; m_deleteFiles.push_back(std::move(value)); return *this; }


    /**
     * <p>The file modes to update for files in this commit.</p>
     */
    inline const Aws::Vector<SetFileModeEntry>& GetSetFileModes() const{ return m_setFileModes; }

    /**
     * <p>The file modes to update for files in this commit.</p>
     */
    inline bool SetFileModesHasBeenSet() const { return m_setFileModesHasBeenSet; }

    /**
     * <p>The file modes to update for files in this commit.</p>
     */
    inline void SetSetFileModes(const Aws::Vector<SetFileModeEntry>& value) { m_setFileModesHasBeenSet = true; m_setFileModes = value; }

    /**
     * <p>The file modes to update for files in this commit.</p>
     */
    inline void SetSetFileModes(Aws::Vector<SetFileModeEntry>&& value) { m_setFileModesHasBeenSet = true; m_setFileModes = std::move(value); }

    /**
     * <p>The file modes to update for files in this commit.</p>
     */
    inline CreateCommitRequest& WithSetFileModes(const Aws::Vector<SetFileModeEntry>& value) { SetSetFileModes(value); return *this;}

    /**
     * <p>The file modes to update for files in this commit.</p>
     */
    inline CreateCommitRequest& WithSetFileModes(Aws::Vector<SetFileModeEntry>&& value) { SetSetFileModes(std::move(value)); return *this;}

    /**
     * <p>The file modes to update for files in this commit.</p>
     */
    inline CreateCommitRequest& AddSetFileModes(const SetFileModeEntry& value) { m_setFileModesHasBeenSet = true; m_setFileModes.push_back(value); return *this; }

    /**
     * <p>The file modes to update for files in this commit.</p>
     */
    inline CreateCommitRequest& AddSetFileModes(SetFileModeEntry&& value) { m_setFileModesHasBeenSet = true; m_setFileModes.push_back(std::move(value)); return *this; }

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

    bool m_keepEmptyFolders;
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
