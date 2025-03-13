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
  class GetFolderRequest : public CodeCommitRequest
  {
  public:
    AWS_CODECOMMIT_API GetFolderRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetFolder"; }

    AWS_CODECOMMIT_API Aws::String SerializePayload() const override;

    AWS_CODECOMMIT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the repository.</p>
     */
    inline const Aws::String& GetRepositoryName() const { return m_repositoryName; }
    inline bool RepositoryNameHasBeenSet() const { return m_repositoryNameHasBeenSet; }
    template<typename RepositoryNameT = Aws::String>
    void SetRepositoryName(RepositoryNameT&& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = std::forward<RepositoryNameT>(value); }
    template<typename RepositoryNameT = Aws::String>
    GetFolderRequest& WithRepositoryName(RepositoryNameT&& value) { SetRepositoryName(std::forward<RepositoryNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A fully qualified reference used to identify a commit that contains the
     * version of the folder's content to return. A fully qualified reference can be a
     * commit ID, branch name, tag, or reference such as HEAD. If no specifier is
     * provided, the folder content is returned as it exists in the HEAD commit.</p>
     */
    inline const Aws::String& GetCommitSpecifier() const { return m_commitSpecifier; }
    inline bool CommitSpecifierHasBeenSet() const { return m_commitSpecifierHasBeenSet; }
    template<typename CommitSpecifierT = Aws::String>
    void SetCommitSpecifier(CommitSpecifierT&& value) { m_commitSpecifierHasBeenSet = true; m_commitSpecifier = std::forward<CommitSpecifierT>(value); }
    template<typename CommitSpecifierT = Aws::String>
    GetFolderRequest& WithCommitSpecifier(CommitSpecifierT&& value) { SetCommitSpecifier(std::forward<CommitSpecifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The fully qualified path to the folder whose contents are returned, including
     * the folder name. For example, /examples is a fully-qualified path to a folder
     * named examples that was created off of the root directory (/) of a repository.
     * </p>
     */
    inline const Aws::String& GetFolderPath() const { return m_folderPath; }
    inline bool FolderPathHasBeenSet() const { return m_folderPathHasBeenSet; }
    template<typename FolderPathT = Aws::String>
    void SetFolderPath(FolderPathT&& value) { m_folderPathHasBeenSet = true; m_folderPath = std::forward<FolderPathT>(value); }
    template<typename FolderPathT = Aws::String>
    GetFolderRequest& WithFolderPath(FolderPathT&& value) { SetFolderPath(std::forward<FolderPathT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_repositoryName;
    bool m_repositoryNameHasBeenSet = false;

    Aws::String m_commitSpecifier;
    bool m_commitSpecifierHasBeenSet = false;

    Aws::String m_folderPath;
    bool m_folderPathHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
