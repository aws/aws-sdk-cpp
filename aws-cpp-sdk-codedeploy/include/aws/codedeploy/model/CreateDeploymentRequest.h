/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/codedeploy/model/TargetInstances.h>
#include <aws/codedeploy/model/AutoRollbackConfiguration.h>
#include <aws/codedeploy/model/FileExistsBehavior.h>
#include <utility>

namespace Aws
{
namespace CodeDeploy
{
namespace Model
{

  /**
   * <p>Represents the input of a CreateDeployment operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/CreateDeploymentInput">AWS
   * API Reference</a></p>
   */
  class AWS_CODEDEPLOY_API CreateDeploymentRequest : public CodeDeployRequest
  {
  public:
    CreateDeploymentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDeployment"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of an AWS CodeDeploy application associated with the IAM user or AWS
     * account.</p>
     */
    inline const Aws::String& GetApplicationName() const{ return m_applicationName; }

    /**
     * <p>The name of an AWS CodeDeploy application associated with the IAM user or AWS
     * account.</p>
     */
    inline bool ApplicationNameHasBeenSet() const { return m_applicationNameHasBeenSet; }

    /**
     * <p>The name of an AWS CodeDeploy application associated with the IAM user or AWS
     * account.</p>
     */
    inline void SetApplicationName(const Aws::String& value) { m_applicationNameHasBeenSet = true; m_applicationName = value; }

    /**
     * <p>The name of an AWS CodeDeploy application associated with the IAM user or AWS
     * account.</p>
     */
    inline void SetApplicationName(Aws::String&& value) { m_applicationNameHasBeenSet = true; m_applicationName = std::move(value); }

    /**
     * <p>The name of an AWS CodeDeploy application associated with the IAM user or AWS
     * account.</p>
     */
    inline void SetApplicationName(const char* value) { m_applicationNameHasBeenSet = true; m_applicationName.assign(value); }

    /**
     * <p>The name of an AWS CodeDeploy application associated with the IAM user or AWS
     * account.</p>
     */
    inline CreateDeploymentRequest& WithApplicationName(const Aws::String& value) { SetApplicationName(value); return *this;}

    /**
     * <p>The name of an AWS CodeDeploy application associated with the IAM user or AWS
     * account.</p>
     */
    inline CreateDeploymentRequest& WithApplicationName(Aws::String&& value) { SetApplicationName(std::move(value)); return *this;}

    /**
     * <p>The name of an AWS CodeDeploy application associated with the IAM user or AWS
     * account.</p>
     */
    inline CreateDeploymentRequest& WithApplicationName(const char* value) { SetApplicationName(value); return *this;}


    /**
     * <p>The name of the deployment group.</p>
     */
    inline const Aws::String& GetDeploymentGroupName() const{ return m_deploymentGroupName; }

    /**
     * <p>The name of the deployment group.</p>
     */
    inline bool DeploymentGroupNameHasBeenSet() const { return m_deploymentGroupNameHasBeenSet; }

    /**
     * <p>The name of the deployment group.</p>
     */
    inline void SetDeploymentGroupName(const Aws::String& value) { m_deploymentGroupNameHasBeenSet = true; m_deploymentGroupName = value; }

