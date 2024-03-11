/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codestar-connections/CodeStarconnections_EXPORTS.h>
#include <aws/codestar-connections/CodeStarconnectionsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codestar-connections/model/SyncConfigurationType.h>
#include <aws/codestar-connections/model/PublishDeploymentStatus.h>
#include <aws/codestar-connections/model/TriggerResourceUpdateOn.h>
#include <utility>

namespace Aws
{
namespace CodeStarconnections
{
namespace Model
{

  /**
   */
  class CreateSyncConfigurationRequest : public CodeStarconnectionsRequest
  {
  public:
    AWS_CODESTARCONNECTIONS_API CreateSyncConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateSyncConfiguration"; }

    AWS_CODESTARCONNECTIONS_API Aws::String SerializePayload() const override;

    AWS_CODESTARCONNECTIONS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The branch in the repository from which changes will be synced.</p>
     */
    inline const Aws::String& GetBranch() const{ return m_branch; }

    /**
     * <p>The branch in the repository from which changes will be synced.</p>
     */
    inline bool BranchHasBeenSet() const { return m_branchHasBeenSet; }

    /**
     * <p>The branch in the repository from which changes will be synced.</p>
     */
    inline void SetBranch(const Aws::String& value) { m_branchHasBeenSet = true; m_branch = value; }

    /**
     * <p>The branch in the repository from which changes will be synced.</p>
     */
    inline void SetBranch(Aws::String&& value) { m_branchHasBeenSet = true; m_branch = std::move(value); }

    /**
     * <p>The branch in the repository from which changes will be synced.</p>
     */
    inline void SetBranch(const char* value) { m_branchHasBeenSet = true; m_branch.assign(value); }

    /**
     * <p>The branch in the repository from which changes will be synced.</p>
     */
    inline CreateSyncConfigurationRequest& WithBranch(const Aws::String& value) { SetBranch(value); return *this;}

    /**
     * <p>The branch in the repository from which changes will be synced.</p>
     */
    inline CreateSyncConfigurationRequest& WithBranch(Aws::String&& value) { SetBranch(std::move(value)); return *this;}

    /**
     * <p>The branch in the repository from which changes will be synced.</p>
     */
    inline CreateSyncConfigurationRequest& WithBranch(const char* value) { SetBranch(value); return *this;}


    /**
     * <p>The file name of the configuration file that manages syncing between the
     * connection and the repository. This configuration file is stored in the
     * repository.</p>
     */
    inline const Aws::String& GetConfigFile() const{ return m_configFile; }

    /**
     * <p>The file name of the configuration file that manages syncing between the
     * connection and the repository. This configuration file is stored in the
     * repository.</p>
     */
    inline bool ConfigFileHasBeenSet() const { return m_configFileHasBeenSet; }

    /**
     * <p>The file name of the configuration file that manages syncing between the
     * connection and the repository. This configuration file is stored in the
     * repository.</p>
     */
    inline void SetConfigFile(const Aws::String& value) { m_configFileHasBeenSet = true; m_configFile = value; }

    /**
     * <p>The file name of the configuration file that manages syncing between the
     * connection and the repository. This configuration file is stored in the
     * repository.</p>
     */
    inline void SetConfigFile(Aws::String&& value) { m_configFileHasBeenSet = true; m_configFile = std::move(value); }

    /**
     * <p>The file name of the configuration file that manages syncing between the
     * connection and the repository. This configuration file is stored in the
     * repository.</p>
     */
    inline void SetConfigFile(const char* value) { m_configFileHasBeenSet = true; m_configFile.assign(value); }

    /**
     * <p>The file name of the configuration file that manages syncing between the
     * connection and the repository. This configuration file is stored in the
     * repository.</p>
     */
    inline CreateSyncConfigurationRequest& WithConfigFile(const Aws::String& value) { SetConfigFile(value); return *this;}

    /**
     * <p>The file name of the configuration file that manages syncing between the
     * connection and the repository. This configuration file is stored in the
     * repository.</p>
     */
    inline CreateSyncConfigurationRequest& WithConfigFile(Aws::String&& value) { SetConfigFile(std::move(value)); return *this;}

