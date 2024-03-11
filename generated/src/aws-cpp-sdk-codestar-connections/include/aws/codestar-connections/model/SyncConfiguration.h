/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codestar-connections/CodeStarconnections_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codestar-connections/model/ProviderType.h>
#include <aws/codestar-connections/model/SyncConfigurationType.h>
#include <aws/codestar-connections/model/PublishDeploymentStatus.h>
#include <aws/codestar-connections/model/TriggerResourceUpdateOn.h>
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
namespace CodeStarconnections
{
namespace Model
{

  /**
   * <p>Information, such as repository, branch, provider, and resource names for a
   * specific sync configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-connections-2019-12-01/SyncConfiguration">AWS
   * API Reference</a></p>
   */
  class SyncConfiguration
  {
  public:
    AWS_CODESTARCONNECTIONS_API SyncConfiguration();
    AWS_CODESTARCONNECTIONS_API SyncConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODESTARCONNECTIONS_API SyncConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODESTARCONNECTIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The branch associated with a specific sync configuration.</p>
     */
    inline const Aws::String& GetBranch() const{ return m_branch; }

    /**
     * <p>The branch associated with a specific sync configuration.</p>
     */
    inline bool BranchHasBeenSet() const { return m_branchHasBeenSet; }

    /**
     * <p>The branch associated with a specific sync configuration.</p>
     */
    inline void SetBranch(const Aws::String& value) { m_branchHasBeenSet = true; m_branch = value; }

    /**
     * <p>The branch associated with a specific sync configuration.</p>
     */
    inline void SetBranch(Aws::String&& value) { m_branchHasBeenSet = true; m_branch = std::move(value); }

    /**
     * <p>The branch associated with a specific sync configuration.</p>
     */
    inline void SetBranch(const char* value) { m_branchHasBeenSet = true; m_branch.assign(value); }

    /**
     * <p>The branch associated with a specific sync configuration.</p>
     */
    inline SyncConfiguration& WithBranch(const Aws::String& value) { SetBranch(value); return *this;}

    /**
     * <p>The branch associated with a specific sync configuration.</p>
     */
    inline SyncConfiguration& WithBranch(Aws::String&& value) { SetBranch(std::move(value)); return *this;}

    /**
     * <p>The branch associated with a specific sync configuration.</p>
     */
    inline SyncConfiguration& WithBranch(const char* value) { SetBranch(value); return *this;}


    /**
     * <p>The file path to the configuration file associated with a specific sync
     * configuration. The path should point to an actual file in the sync
     * configurations linked repository.</p>
     */
    inline const Aws::String& GetConfigFile() const{ return m_configFile; }

    /**
     * <p>The file path to the configuration file associated with a specific sync
     * configuration. The path should point to an actual file in the sync
     * configurations linked repository.</p>
     */
    inline bool ConfigFileHasBeenSet() const { return m_configFileHasBeenSet; }

    /**
     * <p>The file path to the configuration file associated with a specific sync
     * configuration. The path should point to an actual file in the sync
     * configurations linked repository.</p>
     */
    inline void SetConfigFile(const Aws::String& value) { m_configFileHasBeenSet = true; m_configFile = value; }

    /**
     * <p>The file path to the configuration file associated with a specific sync
     * configuration. The path should point to an actual file in the sync
     * configurations linked repository.</p>
     */
    inline void SetConfigFile(Aws::String&& value) { m_configFileHasBeenSet = true; m_configFile = std::move(value); }

    /**
     * <p>The file path to the configuration file associated with a specific sync
     * configuration. The path should point to an actual file in the sync
     * configurations linked repository.</p>
     */
    inline void SetConfigFile(const char* value) { m_configFileHasBeenSet = true; m_configFile.assign(value); }

    /**
     * <p>The file path to the configuration file associated with a specific sync
     * configuration. The path should point to an actual file in the sync
     * configurations linked repository.</p>
     */
    inline SyncConfiguration& WithConfigFile(const Aws::String& value) { SetConfigFile(value); return *this;}

    /**
     * <p>The file path to the configuration file associated with a specific sync
     * configuration. The path should point to an actual file in the sync
     * configurations linked repository.</p>
     */
    inline SyncConfiguration& WithConfigFile(Aws::String&& value) { SetConfigFile(std::move(value)); return *this;}

    /**
     * <p>The file path to the configuration file associated with a specific sync
     * configuration. The path should point to an actual file in the sync
     * configurations linked repository.</p>
     */
    inline SyncConfiguration& WithConfigFile(const char* value) { SetConfigFile(value); return *this;}


