/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>
#include <aws/codedeploy/CodeDeployRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codedeploy/model/RevisionLocation.h>
#include <aws/codedeploy/model/TargetInstances.h>
#include <aws/codedeploy/model/AutoRollbackConfiguration.h>
#include <aws/codedeploy/model/FileExistsBehavior.h>
#include <aws/codedeploy/model/AlarmConfiguration.h>
#include <utility>

namespace Aws
{
namespace CodeDeploy
{
namespace Model
{

  /**
   * <p>Represents the input of a <code>CreateDeployment</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/CreateDeploymentInput">AWS
   * API Reference</a></p>
   */
  class CreateDeploymentRequest : public CodeDeployRequest
  {
  public:
    AWS_CODEDEPLOY_API CreateDeploymentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDeployment"; }

    AWS_CODEDEPLOY_API Aws::String SerializePayload() const override;

    AWS_CODEDEPLOY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of an CodeDeploy application associated with the IAM user or Amazon
     * Web Services account.</p>
     */
    inline const Aws::String& GetApplicationName() const{ return m_applicationName; }

    /**
     * <p>The name of an CodeDeploy application associated with the IAM user or Amazon
     * Web Services account.</p>
     */
    inline bool ApplicationNameHasBeenSet() const { return m_applicationNameHasBeenSet; }

    /**
     * <p>The name of an CodeDeploy application associated with the IAM user or Amazon
     * Web Services account.</p>
     */
    inline void SetApplicationName(const Aws::String& value) { m_applicationNameHasBeenSet = true; m_applicationName = value; }

    /**
     * <p>The name of an CodeDeploy application associated with the IAM user or Amazon
     * Web Services account.</p>
     */
    inline void SetApplicationName(Aws::String&& value) { m_applicationNameHasBeenSet = true; m_applicationName = std::move(value); }

    /**
     * <p>The name of an CodeDeploy application associated with the IAM user or Amazon
     * Web Services account.</p>
     */
    inline void SetApplicationName(const char* value) { m_applicationNameHasBeenSet = true; m_applicationName.assign(value); }

    /**
     * <p>The name of an CodeDeploy application associated with the IAM user or Amazon
     * Web Services account.</p>
     */
    inline CreateDeploymentRequest& WithApplicationName(const Aws::String& value) { SetApplicationName(value); return *this;}

    /**
     * <p>The name of an CodeDeploy application associated with the IAM user or Amazon
     * Web Services account.</p>
     */
    inline CreateDeploymentRequest& WithApplicationName(Aws::String&& value) { SetApplicationName(std::move(value)); return *this;}

    /**
     * <p>The name of an CodeDeploy application associated with the IAM user or Amazon
     * Web Services account.</p>
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
     * <p>The name of a deployment configuration associated with the IAM user or Amazon
     * Web Services account.</p> <p>If not specified, the value configured in the
     * deployment group is used as the default. If the deployment group does not have a
     * deployment configuration associated with it,
     * <code>CodeDeployDefault</code>.<code>OneAtATime</code> is used by default.</p>
     */
    inline const Aws::String& GetDeploymentConfigName() const{ return m_deploymentConfigName; }

    /**
     * <p>The name of a deployment configuration associated with the IAM user or Amazon
     * Web Services account.</p> <p>If not specified, the value configured in the
     * deployment group is used as the default. If the deployment group does not have a
     * deployment configuration associated with it,
     * <code>CodeDeployDefault</code>.<code>OneAtATime</code> is used by default.</p>
     */
    inline bool DeploymentConfigNameHasBeenSet() const { return m_deploymentConfigNameHasBeenSet; }

    /**
     * <p>The name of a deployment configuration associated with the IAM user or Amazon
     * Web Services account.</p> <p>If not specified, the value configured in the
     * deployment group is used as the default. If the deployment group does not have a
     * deployment configuration associated with it,
     * <code>CodeDeployDefault</code>.<code>OneAtATime</code> is used by default.</p>
     */
    inline void SetDeploymentConfigName(const Aws::String& value) { m_deploymentConfigNameHasBeenSet = true; m_deploymentConfigName = value; }