    /**
     * <p>The file name of the configuration file that manages syncing between the
     * connection and the repository. This configuration file is stored in the
     * repository.</p>
     */
    inline CreateSyncConfigurationRequest& WithConfigFile(const char* value) { SetConfigFile(value); return *this;}


    /**
     * <p>The ID of the repository link created for the connection. A repository link
     * allows Git sync to monitor and sync changes to files in a specified Git
     * repository.</p>
     */
    inline const Aws::String& GetRepositoryLinkId() const{ return m_repositoryLinkId; }

    /**
     * <p>The ID of the repository link created for the connection. A repository link
     * allows Git sync to monitor and sync changes to files in a specified Git
     * repository.</p>
     */
    inline bool RepositoryLinkIdHasBeenSet() const { return m_repositoryLinkIdHasBeenSet; }

    /**
     * <p>The ID of the repository link created for the connection. A repository link
     * allows Git sync to monitor and sync changes to files in a specified Git
     * repository.</p>
     */
    inline void SetRepositoryLinkId(const Aws::String& value) { m_repositoryLinkIdHasBeenSet = true; m_repositoryLinkId = value; }

    /**
     * <p>The ID of the repository link created for the connection. A repository link
     * allows Git sync to monitor and sync changes to files in a specified Git
     * repository.</p>
     */
    inline void SetRepositoryLinkId(Aws::String&& value) { m_repositoryLinkIdHasBeenSet = true; m_repositoryLinkId = std::move(value); }

    /**
     * <p>The ID of the repository link created for the connection. A repository link
     * allows Git sync to monitor and sync changes to files in a specified Git
     * repository.</p>
     */
    inline void SetRepositoryLinkId(const char* value) { m_repositoryLinkIdHasBeenSet = true; m_repositoryLinkId.assign(value); }

    /**
     * <p>The ID of the repository link created for the connection. A repository link
     * allows Git sync to monitor and sync changes to files in a specified Git
     * repository.</p>
     */
    inline CreateSyncConfigurationRequest& WithRepositoryLinkId(const Aws::String& value) { SetRepositoryLinkId(value); return *this;}

    /**
     * <p>The ID of the repository link created for the connection. A repository link
     * allows Git sync to monitor and sync changes to files in a specified Git
     * repository.</p>
     */
    inline CreateSyncConfigurationRequest& WithRepositoryLinkId(Aws::String&& value) { SetRepositoryLinkId(std::move(value)); return *this;}

    /**
     * <p>The ID of the repository link created for the connection. A repository link
     * allows Git sync to monitor and sync changes to files in a specified Git
     * repository.</p>
     */
    inline CreateSyncConfigurationRequest& WithRepositoryLinkId(const char* value) { SetRepositoryLinkId(value); return *this;}


    /**
     * <p>The name of the Amazon Web Services resource (for example, a CloudFormation
     * stack in the case of CFN_STACK_SYNC) that will be synchronized from the linked
     * repository.</p>
     */
    inline const Aws::String& GetResourceName() const{ return m_resourceName; }

    /**
     * <p>The name of the Amazon Web Services resource (for example, a CloudFormation
     * stack in the case of CFN_STACK_SYNC) that will be synchronized from the linked
     * repository.</p>
     */
    inline bool ResourceNameHasBeenSet() const { return m_resourceNameHasBeenSet; }

    /**
     * <p>The name of the Amazon Web Services resource (for example, a CloudFormation
     * stack in the case of CFN_STACK_SYNC) that will be synchronized from the linked
     * repository.</p>
     */
    inline void SetResourceName(const Aws::String& value) { m_resourceNameHasBeenSet = true; m_resourceName = value; }

    /**
     * <p>The name of the Amazon Web Services resource (for example, a CloudFormation
     * stack in the case of CFN_STACK_SYNC) that will be synchronized from the linked
     * repository.</p>
     */
    inline void SetResourceName(Aws::String&& value) { m_resourceNameHasBeenSet = true; m_resourceName = std::move(value); }

    /**
     * <p>The name of the Amazon Web Services resource (for example, a CloudFormation
     * stack in the case of CFN_STACK_SYNC) that will be synchronized from the linked
     * repository.</p>
     */
    inline void SetResourceName(const char* value) { m_resourceNameHasBeenSet = true; m_resourceName.assign(value); }

