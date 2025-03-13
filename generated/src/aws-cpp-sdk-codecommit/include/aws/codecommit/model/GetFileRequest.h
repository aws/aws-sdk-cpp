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
  class GetFileRequest : public CodeCommitRequest
  {
  public:
    AWS_CODECOMMIT_API GetFileRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetFile"; }

    AWS_CODECOMMIT_API Aws::String SerializePayload() const override;

    AWS_CODECOMMIT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the repository that contains the file.</p>
     */
    inline const Aws::String& GetRepositoryName() const { return m_repositoryName; }
    inline bool RepositoryNameHasBeenSet() const { return m_repositoryNameHasBeenSet; }
    template<typename RepositoryNameT = Aws::String>
    void SetRepositoryName(RepositoryNameT&& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = std::forward<RepositoryNameT>(value); }
    template<typename RepositoryNameT = Aws::String>
    GetFileRequest& WithRepositoryName(RepositoryNameT&& value) { SetRepositoryName(std::forward<RepositoryNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The fully quaified reference that identifies the commit that contains the
     * file. For example, you can specify a full commit ID, a tag, a branch name, or a
     * reference such as refs/heads/main. If none is provided, the head commit is
     * used.</p>
     */
    inline const Aws::String& GetCommitSpecifier() const { return m_commitSpecifier; }
    inline bool CommitSpecifierHasBeenSet() const { return m_commitSpecifierHasBeenSet; }
    template<typename CommitSpecifierT = Aws::String>
    void SetCommitSpecifier(CommitSpecifierT&& value) { m_commitSpecifierHasBeenSet = true; m_commitSpecifier = std::forward<CommitSpecifierT>(value); }
    template<typename CommitSpecifierT = Aws::String>
    GetFileRequest& WithCommitSpecifier(CommitSpecifierT&& value) { SetCommitSpecifier(std::forward<CommitSpecifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The fully qualified path to the file, including the full name and extension
     * of the file. For example, /examples/file.md is the fully qualified path to a
     * file named file.md in a folder named examples.</p>
     */
    inline const Aws::String& GetFilePath() const { return m_filePath; }
    inline bool FilePathHasBeenSet() const { return m_filePathHasBeenSet; }
    template<typename FilePathT = Aws::String>
    void SetFilePath(FilePathT&& value) { m_filePathHasBeenSet = true; m_filePath = std::forward<FilePathT>(value); }
    template<typename FilePathT = Aws::String>
    GetFileRequest& WithFilePath(FilePathT&& value) { SetFilePath(std::forward<FilePathT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_repositoryName;
    bool m_repositoryNameHasBeenSet = false;

    Aws::String m_commitSpecifier;
    bool m_commitSpecifierHasBeenSet = false;

    Aws::String m_filePath;
    bool m_filePathHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
