/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>
#include <aws/codedeploy/CodeDeployRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codedeploy/model/RevisionLocation.h>
#include <aws/codedeploy/model/AutoRollbackConfiguration.h>

namespace Aws
{
namespace CodeDeploy
{
namespace Model
{

  /**
   * <p>Represents the input of a create deployment operation.</p>
   */
  class AWS_CODEDEPLOY_API CreateDeploymentRequest : public CodeDeployRequest
  {
  public:
    CreateDeploymentRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The name of an AWS CodeDeploy application associated with the applicable IAM
     * user or AWS account.</p>
     */
    inline const Aws::String& GetApplicationName() const{ return m_applicationName; }

    /**
     * <p>The name of an AWS CodeDeploy application associated with the applicable IAM
     * user or AWS account.</p>
     */
    inline void SetApplicationName(const Aws::String& value) { m_applicationNameHasBeenSet = true; m_applicationName = value; }

    /**
     * <p>The name of an AWS CodeDeploy application associated with the applicable IAM
     * user or AWS account.</p>
     */
    inline void SetApplicationName(Aws::String&& value) { m_applicationNameHasBeenSet = true; m_applicationName = value; }

    /**
     * <p>The name of an AWS CodeDeploy application associated with the applicable IAM
     * user or AWS account.</p>
     */
    inline void SetApplicationName(const char* value) { m_applicationNameHasBeenSet = true; m_applicationName.assign(value); }

    /**
     * <p>The name of an AWS CodeDeploy application associated with the applicable IAM
     * user or AWS account.</p>
     */
    inline CreateDeploymentRequest& WithApplicationName(const Aws::String& value) { SetApplicationName(value); return *this;}

    /**
     * <p>The name of an AWS CodeDeploy application associated with the applicable IAM
     * user or AWS account.</p>
     */
    inline CreateDeploymentRequest& WithApplicationName(Aws::String&& value) { SetApplicationName(value); return *this;}

    /**
     * <p>The name of an AWS CodeDeploy application associated with the applicable IAM
     * user or AWS account.</p>
     */
    inline CreateDeploymentRequest& WithApplicationName(const char* value) { SetApplicationName(value); return *this;}

    /**
     * <p>The name of the deployment group.</p>
     */
    inline const Aws::String& GetDeploymentGroupName() const{ return m_deploymentGroupName; }

    /**
     * <p>The name of the deployment group.</p>
     */
    inline void SetDeploymentGroupName(const Aws::String& value) { m_deploymentGroupNameHasBeenSet = true; m_deploymentGroupName = value; }

    /**
     * <p>The name of the deployment group.</p>
     */
    inline void SetDeploymentGroupName(Aws::String&& value) { m_deploymentGroupNameHasBeenSet = true; m_deploymentGroupName = value; }

    /**
     * <p>The name of the deployment group.</p>
     */
    inline void SetDeploymentGroupName(const char* value) { m_deploymentGroupNameHasBeenSet = true; m_deploymentGroupName.assign(value); }

    /**
     * <p>The name of the deployment group.</p>
     */
    inline CreateDeploymentRequest& WithDeploymentGroupName(const Aws::String& value) { SetDeploymentGroupName(value); return *this;}

    /**
     * <p>The name of the deployment group.</p>
     */
    inline CreateDeploymentRequest& WithDeploymentGroupName(Aws::String&& value) { SetDeploymentGroupName(value); return *this;}

    /**
     * <p>The name of the deployment group.</p>
     */
    inline CreateDeploymentRequest& WithDeploymentGroupName(const char* value) { SetDeploymentGroupName(value); return *this;}

    /**
     * <p>The type and location of the revision to deploy.</p>
     */
    inline const RevisionLocation& GetRevision() const{ return m_revision; }

    /**
     * <p>The type and location of the revision to deploy.</p>
     */
    inline void SetRevision(const RevisionLocation& value) { m_revisionHasBeenSet = true; m_revision = value; }

    /**
     * <p>The type and location of the revision to deploy.</p>
     */
    inline void SetRevision(RevisionLocation&& value) { m_revisionHasBeenSet = true; m_revision = value; }

    /**
     * <p>The type and location of the revision to deploy.</p>
     */
    inline CreateDeploymentRequest& WithRevision(const RevisionLocation& value) { SetRevision(value); return *this;}

    /**
     * <p>The type and location of the revision to deploy.</p>
     */
    inline CreateDeploymentRequest& WithRevision(RevisionLocation&& value) { SetRevision(value); return *this;}

