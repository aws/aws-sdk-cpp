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
#include <aws/core/utils/Array.h>
#include <aws/codecommit/model/FileModeTypeEnum.h>
#include <utility>

namespace Aws
{
namespace CodeCommit
{
namespace Model
{

  /**
   */
  class AWS_CODECOMMIT_API PutFileRequest : public CodeCommitRequest
  {
  public:
    PutFileRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutFile"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the repository where you want to add or update the file.</p>
     */
    inline const Aws::String& GetRepositoryName() const{ return m_repositoryName; }

    /**
     * <p>The name of the repository where you want to add or update the file.</p>
     */
    inline bool RepositoryNameHasBeenSet() const { return m_repositoryNameHasBeenSet; }

    /**
     * <p>The name of the repository where you want to add or update the file.</p>
     */
    inline void SetRepositoryName(const Aws::String& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = value; }

    /**
     * <p>The name of the repository where you want to add or update the file.</p>
     */
    inline void SetRepositoryName(Aws::String&& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = std::move(value); }

    /**
     * <p>The name of the repository where you want to add or update the file.</p>
     */
    inline void SetRepositoryName(const char* value) { m_repositoryNameHasBeenSet = true; m_repositoryName.assign(value); }

    /**
     * <p>The name of the repository where you want to add or update the file.</p>
     */
    inline PutFileRequest& WithRepositoryName(const Aws::String& value) { SetRepositoryName(value); return *this;}

    /**
     * <p>The name of the repository where you want to add or update the file.</p>
     */
    inline PutFileRequest& WithRepositoryName(Aws::String&& value) { SetRepositoryName(std::move(value)); return *this;}

    /**
     * <p>The name of the repository where you want to add or update the file.</p>
     */
    inline PutFileRequest& WithRepositoryName(const char* value) { SetRepositoryName(value); return *this;}


    /**
     * <p>The name of the branch where you want to add or update the file. If this is
     * an empty repository, this branch will be created.</p>
     */
    inline const Aws::String& GetBranchName() const{ return m_branchName; }

    /**
     * <p>The name of the branch where you want to add or update the file. If this is
     * an empty repository, this branch will be created.</p>
     */
    inline bool BranchNameHasBeenSet() const { return m_branchNameHasBeenSet; }

    /**
     * <p>The name of the branch where you want to add or update the file. If this is
     * an empty repository, this branch will be created.</p>
     */
    inline void SetBranchName(const Aws::String& value) { m_branchNameHasBeenSet = true; m_branchName = value; }

    /**
     * <p>The name of the branch where you want to add or update the file. If this is
     * an empty repository, this branch will be created.</p>
     */
    inline void SetBranchName(Aws::String&& value) { m_branchNameHasBeenSet = true; m_branchName = std::move(value); }

    /**
     * <p>The name of the branch where you want to add or update the file. If this is
     * an empty repository, this branch will be created.</p>
     */
    inline void SetBranchName(const char* value) { m_branchNameHasBeenSet = true; m_branchName.assign(value); }

    /**
     * <p>The name of the branch where you want to add or update the file. If this is
     * an empty repository, this branch will be created.</p>
     */
    inline PutFileRequest& WithBranchName(const Aws::String& value) { SetBranchName(value); return *this;}

    /**
     * <p>The name of the branch where you want to add or update the file. If this is
     * an empty repository, this branch will be created.</p>
     */
    inline PutFileRequest& WithBranchName(Aws::String&& value) { SetBranchName(std::move(value)); return *this;}

    /**
     * <p>The name of the branch where you want to add or update the file. If this is
     * an empty repository, this branch will be created.</p>
     */
    inline PutFileRequest& WithBranchName(const char* value) { SetBranchName(value); return *this;}


    /**
     * <p>The content of the file, in binary object format. </p>
     */
    inline const Aws::Utils::ByteBuffer& GetFileContent() const{ return m_fileContent; }

    /**
     * <p>The content of the file, in binary object format. </p>
     */
    inline bool FileContentHasBeenSet() const { return m_fileContentHasBeenSet; }

    /**
     * <p>The content of the file, in binary object format. </p>
     */
    inline void SetFileContent(const Aws::Utils::ByteBuffer& value) { m_fileContentHasBeenSet = true; m_fileContent = value; }

    /**
     * <p>The content of the file, in binary object format. </p>
     */
    inline void SetFileContent(Aws::Utils::ByteBuffer&& value) { m_fileContentHasBeenSet = true; m_fileContent = std::move(value); }