    /**
     * <p>The name of a deployment configuration associated with the IAM user or Amazon
     * Web Services account.</p> <p>If not specified, the value configured in the
     * deployment group is used as the default. If the deployment group does not have a
     * deployment configuration associated with it,
     * <code>CodeDeployDefault</code>.<code>OneAtATime</code> is used by default.</p>
     */
    inline void SetDeploymentConfigName(Aws::String&& value) { m_deploymentConfigNameHasBeenSet = true; m_deploymentConfigName = std::move(value); }

    /**
     * <p>The name of a deployment configuration associated with the IAM user or Amazon
     * Web Services account.</p> <p>If not specified, the value configured in the
     * deployment group is used as the default. If the deployment group does not have a
     * deployment configuration associated with it,
     * <code>CodeDeployDefault</code>.<code>OneAtATime</code> is used by default.</p>
     */
    inline void SetDeploymentConfigName(const char* value) { m_deploymentConfigNameHasBeenSet = true; m_deploymentConfigName.assign(value); }

    /**
     * <p>The name of a deployment configuration associated with the IAM user or Amazon
     * Web Services account.</p> <p>If not specified, the value configured in the
     * deployment group is used as the default. If the deployment group does not have a
     * deployment configuration associated with it,
     * <code>CodeDeployDefault</code>.<code>OneAtATime</code> is used by default.</p>
     */
    inline CreateDeploymentRequest& WithDeploymentConfigName(const Aws::String& value) { SetDeploymentConfigName(value); return *this;}

    /**
     * <p>The name of a deployment configuration associated with the IAM user or Amazon
     * Web Services account.</p> <p>If not specified, the value configured in the
     * deployment group is used as the default. If the deployment group does not have a
     * deployment configuration associated with it,
     * <code>CodeDeployDefault</code>.<code>OneAtATime</code> is used by default.</p>
     */
    inline CreateDeploymentRequest& WithDeploymentConfigName(Aws::String&& value) { SetDeploymentConfigName(std::move(value)); return *this;}

    /**
     * <p>The name of a deployment configuration associated with the IAM user or Amazon
     * Web Services account.</p> <p>If not specified, the value configured in the
     * deployment group is used as the default. If the deployment group does not have a
     * deployment configuration associated with it,
     * <code>CodeDeployDefault</code>.<code>OneAtATime</code> is used by default.</p>
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
     * <p> If true, then if an <code>ApplicationStop</code>,
     * <code>BeforeBlockTraffic</code>, or <code>AfterBlockTraffic</code> deployment
     * lifecycle event to an instance fails, then the deployment continues to the next
     * deployment lifecycle event. For example, if <code>ApplicationStop</code> fails,
     * the deployment continues with <code>DownloadBundle</code>. If
     * <code>BeforeBlockTraffic</code> fails, the deployment continues with
     * <code>BlockTraffic</code>. If <code>AfterBlockTraffic</code> fails, the
     * deployment continues with <code>ApplicationStop</code>. </p> <p> If false or not
     * specified, then if a lifecycle event fails during a deployment to an instance,
     * that deployment fails. If deployment to that instance is part of an overall
     * deployment and the number of healthy hosts is not less than the minimum number
     * of healthy hosts, then a deployment to the next instance is attempted. </p> <p>
     * During a deployment, the CodeDeploy agent runs the scripts specified for
     * <code>ApplicationStop</code>, <code>BeforeBlockTraffic</code>, and
     * <code>AfterBlockTraffic</code> in the AppSpec file from the previous successful
     * deployment. (All other scripts are run from the AppSpec file in the current
     * deployment.) If one of these scripts contains an error and does not run
     * successfully, the deployment can fail. </p> <p> If the cause of the failure is a
     * script from the last successful deployment that will never run successfully,
     * create a new deployment and use <code>ignoreApplicationStopFailures</code> to
     * specify that the <code>ApplicationStop</code>, <code>BeforeBlockTraffic</code>,
     * and <code>AfterBlockTraffic</code> failures should be ignored. </p>
     */
    inline bool GetIgnoreApplicationStopFailures() const{ return m_ignoreApplicationStopFailures; }