    /**
     * <p>The name of a deployment configuration associated with the applicable IAM
     * user or AWS account.</p> <p>If not specified, the value configured in the
     * deployment group will be used as the default. If the deployment group does not
     * have a deployment configuration associated with it, then
     * CodeDeployDefault.OneAtATime will be used by default.</p>
     */
    inline const Aws::String& GetDeploymentConfigName() const{ return m_deploymentConfigName; }

    /**
     * <p>The name of a deployment configuration associated with the applicable IAM
     * user or AWS account.</p> <p>If not specified, the value configured in the
     * deployment group will be used as the default. If the deployment group does not
     * have a deployment configuration associated with it, then
     * CodeDeployDefault.OneAtATime will be used by default.</p>
     */
    inline void SetDeploymentConfigName(const Aws::String& value) { m_deploymentConfigNameHasBeenSet = true; m_deploymentConfigName = value; }

    /**
     * <p>The name of a deployment configuration associated with the applicable IAM
     * user or AWS account.</p> <p>If not specified, the value configured in the
     * deployment group will be used as the default. If the deployment group does not
     * have a deployment configuration associated with it, then
     * CodeDeployDefault.OneAtATime will be used by default.</p>
     */
    inline void SetDeploymentConfigName(Aws::String&& value) { m_deploymentConfigNameHasBeenSet = true; m_deploymentConfigName = value; }

    /**
     * <p>The name of a deployment configuration associated with the applicable IAM
     * user or AWS account.</p> <p>If not specified, the value configured in the
     * deployment group will be used as the default. If the deployment group does not
     * have a deployment configuration associated with it, then
     * CodeDeployDefault.OneAtATime will be used by default.</p>
     */
    inline void SetDeploymentConfigName(const char* value) { m_deploymentConfigNameHasBeenSet = true; m_deploymentConfigName.assign(value); }

    /**
     * <p>The name of a deployment configuration associated with the applicable IAM
     * user or AWS account.</p> <p>If not specified, the value configured in the
     * deployment group will be used as the default. If the deployment group does not
     * have a deployment configuration associated with it, then
     * CodeDeployDefault.OneAtATime will be used by default.</p>
     */
    inline CreateDeploymentRequest& WithDeploymentConfigName(const Aws::String& value) { SetDeploymentConfigName(value); return *this;}

    /**
     * <p>The name of a deployment configuration associated with the applicable IAM
     * user or AWS account.</p> <p>If not specified, the value configured in the
     * deployment group will be used as the default. If the deployment group does not
     * have a deployment configuration associated with it, then
     * CodeDeployDefault.OneAtATime will be used by default.</p>
     */
    inline CreateDeploymentRequest& WithDeploymentConfigName(Aws::String&& value) { SetDeploymentConfigName(value); return *this;}

    /**
     * <p>The name of a deployment configuration associated with the applicable IAM
     * user or AWS account.</p> <p>If not specified, the value configured in the
     * deployment group will be used as the default. If the deployment group does not
     * have a deployment configuration associated with it, then
     * CodeDeployDefault.OneAtATime will be used by default.</p>
     */
    inline CreateDeploymentRequest& WithDeploymentConfigName(const char* value) { SetDeploymentConfigName(value); return *this;}

    /**
     * <p>A comment about the deployment.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A comment about the deployment.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A comment about the deployment.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A comment about the deployment.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A comment about the deployment.</p>
     */
    inline CreateDeploymentRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A comment about the deployment.</p>
     */
    inline CreateDeploymentRequest& WithDescription(Aws::String&& value) { SetDescription(value); return *this;}

    /**
     * <p>A comment about the deployment.</p>
     */
    inline CreateDeploymentRequest& WithDescription(const char* value) { SetDescription(value); return *this;}

    /**
     * <p>If set to true, then if the deployment causes the ApplicationStop deployment
     * lifecycle event to an instance to fail, the deployment to that instance will not
     * be considered to have failed at that point and will continue on to the
     * BeforeInstall deployment lifecycle event.</p> <p>If set to false or not
     * specified, then if the deployment causes the ApplicationStop deployment
     * lifecycle event to fail to an instance, the deployment to that instance will
     * stop, and the deployment to that instance will be considered to have failed.</p>
     */
    inline bool GetIgnoreApplicationStopFailures() const{ return m_ignoreApplicationStopFailures; }