    /**
     * <p>The content of the file, in binary object format. </p>
     */
    inline PutFileRequest& WithFileContent(const Aws::Utils::ByteBuffer& value) { SetFileContent(value); return *this;}

    /**
     * <p>The content of the file, in binary object format. </p>
     */
    inline PutFileRequest& WithFileContent(Aws::Utils::ByteBuffer&& value) { SetFileContent(std::move(value)); return *this;}


    /**
     * <p>The name of the file you want to add or update, including the relative path
     * to the file in the repository.</p> <note> <p>If the path does not currently
     * exist in the repository, the path will be created as part of adding the
     * file.</p> </note>
     */
    inline const Aws::String& GetFilePath() const{ return m_filePath; }

    /**
     * <p>The name of the file you want to add or update, including the relative path
     * to the file in the repository.</p> <note> <p>If the path does not currently
     * exist in the repository, the path will be created as part of adding the
     * file.</p> </note>
     */
    inline bool FilePathHasBeenSet() const { return m_filePathHasBeenSet; }

    /**
     * <p>The name of the file you want to add or update, including the relative path
     * to the file in the repository.</p> <note> <p>If the path does not currently
     * exist in the repository, the path will be created as part of adding the
     * file.</p> </note>
     */
    inline void SetFilePath(const Aws::String& value) { m_filePathHasBeenSet = true; m_filePath = value; }

    /**
     * <p>The name of the file you want to add or update, including the relative path
     * to the file in the repository.</p> <note> <p>If the path does not currently
     * exist in the repository, the path will be created as part of adding the
     * file.</p> </note>
     */
    inline void SetFilePath(Aws::String&& value) { m_filePathHasBeenSet = true; m_filePath = std::move(value); }

    /**
     * <p>The name of the file you want to add or update, including the relative path
     * to the file in the repository.</p> <note> <p>If the path does not currently
     * exist in the repository, the path will be created as part of adding the
     * file.</p> </note>
     */
    inline void SetFilePath(const char* value) { m_filePathHasBeenSet = true; m_filePath.assign(value); }

    /**
     * <p>The name of the file you want to add or update, including the relative path
     * to the file in the repository.</p> <note> <p>If the path does not currently
     * exist in the repository, the path will be created as part of adding the
     * file.</p> </note>
     */
    inline PutFileRequest& WithFilePath(const Aws::String& value) { SetFilePath(value); return *this;}

    /**
     * <p>The name of the file you want to add or update, including the relative path
     * to the file in the repository.</p> <note> <p>If the path does not currently
     * exist in the repository, the path will be created as part of adding the
     * file.</p> </note>
     */
    inline PutFileRequest& WithFilePath(Aws::String&& value) { SetFilePath(std::move(value)); return *this;}

    /**
     * <p>The name of the file you want to add or update, including the relative path
     * to the file in the repository.</p> <note> <p>If the path does not currently
     * exist in the repository, the path will be created as part of adding the
     * file.</p> </note>
     */
    inline PutFileRequest& WithFilePath(const char* value) { SetFilePath(value); return *this;}


    /**
     * <p>The file mode permissions of the blob. Valid file mode permissions are listed
     * below.</p>
     */
    inline const FileModeTypeEnum& GetFileMode() const{ return m_fileMode; }

    /**
     * <p>The file mode permissions of the blob. Valid file mode permissions are listed
     * below.</p>
     */
    inline bool FileModeHasBeenSet() const { return m_fileModeHasBeenSet; }

    /**
     * <p>The file mode permissions of the blob. Valid file mode permissions are listed
     * below.</p>
     */
    inline void SetFileMode(const FileModeTypeEnum& value) { m_fileModeHasBeenSet = true; m_fileMode = value; }

    /**
     * <p>The file mode permissions of the blob. Valid file mode permissions are listed
     * below.</p>
     */
    inline void SetFileMode(FileModeTypeEnum&& value) { m_fileModeHasBeenSet = true; m_fileMode = std::move(value); }

    /**
     * <p>The file mode permissions of the blob. Valid file mode permissions are listed
     * below.</p>
     */
    inline PutFileRequest& WithFileMode(const FileModeTypeEnum& value) { SetFileMode(value); return *this;}

    /**
     * <p>The file mode permissions of the blob. Valid file mode permissions are listed
     * below.</p>
     */
    inline PutFileRequest& WithFileMode(FileModeTypeEnum&& value) { SetFileMode(std::move(value)); return *this;}


