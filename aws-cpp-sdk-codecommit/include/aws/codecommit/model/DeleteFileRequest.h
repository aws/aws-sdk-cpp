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
  class AWS_CODECOMMIT_API DeleteFileRequest : public CodeCommitRequest
  {
  public:
    DeleteFileRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteFile"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


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
     * <p>The name of the branch where the commit will be made deleting the file.</p>
     */
    inline const Aws::String& GetBranchName() const{ return m_branchName; }

    /**
     * <p>The name of the branch where the commit will be made deleting the file.</p>
     */
    inline bool BranchNameHasBeenSet() const { return m_branchNameHasBeenSet; }

    /**
     * <p>The name of the branch where the commit will be made deleting the file.</p>
     */
    inline void SetBranchName(const Aws::String& value) { m_branchNameHasBeenSet = true; m_branchName = value; }

    /**
     * <p>The name of the branch where the commit will be made deleting the file.</p>
     */
    inline void SetBranchName(Aws::String&& value) { m_branchNameHasBeenSet = true; m_branchName = std::move(value); }

    /**
     * <p>The name of the branch where the commit will be made deleting the file.</p>
     */
    inline void SetBranchName(const char* value) { m_branchNameHasBeenSet = true; m_branchName.assign(value); }

    /**
     * <p>The name of the branch where the commit will be made deleting the file.</p>
     */
    inline DeleteFileRequest& WithBranchName(const Aws::String& value) { SetBranchName(value); return *this;}

    /**
     * <p>The name of the branch where the commit will be made deleting the file.</p>
     */
    inline DeleteFileRequest& WithBranchName(Aws::String&& value) { SetBranchName(std::move(value)); return *this;}

    /**
     * <p>The name of the branch where the commit will be made deleting the file.</p>
     */
    inline DeleteFileRequest& WithBranchName(const char* value) { SetBranchName(value); return *this;}


    /**
     * <p>The fully-qualified path to the file that will be deleted, including the full
     * name and extension of that file. For example, /examples/file.md is a fully
     * qualified path to a file named file.md in a folder named examples.</p>
     */
    inline const Aws::String& GetFilePath() const{ return m_filePath; }

    /**
     * <p>The fully-qualified path to the file that will be deleted, including the full
     * name and extension of that file. For example, /examples/file.md is a fully
     * qualified path to a file named file.md in a folder named examples.</p>
     */
    inline bool FilePathHasBeenSet() const { return m_filePathHasBeenSet; }

    /**
     * <p>The fully-qualified path to the file that will be deleted, including the full
     * name and extension of that file. For example, /examples/file.md is a fully
     * qualified path to a file named file.md in a folder named examples.</p>
     */
    inline void SetFilePath(const Aws::String& value) { m_filePathHasBeenSet = true; m_filePath = value; }

    /**
     * <p>The fully-qualified path to the file that will be deleted, including the full
     * name and extension of that file. For example, /examples/file.md is a fully
     * qualified path to a file named file.md in a folder named examples.</p>
     */
    inline void SetFilePath(Aws::String&& value) { m_filePathHasBeenSet = true; m_filePath = std::move(value); }

    /**
     * <p>The fully-qualified path to the file that will be deleted, including the full
     * name and extension of that file. For example, /examples/file.md is a fully
     * qualified path to a file named file.md in a folder named examples.</p>
     */
    inline void SetFilePath(const char* value) { m_filePathHasBeenSet = true; m_filePath.assign(value); }

    /**
     * <p>The fully-qualified path to the file that will be deleted, including the full
     * name and extension of that file. For example, /examples/file.md is a fully
     * qualified path to a file named file.md in a folder named examples.</p>
     */
    inline DeleteFileRequest& WithFilePath(const Aws::String& value) { SetFilePath(value); return *this;}

    /**
     * <p>The fully-qualified path to the file that will be deleted, including the full
     * name and extension of that file. For example, /examples/file.md is a fully
     * qualified path to a file named file.md in a folder named examples.</p>
     */
    inline DeleteFileRequest& WithFilePath(Aws::String&& value) { SetFilePath(std::move(value)); return *this;}

    /**
     * <p>The fully-qualified path to the file that will be deleted, including the full
     * name and extension of that file. For example, /examples/file.md is a fully
     * qualified path to a file named file.md in a folder named examples.</p>
     */
    inline DeleteFileRequest& WithFilePath(const char* value) { SetFilePath(value); return *this;}


    /**
     * <p>The ID of the commit that is the tip of the branch where you want to create
     * the commit that will delete the file. This must be the HEAD commit for the
     * branch. The commit that deletes the file will be created from this commit
     * ID.</p>
     */
    inline const Aws::String& GetParentCommitId() const{ return m_parentCommitId; }

    /**
     * <p>The ID of the commit that is the tip of the branch where you want to create
     * the commit that will delete the file. This must be the HEAD commit for the
     * branch. The commit that deletes the file will be created from this commit
     * ID.</p>
     */
    inline bool ParentCommitIdHasBeenSet() const { return m_parentCommitIdHasBeenSet; }

    /**
     * <p>The ID of the commit that is the tip of the branch where you want to create
     * the commit that will delete the file. This must be the HEAD commit for the
     * branch. The commit that deletes the file will be created from this commit
     * ID.</p>
     */
    inline void SetParentCommitId(const Aws::String& value) { m_parentCommitIdHasBeenSet = true; m_parentCommitId = value; }

    /**
     * <p>The ID of the commit that is the tip of the branch where you want to create
     * the commit that will delete the file. This must be the HEAD commit for the
     * branch. The commit that deletes the file will be created from this commit
     * ID.</p>
     */
    inline void SetParentCommitId(Aws::String&& value) { m_parentCommitIdHasBeenSet = true; m_parentCommitId = std::move(value); }

    /**
     * <p>The ID of the commit that is the tip of the branch where you want to create
     * the commit that will delete the file. This must be the HEAD commit for the
     * branch. The commit that deletes the file will be created from this commit
     * ID.</p>
     */
    inline void SetParentCommitId(const char* value) { m_parentCommitIdHasBeenSet = true; m_parentCommitId.assign(value); }

    /**
     * <p>The ID of the commit that is the tip of the branch where you want to create
     * the commit that will delete the file. This must be the HEAD commit for the
     * branch. The commit that deletes the file will be created from this commit
     * ID.</p>
     */
    inline DeleteFileRequest& WithParentCommitId(const Aws::String& value) { SetParentCommitId(value); return *this;}

    /**
     * <p>The ID of the commit that is the tip of the branch where you want to create
     * the commit that will delete the file. This must be the HEAD commit for the
     * branch. The commit that deletes the file will be created from this commit
     * ID.</p>
     */
    inline DeleteFileRequest& WithParentCommitId(Aws::String&& value) { SetParentCommitId(std::move(value)); return *this;}

    /**
     * <p>The ID of the commit that is the tip of the branch where you want to create
     * the commit that will delete the file. This must be the HEAD commit for the
     * branch. The commit that deletes the file will be created from this commit
     * ID.</p>
     */
    inline DeleteFileRequest& WithParentCommitId(const char* value) { SetParentCommitId(value); return *this;}


    /**
     * <p>Specifies whether to delete the folder or directory that contains the file
     * you want to delete if that file is the only object in the folder or directory.
     * By default, empty folders will be deleted. This includes empty folders that are
     * part of the directory structure. For example, if the path to a file is
     * dir1/dir2/dir3/dir4, and dir2 and dir3 are empty, deleting the last file in dir4
     * will also delete the empty folders dir4, dir3, and dir2.</p>
     */
    inline bool GetKeepEmptyFolders() const{ return m_keepEmptyFolders; }

    /**
     * <p>Specifies whether to delete the folder or directory that contains the file
     * you want to delete if that file is the only object in the folder or directory.
     * By default, empty folders will be deleted. This includes empty folders that are
     * part of the directory structure. For example, if the path to a file is
     * dir1/dir2/dir3/dir4, and dir2 and dir3 are empty, deleting the last file in dir4
     * will also delete the empty folders dir4, dir3, and dir2.</p>
     */
    inline bool KeepEmptyFoldersHasBeenSet() const { return m_keepEmptyFoldersHasBeenSet; }

    /**
     * <p>Specifies whether to delete the folder or directory that contains the file
     * you want to delete if that file is the only object in the folder or directory.
     * By default, empty folders will be deleted. This includes empty folders that are
     * part of the directory structure. For example, if the path to a file is
     * dir1/dir2/dir3/dir4, and dir2 and dir3 are empty, deleting the last file in dir4
     * will also delete the empty folders dir4, dir3, and dir2.</p>
     */
    inline void SetKeepEmptyFolders(bool value) { m_keepEmptyFoldersHasBeenSet = true; m_keepEmptyFolders = value; }

    /**
     * <p>Specifies whether to delete the folder or directory that contains the file
     * you want to delete if that file is the only object in the folder or directory.
     * By default, empty folders will be deleted. This includes empty folders that are
     * part of the directory structure. For example, if the path to a file is
     * dir1/dir2/dir3/dir4, and dir2 and dir3 are empty, deleting the last file in dir4
     * will also delete the empty folders dir4, dir3, and dir2.</p>
     */
    inline DeleteFileRequest& WithKeepEmptyFolders(bool value) { SetKeepEmptyFolders(value); return *this;}


    /**
     * <p>The commit message you want to include as part of deleting the file. Commit
     * messages are limited to 256 KB. If no message is specified, a default message
     * will be used.</p>
     */
    inline const Aws::String& GetCommitMessage() const{ return m_commitMessage; }

    /**
     * <p>The commit message you want to include as part of deleting the file. Commit
     * messages are limited to 256 KB. If no message is specified, a default message
     * will be used.</p>
     */
    inline bool CommitMessageHasBeenSet() const { return m_commitMessageHasBeenSet; }

    /**
     * <p>The commit message you want to include as part of deleting the file. Commit
     * messages are limited to 256 KB. If no message is specified, a default message
     * will be used.</p>
     */
    inline void SetCommitMessage(const Aws::String& value) { m_commitMessageHasBeenSet = true; m_commitMessage = value; }

    /**
     * <p>The commit message you want to include as part of deleting the file. Commit
     * messages are limited to 256 KB. If no message is specified, a default message
     * will be used.</p>
     */
    inline void SetCommitMessage(Aws::String&& value) { m_commitMessageHasBeenSet = true; m_commitMessage = std::move(value); }

    /**
     * <p>The commit message you want to include as part of deleting the file. Commit
     * messages are limited to 256 KB. If no message is specified, a default message
     * will be used.</p>
     */
    inline void SetCommitMessage(const char* value) { m_commitMessageHasBeenSet = true; m_commitMessage.assign(value); }

    /**
     * <p>The commit message you want to include as part of deleting the file. Commit
     * messages are limited to 256 KB. If no message is specified, a default message
     * will be used.</p>
     */
    inline DeleteFileRequest& WithCommitMessage(const Aws::String& value) { SetCommitMessage(value); return *this;}

    /**
     * <p>The commit message you want to include as part of deleting the file. Commit
     * messages are limited to 256 KB. If no message is specified, a default message
     * will be used.</p>
     */
    inline DeleteFileRequest& WithCommitMessage(Aws::String&& value) { SetCommitMessage(std::move(value)); return *this;}

    /**
     * <p>The commit message you want to include as part of deleting the file. Commit
     * messages are limited to 256 KB. If no message is specified, a default message
     * will be used.</p>
     */
    inline DeleteFileRequest& WithCommitMessage(const char* value) { SetCommitMessage(value); return *this;}


    /**
     * <p>The name of the author of the commit that deletes the file. If no name is
     * specified, the user's ARN will be used as the author name and committer
     * name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the author of the commit that deletes the file. If no name is
     * specified, the user's ARN will be used as the author name and committer
     * name.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the author of the commit that deletes the file. If no name is
     * specified, the user's ARN will be used as the author name and committer
     * name.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the author of the commit that deletes the file. If no name is
     * specified, the user's ARN will be used as the author name and committer
     * name.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the author of the commit that deletes the file. If no name is
     * specified, the user's ARN will be used as the author name and committer
     * name.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the author of the commit that deletes the file. If no name is
     * specified, the user's ARN will be used as the author name and committer
     * name.</p>
     */
    inline DeleteFileRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the author of the commit that deletes the file. If no name is
     * specified, the user's ARN will be used as the author name and committer
     * name.</p>
     */
    inline DeleteFileRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the author of the commit that deletes the file. If no name is
     * specified, the user's ARN will be used as the author name and committer
     * name.</p>
     */
    inline DeleteFileRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The email address for the commit that deletes the file. If no email address
     * is specified, the email address will be left blank.</p>
     */
    inline const Aws::String& GetEmail() const{ return m_email; }

    /**
     * <p>The email address for the commit that deletes the file. If no email address
     * is specified, the email address will be left blank.</p>
     */
    inline bool EmailHasBeenSet() const { return m_emailHasBeenSet; }

    /**
     * <p>The email address for the commit that deletes the file. If no email address
     * is specified, the email address will be left blank.</p>
     */
    inline void SetEmail(const Aws::String& value) { m_emailHasBeenSet = true; m_email = value; }

    /**
     * <p>The email address for the commit that deletes the file. If no email address
     * is specified, the email address will be left blank.</p>
     */
    inline void SetEmail(Aws::String&& value) { m_emailHasBeenSet = true; m_email = std::move(value); }

    /**
     * <p>The email address for the commit that deletes the file. If no email address
     * is specified, the email address will be left blank.</p>
     */
    inline void SetEmail(const char* value) { m_emailHasBeenSet = true; m_email.assign(value); }

    /**
     * <p>The email address for the commit that deletes the file. If no email address
     * is specified, the email address will be left blank.</p>
     */
    inline DeleteFileRequest& WithEmail(const Aws::String& value) { SetEmail(value); return *this;}

    /**
     * <p>The email address for the commit that deletes the file. If no email address
     * is specified, the email address will be left blank.</p>
     */
    inline DeleteFileRequest& WithEmail(Aws::String&& value) { SetEmail(std::move(value)); return *this;}

    /**
     * <p>The email address for the commit that deletes the file. If no email address
     * is specified, the email address will be left blank.</p>
     */
    inline DeleteFileRequest& WithEmail(const char* value) { SetEmail(value); return *this;}

  private:

    Aws::String m_repositoryName;
    bool m_repositoryNameHasBeenSet;

    Aws::String m_branchName;
    bool m_branchNameHasBeenSet;

    Aws::String m_filePath;
    bool m_filePathHasBeenSet;

    Aws::String m_parentCommitId;
    bool m_parentCommitIdHasBeenSet;

    bool m_keepEmptyFolders;
    bool m_keepEmptyFoldersHasBeenSet;

    Aws::String m_commitMessage;
    bool m_commitMessageHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_email;
    bool m_emailHasBeenSet;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