    /**
     * <p>The owner ID for the repository associated with a specific sync
     * configuration, such as the owner ID in GitHub.</p>
     */
    inline const Aws::String& GetOwnerId() const{ return m_ownerId; }

    /**
     * <p>The owner ID for the repository associated with a specific sync
     * configuration, such as the owner ID in GitHub.</p>
     */
    inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }

    /**
     * <p>The owner ID for the repository associated with a specific sync
     * configuration, such as the owner ID in GitHub.</p>
     */
    inline void SetOwnerId(const Aws::String& value) { m_ownerIdHasBeenSet = true; m_ownerId = value; }

    /**
     * <p>The owner ID for the repository associated with a specific sync
     * configuration, such as the owner ID in GitHub.</p>
     */
    inline void SetOwnerId(Aws::String&& value) { m_ownerIdHasBeenSet = true; m_ownerId = std::move(value); }

    /**
     * <p>The owner ID for the repository associated with a specific sync
     * configuration, such as the owner ID in GitHub.</p>
     */
    inline void SetOwnerId(const char* value) { m_ownerIdHasBeenSet = true; m_ownerId.assign(value); }

    /**
     * <p>The owner ID for the repository associated with a specific sync
     * configuration, such as the owner ID in GitHub.</p>
     */
    inline SyncConfiguration& WithOwnerId(const Aws::String& value) { SetOwnerId(value); return *this;}

    /**
     * <p>The owner ID for the repository associated with a specific sync
     * configuration, such as the owner ID in GitHub.</p>
     */
    inline SyncConfiguration& WithOwnerId(Aws::String&& value) { SetOwnerId(std::move(value)); return *this;}

    /**
     * <p>The owner ID for the repository associated with a specific sync
     * configuration, such as the owner ID in GitHub.</p>
     */
    inline SyncConfiguration& WithOwnerId(const char* value) { SetOwnerId(value); return *this;}


    /**
     * <p>The connection provider type associated with a specific sync configuration,
     * such as GitHub.</p>
     */
    inline const ProviderType& GetProviderType() const{ return m_providerType; }

    /**
     * <p>The connection provider type associated with a specific sync configuration,
     * such as GitHub.</p>
     */
    inline bool ProviderTypeHasBeenSet() const { return m_providerTypeHasBeenSet; }

    /**
     * <p>The connection provider type associated with a specific sync configuration,
     * such as GitHub.</p>
     */
    inline void SetProviderType(const ProviderType& value) { m_providerTypeHasBeenSet = true; m_providerType = value; }

    /**
     * <p>The connection provider type associated with a specific sync configuration,
     * such as GitHub.</p>
     */
    inline void SetProviderType(ProviderType&& value) { m_providerTypeHasBeenSet = true; m_providerType = std::move(value); }

    /**
     * <p>The connection provider type associated with a specific sync configuration,
     * such as GitHub.</p>
     */
    inline SyncConfiguration& WithProviderType(const ProviderType& value) { SetProviderType(value); return *this;}

    /**
     * <p>The connection provider type associated with a specific sync configuration,
     * such as GitHub.</p>
     */
    inline SyncConfiguration& WithProviderType(ProviderType&& value) { SetProviderType(std::move(value)); return *this;}


    /**
     * <p>The ID of the repository link associated with a specific sync
     * configuration.</p>
     */
    inline const Aws::String& GetRepositoryLinkId() const{ return m_repositoryLinkId; }

    /**
     * <p>The ID of the repository link associated with a specific sync
     * configuration.</p>
     */
    inline bool RepositoryLinkIdHasBeenSet() const { return m_repositoryLinkIdHasBeenSet; }

    /**
     * <p>The ID of the repository link associated with a specific sync
     * configuration.</p>
     */
    inline void SetRepositoryLinkId(const Aws::String& value) { m_repositoryLinkIdHasBeenSet = true; m_repositoryLinkId = value; }

    /**
     * <p>The ID of the repository link associated with a specific sync
     * configuration.</p>
     */
    inline void SetRepositoryLinkId(Aws::String&& value) { m_repositoryLinkIdHasBeenSet = true; m_repositoryLinkId = std::move(value); }

    /**
     * <p>The ID of the repository link associated with a specific sync
     * configuration.</p>
     */
    inline void SetRepositoryLinkId(const char* value) { m_repositoryLinkIdHasBeenSet = true; m_repositoryLinkId.assign(value); }

    /**
     * <p>The ID of the repository link associated with a specific sync
     * configuration.</p>
     */
    inline SyncConfiguration& WithRepositoryLinkId(const Aws::String& value) { SetRepositoryLinkId(value); return *this;}