    /**
     * <p> If true, then if an <code>ApplicationStop</code>,
     * <code>BeforeBlockTraffic</code>, or <code>AfterBlockTraffic</code> deployment
     * lifecycle event to an instance fails, then the deployment continues to the next
     * deployment lifecycle event. For example, if <code>ApplicationStop</code> fails,
     * the deployment continues with <code>DownloadBundle</code>. If
     * <code>BeforeBlockTraffic</code> fails, the deployment continues with
     * <code>BlockTraffic</code>. If <code>AfterBlockTraffic</code> fails, the
     * deployment continues with <code>ApplicationStop</code>. </p> <p> If false or not
     * specified, then if a lifecycle event fails during a deployment to an instance,
     * that deployment fails. If deployment to that instance is part of an overall
     * deployment and the number of healthy hosts is not less than the minimum number
     * of healthy hosts, then a deployment to the next instance is attempted. </p> <p>
     * During a deployment, the CodeDeploy agent runs the scripts specified for
     * <code>ApplicationStop</code>, <code>BeforeBlockTraffic</code>, and
     * <code>AfterBlockTraffic</code> in the AppSpec file from the previous successful
     * deployment. (All other scripts are run from the AppSpec file in the current
     * deployment.) If one of these scripts contains an error and does not run
     * successfully, the deployment can fail. </p> <p> If the cause of the failure is a
     * script from the last successful deployment that will never run successfully,
     * create a new deployment and use <code>ignoreApplicationStopFailures</code> to
     * specify that the <code>ApplicationStop</code>, <code>BeforeBlockTraffic</code>,
     * and <code>AfterBlockTraffic</code> failures should be ignored. </p>
     */
    inline bool IgnoreApplicationStopFailuresHasBeenSet() const { return m_ignoreApplicationStopFailuresHasBeenSet; }

    /**
     * <p> If true, then if an <code>ApplicationStop</code>,
     * <code>BeforeBlockTraffic</code>, or <code>AfterBlockTraffic</code> deployment
     * lifecycle event to an instance fails, then the deployment continues to the next
     * deployment lifecycle event. For example, if <code>ApplicationStop</code> fails,
     * the deployment continues with <code>DownloadBundle</code>. If
     * <code>BeforeBlockTraffic</code> fails, the deployment continues with
     * <code>BlockTraffic</code>. If <code>AfterBlockTraffic</code> fails, the
     * deployment continues with <code>ApplicationStop</code>. </p> <p> If false or not
     * specified, then if a lifecycle event fails during a deployment to an instance,
     * that deployment fails. If deployment to that instance is part of an overall
     * deployment and the number of healthy hosts is not less than the minimum number
     * of healthy hosts, then a deployment to the next instance is attempted. </p> <p>
     * During a deployment, the CodeDeploy agent runs the scripts specified for
     * <code>ApplicationStop</code>, <code>BeforeBlockTraffic</code>, and
     * <code>AfterBlockTraffic</code> in the AppSpec file from the previous successful
     * deployment. (All other scripts are run from the AppSpec file in the current
     * deployment.) If one of these scripts contains an error and does not run
     * successfully, the deployment can fail. </p> <p> If the cause of the failure is a
     * script from the last successful deployment that will never run successfully,
     * create a new deployment and use <code>ignoreApplicationStopFailures</code> to
     * specify that the <code>ApplicationStop</code>, <code>BeforeBlockTraffic</code>,
     * and <code>AfterBlockTraffic</code> failures should be ignored. </p>
     */
    inline void SetIgnoreApplicationStopFailures(bool value) { m_ignoreApplicationStopFailuresHasBeenSet = true; m_ignoreApplicationStopFailures = value; }

