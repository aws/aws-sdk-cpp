/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/GlueRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/SourceControlProvider.h>
#include <aws/glue/model/SourceControlAuthStrategy.h>
#include <utility>

namespace Aws
{
namespace Glue
{
namespace Model
{

  /**
   */
  class UpdateJobFromSourceControlRequest : public GlueRequest
  {
  public:
    AWS_GLUE_API UpdateJobFromSourceControlRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateJobFromSourceControl"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the Glue job to be synchronized to or from the remote
     * repository.</p>
     */
    inline const Aws::String& GetJobName() const { return m_jobName; }
    inline bool JobNameHasBeenSet() const { return m_jobNameHasBeenSet; }
    template<typename JobNameT = Aws::String>
    void SetJobName(JobNameT&& value) { m_jobNameHasBeenSet = true; m_jobName = std::forward<JobNameT>(value); }
    template<typename JobNameT = Aws::String>
    UpdateJobFromSourceControlRequest& WithJobName(JobNameT&& value) { SetJobName(std::forward<JobNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The provider for the remote repository. Possible values: GITHUB,
     * AWS_CODE_COMMIT, GITLAB, BITBUCKET. </p>
     */
    inline SourceControlProvider GetProvider() const { return m_provider; }
    inline bool ProviderHasBeenSet() const { return m_providerHasBeenSet; }
    inline void SetProvider(SourceControlProvider value) { m_providerHasBeenSet = true; m_provider = value; }
    inline UpdateJobFromSourceControlRequest& WithProvider(SourceControlProvider value) { SetProvider(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the remote repository that contains the job artifacts. For
     * BitBucket providers, <code>RepositoryName</code> should include
     * <code>WorkspaceName</code>. Use the format
     * <code>&lt;WorkspaceName&gt;/&lt;RepositoryName&gt;</code>. </p>
     */
    inline const Aws::String& GetRepositoryName() const { return m_repositoryName; }
    inline bool RepositoryNameHasBeenSet() const { return m_repositoryNameHasBeenSet; }
    template<typename RepositoryNameT = Aws::String>
    void SetRepositoryName(RepositoryNameT&& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = std::forward<RepositoryNameT>(value); }
    template<typename RepositoryNameT = Aws::String>
    UpdateJobFromSourceControlRequest& WithRepositoryName(RepositoryNameT&& value) { SetRepositoryName(std::forward<RepositoryNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The owner of the remote repository that contains the job artifacts.</p>
     */
    inline const Aws::String& GetRepositoryOwner() const { return m_repositoryOwner; }
    inline bool RepositoryOwnerHasBeenSet() const { return m_repositoryOwnerHasBeenSet; }
    template<typename RepositoryOwnerT = Aws::String>
    void SetRepositoryOwner(RepositoryOwnerT&& value) { m_repositoryOwnerHasBeenSet = true; m_repositoryOwner = std::forward<RepositoryOwnerT>(value); }
    template<typename RepositoryOwnerT = Aws::String>
    UpdateJobFromSourceControlRequest& WithRepositoryOwner(RepositoryOwnerT&& value) { SetRepositoryOwner(std::forward<RepositoryOwnerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional branch in the remote repository.</p>
     */
    inline const Aws::String& GetBranchName() const { return m_branchName; }
    inline bool BranchNameHasBeenSet() const { return m_branchNameHasBeenSet; }
    template<typename BranchNameT = Aws::String>
    void SetBranchName(BranchNameT&& value) { m_branchNameHasBeenSet = true; m_branchName = std::forward<BranchNameT>(value); }
    template<typename BranchNameT = Aws::String>
    UpdateJobFromSourceControlRequest& WithBranchName(BranchNameT&& value) { SetBranchName(std::forward<BranchNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional folder in the remote repository.</p>
     */
    inline const Aws::String& GetFolder() const { return m_folder; }
    inline bool FolderHasBeenSet() const { return m_folderHasBeenSet; }
    template<typename FolderT = Aws::String>
    void SetFolder(FolderT&& value) { m_folderHasBeenSet = true; m_folder = std::forward<FolderT>(value); }
    template<typename FolderT = Aws::String>
    UpdateJobFromSourceControlRequest& WithFolder(FolderT&& value) { SetFolder(std::forward<FolderT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A commit ID for a commit in the remote repository.</p>
     */
    inline const Aws::String& GetCommitId() const { return m_commitId; }
    inline bool CommitIdHasBeenSet() const { return m_commitIdHasBeenSet; }
    template<typename CommitIdT = Aws::String>
    void SetCommitId(CommitIdT&& value) { m_commitIdHasBeenSet = true; m_commitId = std::forward<CommitIdT>(value); }
    template<typename CommitIdT = Aws::String>
    UpdateJobFromSourceControlRequest& WithCommitId(CommitIdT&& value) { SetCommitId(std::forward<CommitIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of authentication, which can be an authentication token stored in
     * Amazon Web Services Secrets Manager, or a personal access token.</p>
     */
    inline SourceControlAuthStrategy GetAuthStrategy() const { return m_authStrategy; }
    inline bool AuthStrategyHasBeenSet() const { return m_authStrategyHasBeenSet; }
    inline void SetAuthStrategy(SourceControlAuthStrategy value) { m_authStrategyHasBeenSet = true; m_authStrategy = value; }
    inline UpdateJobFromSourceControlRequest& WithAuthStrategy(SourceControlAuthStrategy value) { SetAuthStrategy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of the authorization token.</p>
     */
    inline const Aws::String& GetAuthToken() const { return m_authToken; }
    inline bool AuthTokenHasBeenSet() const { return m_authTokenHasBeenSet; }
    template<typename AuthTokenT = Aws::String>
    void SetAuthToken(AuthTokenT&& value) { m_authTokenHasBeenSet = true; m_authToken = std::forward<AuthTokenT>(value); }
    template<typename AuthTokenT = Aws::String>
    UpdateJobFromSourceControlRequest& WithAuthToken(AuthTokenT&& value) { SetAuthToken(std::forward<AuthTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_jobName;
    bool m_jobNameHasBeenSet = false;

    SourceControlProvider m_provider{SourceControlProvider::NOT_SET};
    bool m_providerHasBeenSet = false;

    Aws::String m_repositoryName;
    bool m_repositoryNameHasBeenSet = false;

    Aws::String m_repositoryOwner;
    bool m_repositoryOwnerHasBeenSet = false;

    Aws::String m_branchName;
    bool m_branchNameHasBeenSet = false;

    Aws::String m_folder;
    bool m_folderHasBeenSet = false;

    Aws::String m_commitId;
    bool m_commitIdHasBeenSet = false;

    SourceControlAuthStrategy m_authStrategy{SourceControlAuthStrategy::NOT_SET};
    bool m_authStrategyHasBeenSet = false;

    Aws::String m_authToken;
    bool m_authTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