    /**
     * <p>The full commit ID of the head commit in the branch where you want to add or
     * update the file. If this is an empty repository, no commit ID is required. If
     * this is not an empty repository, a commit ID is required. </p> <p>The commit ID
     * must match the ID of the head commit at the time of the operation, or an error
     * will occur, and the file will not be added or updated.</p>
     */
    inline const Aws::String& GetParentCommitId() const{ return m_parentCommitId; }

    /**
     * <p>The full commit ID of the head commit in the branch where you want to add or
     * update the file. If this is an empty repository, no commit ID is required. If
     * this is not an empty repository, a commit ID is required. </p> <p>The commit ID
     * must match the ID of the head commit at the time of the operation, or an error
     * will occur, and the file will not be added or updated.</p>
     */
    inline bool ParentCommitIdHasBeenSet() const { return m_parentCommitIdHasBeenSet; }

    /**
     * <p>The full commit ID of the head commit in the branch where you want to add or
     * update the file. If this is an empty repository, no commit ID is required. If
     * this is not an empty repository, a commit ID is required. </p> <p>The commit ID
     * must match the ID of the head commit at the time of the operation, or an error
     * will occur, and the file will not be added or updated.</p>
     */
    inline void SetParentCommitId(const Aws::String& value) { m_parentCommitIdHasBeenSet = true; m_parentCommitId = value; }

    /**
     * <p>The full commit ID of the head commit in the branch where you want to add or
     * update the file. If this is an empty repository, no commit ID is required. If
     * this is not an empty repository, a commit ID is required. </p> <p>The commit ID
     * must match the ID of the head commit at the time of the operation, or an error
     * will occur, and the file will not be added or updated.</p>
     */
    inline void SetParentCommitId(Aws::String&& value) { m_parentCommitIdHasBeenSet = true; m_parentCommitId = std::move(value); }

    /**
     * <p>The full commit ID of the head commit in the branch where you want to add or
     * update the file. If this is an empty repository, no commit ID is required. If
     * this is not an empty repository, a commit ID is required. </p> <p>The commit ID
     * must match the ID of the head commit at the time of the operation, or an error
     * will occur, and the file will not be added or updated.</p>
     */
    inline void SetParentCommitId(const char* value) { m_parentCommitIdHasBeenSet = true; m_parentCommitId.assign(value); }

    /**
     * <p>The full commit ID of the head commit in the branch where you want to add or
     * update the file. If this is an empty repository, no commit ID is required. If
     * this is not an empty repository, a commit ID is required. </p> <p>The commit ID
     * must match the ID of the head commit at the time of the operation, or an error
     * will occur, and the file will not be added or updated.</p>
     */
    inline PutFileRequest& WithParentCommitId(const Aws::String& value) { SetParentCommitId(value); return *this;}

    /**
     * <p>The full commit ID of the head commit in the branch where you want to add or
     * update the file. If this is an empty repository, no commit ID is required. If
     * this is not an empty repository, a commit ID is required. </p> <p>The commit ID
     * must match the ID of the head commit at the time of the operation, or an error
     * will occur, and the file will not be added or updated.</p>
     */
    inline PutFileRequest& WithParentCommitId(Aws::String&& value) { SetParentCommitId(std::move(value)); return *this;}

    /**
     * <p>The full commit ID of the head commit in the branch where you want to add or
     * update the file. If this is an empty repository, no commit ID is required. If
     * this is not an empty repository, a commit ID is required. </p> <p>The commit ID
     * must match the ID of the head commit at the time of the operation, or an error
     * will occur, and the file will not be added or updated.</p>
     */
    inline PutFileRequest& WithParentCommitId(const char* value) { SetParentCommitId(value); return *this;}


    /**
     * <p>A message about why this file was added or updated. While optional, adding a
     * message is strongly encouraged in order to provide a more useful commit history
     * for your repository.</p>
     */
    inline const Aws::String& GetCommitMessage() const{ return m_commitMessage; }

    /**
     * <p>A message about why this file was added or updated. While optional, adding a
     * message is strongly encouraged in order to provide a more useful commit history
     * for your repository.</p>
     */
    inline bool CommitMessageHasBeenSet() const { return m_commitMessageHasBeenSet; }

    /**
     * <p>A message about why this file was added or updated. While optional, adding a
     * message is strongly encouraged in order to provide a more useful commit history
     * for your repository.</p>
     */
    inline void SetCommitMessage(const Aws::String& value) { m_commitMessageHasBeenSet = true; m_commitMessage = value; }

