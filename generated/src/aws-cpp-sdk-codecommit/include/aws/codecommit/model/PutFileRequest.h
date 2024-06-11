/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class PutFileRequest : public CodeCommitRequest
  {
  public:
    AWS_CODECOMMIT_API PutFileRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutFile"; }

    AWS_CODECOMMIT_API Aws::String SerializePayload() const override;

    AWS_CODECOMMIT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the repository where you want to add or update the file.</p>
     */
    inline const Aws::String& GetRepositoryName() const{ return m_repositoryName; }
    inline bool RepositoryNameHasBeenSet() const { return m_repositoryNameHasBeenSet; }
    inline void SetRepositoryName(const Aws::String& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = value; }
    inline void SetRepositoryName(Aws::String&& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = std::move(value); }
    inline void SetRepositoryName(const char* value) { m_repositoryNameHasBeenSet = true; m_repositoryName.assign(value); }
    inline PutFileRequest& WithRepositoryName(const Aws::String& value) { SetRepositoryName(value); return *this;}
    inline PutFileRequest& WithRepositoryName(Aws::String&& value) { SetRepositoryName(std::move(value)); return *this;}
    inline PutFileRequest& WithRepositoryName(const char* value) { SetRepositoryName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the branch where you want to add or update the file. If this is
     * an empty repository, this branch is created.</p>
     */
    inline const Aws::String& GetBranchName() const{ return m_branchName; }
    inline bool BranchNameHasBeenSet() const { return m_branchNameHasBeenSet; }
    inline void SetBranchName(const Aws::String& value) { m_branchNameHasBeenSet = true; m_branchName = value; }
    inline void SetBranchName(Aws::String&& value) { m_branchNameHasBeenSet = true; m_branchName = std::move(value); }
    inline void SetBranchName(const char* value) { m_branchNameHasBeenSet = true; m_branchName.assign(value); }
    inline PutFileRequest& WithBranchName(const Aws::String& value) { SetBranchName(value); return *this;}
    inline PutFileRequest& WithBranchName(Aws::String&& value) { SetBranchName(std::move(value)); return *this;}
    inline PutFileRequest& WithBranchName(const char* value) { SetBranchName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The content of the file, in binary object format. </p>
     */
    inline const Aws::Utils::ByteBuffer& GetFileContent() const{ return m_fileContent; }
    inline bool FileContentHasBeenSet() const { return m_fileContentHasBeenSet; }
    inline void SetFileContent(const Aws::Utils::ByteBuffer& value) { m_fileContentHasBeenSet = true; m_fileContent = value; }
    inline void SetFileContent(Aws::Utils::ByteBuffer&& value) { m_fileContentHasBeenSet = true; m_fileContent = std::move(value); }
    inline PutFileRequest& WithFileContent(const Aws::Utils::ByteBuffer& value) { SetFileContent(value); return *this;}
    inline PutFileRequest& WithFileContent(Aws::Utils::ByteBuffer&& value) { SetFileContent(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the file you want to add or update, including the relative path
     * to the file in the repository.</p>  <p>If the path does not currently
     * exist in the repository, the path is created as part of adding the file.</p>
     * 
     */
    inline const Aws::String& GetFilePath() const{ return m_filePath; }
    inline bool FilePathHasBeenSet() const { return m_filePathHasBeenSet; }
    inline void SetFilePath(const Aws::String& value) { m_filePathHasBeenSet = true; m_filePath = value; }
    inline void SetFilePath(Aws::String&& value) { m_filePathHasBeenSet = true; m_filePath = std::move(value); }
    inline void SetFilePath(const char* value) { m_filePathHasBeenSet = true; m_filePath.assign(value); }
    inline PutFileRequest& WithFilePath(const Aws::String& value) { SetFilePath(value); return *this;}
    inline PutFileRequest& WithFilePath(Aws::String&& value) { SetFilePath(std::move(value)); return *this;}
    inline PutFileRequest& WithFilePath(const char* value) { SetFilePath(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The file mode permissions of the blob. Valid file mode permissions are listed
     * here.</p>
     */
    inline const FileModeTypeEnum& GetFileMode() const{ return m_fileMode; }
    inline bool FileModeHasBeenSet() const { return m_fileModeHasBeenSet; }
    inline void SetFileMode(const FileModeTypeEnum& value) { m_fileModeHasBeenSet = true; m_fileMode = value; }
    inline void SetFileMode(FileModeTypeEnum&& value) { m_fileModeHasBeenSet = true; m_fileMode = std::move(value); }
    inline PutFileRequest& WithFileMode(const FileModeTypeEnum& value) { SetFileMode(value); return *this;}
    inline PutFileRequest& WithFileMode(FileModeTypeEnum&& value) { SetFileMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The full commit ID of the head commit in the branch where you want to add or
     * update the file. If this is an empty repository, no commit ID is required. If
     * this is not an empty repository, a commit ID is required. </p> <p>The commit ID
     * must match the ID of the head commit at the time of the operation. Otherwise, an
     * error occurs, and the file is not added or updated.</p>
     */
    inline const Aws::String& GetParentCommitId() const{ return m_parentCommitId; }
    inline bool ParentCommitIdHasBeenSet() const { return m_parentCommitIdHasBeenSet; }
    inline void SetParentCommitId(const Aws::String& value) { m_parentCommitIdHasBeenSet = true; m_parentCommitId = value; }
    inline void SetParentCommitId(Aws::String&& value) { m_parentCommitIdHasBeenSet = true; m_parentCommitId = std::move(value); }
    inline void SetParentCommitId(const char* value) { m_parentCommitIdHasBeenSet = true; m_parentCommitId.assign(value); }
    inline PutFileRequest& WithParentCommitId(const Aws::String& value) { SetParentCommitId(value); return *this;}
    inline PutFileRequest& WithParentCommitId(Aws::String&& value) { SetParentCommitId(std::move(value)); return *this;}
    inline PutFileRequest& WithParentCommitId(const char* value) { SetParentCommitId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A message about why this file was added or updated. Although it is optional,
     * a message makes the commit history for your repository more useful.</p>
     */
    inline const Aws::String& GetCommitMessage() const{ return m_commitMessage; }
    inline bool CommitMessageHasBeenSet() const { return m_commitMessageHasBeenSet; }
    inline void SetCommitMessage(const Aws::String& value) { m_commitMessageHasBeenSet = true; m_commitMessage = value; }
    inline void SetCommitMessage(Aws::String&& value) { m_commitMessageHasBeenSet = true; m_commitMessage = std::move(value); }
    inline void SetCommitMessage(const char* value) { m_commitMessageHasBeenSet = true; m_commitMessage.assign(value); }
    inline PutFileRequest& WithCommitMessage(const Aws::String& value) { SetCommitMessage(value); return *this;}
    inline PutFileRequest& WithCommitMessage(Aws::String&& value) { SetCommitMessage(std::move(value)); return *this;}
    inline PutFileRequest& WithCommitMessage(const char* value) { SetCommitMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the person adding or updating the file. Although it is optional,
     * a name makes the commit history for your repository more useful.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline PutFileRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline PutFileRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline PutFileRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An email address for the person adding or updating the file.</p>
     */
    inline const Aws::String& GetEmail() const{ return m_email; }
    inline bool EmailHasBeenSet() const { return m_emailHasBeenSet; }
    inline void SetEmail(const Aws::String& value) { m_emailHasBeenSet = true; m_email = value; }
    inline void SetEmail(Aws::String&& value) { m_emailHasBeenSet = true; m_email = std::move(value); }
    inline void SetEmail(const char* value) { m_emailHasBeenSet = true; m_email.assign(value); }
    inline PutFileRequest& WithEmail(const Aws::String& value) { SetEmail(value); return *this;}
    inline PutFileRequest& WithEmail(Aws::String&& value) { SetEmail(std::move(value)); return *this;}
    inline PutFileRequest& WithEmail(const char* value) { SetEmail(value); return *this;}
    ///@}
  private:

    Aws::String m_repositoryName;
    bool m_repositoryNameHasBeenSet = false;

    Aws::String m_branchName;
    bool m_branchNameHasBeenSet = false;

    Aws::Utils::ByteBuffer m_fileContent;
    bool m_fileContentHasBeenSet = false;

    Aws::String m_filePath;
    bool m_filePathHasBeenSet = false;

    FileModeTypeEnum m_fileMode;
    bool m_fileModeHasBeenSet = false;

    Aws::String m_parentCommitId;
    bool m_parentCommitIdHasBeenSet = false;

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