    /**
     * <p>The name of the deployment group.</p>
     */
    inline void SetDeploymentGroupName(Aws::String&& value) { m_deploymentGroupNameHasBeenSet = true; m_deploymentGroupName = std::move(value); }

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
    inline CreateDeploymentRequest& WithDeploymentGroupName(Aws::String&& value) { SetDeploymentGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the deployment group.</p>
     */
    inline CreateDeploymentRequest& WithDeploymentGroupName(const char* value) { SetDeploymentGroupName(value); return *this;}


    /**
     * <p> The type and location of the revision to deploy. </p>
     */
    inline const RevisionLocation& GetRevision() const{ return m_revision; }

    /**
     * <p> The type and location of the revision to deploy. </p>
     */
    inline bool RevisionHasBeenSet() const { return m_revisionHasBeenSet; }

    /**
     * <p> The type and location of the revision to deploy. </p>
     */
    inline void SetRevision(const RevisionLocation& value) { m_revisionHasBeenSet = true; m_revision = value; }

    /**
     * <p> The type and location of the revision to deploy. </p>
     */
    inline void SetRevision(RevisionLocation&& value) { m_revisionHasBeenSet = true; m_revision = std::move(value); }

    /**
     * <p> The type and location of the revision to deploy. </p>
     */
    inline CreateDeploymentRequest& WithRevision(const RevisionLocation& value) { SetRevision(value); return *this;}

    /**
     * <p> The type and location of the revision to deploy. </p>
     */
    inline CreateDeploymentRequest& WithRevision(RevisionLocation&& value) { SetRevision(std::move(value)); return *this;}


    /**
     * <p>The name of a deployment configuration associated with the IAM user or AWS
     * account.</p> <p>If not specified, the value configured in the deployment group
     * is used as the default. If the deployment group does not have a deployment
     * configuration associated with it, CodeDeployDefault.OneAtATime is used by
     * default.</p>
     */
    inline const Aws::String& GetDeploymentConfigName() const{ return m_deploymentConfigName; }

    /**
     * <p>The name of a deployment configuration associated with the IAM user or AWS
     * account.</p> <p>If not specified, the value configured in the deployment group
     * is used as the default. If the deployment group does not have a deployment
     * configuration associated with it, CodeDeployDefault.OneAtATime is used by
     * default.</p>
     */
    inline bool DeploymentConfigNameHasBeenSet() const { return m_deploymentConfigNameHasBeenSet; }

    /**
     * <p>The name of a deployment configuration associated with the IAM user or AWS
     * account.</p> <p>If not specified, the value configured in the deployment group
     * is used as the default. If the deployment group does not have a deployment
     * configuration associated with it, CodeDeployDefault.OneAtATime is used by
     * default.</p>
     */
    inline void SetDeploymentConfigName(const Aws::String& value) { m_deploymentConfigNameHasBeenSet = true; m_deploymentConfigName = value; }

    /**
     * <p>The name of a deployment configuration associated with the IAM user or AWS
     * account.</p> <p>If not specified, the value configured in the deployment group
     * is used as the default. If the deployment group does not have a deployment
     * configuration associated with it, CodeDeployDefault.OneAtATime is used by
     * default.</p>
     */
    inline void SetDeploymentConfigName(Aws::String&& value) { m_deploymentConfigNameHasBeenSet = true; m_deploymentConfigName = std::move(value); }

    /**
     * <p>The name of a deployment configuration associated with the IAM user or AWS
     * account.</p> <p>If not specified, the value configured in the deployment group
     * is used as the default. If the deployment group does not have a deployment
     * configuration associated with it, CodeDeployDefault.OneAtATime is used by
     * default.</p>
     */
    inline void SetDeploymentConfigName(const char* value) { m_deploymentConfigNameHasBeenSet = true; m_deploymentConfigName.assign(value); }

    /**
     * <p>The name of a deployment configuration associated with the IAM user or AWS
     * account.</p> <p>If not specified, the value configured in the deployment group
     * is used as the default. If the deployment group does not have a deployment
     * configuration associated with it, CodeDeployDefault.OneAtATime is used by
     * default.</p>
     */
    inline CreateDeploymentRequest& WithDeploymentConfigName(const Aws::String& value) { SetDeploymentConfigName(value); return *this;}

    /**
     * <p>The name of a deployment configuration associated with the IAM user or AWS
     * account.</p> <p>If not specified, the value configured in the deployment group
     * is used as the default. If the deployment group does not have a deployment
     * configuration associated with it, CodeDeployDefault.OneAtATime is used by
     * default.</p>
     */
    inline CreateDeploymentRequest& WithDeploymentConfigName(Aws::String&& value) { SetDeploymentConfigName(std::move(value)); return *this;}

    /**
     * <p>The name of a deployment configuration associated with the IAM user or AWS
     * account.</p> <p>If not specified, the value configured in the deployment group
     * is used as the default. If the deployment group does not have a deployment
     * configuration associated with it, CodeDeployDefault.OneAtATime is used by
     * default.</p>
     */
    inline CreateDeploymentRequest& WithDeploymentConfigName(const char* value) { SetDeploymentConfigName(value); return *this;}


    /**
     * <p>A comment about the deployment.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A comment about the deployment.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A comment about the deployment.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A comment about the deployment.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

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
    inline CreateDeploymentRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A comment about the deployment.</p>
     */
    inline CreateDeploymentRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p> If true, then if an ApplicationStop, BeforeBlockTraffic, or
     * AfterBlockTraffic deployment lifecycle event to an instance fails, then the
     * deployment continues to the next deployment lifecycle event. For example, if
     * ApplicationStop fails, the deployment continues with DownloadBundle. If
     * BeforeBlockTraffic fails, the deployment continues with BlockTraffic. If
     * AfterBlockTraffic fails, the deployment continues with ApplicationStop. </p> <p>
     * If false or not specified, then if a lifecycle event fails during a deployment
     * to an instance, that deployment fails. If deployment to that instance is part of
     * an overall deployment and the number of healthy hosts is not less than the
     * minimum number of healthy hosts, then a deployment to the next instance is
     * attempted. </p> <p> During a deployment, the AWS CodeDeploy agent runs the
     * scripts specified for ApplicationStop, BeforeBlockTraffic, and AfterBlockTraffic
     * in the AppSpec file from the previous successful deployment. (All other scripts
     * are run from the AppSpec file in the current deployment.) If one of these
     * scripts contains an error and does not run successfully, the deployment can
     * fail. </p> <p> If the cause of the failure is a script from the last successful
     * deployment that will never run successfully, create a new deployment and use
     * <code>ignoreApplicationStopFailures</code> to specify that the ApplicationStop,
     * BeforeBlockTraffic, and AfterBlockTraffic failures should be ignored. </p>
     */
    inline bool GetIgnoreApplicationStopFailures() const{ return m_ignoreApplicationStopFailures; }

    /**
     * <p> If true, then if an ApplicationStop, BeforeBlockTraffic, or
     * AfterBlockTraffic deployment lifecycle event to an instance fails, then the
     * deployment continues to the next deployment lifecycle event. For example, if
     * ApplicationStop fails, the deployment continues with DownloadBundle. If
     * BeforeBlockTraffic fails, the deployment continues with BlockTraffic. If
     * AfterBlockTraffic fails, the deployment continues with ApplicationStop. </p> <p>
     * If false or not specified, then if a lifecycle event fails during a deployment
     * to an instance, that deployment fails. If deployment to that instance is part of
     * an overall deployment and the number of healthy hosts is not less than the
     * minimum number of healthy hosts, then a deployment to the next instance is
     * attempted. </p> <p> During a deployment, the AWS CodeDeploy agent runs the
     * scripts specified for ApplicationStop, BeforeBlockTraffic, and AfterBlockTraffic
     * in the AppSpec file from the previous successful deployment. (All other scripts
     * are run from the AppSpec file in the current deployment.) If one of these
     * scripts contains an error and does not run successfully, the deployment can
     * fail. </p> <p> If the cause of the failure is a script from the last successful
     * deployment that will never run successfully, create a new deployment and use
     * <code>ignoreApplicationStopFailures</code> to specify that the ApplicationStop,
     * BeforeBlockTraffic, and AfterBlockTraffic failures should be ignored. </p>
     */
    inline bool IgnoreApplicationStopFailuresHasBeenSet() const { return m_ignoreApplicationStopFailuresHasBeenSet; }

    /**
     * <p> If true, then if an ApplicationStop, BeforeBlockTraffic, or
     * AfterBlockTraffic deployment lifecycle event to an instance fails, then the
     * deployment continues to the next deployment lifecycle event. For example, if
     * ApplicationStop fails, the deployment continues with DownloadBundle. If
     * BeforeBlockTraffic fails, the deployment continues with BlockTraffic. If
     * AfterBlockTraffic fails, the deployment continues with ApplicationStop. </p> <p>
     * If false or not specified, then if a lifecycle event fails during a deployment
     * to an instance, that deployment fails. If deployment to that instance is part of
     * an overall deployment and the number of healthy hosts is not less than the
     * minimum number of healthy hosts, then a deployment to the next instance is
     * attempted. </p> <p> During a deployment, the AWS CodeDeploy agent runs the
     * scripts specified for ApplicationStop, BeforeBlockTraffic, and AfterBlockTraffic
     * in the AppSpec file from the previous successful deployment. (All other scripts
     * are run from the AppSpec file in the current deployment.) If one of these
     * scripts contains an error and does not run successfully, the deployment can
     * fail. </p> <p> If the cause of the failure is a script from the last successful
     * deployment that will never run successfully, create a new deployment and use
     * <code>ignoreApplicationStopFailures</code> to specify that the ApplicationStop,
     * BeforeBlockTraffic, and AfterBlockTraffic failures should be ignored. </p>
     */
    inline void SetIgnoreApplicationStopFailures(bool value) { m_ignoreApplicationStopFailuresHasBeenSet = true; m_ignoreApplicationStopFailures = value; }

    /**
     * <p> If true, then if an ApplicationStop, BeforeBlockTraffic, or
     * AfterBlockTraffic deployment lifecycle event to an instance fails, then the
     * deployment continues to the next deployment lifecycle event. For example, if
     * ApplicationStop fails, the deployment continues with DownloadBundle. If
     * BeforeBlockTraffic fails, the deployment continues with BlockTraffic. If
     * AfterBlockTraffic fails, the deployment continues with ApplicationStop. </p> <p>
     * If false or not specified, then if a lifecycle event fails during a deployment
     * to an instance, that deployment fails. If deployment to that instance is part of
     * an overall deployment and the number of healthy hosts is not less than the
     * minimum number of healthy hosts, then a deployment to the next instance is
     * attempted. </p> <p> During a deployment, the AWS CodeDeploy agent runs the
     * scripts specified for ApplicationStop, BeforeBlockTraffic, and AfterBlockTraffic
     * in the AppSpec file from the previous successful deployment. (All other scripts
     * are run from the AppSpec file in the current deployment.) If one of these
     * scripts contains an error and does not run successfully, the deployment can
     * fail. </p> <p> If the cause of the failure is a script from the last successful
     * deployment that will never run successfully, create a new deployment and use
     * <code>ignoreApplicationStopFailures</code> to specify that the ApplicationStop,
     * BeforeBlockTraffic, and AfterBlockTraffic failures should be ignored. </p>
     */
    inline CreateDeploymentRequest& WithIgnoreApplicationStopFailures(bool value) { SetIgnoreApplicationStopFailures(value); return *this;}


    /**
     * <p> Information about the instances that belong to the replacement environment
     * in a blue/green deployment. </p>
     */
    inline const TargetInstances& GetTargetInstances() const{ return m_targetInstances; }

    /**
     * <p> Information about the instances that belong to the replacement environment
     * in a blue/green deployment. </p>
     */
    inline bool TargetInstancesHasBeenSet() const { return m_targetInstancesHasBeenSet; }

    /**
     * <p> Information about the instances that belong to the replacement environment
     * in a blue/green deployment. </p>
     */
    inline void SetTargetInstances(const TargetInstances& value) { m_targetInstancesHasBeenSet = true; m_targetInstances = value; }

    /**
     * <p> Information about the instances that belong to the replacement environment
     * in a blue/green deployment. </p>
     */
    inline void SetTargetInstances(TargetInstances&& value) { m_targetInstancesHasBeenSet = true; m_targetInstances = std::move(value); }

    /**
     * <p> Information about the instances that belong to the replacement environment
     * in a blue/green deployment. </p>
     */
    inline CreateDeploymentRequest& WithTargetInstances(const TargetInstances& value) { SetTargetInstances(value); return *this;}

    /**
     * <p> Information about the instances that belong to the replacement environment
     * in a blue/green deployment. </p>
     */
    inline CreateDeploymentRequest& WithTargetInstances(TargetInstances&& value) { SetTargetInstances(std::move(value)); return *this;}


    /**
     * <p>Configuration information for an automatic rollback that is added when a
     * deployment is created.</p>
     */
    inline const AutoRollbackConfiguration& GetAutoRollbackConfiguration() const{ return m_autoRollbackConfiguration; }

    /**
     * <p>Configuration information for an automatic rollback that is added when a
     * deployment is created.</p>
     */
    inline bool AutoRollbackConfigurationHasBeenSet() const { return m_autoRollbackConfigurationHasBeenSet; }

    /**
     * <p>Configuration information for an automatic rollback that is added when a
     * deployment is created.</p>
     */
    inline void SetAutoRollbackConfiguration(const AutoRollbackConfiguration& value) { m_autoRollbackConfigurationHasBeenSet = true; m_autoRollbackConfiguration = value; }

    /**
     * <p>Configuration information for an automatic rollback that is added when a
     * deployment is created.</p>
     */
    inline void SetAutoRollbackConfiguration(AutoRollbackConfiguration&& value) { m_autoRollbackConfigurationHasBeenSet = true; m_autoRollbackConfiguration = std::move(value); }

    /**
     * <p>Configuration information for an automatic rollback that is added when a
     * deployment is created.</p>
     */
    inline CreateDeploymentRequest& WithAutoRollbackConfiguration(const AutoRollbackConfiguration& value) { SetAutoRollbackConfiguration(value); return *this;}

    /**
     * <p>Configuration information for an automatic rollback that is added when a
     * deployment is created.</p>
     */
    inline CreateDeploymentRequest& WithAutoRollbackConfiguration(AutoRollbackConfiguration&& value) { SetAutoRollbackConfiguration(std::move(value)); return *this;}


    /**
     * <p> Indicates whether to deploy to all instances or only to instances that are
     * not running the latest application revision. </p>
     */
    inline bool GetUpdateOutdatedInstancesOnly() const{ return m_updateOutdatedInstancesOnly; }

    /**
     * <p> Indicates whether to deploy to all instances or only to instances that are
     * not running the latest application revision. </p>
     */
    inline bool UpdateOutdatedInstancesOnlyHasBeenSet() const { return m_updateOutdatedInstancesOnlyHasBeenSet; }

    /**
     * <p> Indicates whether to deploy to all instances or only to instances that are
     * not running the latest application revision. </p>
     */
    inline void SetUpdateOutdatedInstancesOnly(bool value) { m_updateOutdatedInstancesOnlyHasBeenSet = true; m_updateOutdatedInstancesOnly = value; }

    /**
     * <p> Indicates whether to deploy to all instances or only to instances that are
     * not running the latest application revision. </p>
     */
    inline CreateDeploymentRequest& WithUpdateOutdatedInstancesOnly(bool value) { SetUpdateOutdatedInstancesOnly(value); return *this;}


    /**
     * <p>Information about how AWS CodeDeploy handles files that already exist in a
     * deployment target location but weren't part of the previous successful
     * deployment.</p> <p>The fileExistsBehavior parameter takes any of the following
     * values:</p> <ul> <li> <p>DISALLOW: The deployment fails. This is also the
     * default behavior if no option is specified.</p> </li> <li> <p>OVERWRITE: The
     * version of the file from the application revision currently being deployed
     * replaces the version already on the instance.</p> </li> <li> <p>RETAIN: The
     * version of the file already on the instance is kept and used as part of the new
     * deployment.</p> </li> </ul>
     */
    inline const FileExistsBehavior& GetFileExistsBehavior() const{ return m_fileExistsBehavior; }

    /**
     * <p>Information about how AWS CodeDeploy handles files that already exist in a
     * deployment target location but weren't part of the previous successful
     * deployment.</p> <p>The fileExistsBehavior parameter takes any of the following
     * values:</p> <ul> <li> <p>DISALLOW: The deployment fails. This is also the
     * default behavior if no option is specified.</p> </li> <li> <p>OVERWRITE: The
     * version of the file from the application revision currently being deployed
     * replaces the version already on the instance.</p> </li> <li> <p>RETAIN: The
     * version of the file already on the instance is kept and used as part of the new
     * deployment.</p> </li> </ul>
     */
    inline bool FileExistsBehaviorHasBeenSet() const { return m_fileExistsBehaviorHasBeenSet; }

    /**
     * <p>Information about how AWS CodeDeploy handles files that already exist in a
     * deployment target location but weren't part of the previous successful
     * deployment.</p> <p>The fileExistsBehavior parameter takes any of the following
     * values:</p> <ul> <li> <p>DISALLOW: The deployment fails. This is also the
     * default behavior if no option is specified.</p> </li> <li> <p>OVERWRITE: The
     * version of the file from the application revision currently being deployed
     * replaces the version already on the instance.</p> </li> <li> <p>RETAIN: The
     * version of the file already on the instance is kept and used as part of the new
     * deployment.</p> </li> </ul>
     */
    inline void SetFileExistsBehavior(const FileExistsBehavior& value) { m_fileExistsBehaviorHasBeenSet = true; m_fileExistsBehavior = value; }

    /**
     * <p>Information about how AWS CodeDeploy handles files that already exist in a
     * deployment target location but weren't part of the previous successful
     * deployment.</p> <p>The fileExistsBehavior parameter takes any of the following
     * values:</p> <ul> <li> <p>DISALLOW: The deployment fails. This is also the
     * default behavior if no option is specified.</p> </li> <li> <p>OVERWRITE: The
     * version of the file from the application revision currently being deployed
     * replaces the version already on the instance.</p> </li> <li> <p>RETAIN: The
     * version of the file already on the instance is kept and used as part of the new
     * deployment.</p> </li> </ul>
     */
    inline void SetFileExistsBehavior(FileExistsBehavior&& value) { m_fileExistsBehaviorHasBeenSet = true; m_fileExistsBehavior = std::move(value); }

    /**
     * <p>Information about how AWS CodeDeploy handles files that already exist in a
     * deployment target location but weren't part of the previous successful
     * deployment.</p> <p>The fileExistsBehavior parameter takes any of the following
     * values:</p> <ul> <li> <p>DISALLOW: The deployment fails. This is also the
     * default behavior if no option is specified.</p> </li> <li> <p>OVERWRITE: The
     * version of the file from the application revision currently being deployed
     * replaces the version already on the instance.</p> </li> <li> <p>RETAIN: The
     * version of the file already on the instance is kept and used as part of the new
     * deployment.</p> </li> </ul>
     */
    inline CreateDeploymentRequest& WithFileExistsBehavior(const FileExistsBehavior& value) { SetFileExistsBehavior(value); return *this;}

    /**
     * <p>Information about how AWS CodeDeploy handles files that already exist in a
     * deployment target location but weren't part of the previous successful
     * deployment.</p> <p>The fileExistsBehavior parameter takes any of the following
     * values:</p> <ul> <li> <p>DISALLOW: The deployment fails. This is also the
     * default behavior if no option is specified.</p> </li> <li> <p>OVERWRITE: The
     * version of the file from the application revision currently being deployed
     * replaces the version already on the instance.</p> </li> <li> <p>RETAIN: The
     * version of the file already on the instance is kept and used as part of the new
     * deployment.</p> </li> </ul>
     */
    inline CreateDeploymentRequest& WithFileExistsBehavior(FileExistsBehavior&& value) { SetFileExistsBehavior(std::move(value)); return *this;}

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

    TargetInstances m_targetInstances;
    bool m_targetInstancesHasBeenSet;

    AutoRollbackConfiguration m_autoRollbackConfiguration;
    bool m_autoRollbackConfigurationHasBeenSet;

    bool m_updateOutdatedInstancesOnly;
    bool m_updateOutdatedInstancesOnlyHasBeenSet;

    FileExistsBehavior m_fileExistsBehavior;
    bool m_fileExistsBehaviorHasBeenSet;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