    /**
     * <p>A message about why this file was added or updated. While optional, adding a
     * message is strongly encouraged in order to provide a more useful commit history
     * for your repository.</p>
     */
    inline void SetCommitMessage(Aws::String&& value) { m_commitMessageHasBeenSet = true; m_commitMessage = std::move(value); }

    /**
     * <p>A message about why this file was added or updated. While optional, adding a
     * message is strongly encouraged in order to provide a more useful commit history
     * for your repository.</p>
     */
    inline void SetCommitMessage(const char* value) { m_commitMessageHasBeenSet = true; m_commitMessage.assign(value); }

    /**
     * <p>A message about why this file was added or updated. While optional, adding a
     * message is strongly encouraged in order to provide a more useful commit history
     * for your repository.</p>
     */
    inline PutFileRequest& WithCommitMessage(const Aws::String& value) { SetCommitMessage(value); return *this;}

    /**
     * <p>A message about why this file was added or updated. While optional, adding a
     * message is strongly encouraged in order to provide a more useful commit history
     * for your repository.</p>
     */
    inline PutFileRequest& WithCommitMessage(Aws::String&& value) { SetCommitMessage(std::move(value)); return *this;}

    /**
     * <p>A message about why this file was added or updated. While optional, adding a
     * message is strongly encouraged in order to provide a more useful commit history
     * for your repository.</p>
     */
    inline PutFileRequest& WithCommitMessage(const char* value) { SetCommitMessage(value); return *this;}


    /**
     * <p>The name of the person adding or updating the file. While optional, adding a
     * name is strongly encouraged in order to provide a more useful commit history for
     * your repository.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the person adding or updating the file. While optional, adding a
     * name is strongly encouraged in order to provide a more useful commit history for
     * your repository.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the person adding or updating the file. While optional, adding a
     * name is strongly encouraged in order to provide a more useful commit history for
     * your repository.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the person adding or updating the file. While optional, adding a
     * name is strongly encouraged in order to provide a more useful commit history for
     * your repository.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the person adding or updating the file. While optional, adding a
     * name is strongly encouraged in order to provide a more useful commit history for
     * your repository.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the person adding or updating the file. While optional, adding a
     * name is strongly encouraged in order to provide a more useful commit history for
     * your repository.</p>
     */
    inline PutFileRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the person adding or updating the file. While optional, adding a
     * name is strongly encouraged in order to provide a more useful commit history for
     * your repository.</p>
     */
    inline PutFileRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the person adding or updating the file. While optional, adding a
     * name is strongly encouraged in order to provide a more useful commit history for
     * your repository.</p>
     */
    inline PutFileRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>An email address for the person adding or updating the file.</p>
     */
    inline const Aws::String& GetEmail() const{ return m_email; }

    /**
     * <p>An email address for the person adding or updating the file.</p>
     */
    inline bool EmailHasBeenSet() const { return m_emailHasBeenSet; }

    /**
     * <p>An email address for the person adding or updating the file.</p>
     */
    inline void SetEmail(const Aws::String& value) { m_emailHasBeenSet = true; m_email = value; }

    /**
     * <p>An email address for the person adding or updating the file.</p>
     */
    inline void SetEmail(Aws::String&& value) { m_emailHasBeenSet = true; m_email = std::move(value); }

    /**
     * <p>An email address for the person adding or updating the file.</p>
     */
    inline void SetEmail(const char* value) { m_emailHasBeenSet = true; m_email.assign(value); }

    /**
     * <p>An email address for the person adding or updating the file.</p>
     */
    inline PutFileRequest& WithEmail(const Aws::String& value) { SetEmail(value); return *this;}

    /**
     * <p>An email address for the person adding or updating the file.</p>
     */
    inline PutFileRequest& WithEmail(Aws::String&& value) { SetEmail(std::move(value)); return *this;}

    /**
     * <p>An email address for the person adding or updating the file.</p>
     */
    inline PutFileRequest& WithEmail(const char* value) { SetEmail(value); return *this;}

  private:

    Aws::String m_repositoryName;
    bool m_repositoryNameHasBeenSet;

    Aws::String m_branchName;
    bool m_branchNameHasBeenSet;

    Aws::Utils::ByteBuffer m_fileContent;
    bool m_fileContentHasBeenSet;

    Aws::String m_filePath;
    bool m_filePathHasBeenSet;

    FileModeTypeEnum m_fileMode;
    bool m_fileModeHasBeenSet;

    Aws::String m_parentCommitId;
    bool m_parentCommitIdHasBeenSet;

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