    /**
     * <p>The name of the Amazon Web Services resource (for example, a CloudFormation
     * stack in the case of CFN_STACK_SYNC) that will be synchronized from the linked
     * repository.</p>
     */
    inline CreateSyncConfigurationRequest& WithResourceName(const Aws::String& value) { SetResourceName(value); return *this;}

    /**
     * <p>The name of the Amazon Web Services resource (for example, a CloudFormation
     * stack in the case of CFN_STACK_SYNC) that will be synchronized from the linked
     * repository.</p>
     */
    inline CreateSyncConfigurationRequest& WithResourceName(Aws::String&& value) { SetResourceName(std::move(value)); return *this;}

    /**
     * <p>The name of the Amazon Web Services resource (for example, a CloudFormation
     * stack in the case of CFN_STACK_SYNC) that will be synchronized from the linked
     * repository.</p>
     */
    inline CreateSyncConfigurationRequest& WithResourceName(const char* value) { SetResourceName(value); return *this;}


    /**
     * <p>The ARN of the IAM role that grants permission for Amazon Web Services to use
     * Git sync to update a given Amazon Web Services resource on your behalf.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The ARN of the IAM role that grants permission for Amazon Web Services to use
     * Git sync to update a given Amazon Web Services resource on your behalf.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The ARN of the IAM role that grants permission for Amazon Web Services to use
     * Git sync to update a given Amazon Web Services resource on your behalf.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The ARN of the IAM role that grants permission for Amazon Web Services to use
     * Git sync to update a given Amazon Web Services resource on your behalf.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The ARN of the IAM role that grants permission for Amazon Web Services to use
     * Git sync to update a given Amazon Web Services resource on your behalf.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The ARN of the IAM role that grants permission for Amazon Web Services to use
     * Git sync to update a given Amazon Web Services resource on your behalf.</p>
     */
    inline CreateSyncConfigurationRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The ARN of the IAM role that grants permission for Amazon Web Services to use
     * Git sync to update a given Amazon Web Services resource on your behalf.</p>
     */
    inline CreateSyncConfigurationRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the IAM role that grants permission for Amazon Web Services to use
     * Git sync to update a given Amazon Web Services resource on your behalf.</p>
     */
    inline CreateSyncConfigurationRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>The type of sync configuration.</p>
     */
    inline const SyncConfigurationType& GetSyncType() const{ return m_syncType; }

    /**
     * <p>The type of sync configuration.</p>
     */
    inline bool SyncTypeHasBeenSet() const { return m_syncTypeHasBeenSet; }

    /**
     * <p>The type of sync configuration.</p>
     */
    inline void SetSyncType(const SyncConfigurationType& value) { m_syncTypeHasBeenSet = true; m_syncType = value; }

    /**
     * <p>The type of sync configuration.</p>
     */
    inline void SetSyncType(SyncConfigurationType&& value) { m_syncTypeHasBeenSet = true; m_syncType = std::move(value); }

    /**
     * <p>The type of sync configuration.</p>
     */
    inline CreateSyncConfigurationRequest& WithSyncType(const SyncConfigurationType& value) { SetSyncType(value); return *this;}

    /**
     * <p>The type of sync configuration.</p>
     */
    inline CreateSyncConfigurationRequest& WithSyncType(SyncConfigurationType&& value) { SetSyncType(std::move(value)); return *this;}


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
    inline CreateSyncConfigurationRequest& WithPublishDeploymentStatus(const PublishDeploymentStatus& value) { SetPublishDeploymentStatus(value); return *this;}

    /**
     * <p>Whether to enable or disable publishing of deployment status to source
     * providers.</p>
     */
    inline CreateSyncConfigurationRequest& WithPublishDeploymentStatus(PublishDeploymentStatus&& value) { SetPublishDeploymentStatus(std::move(value)); return *this;}


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
    inline CreateSyncConfigurationRequest& WithTriggerResourceUpdateOn(const TriggerResourceUpdateOn& value) { SetTriggerResourceUpdateOn(value); return *this;}

    /**
     * <p>When to trigger Git sync to begin the stack update.</p>
     */
    inline CreateSyncConfigurationRequest& WithTriggerResourceUpdateOn(TriggerResourceUpdateOn&& value) { SetTriggerResourceUpdateOn(std::move(value)); return *this;}

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
