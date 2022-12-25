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
    AWS_CODECOMMIT_API DeleteFileRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteFile"; }

    AWS_CODECOMMIT_API Aws::String SerializePayload() const override;

    AWS_CODECOMMIT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the repository that contains the file to delete.</p>
     */
    inline const Aws::String& GetRepositoryName() const{ return m_repositoryName; }

    /**
     * <p>The name of the repository that contains the file to delete.</p>
     */
    inline bool RepositoryNameHasBeenSet() const { return m_repositoryNameHasBeenSet; }

    /**
     * <p>The name of the repository that contains the file to delete.</p>
     */
    inline void SetRepositoryName(const Aws::String& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = value; }

    /**
     * <p>The name of the repository that contains the file to delete.</p>
     */
    inline void SetRepositoryName(Aws::String&& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = std::move(value); }

    /**
     * <p>The name of the repository that contains the file to delete.</p>
     */
    inline void SetRepositoryName(const char* value) { m_repositoryNameHasBeenSet = true; m_repositoryName.assign(value); }

    /**
     * <p>The name of the repository that contains the file to delete.</p>
     */
    inline DeleteFileRequest& WithRepositoryName(const Aws::String& value) { SetRepositoryName(value); return *this;}

    /**
     * <p>The name of the repository that contains the file to delete.</p>
     */
    inline DeleteFileRequest& WithRepositoryName(Aws::String&& value) { SetRepositoryName(std::move(value)); return *this;}

    /**
     * <p>The name of the repository that contains the file to delete.</p>
     */
    inline DeleteFileRequest& WithRepositoryName(const char* value) { SetRepositoryName(value); return *this;}


    /**
     * <p>The name of the branch where the commit that deletes the file is made.</p>
     */
    inline const Aws::String& GetBranchName() const{ return m_branchName; }

    /**
     * <p>The name of the branch where the commit that deletes the file is made.</p>
     */
    inline bool BranchNameHasBeenSet() const { return m_branchNameHasBeenSet; }

    /**
     * <p>The name of the branch where the commit that deletes the file is made.</p>
     */
    inline void SetBranchName(const Aws::String& value) { m_branchNameHasBeenSet = true; m_branchName = value; }

    /**
     * <p>The name of the branch where the commit that deletes the file is made.</p>
     */
    inline void SetBranchName(Aws::String&& value) { m_branchNameHasBeenSet = true; m_branchName = std::move(value); }

    /**
     * <p>The name of the branch where the commit that deletes the file is made.</p>
     */
    inline void SetBranchName(const char* value) { m_branchNameHasBeenSet = true; m_branchName.assign(value); }

    /**
     * <p>The name of the branch where the commit that deletes the file is made.</p>
     */
    inline DeleteFileRequest& WithBranchName(const Aws::String& value) { SetBranchName(value); return *this;}

    /**
     * <p>The name of the branch where the commit that deletes the file is made.</p>
     */
    inline DeleteFileRequest& WithBranchName(Aws::String&& value) { SetBranchName(std::move(value)); return *this;}

    /**
     * <p>The name of the branch where the commit that deletes the file is made.</p>
     */
    inline DeleteFileRequest& WithBranchName(const char* value) { SetBranchName(value); return *this;}


    /**
     * <p>The fully qualified path to the file that to be deleted, including the full
     * name and extension of that file. For example, /examples/file.md is a fully
     * qualified path to a file named file.md in a folder named examples.</p>
     */
    inline const Aws::String& GetFilePath() const{ return m_filePath; }

    /**
     * <p>The fully qualified path to the file that to be deleted, including the full
     * name and extension of that file. For example, /examples/file.md is a fully
     * qualified path to a file named file.md in a folder named examples.</p>
     */
    inline bool FilePathHasBeenSet() const { return m_filePathHasBeenSet; }

    /**
     * <p>The fully qualified path to the file that to be deleted, including the full
     * name and extension of that file. For example, /examples/file.md is a fully
     * qualified path to a file named file.md in a folder named examples.</p>
     */
    inline void SetFilePath(const Aws::String& value) { m_filePathHasBeenSet = true; m_filePath = value; }

    /**
     * <p>The fully qualified path to the file that to be deleted, including the full
     * name and extension of that file. For example, /examples/file.md is a fully
     * qualified path to a file named file.md in a folder named examples.</p>
     */
    inline void SetFilePath(Aws::String&& value) { m_filePathHasBeenSet = true; m_filePath = std::move(value); }

    /**
     * <p>The fully qualified path to the file that to be deleted, including the full
     * name and extension of that file. For example, /examples/file.md is a fully
     * qualified path to a file named file.md in a folder named examples.</p>
     */
    inline void SetFilePath(const char* value) { m_filePathHasBeenSet = true; m_filePath.assign(value); }

    /**
     * <p>The fully qualified path to the file that to be deleted, including the full
     * name and extension of that file. For example, /examples/file.md is a fully
     * qualified path to a file named file.md in a folder named examples.</p>
     */
    inline DeleteFileRequest& WithFilePath(const Aws::String& value) { SetFilePath(value); return *this;}

    /**
     * <p>The fully qualified path to the file that to be deleted, including the full
     * name and extension of that file. For example, /examples/file.md is a fully
     * qualified path to a file named file.md in a folder named examples.</p>
     */
    inline DeleteFileRequest& WithFilePath(Aws::String&& value) { SetFilePath(std::move(value)); return *this;}

    /**
     * <p>The fully qualified path to the file that to be deleted, including the full
     * name and extension of that file. For example, /examples/file.md is a fully
     * qualified path to a file named file.md in a folder named examples.</p>
     */
    inline DeleteFileRequest& WithFilePath(const char* value) { SetFilePath(value); return *this;}


    /**
     * <p>The ID of the commit that is the tip of the branch where you want to create
     * the commit that deletes the file. This must be the HEAD commit for the branch.
     * The commit that deletes the file is created from this commit ID.</p>
     */
    inline const Aws::String& GetParentCommitId() const{ return m_parentCommitId; }

    /**
     * <p>The ID of the commit that is the tip of the branch where you want to create
     * the commit that deletes the file. This must be the HEAD commit for the branch.
     * The commit that deletes the file is created from this commit ID.</p>
     */
    inline bool ParentCommitIdHasBeenSet() const { return m_parentCommitIdHasBeenSet; }

    /**
     * <p>The ID of the commit that is the tip of the branch where you want to create
     * the commit that deletes the file. This must be the HEAD commit for the branch.
     * The commit that deletes the file is created from this commit ID.</p>
     */
    inline void SetParentCommitId(const Aws::String& value) { m_parentCommitIdHasBeenSet = true; m_parentCommitId = value; }

    /**
     * <p>The ID of the commit that is the tip of the branch where you want to create
     * the commit that deletes the file. This must be the HEAD commit for the branch.
     * The commit that deletes the file is created from this commit ID.</p>
     */
    inline void SetParentCommitId(Aws::String&& value) { m_parentCommitIdHasBeenSet = true; m_parentCommitId = std::move(value); }

    /**
     * <p>The ID of the commit that is the tip of the branch where you want to create
     * the commit that deletes the file. This must be the HEAD commit for the branch.
     * The commit that deletes the file is created from this commit ID.</p>
     */
    inline void SetParentCommitId(const char* value) { m_parentCommitIdHasBeenSet = true; m_parentCommitId.assign(value); }

    /**
     * <p>The ID of the commit that is the tip of the branch where you want to create
     * the commit that deletes the file. This must be the HEAD commit for the branch.
     * The commit that deletes the file is created from this commit ID.</p>
     */
    inline DeleteFileRequest& WithParentCommitId(const Aws::String& value) { SetParentCommitId(value); return *this;}

    /**
     * <p>The ID of the commit that is the tip of the branch where you want to create
     * the commit that deletes the file. This must be the HEAD commit for the branch.
     * The commit that deletes the file is created from this commit ID.</p>
     */
    inline DeleteFileRequest& WithParentCommitId(Aws::String&& value) { SetParentCommitId(std::move(value)); return *this;}

    /**
     * <p>The ID of the commit that is the tip of the branch where you want to create
     * the commit that deletes the file. This must be the HEAD commit for the branch.
     * The commit that deletes the file is created from this commit ID.</p>
     */
    inline DeleteFileRequest& WithParentCommitId(const char* value) { SetParentCommitId(value); return *this;}


    /**
     * <p>If a file is the only object in the folder or directory, specifies whether to
     * delete the folder or directory that contains the file. By default, empty folders
     * are deleted. This includes empty folders that are part of the directory
     * structure. For example, if the path to a file is dir1/dir2/dir3/dir4, and dir2
     * and dir3 are empty, deleting the last file in dir4 also deletes the empty
     * folders dir4, dir3, and dir2.</p>
     */
    inline bool GetKeepEmptyFolders() const{ return m_keepEmptyFolders; }

    /**
     * <p>If a file is the only object in the folder or directory, specifies whether to
     * delete the folder or directory that contains the file. By default, empty folders
     * are deleted. This includes empty folders that are part of the directory
     * structure. For example, if the path to a file is dir1/dir2/dir3/dir4, and dir2
     * and dir3 are empty, deleting the last file in dir4 also deletes the empty
     * folders dir4, dir3, and dir2.</p>
     */
    inline bool KeepEmptyFoldersHasBeenSet() const { return m_keepEmptyFoldersHasBeenSet; }

    /**
     * <p>If a file is the only object in the folder or directory, specifies whether to
     * delete the folder or directory that contains the file. By default, empty folders
     * are deleted. This includes empty folders that are part of the directory
     * structure. For example, if the path to a file is dir1/dir2/dir3/dir4, and dir2
     * and dir3 are empty, deleting the last file in dir4 also deletes the empty
     * folders dir4, dir3, and dir2.</p>
     */
    inline void SetKeepEmptyFolders(bool value) { m_keepEmptyFoldersHasBeenSet = true; m_keepEmptyFolders = value; }

    /**
     * <p>If a file is the only object in the folder or directory, specifies whether to
     * delete the folder or directory that contains the file. By default, empty folders
     * are deleted. This includes empty folders that are part of the directory
     * structure. For example, if the path to a file is dir1/dir2/dir3/dir4, and dir2
     * and dir3 are empty, deleting the last file in dir4 also deletes the empty
     * folders dir4, dir3, and dir2.</p>
     */
    inline DeleteFileRequest& WithKeepEmptyFolders(bool value) { SetKeepEmptyFolders(value); return *this;}


    /**
     * <p>The commit message you want to include as part of deleting the file. Commit
     * messages are limited to 256 KB. If no message is specified, a default message is
     * used.</p>
     */
    inline const Aws::String& GetCommitMessage() const{ return m_commitMessage; }

    /**
     * <p>The commit message you want to include as part of deleting the file. Commit
     * messages are limited to 256 KB. If no message is specified, a default message is
     * used.</p>
     */
    inline bool CommitMessageHasBeenSet() const { return m_commitMessageHasBeenSet; }

    /**
     * <p>The commit message you want to include as part of deleting the file. Commit
     * messages are limited to 256 KB. If no message is specified, a default message is
     * used.</p>
     */
    inline void SetCommitMessage(const Aws::String& value) { m_commitMessageHasBeenSet = true; m_commitMessage = value; }

    /**
     * <p>The commit message you want to include as part of deleting the file. Commit
     * messages are limited to 256 KB. If no message is specified, a default message is
     * used.</p>
     */
    inline void SetCommitMessage(Aws::String&& value) { m_commitMessageHasBeenSet = true; m_commitMessage = std::move(value); }

    /**
     * <p>The commit message you want to include as part of deleting the file. Commit
     * messages are limited to 256 KB. If no message is specified, a default message is
     * used.</p>
     */
    inline void SetCommitMessage(const char* value) { m_commitMessageHasBeenSet = true; m_commitMessage.assign(value); }

    /**
     * <p>The commit message you want to include as part of deleting the file. Commit
     * messages are limited to 256 KB. If no message is specified, a default message is
     * used.</p>
     */
    inline DeleteFileRequest& WithCommitMessage(const Aws::String& value) { SetCommitMessage(value); return *this;}

    /**
     * <p>The commit message you want to include as part of deleting the file. Commit
     * messages are limited to 256 KB. If no message is specified, a default message is
     * used.</p>
     */
    inline DeleteFileRequest& WithCommitMessage(Aws::String&& value) { SetCommitMessage(std::move(value)); return *this;}

    /**
     * <p>The commit message you want to include as part of deleting the file. Commit
     * messages are limited to 256 KB. If no message is specified, a default message is
     * used.</p>
     */
    inline DeleteFileRequest& WithCommitMessage(const char* value) { SetCommitMessage(value); return *this;}


    /**
     * <p>The name of the author of the commit that deletes the file. If no name is
     * specified, the user's ARN is used as the author name and committer name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the author of the commit that deletes the file. If no name is
     * specified, the user's ARN is used as the author name and committer name.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the author of the commit that deletes the file. If no name is
     * specified, the user's ARN is used as the author name and committer name.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the author of the commit that deletes the file. If no name is
     * specified, the user's ARN is used as the author name and committer name.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the author of the commit that deletes the file. If no name is
     * specified, the user's ARN is used as the author name and committer name.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the author of the commit that deletes the file. If no name is
     * specified, the user's ARN is used as the author name and committer name.</p>
     */
    inline DeleteFileRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the author of the commit that deletes the file. If no name is
     * specified, the user's ARN is used as the author name and committer name.</p>
     */
    inline DeleteFileRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the author of the commit that deletes the file. If no name is
     * specified, the user's ARN is used as the author name and committer name.</p>
     */
    inline DeleteFileRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The email address for the commit that deletes the file. If no email address
     * is specified, the email address is left blank.</p>
     */
    inline const Aws::String& GetEmail() const{ return m_email; }

    /**
     * <p>The email address for the commit that deletes the file. If no email address
     * is specified, the email address is left blank.</p>
     */
    inline bool EmailHasBeenSet() const { return m_emailHasBeenSet; }

    /**
     * <p>The email address for the commit that deletes the file. If no email address
     * is specified, the email address is left blank.</p>
     */
    inline void SetEmail(const Aws::String& value) { m_emailHasBeenSet = true; m_email = value; }

    /**
     * <p>The email address for the commit that deletes the file. If no email address
     * is specified, the email address is left blank.</p>
     */
    inline void SetEmail(Aws::String&& value) { m_emailHasBeenSet = true; m_email = std::move(value); }

    /**
     * <p>The email address for the commit that deletes the file. If no email address
     * is specified, the email address is left blank.</p>
     */
    inline void SetEmail(const char* value) { m_emailHasBeenSet = true; m_email.assign(value); }

    /**
     * <p>The email address for the commit that deletes the file. If no email address
     * is specified, the email address is left blank.</p>
     */
    inline DeleteFileRequest& WithEmail(const Aws::String& value) { SetEmail(value); return *this;}

    /**
     * <p>The email address for the commit that deletes the file. If no email address
     * is specified, the email address is left blank.</p>
     */
    inline DeleteFileRequest& WithEmail(Aws::String&& value) { SetEmail(std::move(value)); return *this;}

    /**
     * <p>The email address for the commit that deletes the file. If no email address
     * is specified, the email address is left blank.</p>
     */
    inline DeleteFileRequest& WithEmail(const char* value) { SetEmail(value); return *this;}

  private:

    Aws::String m_repositoryName;
    bool m_repositoryNameHasBeenSet = false;

    Aws::String m_branchName;
    bool m_branchNameHasBeenSet = false;

    Aws::String m_filePath;
    bool m_filePathHasBeenSet = false;

    Aws::String m_parentCommitId;
    bool m_parentCommitIdHasBeenSet = false;

    bool m_keepEmptyFolders;
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