    /**
     * <p>The ID of the repository link associated with a specific sync
     * configuration.</p>
     */
    inline SyncConfiguration& WithRepositoryLinkId(Aws::String&& value) { SetRepositoryLinkId(std::move(value)); return *this;}

    /**
     * <p>The ID of the repository link associated with a specific sync
     * configuration.</p>
     */
    inline SyncConfiguration& WithRepositoryLinkId(const char* value) { SetRepositoryLinkId(value); return *this;}


    /**
     * <p>The name of the repository associated with a specific sync configuration.</p>
     */
    inline const Aws::String& GetRepositoryName() const{ return m_repositoryName; }

    /**
     * <p>The name of the repository associated with a specific sync configuration.</p>
     */
    inline bool RepositoryNameHasBeenSet() const { return m_repositoryNameHasBeenSet; }

    /**
     * <p>The name of the repository associated with a specific sync configuration.</p>
     */
    inline void SetRepositoryName(const Aws::String& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = value; }

    /**
     * <p>The name of the repository associated with a specific sync configuration.</p>
     */
    inline void SetRepositoryName(Aws::String&& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = std::move(value); }

    /**
     * <p>The name of the repository associated with a specific sync configuration.</p>
     */
    inline void SetRepositoryName(const char* value) { m_repositoryNameHasBeenSet = true; m_repositoryName.assign(value); }

    /**
     * <p>The name of the repository associated with a specific sync configuration.</p>
     */
    inline SyncConfiguration& WithRepositoryName(const Aws::String& value) { SetRepositoryName(value); return *this;}

    /**
     * <p>The name of the repository associated with a specific sync configuration.</p>
     */
    inline SyncConfiguration& WithRepositoryName(Aws::String&& value) { SetRepositoryName(std::move(value)); return *this;}

    /**
     * <p>The name of the repository associated with a specific sync configuration.</p>
     */
    inline SyncConfiguration& WithRepositoryName(const char* value) { SetRepositoryName(value); return *this;}


    /**
     * <p>The name of the connection resource associated with a specific sync
     * configuration.</p>
     */
    inline const Aws::String& GetResourceName() const{ return m_resourceName; }

    /**
     * <p>The name of the connection resource associated with a specific sync
     * configuration.</p>
     */
    inline bool ResourceNameHasBeenSet() const { return m_resourceNameHasBeenSet; }

    /**
     * <p>The name of the connection resource associated with a specific sync
     * configuration.</p>
     */
    inline void SetResourceName(const Aws::String& value) { m_resourceNameHasBeenSet = true; m_resourceName = value; }

    /**
     * <p>The name of the connection resource associated with a specific sync
     * configuration.</p>
     */
    inline void SetResourceName(Aws::String&& value) { m_resourceNameHasBeenSet = true; m_resourceName = std::move(value); }

    /**
     * <p>The name of the connection resource associated with a specific sync
     * configuration.</p>
     */
    inline void SetResourceName(const char* value) { m_resourceNameHasBeenSet = true; m_resourceName.assign(value); }

    /**
     * <p>The name of the connection resource associated with a specific sync
     * configuration.</p>
     */
    inline SyncConfiguration& WithResourceName(const Aws::String& value) { SetResourceName(value); return *this;}

    /**
     * <p>The name of the connection resource associated with a specific sync
     * configuration.</p>
     */
    inline SyncConfiguration& WithResourceName(Aws::String&& value) { SetResourceName(std::move(value)); return *this;}

