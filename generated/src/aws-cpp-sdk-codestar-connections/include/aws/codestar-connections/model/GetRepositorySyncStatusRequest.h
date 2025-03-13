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
    AWS_CODESTARCONNECTIONS_API GetRepositorySyncStatusRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetRepositorySyncStatus"; }

    AWS_CODESTARCONNECTIONS_API Aws::String SerializePayload() const override;

    AWS_CODESTARCONNECTIONS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The branch of the repository link for the requested repository sync
     * status.</p>
     */
    inline const Aws::String& GetBranch() const { return m_branch; }
    inline bool BranchHasBeenSet() const { return m_branchHasBeenSet; }
    template<typename BranchT = Aws::String>
    void SetBranch(BranchT&& value) { m_branchHasBeenSet = true; m_branch = std::forward<BranchT>(value); }
    template<typename BranchT = Aws::String>
    GetRepositorySyncStatusRequest& WithBranch(BranchT&& value) { SetBranch(std::forward<BranchT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The repository link ID for the requested repository sync status.</p>
     */
    inline const Aws::String& GetRepositoryLinkId() const { return m_repositoryLinkId; }
    inline bool RepositoryLinkIdHasBeenSet() const { return m_repositoryLinkIdHasBeenSet; }
    template<typename RepositoryLinkIdT = Aws::String>
    void SetRepositoryLinkId(RepositoryLinkIdT&& value) { m_repositoryLinkIdHasBeenSet = true; m_repositoryLinkId = std::forward<RepositoryLinkIdT>(value); }
    template<typename RepositoryLinkIdT = Aws::String>
    GetRepositorySyncStatusRequest& WithRepositoryLinkId(RepositoryLinkIdT&& value) { SetRepositoryLinkId(std::forward<RepositoryLinkIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sync type of the requested sync status.</p>
     */
    inline SyncConfigurationType GetSyncType() const { return m_syncType; }
    inline bool SyncTypeHasBeenSet() const { return m_syncTypeHasBeenSet; }
    inline void SetSyncType(SyncConfigurationType value) { m_syncTypeHasBeenSet = true; m_syncType = value; }
    inline GetRepositorySyncStatusRequest& WithSyncType(SyncConfigurationType value) { SetSyncType(value); return *this;}
    ///@}
  private:

    Aws::String m_branch;
    bool m_branchHasBeenSet = false;

    Aws::String m_repositoryLinkId;
    bool m_repositoryLinkIdHasBeenSet = false;

    SyncConfigurationType m_syncType{SyncConfigurationType::NOT_SET};
    bool m_syncTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeStarconnections
} // namespace Aws
