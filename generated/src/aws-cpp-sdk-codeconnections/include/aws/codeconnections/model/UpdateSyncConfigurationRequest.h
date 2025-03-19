/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeconnections/CodeConnections_EXPORTS.h>
#include <aws/codeconnections/CodeConnectionsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codeconnections/model/SyncConfigurationType.h>
#include <aws/codeconnections/model/PublishDeploymentStatus.h>
#include <aws/codeconnections/model/TriggerResourceUpdateOn.h>
#include <aws/codeconnections/model/PullRequestComment.h>
#include <utility>

namespace Aws
{
namespace CodeConnections
{
namespace Model
{

  /**
   */
  class UpdateSyncConfigurationRequest : public CodeConnectionsRequest
  {
  public:
    AWS_CODECONNECTIONS_API UpdateSyncConfigurationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateSyncConfiguration"; }

    AWS_CODECONNECTIONS_API Aws::String SerializePayload() const override;

    AWS_CODECONNECTIONS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The branch for the sync configuration to be updated.</p>
     */
    inline const Aws::String& GetBranch() const { return m_branch; }
    inline bool BranchHasBeenSet() const { return m_branchHasBeenSet; }
    template<typename BranchT = Aws::String>
    void SetBranch(BranchT&& value) { m_branchHasBeenSet = true; m_branch = std::forward<BranchT>(value); }
    template<typename BranchT = Aws::String>
    UpdateSyncConfigurationRequest& WithBranch(BranchT&& value) { SetBranch(std::forward<BranchT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration file for the sync configuration to be updated.</p>
     */
    inline const Aws::String& GetConfigFile() const { return m_configFile; }
    inline bool ConfigFileHasBeenSet() const { return m_configFileHasBeenSet; }
    template<typename ConfigFileT = Aws::String>
    void SetConfigFile(ConfigFileT&& value) { m_configFileHasBeenSet = true; m_configFile = std::forward<ConfigFileT>(value); }
    template<typename ConfigFileT = Aws::String>
    UpdateSyncConfigurationRequest& WithConfigFile(ConfigFileT&& value) { SetConfigFile(std::forward<ConfigFileT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the repository link for the sync configuration to be updated.</p>
     */
    inline const Aws::String& GetRepositoryLinkId() const { return m_repositoryLinkId; }
    inline bool RepositoryLinkIdHasBeenSet() const { return m_repositoryLinkIdHasBeenSet; }
    template<typename RepositoryLinkIdT = Aws::String>
    void SetRepositoryLinkId(RepositoryLinkIdT&& value) { m_repositoryLinkIdHasBeenSet = true; m_repositoryLinkId = std::forward<RepositoryLinkIdT>(value); }
    template<typename RepositoryLinkIdT = Aws::String>
    UpdateSyncConfigurationRequest& WithRepositoryLinkId(RepositoryLinkIdT&& value) { SetRepositoryLinkId(std::forward<RepositoryLinkIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Amazon Web Services resource for the sync configuration to be
     * updated.</p>
     */
    inline const Aws::String& GetResourceName() const { return m_resourceName; }
    inline bool ResourceNameHasBeenSet() const { return m_resourceNameHasBeenSet; }
    template<typename ResourceNameT = Aws::String>
    void SetResourceName(ResourceNameT&& value) { m_resourceNameHasBeenSet = true; m_resourceName = std::forward<ResourceNameT>(value); }
    template<typename ResourceNameT = Aws::String>
    UpdateSyncConfigurationRequest& WithResourceName(ResourceNameT&& value) { SetResourceName(std::forward<ResourceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the IAM role for the sync configuration to be updated.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    UpdateSyncConfigurationRequest& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sync type for the sync configuration to be updated.</p>
     */
    inline SyncConfigurationType GetSyncType() const { return m_syncType; }
    inline bool SyncTypeHasBeenSet() const { return m_syncTypeHasBeenSet; }
    inline void SetSyncType(SyncConfigurationType value) { m_syncTypeHasBeenSet = true; m_syncType = value; }
    inline UpdateSyncConfigurationRequest& WithSyncType(SyncConfigurationType value) { SetSyncType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether to enable or disable publishing of deployment status to source
     * providers.</p>
     */
    inline PublishDeploymentStatus GetPublishDeploymentStatus() const { return m_publishDeploymentStatus; }
    inline bool PublishDeploymentStatusHasBeenSet() const { return m_publishDeploymentStatusHasBeenSet; }
    inline void SetPublishDeploymentStatus(PublishDeploymentStatus value) { m_publishDeploymentStatusHasBeenSet = true; m_publishDeploymentStatus = value; }
    inline UpdateSyncConfigurationRequest& WithPublishDeploymentStatus(PublishDeploymentStatus value) { SetPublishDeploymentStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When to trigger Git sync to begin the stack update.</p>
     */
    inline TriggerResourceUpdateOn GetTriggerResourceUpdateOn() const { return m_triggerResourceUpdateOn; }
    inline bool TriggerResourceUpdateOnHasBeenSet() const { return m_triggerResourceUpdateOnHasBeenSet; }
    inline void SetTriggerResourceUpdateOn(TriggerResourceUpdateOn value) { m_triggerResourceUpdateOnHasBeenSet = true; m_triggerResourceUpdateOn = value; }
    inline UpdateSyncConfigurationRequest& WithTriggerResourceUpdateOn(TriggerResourceUpdateOn value) { SetTriggerResourceUpdateOn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>TA toggle that specifies whether to enable or disable pull request comments
     * for the sync configuration to be updated.</p>
     */
    inline PullRequestComment GetPullRequestComment() const { return m_pullRequestComment; }
    inline bool PullRequestCommentHasBeenSet() const { return m_pullRequestCommentHasBeenSet; }
    inline void SetPullRequestComment(PullRequestComment value) { m_pullRequestCommentHasBeenSet = true; m_pullRequestComment = value; }
    inline UpdateSyncConfigurationRequest& WithPullRequestComment(PullRequestComment value) { SetPullRequestComment(value); return *this;}
    ///@}
  private:

    Aws::String m_branch;
    bool m_branchHasBeenSet = false;

    Aws::String m_configFile;
    bool m_configFileHasBeenSet = false;

    Aws::String m_repositoryLinkId;
    bool m_repositoryLinkIdHasBeenSet = false;

    Aws::String m_resourceName;
    bool m_resourceNameHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    SyncConfigurationType m_syncType{SyncConfigurationType::NOT_SET};
    bool m_syncTypeHasBeenSet = false;

    PublishDeploymentStatus m_publishDeploymentStatus{PublishDeploymentStatus::NOT_SET};
    bool m_publishDeploymentStatusHasBeenSet = false;

    TriggerResourceUpdateOn m_triggerResourceUpdateOn{TriggerResourceUpdateOn::NOT_SET};
    bool m_triggerResourceUpdateOnHasBeenSet = false;

    PullRequestComment m_pullRequestComment{PullRequestComment::NOT_SET};
    bool m_pullRequestCommentHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeConnections
} // namespace Aws