    /**
     * <p>The name of the connection resource associated with a specific sync
     * configuration.</p>
     */
    inline SyncConfiguration& WithResourceName(const char* value) { SetResourceName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role associated with a specific
     * sync configuration.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role associated with a specific
     * sync configuration.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role associated with a specific
     * sync configuration.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role associated with a specific
     * sync configuration.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role associated with a specific
     * sync configuration.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role associated with a specific
     * sync configuration.</p>
     */
    inline SyncConfiguration& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role associated with a specific
     * sync configuration.</p>
     */
    inline SyncConfiguration& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role associated with a specific
     * sync configuration.</p>
     */
    inline SyncConfiguration& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>The type of sync for a specific sync configuration.</p>
     */
    inline const SyncConfigurationType& GetSyncType() const{ return m_syncType; }

    /**
     * <p>The type of sync for a specific sync configuration.</p>
     */
    inline bool SyncTypeHasBeenSet() const { return m_syncTypeHasBeenSet; }

    /**
     * <p>The type of sync for a specific sync configuration.</p>
     */
    inline void SetSyncType(const SyncConfigurationType& value) { m_syncTypeHasBeenSet = true; m_syncType = value; }

    /**
     * <p>The type of sync for a specific sync configuration.</p>
     */
    inline void SetSyncType(SyncConfigurationType&& value) { m_syncTypeHasBeenSet = true; m_syncType = std::move(value); }

    /**
     * <p>The type of sync for a specific sync configuration.</p>
     */
    inline SyncConfiguration& WithSyncType(const SyncConfigurationType& value) { SetSyncType(value); return *this;}

    /**
     * <p>The type of sync for a specific sync configuration.</p>
     */
    inline SyncConfiguration& WithSyncType(SyncConfigurationType&& value) { SetSyncType(std::move(value)); return *this;}


    /**
     * <p>Whether to enable or disable publishing of deployment status to source
     * providers.</p>
     */
    inline const PublishDeploymentStatus& GetPublishDeploymentStatus() const{ return m_publishDeploymentStatus; }

    /**
     * <p>Whether to enable or disable publishing of deployment status to source
     * providers.</p>
     */
    inline bool PublishDeploymentStatusHasBeenSet() const { return m_publishDeploymentStatusHasBeenSet; }

    /**
     * <p>Whether to enable or disable publishing of deployment status to source
     * providers.</p>
     */
    inline void SetPublishDeploymentStatus(const PublishDeploymentStatus& value) { m_publishDeploymentStatusHasBeenSet = true; m_publishDeploymentStatus = value; }

    /**
     * <p>Whether to enable or disable publishing of deployment status to source
     * providers.</p>
     */
    inline void SetPublishDeploymentStatus(PublishDeploymentStatus&& value) { m_publishDeploymentStatusHasBeenSet = true; m_publishDeploymentStatus = std::move(value); }

    /**
     * <p>Whether to enable or disable publishing of deployment status to source
     * providers.</p>
     */
    inline SyncConfiguration& WithPublishDeploymentStatus(const PublishDeploymentStatus& value) { SetPublishDeploymentStatus(value); return *this;}

    /**
     * <p>Whether to enable or disable publishing of deployment status to source
     * providers.</p>
     */
    inline SyncConfiguration& WithPublishDeploymentStatus(PublishDeploymentStatus&& value) { SetPublishDeploymentStatus(std::move(value)); return *this;}


    /**
     * <p>When to trigger Git sync to begin the stack update.</p>
     */
    inline const TriggerResourceUpdateOn& GetTriggerResourceUpdateOn() const{ return m_triggerResourceUpdateOn; }

    /**
     * <p>When to trigger Git sync to begin the stack update.</p>
     */
    inline bool TriggerResourceUpdateOnHasBeenSet() const { return m_triggerResourceUpdateOnHasBeenSet; }

    /**
     * <p>When to trigger Git sync to begin the stack update.</p>
     */
    inline void SetTriggerResourceUpdateOn(const TriggerResourceUpdateOn& value) { m_triggerResourceUpdateOnHasBeenSet = true; m_triggerResourceUpdateOn = value; }

    /**
     * <p>When to trigger Git sync to begin the stack update.</p>
     */
    inline void SetTriggerResourceUpdateOn(TriggerResourceUpdateOn&& value) { m_triggerResourceUpdateOnHasBeenSet = true; m_triggerResourceUpdateOn = std::move(value); }

    /**
     * <p>When to trigger Git sync to begin the stack update.</p>
     */
    inline SyncConfiguration& WithTriggerResourceUpdateOn(const TriggerResourceUpdateOn& value) { SetTriggerResourceUpdateOn(value); return *this;}

    /**
     * <p>When to trigger Git sync to begin the stack update.</p>
     */
    inline SyncConfiguration& WithTriggerResourceUpdateOn(TriggerResourceUpdateOn&& value) { SetTriggerResourceUpdateOn(std::move(value)); return *this;}

  private:

    Aws::String m_branch;
    bool m_branchHasBeenSet = false;

    Aws::String m_configFile;
    bool m_configFileHasBeenSet = false;

    Aws::String m_ownerId;
    bool m_ownerIdHasBeenSet = false;

    ProviderType m_providerType;
    bool m_providerTypeHasBeenSet = false;

    Aws::String m_repositoryLinkId;
    bool m_repositoryLinkIdHasBeenSet = false;

    Aws::String m_repositoryName;
    bool m_repositoryNameHasBeenSet = false;

    Aws::String m_resourceName;
    bool m_resourceNameHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    SyncConfigurationType m_syncType;
    bool m_syncTypeHasBeenSet = false;

    PublishDeploymentStatus m_publishDeploymentStatus;
    bool m_publishDeploymentStatusHasBeenSet = false;

    TriggerResourceUpdateOn m_triggerResourceUpdateOn;
    bool m_triggerResourceUpdateOnHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeStarconnections
} // namespace Aws
