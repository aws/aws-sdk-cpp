/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeconnections/CodeConnections_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codeconnections/model/ProviderType.h>
#include <aws/codeconnections/model/SyncConfigurationType.h>
#include <aws/codeconnections/model/PublishDeploymentStatus.h>
#include <aws/codeconnections/model/TriggerResourceUpdateOn.h>
#include <aws/codeconnections/model/PullRequestComment.h>
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
namespace CodeConnections
{
namespace Model
{

  /**
   * <p>Information, such as repository, branch, provider, and resource names for a
   * specific sync configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codeconnections-2023-12-01/SyncConfiguration">AWS
   * API Reference</a></p>
   */
  class SyncConfiguration
  {
  public:
    AWS_CODECONNECTIONS_API SyncConfiguration() = default;
    AWS_CODECONNECTIONS_API SyncConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECONNECTIONS_API SyncConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECONNECTIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The branch associated with a specific sync configuration.</p>
     */
    inline const Aws::String& GetBranch() const { return m_branch; }
    inline bool BranchHasBeenSet() const { return m_branchHasBeenSet; }
    template<typename BranchT = Aws::String>
    void SetBranch(BranchT&& value) { m_branchHasBeenSet = true; m_branch = std::forward<BranchT>(value); }
    template<typename BranchT = Aws::String>
    SyncConfiguration& WithBranch(BranchT&& value) { SetBranch(std::forward<BranchT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The file path to the configuration file associated with a specific sync
     * configuration. The path should point to an actual file in the sync
     * configurations linked repository.</p>
     */
    inline const Aws::String& GetConfigFile() const { return m_configFile; }
    inline bool ConfigFileHasBeenSet() const { return m_configFileHasBeenSet; }
    template<typename ConfigFileT = Aws::String>
    void SetConfigFile(ConfigFileT&& value) { m_configFileHasBeenSet = true; m_configFile = std::forward<ConfigFileT>(value); }
    template<typename ConfigFileT = Aws::String>
    SyncConfiguration& WithConfigFile(ConfigFileT&& value) { SetConfigFile(std::forward<ConfigFileT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The owner ID for the repository associated with a specific sync
     * configuration, such as the owner ID in GitHub.</p>
     */
    inline const Aws::String& GetOwnerId() const { return m_ownerId; }
    inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }
    template<typename OwnerIdT = Aws::String>
    void SetOwnerId(OwnerIdT&& value) { m_ownerIdHasBeenSet = true; m_ownerId = std::forward<OwnerIdT>(value); }
    template<typename OwnerIdT = Aws::String>
    SyncConfiguration& WithOwnerId(OwnerIdT&& value) { SetOwnerId(std::forward<OwnerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The connection provider type associated with a specific sync configuration,
     * such as GitHub.</p>
     */
    inline ProviderType GetProviderType() const { return m_providerType; }
    inline bool ProviderTypeHasBeenSet() const { return m_providerTypeHasBeenSet; }
    inline void SetProviderType(ProviderType value) { m_providerTypeHasBeenSet = true; m_providerType = value; }
    inline SyncConfiguration& WithProviderType(ProviderType value) { SetProviderType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the repository link associated with a specific sync
     * configuration.</p>
     */
    inline const Aws::String& GetRepositoryLinkId() const { return m_repositoryLinkId; }
    inline bool RepositoryLinkIdHasBeenSet() const { return m_repositoryLinkIdHasBeenSet; }
    template<typename RepositoryLinkIdT = Aws::String>
    void SetRepositoryLinkId(RepositoryLinkIdT&& value) { m_repositoryLinkIdHasBeenSet = true; m_repositoryLinkId = std::forward<RepositoryLinkIdT>(value); }
    template<typename RepositoryLinkIdT = Aws::String>
    SyncConfiguration& WithRepositoryLinkId(RepositoryLinkIdT&& value) { SetRepositoryLinkId(std::forward<RepositoryLinkIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the repository associated with a specific sync configuration.</p>
     */
    inline const Aws::String& GetRepositoryName() const { return m_repositoryName; }
    inline bool RepositoryNameHasBeenSet() const { return m_repositoryNameHasBeenSet; }
    template<typename RepositoryNameT = Aws::String>
    void SetRepositoryName(RepositoryNameT&& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = std::forward<RepositoryNameT>(value); }
    template<typename RepositoryNameT = Aws::String>
    SyncConfiguration& WithRepositoryName(RepositoryNameT&& value) { SetRepositoryName(std::forward<RepositoryNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the connection resource associated with a specific sync
     * configuration.</p>
     */
    inline const Aws::String& GetResourceName() const { return m_resourceName; }
    inline bool ResourceNameHasBeenSet() const { return m_resourceNameHasBeenSet; }
    template<typename ResourceNameT = Aws::String>
    void SetResourceName(ResourceNameT&& value) { m_resourceNameHasBeenSet = true; m_resourceName = std::forward<ResourceNameT>(value); }
    template<typename ResourceNameT = Aws::String>
    SyncConfiguration& WithResourceName(ResourceNameT&& value) { SetResourceName(std::forward<ResourceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role associated with a specific
     * sync configuration.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    SyncConfiguration& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of sync for a specific sync configuration.</p>
     */
    inline SyncConfigurationType GetSyncType() const { return m_syncType; }
    inline bool SyncTypeHasBeenSet() const { return m_syncTypeHasBeenSet; }
    inline void SetSyncType(SyncConfigurationType value) { m_syncTypeHasBeenSet = true; m_syncType = value; }
    inline SyncConfiguration& WithSyncType(SyncConfigurationType value) { SetSyncType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether to enable or disable publishing of deployment status to source
     * providers.</p>
     */
    inline PublishDeploymentStatus GetPublishDeploymentStatus() const { return m_publishDeploymentStatus; }
    inline bool PublishDeploymentStatusHasBeenSet() const { return m_publishDeploymentStatusHasBeenSet; }
    inline void SetPublishDeploymentStatus(PublishDeploymentStatus value) { m_publishDeploymentStatusHasBeenSet = true; m_publishDeploymentStatus = value; }
    inline SyncConfiguration& WithPublishDeploymentStatus(PublishDeploymentStatus value) { SetPublishDeploymentStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When to trigger Git sync to begin the stack update.</p>
     */
    inline TriggerResourceUpdateOn GetTriggerResourceUpdateOn() const { return m_triggerResourceUpdateOn; }
    inline bool TriggerResourceUpdateOnHasBeenSet() const { return m_triggerResourceUpdateOnHasBeenSet; }
    inline void SetTriggerResourceUpdateOn(TriggerResourceUpdateOn value) { m_triggerResourceUpdateOnHasBeenSet = true; m_triggerResourceUpdateOn = value; }
    inline SyncConfiguration& WithTriggerResourceUpdateOn(TriggerResourceUpdateOn value) { SetTriggerResourceUpdateOn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A toggle that specifies whether to enable or disable pull request comments
     * for the sync configuration to be created.</p>
     */
    inline PullRequestComment GetPullRequestComment() const { return m_pullRequestComment; }
    inline bool PullRequestCommentHasBeenSet() const { return m_pullRequestCommentHasBeenSet; }
    inline void SetPullRequestComment(PullRequestComment value) { m_pullRequestCommentHasBeenSet = true; m_pullRequestComment = value; }
    inline SyncConfiguration& WithPullRequestComment(PullRequestComment value) { SetPullRequestComment(value); return *this;}
    ///@}
  private:

    Aws::String m_branch;
    bool m_branchHasBeenSet = false;

    Aws::String m_configFile;
    bool m_configFileHasBeenSet = false;

    Aws::String m_ownerId;
    bool m_ownerIdHasBeenSet = false;

    ProviderType m_providerType{ProviderType::NOT_SET};
    bool m_providerTypeHasBeenSet = false;

    Aws::String m_repositoryLinkId;
    bool m_repositoryLinkIdHasBeenSet = false;

    Aws::String m_repositoryName;
    bool m_repositoryNameHasBeenSet = false;

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
