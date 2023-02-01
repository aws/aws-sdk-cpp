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
    AWS_GLUE_API SourceControlDetails();
    AWS_GLUE_API SourceControlDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API SourceControlDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The provider for the remote repository.</p>
     */
    inline const SourceControlProvider& GetProvider() const{ return m_provider; }

    /**
     * <p>The provider for the remote repository.</p>
     */
    inline bool ProviderHasBeenSet() const { return m_providerHasBeenSet; }

    /**
     * <p>The provider for the remote repository.</p>
     */
    inline void SetProvider(const SourceControlProvider& value) { m_providerHasBeenSet = true; m_provider = value; }

    /**
     * <p>The provider for the remote repository.</p>
     */
    inline void SetProvider(SourceControlProvider&& value) { m_providerHasBeenSet = true; m_provider = std::move(value); }

    /**
     * <p>The provider for the remote repository.</p>
     */
    inline SourceControlDetails& WithProvider(const SourceControlProvider& value) { SetProvider(value); return *this;}

    /**
     * <p>The provider for the remote repository.</p>
     */
    inline SourceControlDetails& WithProvider(SourceControlProvider&& value) { SetProvider(std::move(value)); return *this;}


    /**
     * <p>The name of the remote repository that contains the job artifacts.</p>
     */
    inline const Aws::String& GetRepository() const{ return m_repository; }

    /**
     * <p>The name of the remote repository that contains the job artifacts.</p>
     */
    inline bool RepositoryHasBeenSet() const { return m_repositoryHasBeenSet; }

    /**
     * <p>The name of the remote repository that contains the job artifacts.</p>
     */
    inline void SetRepository(const Aws::String& value) { m_repositoryHasBeenSet = true; m_repository = value; }

    /**
     * <p>The name of the remote repository that contains the job artifacts.</p>
     */
    inline void SetRepository(Aws::String&& value) { m_repositoryHasBeenSet = true; m_repository = std::move(value); }

    /**
     * <p>The name of the remote repository that contains the job artifacts.</p>
     */
    inline void SetRepository(const char* value) { m_repositoryHasBeenSet = true; m_repository.assign(value); }

    /**
     * <p>The name of the remote repository that contains the job artifacts.</p>
     */
    inline SourceControlDetails& WithRepository(const Aws::String& value) { SetRepository(value); return *this;}

    /**
     * <p>The name of the remote repository that contains the job artifacts.</p>
     */
    inline SourceControlDetails& WithRepository(Aws::String&& value) { SetRepository(std::move(value)); return *this;}

    /**
     * <p>The name of the remote repository that contains the job artifacts.</p>
     */
    inline SourceControlDetails& WithRepository(const char* value) { SetRepository(value); return *this;}


    /**
     * <p>The owner of the remote repository that contains the job artifacts.</p>
     */
    inline const Aws::String& GetOwner() const{ return m_owner; }

    /**
     * <p>The owner of the remote repository that contains the job artifacts.</p>
     */
    inline bool OwnerHasBeenSet() const { return m_ownerHasBeenSet; }

    /**
     * <p>The owner of the remote repository that contains the job artifacts.</p>
     */
    inline void SetOwner(const Aws::String& value) { m_ownerHasBeenSet = true; m_owner = value; }

    /**
     * <p>The owner of the remote repository that contains the job artifacts.</p>
     */
    inline void SetOwner(Aws::String&& value) { m_ownerHasBeenSet = true; m_owner = std::move(value); }

    /**
     * <p>The owner of the remote repository that contains the job artifacts.</p>
     */
    inline void SetOwner(const char* value) { m_ownerHasBeenSet = true; m_owner.assign(value); }

    /**
     * <p>The owner of the remote repository that contains the job artifacts.</p>
     */
    inline SourceControlDetails& WithOwner(const Aws::String& value) { SetOwner(value); return *this;}

    /**
     * <p>The owner of the remote repository that contains the job artifacts.</p>
     */
    inline SourceControlDetails& WithOwner(Aws::String&& value) { SetOwner(std::move(value)); return *this;}

    /**
     * <p>The owner of the remote repository that contains the job artifacts.</p>
     */
    inline SourceControlDetails& WithOwner(const char* value) { SetOwner(value); return *this;}


    /**
     * <p>An optional branch in the remote repository.</p>
     */
    inline const Aws::String& GetBranch() const{ return m_branch; }

    /**
     * <p>An optional branch in the remote repository.</p>
     */
    inline bool BranchHasBeenSet() const { return m_branchHasBeenSet; }

    /**
     * <p>An optional branch in the remote repository.</p>
     */
    inline void SetBranch(const Aws::String& value) { m_branchHasBeenSet = true; m_branch = value; }

    /**
     * <p>An optional branch in the remote repository.</p>
     */
    inline void SetBranch(Aws::String&& value) { m_branchHasBeenSet = true; m_branch = std::move(value); }

    /**
     * <p>An optional branch in the remote repository.</p>
     */
    inline void SetBranch(const char* value) { m_branchHasBeenSet = true; m_branch.assign(value); }

    /**
     * <p>An optional branch in the remote repository.</p>
     */
    inline SourceControlDetails& WithBranch(const Aws::String& value) { SetBranch(value); return *this;}

    /**
     * <p>An optional branch in the remote repository.</p>
     */
    inline SourceControlDetails& WithBranch(Aws::String&& value) { SetBranch(std::move(value)); return *this;}

    /**
     * <p>An optional branch in the remote repository.</p>
     */
    inline SourceControlDetails& WithBranch(const char* value) { SetBranch(value); return *this;}


    /**
     * <p>An optional folder in the remote repository.</p>
     */
    inline const Aws::String& GetFolder() const{ return m_folder; }

    /**
     * <p>An optional folder in the remote repository.</p>
     */
    inline bool FolderHasBeenSet() const { return m_folderHasBeenSet; }

    /**
     * <p>An optional folder in the remote repository.</p>
     */
    inline void SetFolder(const Aws::String& value) { m_folderHasBeenSet = true; m_folder = value; }

    /**
     * <p>An optional folder in the remote repository.</p>
     */
    inline void SetFolder(Aws::String&& value) { m_folderHasBeenSet = true; m_folder = std::move(value); }

    /**
     * <p>An optional folder in the remote repository.</p>
     */
    inline void SetFolder(const char* value) { m_folderHasBeenSet = true; m_folder.assign(value); }

    /**
     * <p>An optional folder in the remote repository.</p>
     */
    inline SourceControlDetails& WithFolder(const Aws::String& value) { SetFolder(value); return *this;}

    /**
     * <p>An optional folder in the remote repository.</p>
     */
    inline SourceControlDetails& WithFolder(Aws::String&& value) { SetFolder(std::move(value)); return *this;}

    /**
     * <p>An optional folder in the remote repository.</p>
     */
    inline SourceControlDetails& WithFolder(const char* value) { SetFolder(value); return *this;}


    /**
     * <p>The last commit ID for a commit in the remote repository.</p>
     */
    inline const Aws::String& GetLastCommitId() const{ return m_lastCommitId; }

    /**
     * <p>The last commit ID for a commit in the remote repository.</p>
     */
    inline bool LastCommitIdHasBeenSet() const { return m_lastCommitIdHasBeenSet; }

    /**
     * <p>The last commit ID for a commit in the remote repository.</p>
     */
    inline void SetLastCommitId(const Aws::String& value) { m_lastCommitIdHasBeenSet = true; m_lastCommitId = value; }

    /**
     * <p>The last commit ID for a commit in the remote repository.</p>
     */
    inline void SetLastCommitId(Aws::String&& value) { m_lastCommitIdHasBeenSet = true; m_lastCommitId = std::move(value); }

    /**
     * <p>The last commit ID for a commit in the remote repository.</p>
     */
    inline void SetLastCommitId(const char* value) { m_lastCommitIdHasBeenSet = true; m_lastCommitId.assign(value); }

    /**
     * <p>The last commit ID for a commit in the remote repository.</p>
     */
    inline SourceControlDetails& WithLastCommitId(const Aws::String& value) { SetLastCommitId(value); return *this;}

    /**
     * <p>The last commit ID for a commit in the remote repository.</p>
     */
    inline SourceControlDetails& WithLastCommitId(Aws::String&& value) { SetLastCommitId(std::move(value)); return *this;}

    /**
     * <p>The last commit ID for a commit in the remote repository.</p>
     */
    inline SourceControlDetails& WithLastCommitId(const char* value) { SetLastCommitId(value); return *this;}


    /**
     * <p>The type of authentication, which can be an authentication token stored in
     * Amazon Web Services Secrets Manager, or a personal access token.</p>
     */
    inline const SourceControlAuthStrategy& GetAuthStrategy() const{ return m_authStrategy; }

    /**
     * <p>The type of authentication, which can be an authentication token stored in
     * Amazon Web Services Secrets Manager, or a personal access token.</p>
     */
    inline bool AuthStrategyHasBeenSet() const { return m_authStrategyHasBeenSet; }

    /**
     * <p>The type of authentication, which can be an authentication token stored in
     * Amazon Web Services Secrets Manager, or a personal access token.</p>
     */
    inline void SetAuthStrategy(const SourceControlAuthStrategy& value) { m_authStrategyHasBeenSet = true; m_authStrategy = value; }

    /**
     * <p>The type of authentication, which can be an authentication token stored in
     * Amazon Web Services Secrets Manager, or a personal access token.</p>
     */
    inline void SetAuthStrategy(SourceControlAuthStrategy&& value) { m_authStrategyHasBeenSet = true; m_authStrategy = std::move(value); }

    /**
     * <p>The type of authentication, which can be an authentication token stored in
     * Amazon Web Services Secrets Manager, or a personal access token.</p>
     */
    inline SourceControlDetails& WithAuthStrategy(const SourceControlAuthStrategy& value) { SetAuthStrategy(value); return *this;}

    /**
     * <p>The type of authentication, which can be an authentication token stored in
     * Amazon Web Services Secrets Manager, or a personal access token.</p>
     */
    inline SourceControlDetails& WithAuthStrategy(SourceControlAuthStrategy&& value) { SetAuthStrategy(std::move(value)); return *this;}


    /**
     * <p>The value of an authorization token.</p>
     */
    inline const Aws::String& GetAuthToken() const{ return m_authToken; }

    /**
     * <p>The value of an authorization token.</p>
     */
    inline bool AuthTokenHasBeenSet() const { return m_authTokenHasBeenSet; }

    /**
     * <p>The value of an authorization token.</p>
     */
    inline void SetAuthToken(const Aws::String& value) { m_authTokenHasBeenSet = true; m_authToken = value; }

    /**
     * <p>The value of an authorization token.</p>
     */
    inline void SetAuthToken(Aws::String&& value) { m_authTokenHasBeenSet = true; m_authToken = std::move(value); }

    /**
     * <p>The value of an authorization token.</p>
     */
    inline void SetAuthToken(const char* value) { m_authTokenHasBeenSet = true; m_authToken.assign(value); }

    /**
     * <p>The value of an authorization token.</p>
     */
    inline SourceControlDetails& WithAuthToken(const Aws::String& value) { SetAuthToken(value); return *this;}

    /**
     * <p>The value of an authorization token.</p>
     */
    inline SourceControlDetails& WithAuthToken(Aws::String&& value) { SetAuthToken(std::move(value)); return *this;}

    /**
     * <p>The value of an authorization token.</p>
     */
    inline SourceControlDetails& WithAuthToken(const char* value) { SetAuthToken(value); return *this;}

  private:

    SourceControlProvider m_provider;
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

    SourceControlAuthStrategy m_authStrategy;
    bool m_authStrategyHasBeenSet = false;

    Aws::String m_authToken;
    bool m_authTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