    /**
     * <p>If set to true, then if the deployment causes the ApplicationStop deployment
     * lifecycle event to an instance to fail, the deployment to that instance will not
     * be considered to have failed at that point and will continue on to the
     * BeforeInstall deployment lifecycle event.</p> <p>If set to false or not
     * specified, then if the deployment causes the ApplicationStop deployment
     * lifecycle event to fail to an instance, the deployment to that instance will
     * stop, and the deployment to that instance will be considered to have failed.</p>
     */
    inline void SetIgnoreApplicationStopFailures(bool value) { m_ignoreApplicationStopFailuresHasBeenSet = true; m_ignoreApplicationStopFailures = value; }

    /**
     * <p>If set to true, then if the deployment causes the ApplicationStop deployment
     * lifecycle event to an instance to fail, the deployment to that instance will not
     * be considered to have failed at that point and will continue on to the
     * BeforeInstall deployment lifecycle event.</p> <p>If set to false or not
     * specified, then if the deployment causes the ApplicationStop deployment
     * lifecycle event to fail to an instance, the deployment to that instance will
     * stop, and the deployment to that instance will be considered to have failed.</p>
     */
    inline CreateDeploymentRequest& WithIgnoreApplicationStopFailures(bool value) { SetIgnoreApplicationStopFailures(value); return *this;}

    /**
     * <p>Configuration information for an automatic rollback that is added when a
     * deployment is created.</p>
     */
    inline const AutoRollbackConfiguration& GetAutoRollbackConfiguration() const{ return m_autoRollbackConfiguration; }

    /**
     * <p>Configuration information for an automatic rollback that is added when a
     * deployment is created.</p>
     */
    inline void SetAutoRollbackConfiguration(const AutoRollbackConfiguration& value) { m_autoRollbackConfigurationHasBeenSet = true; m_autoRollbackConfiguration = value; }

    /**
     * <p>Configuration information for an automatic rollback that is added when a
     * deployment is created.</p>
     */
    inline void SetAutoRollbackConfiguration(AutoRollbackConfiguration&& value) { m_autoRollbackConfigurationHasBeenSet = true; m_autoRollbackConfiguration = value; }

    /**
     * <p>Configuration information for an automatic rollback that is added when a
     * deployment is created.</p>
     */
    inline CreateDeploymentRequest& WithAutoRollbackConfiguration(const AutoRollbackConfiguration& value) { SetAutoRollbackConfiguration(value); return *this;}

    /**
     * <p>Configuration information for an automatic rollback that is added when a
     * deployment is created.</p>
     */
    inline CreateDeploymentRequest& WithAutoRollbackConfiguration(AutoRollbackConfiguration&& value) { SetAutoRollbackConfiguration(value); return *this;}

    /**
     * <p>Indicates whether to deploy to all instances or only to instances that are
     * not running the latest application revision.</p>
     */
    inline bool GetUpdateOutdatedInstancesOnly() const{ return m_updateOutdatedInstancesOnly; }

    /**
     * <p>Indicates whether to deploy to all instances or only to instances that are
     * not running the latest application revision.</p>
     */
    inline void SetUpdateOutdatedInstancesOnly(bool value) { m_updateOutdatedInstancesOnlyHasBeenSet = true; m_updateOutdatedInstancesOnly = value; }

    /**
     * <p>Indicates whether to deploy to all instances or only to instances that are
     * not running the latest application revision.</p>
     */
    inline CreateDeploymentRequest& WithUpdateOutdatedInstancesOnly(bool value) { SetUpdateOutdatedInstancesOnly(value); return *this;}

  private:
    Aws::String m_applicationName;
    bool m_applicationNameHasBeenSet;
    Aws::String m_deploymentGroupName;
    bool m_deploymentGroupNameHasBeenSet;
    RevisionLocation m_revision;
    bool m_revisionHasBeenSet;
    Aws::String m_deploymentConfigName;
    bool m_deploymentConfigNameHasBeenSet;
    Aws::String m_description;
    bool m_descriptionHasBeenSet;
    bool m_ignoreApplicationStopFailures;
    bool m_ignoreApplicationStopFailuresHasBeenSet;
    AutoRollbackConfiguration m_autoRollbackConfiguration;
    bool m_autoRollbackConfigurationHasBeenSet;
    bool m_updateOutdatedInstancesOnly;
    bool m_updateOutdatedInstancesOnlyHasBeenSet;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