    /**
     * <p> If true, then if an <code>ApplicationStop</code>,
     * <code>BeforeBlockTraffic</code>, or <code>AfterBlockTraffic</code> deployment
     * lifecycle event to an instance fails, then the deployment continues to the next
     * deployment lifecycle event. For example, if <code>ApplicationStop</code> fails,
     * the deployment continues with <code>DownloadBundle</code>. If
     * <code>BeforeBlockTraffic</code> fails, the deployment continues with
     * <code>BlockTraffic</code>. If <code>AfterBlockTraffic</code> fails, the
     * deployment continues with <code>ApplicationStop</code>. </p> <p> If false or not
     * specified, then if a lifecycle event fails during a deployment to an instance,
     * that deployment fails. If deployment to that instance is part of an overall
     * deployment and the number of healthy hosts is not less than the minimum number
     * of healthy hosts, then a deployment to the next instance is attempted. </p> <p>
     * During a deployment, the CodeDeploy agent runs the scripts specified for
     * <code>ApplicationStop</code>, <code>BeforeBlockTraffic</code>, and
     * <code>AfterBlockTraffic</code> in the AppSpec file from the previous successful
     * deployment. (All other scripts are run from the AppSpec file in the current
     * deployment.) If one of these scripts contains an error and does not run
     * successfully, the deployment can fail. </p> <p> If the cause of the failure is a
     * script from the last successful deployment that will never run successfully,
     * create a new deployment and use <code>ignoreApplicationStopFailures</code> to
     * specify that the <code>ApplicationStop</code>, <code>BeforeBlockTraffic</code>,
     * and <code>AfterBlockTraffic</code> failures should be ignored. </p>
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
     * <p>Information about how CodeDeploy handles files that already exist in a
     * deployment target location but weren't part of the previous successful
     * deployment.</p> <p>The <code>fileExistsBehavior</code> parameter takes any of
     * the following values:</p> <ul> <li> <p>DISALLOW: The deployment fails. This is
     * also the default behavior if no option is specified.</p> </li> <li>
     * <p>OVERWRITE: The version of the file from the application revision currently
     * being deployed replaces the version already on the instance.</p> </li> <li>
     * <p>RETAIN: The version of the file already on the instance is kept and used as
     * part of the new deployment.</p> </li> </ul>
     */
    inline const FileExistsBehavior& GetFileExistsBehavior() const{ return m_fileExistsBehavior; }

    /**
     * <p>Information about how CodeDeploy handles files that already exist in a
     * deployment target location but weren't part of the previous successful
     * deployment.</p> <p>The <code>fileExistsBehavior</code> parameter takes any of
     * the following values:</p> <ul> <li> <p>DISALLOW: The deployment fails. This is
     * also the default behavior if no option is specified.</p> </li> <li>
     * <p>OVERWRITE: The version of the file from the application revision currently
     * being deployed replaces the version already on the instance.</p> </li> <li>
     * <p>RETAIN: The version of the file already on the instance is kept and used as
     * part of the new deployment.</p> </li> </ul>
     */
    inline bool FileExistsBehaviorHasBeenSet() const { return m_fileExistsBehaviorHasBeenSet; }

    /**
     * <p>Information about how CodeDeploy handles files that already exist in a
     * deployment target location but weren't part of the previous successful
     * deployment.</p> <p>The <code>fileExistsBehavior</code> parameter takes any of
     * the following values:</p> <ul> <li> <p>DISALLOW: The deployment fails. This is
     * also the default behavior if no option is specified.</p> </li> <li>
     * <p>OVERWRITE: The version of the file from the application revision currently
     * being deployed replaces the version already on the instance.</p> </li> <li>
     * <p>RETAIN: The version of the file already on the instance is kept and used as
     * part of the new deployment.</p> </li> </ul>
     */
    inline void SetFileExistsBehavior(const FileExistsBehavior& value) { m_fileExistsBehaviorHasBeenSet = true; m_fileExistsBehavior = value; }

    /**
     * <p>Information about how CodeDeploy handles files that already exist in a
     * deployment target location but weren't part of the previous successful
     * deployment.</p> <p>The <code>fileExistsBehavior</code> parameter takes any of
     * the following values:</p> <ul> <li> <p>DISALLOW: The deployment fails. This is
     * also the default behavior if no option is specified.</p> </li> <li>
     * <p>OVERWRITE: The version of the file from the application revision currently
     * being deployed replaces the version already on the instance.</p> </li> <li>
     * <p>RETAIN: The version of the file already on the instance is kept and used as
     * part of the new deployment.</p> </li> </ul>
     */
    inline void SetFileExistsBehavior(FileExistsBehavior&& value) { m_fileExistsBehaviorHasBeenSet = true; m_fileExistsBehavior = std::move(value); }

