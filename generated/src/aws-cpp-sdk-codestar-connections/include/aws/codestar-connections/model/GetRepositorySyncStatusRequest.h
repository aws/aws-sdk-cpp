/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codestar-connections/CodeStarconnections_EXPORTS.h>
#include <aws/codestar-connections/CodeStarconnectionsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codestar-connections/model/SyncConfigurationType.h>
#include <utility>

namespace Aws
{
namespace CodeStarconnections
{
namespace Model
{

  /**
   */
  class GetRepositorySyncStatusRequest : public CodeStarconnectionsRequest
  {
  public:
    AWS_CODESTARCONNECTIONS_API GetRepositorySyncStatusRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetRepositorySyncStatus"; }

    AWS_CODESTARCONNECTIONS_API Aws::String SerializePayload() const override;

    AWS_CODESTARCONNECTIONS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The branch of the repository link for the requested repository sync
     * status.</p>
     */
    inline const Aws::String& GetBranch() const{ return m_branch; }

    /**
     * <p>The branch of the repository link for the requested repository sync
     * status.</p>
     */
    inline bool BranchHasBeenSet() const { return m_branchHasBeenSet; }

    /**
     * <p>The branch of the repository link for the requested repository sync
     * status.</p>
     */
    inline void SetBranch(const Aws::String& value) { m_branchHasBeenSet = true; m_branch = value; }

    /**
     * <p>The branch of the repository link for the requested repository sync
     * status.</p>
     */
    inline void SetBranch(Aws::String&& value) { m_branchHasBeenSet = true; m_branch = std::move(value); }

    /**
     * <p>The branch of the repository link for the requested repository sync
     * status.</p>
     */
    inline void SetBranch(const char* value) { m_branchHasBeenSet = true; m_branch.assign(value); }

    /**
     * <p>The branch of the repository link for the requested repository sync
     * status.</p>
     */
    inline GetRepositorySyncStatusRequest& WithBranch(const Aws::String& value) { SetBranch(value); return *this;}

    /**
     * <p>The branch of the repository link for the requested repository sync
     * status.</p>
     */
    inline GetRepositorySyncStatusRequest& WithBranch(Aws::String&& value) { SetBranch(std::move(value)); return *this;}

    /**
     * <p>The branch of the repository link for the requested repository sync
     * status.</p>
     */
    inline GetRepositorySyncStatusRequest& WithBranch(const char* value) { SetBranch(value); return *this;}


    /**
     * <p>The repository link ID for the requested repository sync status.</p>
     */
    inline const Aws::String& GetRepositoryLinkId() const{ return m_repositoryLinkId; }

    /**
     * <p>The repository link ID for the requested repository sync status.</p>
     */
    inline bool RepositoryLinkIdHasBeenSet() const { return m_repositoryLinkIdHasBeenSet; }

    /**
     * <p>The repository link ID for the requested repository sync status.</p>
     */
    inline void SetRepositoryLinkId(const Aws::String& value) { m_repositoryLinkIdHasBeenSet = true; m_repositoryLinkId = value; }

    /**
     * <p>The repository link ID for the requested repository sync status.</p>
     */
    inline void SetRepositoryLinkId(Aws::String&& value) { m_repositoryLinkIdHasBeenSet = true; m_repositoryLinkId = std::move(value); }

    /**
     * <p>The repository link ID for the requested repository sync status.</p>
     */
    inline void SetRepositoryLinkId(const char* value) { m_repositoryLinkIdHasBeenSet = true; m_repositoryLinkId.assign(value); }

    /**
     * <p>The repository link ID for the requested repository sync status.</p>
     */
    inline GetRepositorySyncStatusRequest& WithRepositoryLinkId(const Aws::String& value) { SetRepositoryLinkId(value); return *this;}

    /**
     * <p>The repository link ID for the requested repository sync status.</p>
     */
    inline GetRepositorySyncStatusRequest& WithRepositoryLinkId(Aws::String&& value) { SetRepositoryLinkId(std::move(value)); return *this;}

    /**
     * <p>The repository link ID for the requested repository sync status.</p>
     */
    inline GetRepositorySyncStatusRequest& WithRepositoryLinkId(const char* value) { SetRepositoryLinkId(value); return *this;}


    /**
     * <p>The sync type of the requested sync status.</p>
     */
    inline const SyncConfigurationType& GetSyncType() const{ return m_syncType; }

    /**
     * <p>The sync type of the requested sync status.</p>
     */
    inline bool SyncTypeHasBeenSet() const { return m_syncTypeHasBeenSet; }

    /**
     * <p>The sync type of the requested sync status.</p>
     */
    inline void SetSyncType(const SyncConfigurationType& value) { m_syncTypeHasBeenSet = true; m_syncType = value; }

    /**
     * <p>The sync type of the requested sync status.</p>
     */
    inline void SetSyncType(SyncConfigurationType&& value) { m_syncTypeHasBeenSet = true; m_syncType = std::move(value); }

    /**
     * <p>The sync type of the requested sync status.</p>
     */
    inline GetRepositorySyncStatusRequest& WithSyncType(const SyncConfigurationType& value) { SetSyncType(value); return *this;}

    /**
     * <p>The sync type of the requested sync status.</p>
     */
    inline GetRepositorySyncStatusRequest& WithSyncType(SyncConfigurationType&& value) { SetSyncType(std::move(value)); return *this;}

  private:

    Aws::String m_branch;
    bool m_branchHasBeenSet = false;

    Aws::String m_repositoryLinkId;
    bool m_repositoryLinkIdHasBeenSet = false;

    SyncConfigurationType m_syncType;
    bool m_syncTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeStarconnections
} // namespace Aws
