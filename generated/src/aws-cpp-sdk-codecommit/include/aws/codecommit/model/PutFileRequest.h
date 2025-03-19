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
    AWS_CODECOMMIT_API PutFileRequest() = default;

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
    inline const Aws::String& GetRepositoryName() const { return m_repositoryName; }
    inline bool RepositoryNameHasBeenSet() const { return m_repositoryNameHasBeenSet; }
    template<typename RepositoryNameT = Aws::String>
    void SetRepositoryName(RepositoryNameT&& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = std::forward<RepositoryNameT>(value); }
    template<typename RepositoryNameT = Aws::String>
    PutFileRequest& WithRepositoryName(RepositoryNameT&& value) { SetRepositoryName(std::forward<RepositoryNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the branch where you want to add or update the file. If this is
     * an empty repository, this branch is created.</p>
     */
    inline const Aws::String& GetBranchName() const { return m_branchName; }
    inline bool BranchNameHasBeenSet() const { return m_branchNameHasBeenSet; }
    template<typename BranchNameT = Aws::String>
    void SetBranchName(BranchNameT&& value) { m_branchNameHasBeenSet = true; m_branchName = std::forward<BranchNameT>(value); }
    template<typename BranchNameT = Aws::String>
    PutFileRequest& WithBranchName(BranchNameT&& value) { SetBranchName(std::forward<BranchNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The content of the file, in binary object format. </p>
     */
    inline const Aws::Utils::ByteBuffer& GetFileContent() const { return m_fileContent; }
    inline bool FileContentHasBeenSet() const { return m_fileContentHasBeenSet; }
    template<typename FileContentT = Aws::Utils::ByteBuffer>
    void SetFileContent(FileContentT&& value) { m_fileContentHasBeenSet = true; m_fileContent = std::forward<FileContentT>(value); }
    template<typename FileContentT = Aws::Utils::ByteBuffer>
    PutFileRequest& WithFileContent(FileContentT&& value) { SetFileContent(std::forward<FileContentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the file you want to add or update, including the relative path
     * to the file in the repository.</p>  <p>If the path does not currently
     * exist in the repository, the path is created as part of adding the file.</p>
     * 
     */
    inline const Aws::String& GetFilePath() const { return m_filePath; }
    inline bool FilePathHasBeenSet() const { return m_filePathHasBeenSet; }
    template<typename FilePathT = Aws::String>
    void SetFilePath(FilePathT&& value) { m_filePathHasBeenSet = true; m_filePath = std::forward<FilePathT>(value); }
    template<typename FilePathT = Aws::String>
    PutFileRequest& WithFilePath(FilePathT&& value) { SetFilePath(std::forward<FilePathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The file mode permissions of the blob. Valid file mode permissions are listed
     * here.</p>
     */
    inline FileModeTypeEnum GetFileMode() const { return m_fileMode; }
    inline bool FileModeHasBeenSet() const { return m_fileModeHasBeenSet; }
    inline void SetFileMode(FileModeTypeEnum value) { m_fileModeHasBeenSet = true; m_fileMode = value; }
    inline PutFileRequest& WithFileMode(FileModeTypeEnum value) { SetFileMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The full commit ID of the head commit in the branch where you want to add or
     * update the file. If this is an empty repository, no commit ID is required. If
     * this is not an empty repository, a commit ID is required. </p> <p>The commit ID
     * must match the ID of the head commit at the time of the operation. Otherwise, an
     * error occurs, and the file is not added or updated.</p>
     */
    inline const Aws::String& GetParentCommitId() const { return m_parentCommitId; }
    inline bool ParentCommitIdHasBeenSet() const { return m_parentCommitIdHasBeenSet; }
    template<typename ParentCommitIdT = Aws::String>
    void SetParentCommitId(ParentCommitIdT&& value) { m_parentCommitIdHasBeenSet = true; m_parentCommitId = std::forward<ParentCommitIdT>(value); }
    template<typename ParentCommitIdT = Aws::String>
    PutFileRequest& WithParentCommitId(ParentCommitIdT&& value) { SetParentCommitId(std::forward<ParentCommitIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A message about why this file was added or updated. Although it is optional,
     * a message makes the commit history for your repository more useful.</p>
     */
    inline const Aws::String& GetCommitMessage() const { return m_commitMessage; }
    inline bool CommitMessageHasBeenSet() const { return m_commitMessageHasBeenSet; }
    template<typename CommitMessageT = Aws::String>
    void SetCommitMessage(CommitMessageT&& value) { m_commitMessageHasBeenSet = true; m_commitMessage = std::forward<CommitMessageT>(value); }
    template<typename CommitMessageT = Aws::String>
    PutFileRequest& WithCommitMessage(CommitMessageT&& value) { SetCommitMessage(std::forward<CommitMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the person adding or updating the file. Although it is optional,
     * a name makes the commit history for your repository more useful.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    PutFileRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An email address for the person adding or updating the file.</p>
     */
    inline const Aws::String& GetEmail() const { return m_email; }
    inline bool EmailHasBeenSet() const { return m_emailHasBeenSet; }
    template<typename EmailT = Aws::String>
    void SetEmail(EmailT&& value) { m_emailHasBeenSet = true; m_email = std::forward<EmailT>(value); }
    template<typename EmailT = Aws::String>
    PutFileRequest& WithEmail(EmailT&& value) { SetEmail(std::forward<EmailT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_repositoryName;
    bool m_repositoryNameHasBeenSet = false;

    Aws::String m_branchName;
    bool m_branchNameHasBeenSet = false;

    Aws::Utils::ByteBuffer m_fileContent{};
    bool m_fileContentHasBeenSet = false;

    Aws::String m_filePath;
    bool m_filePathHasBeenSet = false;

    FileModeTypeEnum m_fileMode{FileModeTypeEnum::NOT_SET};
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