    /**
     * <p>Information about how CodeDeploy handles files that already exist in a
     * deployment target location but weren't part of the previous successful
     * deployment.</p> <p>The <code>fileExistsBehavior</code> parameter takes any of
     * the following values:</p> <ul> <li> <p>DISALLOW: The deployment fails. This is
     * also the default behavior if no option is specified.</p> </li> <li>
     * <p>OVERWRITE: The version of the file from the application revision currently
     * being deployed replaces the version already on the instance.</p> </li> <li>
     * <p>RETAIN: The version of the file already on the instance is kept and used as
     * part of the new deployment.</p> </li> </ul>
     */
    inline CreateDeploymentRequest& WithFileExistsBehavior(const FileExistsBehavior& value) { SetFileExistsBehavior(value); return *this;}

    /**
     * <p>Information about how CodeDeploy handles files that already exist in a
     * deployment target location but weren't part of the previous successful
     * deployment.</p> <p>The <code>fileExistsBehavior</code> parameter takes any of
     * the following values:</p> <ul> <li> <p>DISALLOW: The deployment fails. This is
     * also the default behavior if no option is specified.</p> </li> <li>
     * <p>OVERWRITE: The version of the file from the application revision currently
     * being deployed replaces the version already on the instance.</p> </li> <li>
     * <p>RETAIN: The version of the file already on the instance is kept and used as
     * part of the new deployment.</p> </li> </ul>
     */
    inline CreateDeploymentRequest& WithFileExistsBehavior(FileExistsBehavior&& value) { SetFileExistsBehavior(std::move(value)); return *this;}


    /**
     * <p>Allows you to specify information about alarms associated with a deployment.
     * The alarm configuration that you specify here will override the alarm
     * configuration at the deployment group level. Consider overriding the alarm
     * configuration if you have set up alarms at the deployment group level that are
     * causing deployment failures. In this case, you would call
     * <code>CreateDeployment</code> to create a new deployment that uses a previous
     * application revision that is known to work, and set its alarm configuration to
     * turn off alarm polling. Turning off alarm polling ensures that the new
     * deployment proceeds without being blocked by the alarm that was generated by the
     * previous, failed, deployment.</p>  <p>If you specify an
     * <code>overrideAlarmConfiguration</code>, you need the
     * <code>UpdateDeploymentGroup</code> IAM permission when calling
     * <code>CreateDeployment</code>.</p> 
     */
    inline const AlarmConfiguration& GetOverrideAlarmConfiguration() const{ return m_overrideAlarmConfiguration; }

    /**
     * <p>Allows you to specify information about alarms associated with a deployment.
     * The alarm configuration that you specify here will override the alarm
     * configuration at the deployment group level. Consider overriding the alarm
     * configuration if you have set up alarms at the deployment group level that are
     * causing deployment failures. In this case, you would call
     * <code>CreateDeployment</code> to create a new deployment that uses a previous
     * application revision that is known to work, and set its alarm configuration to
     * turn off alarm polling. Turning off alarm polling ensures that the new
     * deployment proceeds without being blocked by the alarm that was generated by the
     * previous, failed, deployment.</p>  <p>If you specify an
     * <code>overrideAlarmConfiguration</code>, you need the
     * <code>UpdateDeploymentGroup</code> IAM permission when calling
     * <code>CreateDeployment</code>.</p> 
     */
    inline bool OverrideAlarmConfigurationHasBeenSet() const { return m_overrideAlarmConfigurationHasBeenSet; }

    /**
     * <p>Allows you to specify information about alarms associated with a deployment.
     * The alarm configuration that you specify here will override the alarm
     * configuration at the deployment group level. Consider overriding the alarm
     * configuration if you have set up alarms at the deployment group level that are
     * causing deployment failures. In this case, you would call
     * <code>CreateDeployment</code> to create a new deployment that uses a previous
     * application revision that is known to work, and set its alarm configuration to
     * turn off alarm polling. Turning off alarm polling ensures that the new
     * deployment proceeds without being blocked by the alarm that was generated by the
     * previous, failed, deployment.</p>  <p>If you specify an
     * <code>overrideAlarmConfiguration</code>, you need the
     * <code>UpdateDeploymentGroup</code> IAM permission when calling
     * <code>CreateDeployment</code>.</p> 
     */
    inline void SetOverrideAlarmConfiguration(const AlarmConfiguration& value) { m_overrideAlarmConfigurationHasBeenSet = true; m_overrideAlarmConfiguration = value; }

