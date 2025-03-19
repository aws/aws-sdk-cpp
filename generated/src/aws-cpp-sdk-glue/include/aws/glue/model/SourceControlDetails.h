/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/SourceControlProvider.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/SourceControlAuthStrategy.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Glue
{
namespace Model
{

  /**
   * <p>The details for a source control configuration for a job, allowing
   * synchronization of job artifacts to or from a remote repository.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/SourceControlDetails">AWS
   * API Reference</a></p>
   */
  class SourceControlDetails
  {
  public:
    AWS_GLUE_API SourceControlDetails() = default;
    AWS_GLUE_API SourceControlDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API SourceControlDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The provider for the remote repository.</p>
     */
    inline SourceControlProvider GetProvider() const { return m_provider; }
    inline bool ProviderHasBeenSet() const { return m_providerHasBeenSet; }
    inline void SetProvider(SourceControlProvider value) { m_providerHasBeenSet = true; m_provider = value; }
    inline SourceControlDetails& WithProvider(SourceControlProvider value) { SetProvider(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the remote repository that contains the job artifacts.</p>
     */
    inline const Aws::String& GetRepository() const { return m_repository; }
    inline bool RepositoryHasBeenSet() const { return m_repositoryHasBeenSet; }
    template<typename RepositoryT = Aws::String>
    void SetRepository(RepositoryT&& value) { m_repositoryHasBeenSet = true; m_repository = std::forward<RepositoryT>(value); }
    template<typename RepositoryT = Aws::String>
    SourceControlDetails& WithRepository(RepositoryT&& value) { SetRepository(std::forward<RepositoryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The owner of the remote repository that contains the job artifacts.</p>
     */
    inline const Aws::String& GetOwner() const { return m_owner; }
    inline bool OwnerHasBeenSet() const { return m_ownerHasBeenSet; }
    template<typename OwnerT = Aws::String>
    void SetOwner(OwnerT&& value) { m_ownerHasBeenSet = true; m_owner = std::forward<OwnerT>(value); }
    template<typename OwnerT = Aws::String>
    SourceControlDetails& WithOwner(OwnerT&& value) { SetOwner(std::forward<OwnerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional branch in the remote repository.</p>
     */
    inline const Aws::String& GetBranch() const { return m_branch; }
    inline bool BranchHasBeenSet() const { return m_branchHasBeenSet; }
    template<typename BranchT = Aws::String>
    void SetBranch(BranchT&& value) { m_branchHasBeenSet = true; m_branch = std::forward<BranchT>(value); }
    template<typename BranchT = Aws::String>
    SourceControlDetails& WithBranch(BranchT&& value) { SetBranch(std::forward<BranchT>(value)); return *this;}
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
    SourceControlDetails& WithFolder(FolderT&& value) { SetFolder(std::forward<FolderT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last commit ID for a commit in the remote repository.</p>
     */
    inline const Aws::String& GetLastCommitId() const { return m_lastCommitId; }
    inline bool LastCommitIdHasBeenSet() const { return m_lastCommitIdHasBeenSet; }
    template<typename LastCommitIdT = Aws::String>
    void SetLastCommitId(LastCommitIdT&& value) { m_lastCommitIdHasBeenSet = true; m_lastCommitId = std::forward<LastCommitIdT>(value); }
    template<typename LastCommitIdT = Aws::String>
    SourceControlDetails& WithLastCommitId(LastCommitIdT&& value) { SetLastCommitId(std::forward<LastCommitIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of authentication, which can be an authentication token stored in
     * Amazon Web Services Secrets Manager, or a personal access token.</p>
     */
    inline SourceControlAuthStrategy GetAuthStrategy() const { return m_authStrategy; }
    inline bool AuthStrategyHasBeenSet() const { return m_authStrategyHasBeenSet; }
    inline void SetAuthStrategy(SourceControlAuthStrategy value) { m_authStrategyHasBeenSet = true; m_authStrategy = value; }
    inline SourceControlDetails& WithAuthStrategy(SourceControlAuthStrategy value) { SetAuthStrategy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of an authorization token.</p>
     */
    inline const Aws::String& GetAuthToken() const { return m_authToken; }
    inline bool AuthTokenHasBeenSet() const { return m_authTokenHasBeenSet; }
    template<typename AuthTokenT = Aws::String>
    void SetAuthToken(AuthTokenT&& value) { m_authTokenHasBeenSet = true; m_authToken = std::forward<AuthTokenT>(value); }
    template<typename AuthTokenT = Aws::String>
    SourceControlDetails& WithAuthToken(AuthTokenT&& value) { SetAuthToken(std::forward<AuthTokenT>(value)); return *this;}
    ///@}
  private:

    SourceControlProvider m_provider{SourceControlProvider::NOT_SET};
    bool m_providerHasBeenSet = false;

    Aws::String m_repository;
    bool m_repositoryHasBeenSet = false;

    Aws::String m_owner;
    bool m_ownerHasBeenSet = false;

    Aws::String m_branch;
    bool m_branchHasBeenSet = false;

    Aws::String m_folder;
    bool m_folderHasBeenSet = false;

    Aws::String m_lastCommitId;
    bool m_lastCommitIdHasBeenSet = false;

    SourceControlAuthStrategy m_authStrategy{SourceControlAuthStrategy::NOT_SET};
    bool m_authStrategyHasBeenSet = false;

    Aws::String m_authToken;
    bool m_authTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