    /**
     * <p>Allows you to specify information about alarms associated with a deployment.
     * The alarm configuration that you specify here will override the alarm
     * configuration at the deployment group level. Consider overriding the alarm
     * configuration if you have set up alarms at the deployment group level that are
     * causing deployment failures. In this case, you would call
     * <code>CreateDeployment</code> to create a new deployment that uses a previous
     * application revision that is known to work, and set its alarm configuration to
     * turn off alarm polling. Turning off alarm polling ensures that the new
     * deployment proceeds without being blocked by the alarm that was generated by the
     * previous, failed, deployment.</p>  <p>If you specify an
     * <code>overrideAlarmConfiguration</code>, you need the
     * <code>UpdateDeploymentGroup</code> IAM permission when calling
     * <code>CreateDeployment</code>.</p> 
     */
    inline void SetOverrideAlarmConfiguration(AlarmConfiguration&& value) { m_overrideAlarmConfigurationHasBeenSet = true; m_overrideAlarmConfiguration = std::move(value); }

    /**
     * <p>Allows you to specify information about alarms associated with a deployment.
     * The alarm configuration that you specify here will override the alarm
     * configuration at the deployment group level. Consider overriding the alarm
     * configuration if you have set up alarms at the deployment group level that are
     * causing deployment failures. In this case, you would call
     * <code>CreateDeployment</code> to create a new deployment that uses a previous
     * application revision that is known to work, and set its alarm configuration to
     * turn off alarm polling. Turning off alarm polling ensures that the new
     * deployment proceeds without being blocked by the alarm that was generated by the
     * previous, failed, deployment.</p>  <p>If you specify an
     * <code>overrideAlarmConfiguration</code>, you need the
     * <code>UpdateDeploymentGroup</code> IAM permission when calling
     * <code>CreateDeployment</code>.</p> 
     */
    inline CreateDeploymentRequest& WithOverrideAlarmConfiguration(const AlarmConfiguration& value) { SetOverrideAlarmConfiguration(value); return *this;}

    /**
     * <p>Allows you to specify information about alarms associated with a deployment.
     * The alarm configuration that you specify here will override the alarm
     * configuration at the deployment group level. Consider overriding the alarm
     * configuration if you have set up alarms at the deployment group level that are
     * causing deployment failures. In this case, you would call
     * <code>CreateDeployment</code> to create a new deployment that uses a previous
     * application revision that is known to work, and set its alarm configuration to
     * turn off alarm polling. Turning off alarm polling ensures that the new
     * deployment proceeds without being blocked by the alarm that was generated by the
     * previous, failed, deployment.</p>  <p>If you specify an
     * <code>overrideAlarmConfiguration</code>, you need the
     * <code>UpdateDeploymentGroup</code> IAM permission when calling
     * <code>CreateDeployment</code>.</p> 
     */
    inline CreateDeploymentRequest& WithOverrideAlarmConfiguration(AlarmConfiguration&& value) { SetOverrideAlarmConfiguration(std::move(value)); return *this;}

  private:

    Aws::String m_applicationName;
    bool m_applicationNameHasBeenSet = false;

    Aws::String m_deploymentGroupName;
    bool m_deploymentGroupNameHasBeenSet = false;

    RevisionLocation m_revision;
    bool m_revisionHasBeenSet = false;

    Aws::String m_deploymentConfigName;
    bool m_deploymentConfigNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    bool m_ignoreApplicationStopFailures;
    bool m_ignoreApplicationStopFailuresHasBeenSet = false;

    TargetInstances m_targetInstances;
    bool m_targetInstancesHasBeenSet = false;

    AutoRollbackConfiguration m_autoRollbackConfiguration;
    bool m_autoRollbackConfigurationHasBeenSet = false;

    bool m_updateOutdatedInstancesOnly;
    bool m_updateOutdatedInstancesOnlyHasBeenSet = false;

    FileExistsBehavior m_fileExistsBehavior;
    bool m_fileExistsBehaviorHasBeenSet = false;

    AlarmConfiguration m_overrideAlarmConfiguration;
    bool m_overrideAlarmConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
