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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codedeploy/model/RevisionLocation.h>
#include <aws/codedeploy/model/DeploymentStatus.h>
#include <aws/codedeploy/model/ErrorInformation.h>
#include <aws/core/utils/DateTime.h>
#include <aws/codedeploy/model/DeploymentOverview.h>
#include <aws/codedeploy/model/DeploymentCreator.h>
#include <aws/codedeploy/model/AutoRollbackConfiguration.h>
#include <aws/codedeploy/model/RollbackInfo.h>
#include <aws/codedeploy/model/DeploymentStyle.h>
#include <aws/codedeploy/model/TargetInstances.h>
#include <aws/codedeploy/model/BlueGreenDeploymentConfiguration.h>
#include <aws/codedeploy/model/LoadBalancerInfo.h>
#include <aws/codedeploy/model/FileExistsBehavior.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codedeploy/model/ComputePlatform.h>
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
namespace CodeDeploy
{
namespace Model
{

  /**
   * <p>Information about a deployment.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/DeploymentInfo">AWS
   * API Reference</a></p>
   */
  class AWS_CODEDEPLOY_API DeploymentInfo
  {
  public:
    DeploymentInfo();
    DeploymentInfo(Aws::Utils::Json::JsonView jsonValue);
    DeploymentInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The application name.</p>
     */
    inline const Aws::String& GetApplicationName() const{ return m_applicationName; }

    /**
     * <p>The application name.</p>
     */
    inline bool ApplicationNameHasBeenSet() const { return m_applicationNameHasBeenSet; }

    /**
     * <p>The application name.</p>
     */
    inline void SetApplicationName(const Aws::String& value) { m_applicationNameHasBeenSet = true; m_applicationName = value; }

    /**
     * <p>The application name.</p>
     */
    inline void SetApplicationName(Aws::String&& value) { m_applicationNameHasBeenSet = true; m_applicationName = std::move(value); }

    /**
     * <p>The application name.</p>
     */
    inline void SetApplicationName(const char* value) { m_applicationNameHasBeenSet = true; m_applicationName.assign(value); }

    /**
     * <p>The application name.</p>
     */
    inline DeploymentInfo& WithApplicationName(const Aws::String& value) { SetApplicationName(value); return *this;}

    /**
     * <p>The application name.</p>
     */
    inline DeploymentInfo& WithApplicationName(Aws::String&& value) { SetApplicationName(std::move(value)); return *this;}

    /**
     * <p>The application name.</p>
     */
    inline DeploymentInfo& WithApplicationName(const char* value) { SetApplicationName(value); return *this;}


    /**
     * <p> The deployment group name. </p>
     */
    inline const Aws::String& GetDeploymentGroupName() const{ return m_deploymentGroupName; }

    /**
     * <p> The deployment group name. </p>
     */
    inline bool DeploymentGroupNameHasBeenSet() const { return m_deploymentGroupNameHasBeenSet; }

    /**
     * <p> The deployment group name. </p>
     */
    inline void SetDeploymentGroupName(const Aws::String& value) { m_deploymentGroupNameHasBeenSet = true; m_deploymentGroupName = value; }

    /**
     * <p> The deployment group name. </p>
     */
    inline void SetDeploymentGroupName(Aws::String&& value) { m_deploymentGroupNameHasBeenSet = true; m_deploymentGroupName = std::move(value); }

    /**
     * <p> The deployment group name. </p>
     */
    inline void SetDeploymentGroupName(const char* value) { m_deploymentGroupNameHasBeenSet = true; m_deploymentGroupName.assign(value); }

    /**
     * <p> The deployment group name. </p>
     */
    inline DeploymentInfo& WithDeploymentGroupName(const Aws::String& value) { SetDeploymentGroupName(value); return *this;}

    /**
     * <p> The deployment group name. </p>
     */
    inline DeploymentInfo& WithDeploymentGroupName(Aws::String&& value) { SetDeploymentGroupName(std::move(value)); return *this;}

    /**
     * <p> The deployment group name. </p>
     */
    inline DeploymentInfo& WithDeploymentGroupName(const char* value) { SetDeploymentGroupName(value); return *this;}


    /**
     * <p> The deployment configuration name. </p>
     */
    inline const Aws::String& GetDeploymentConfigName() const{ return m_deploymentConfigName; }

    /**
     * <p> The deployment configuration name. </p>
     */
    inline bool DeploymentConfigNameHasBeenSet() const { return m_deploymentConfigNameHasBeenSet; }

    /**
     * <p> The deployment configuration name. </p>
     */
    inline void SetDeploymentConfigName(const Aws::String& value) { m_deploymentConfigNameHasBeenSet = true; m_deploymentConfigName = value; }

    /**
     * <p> The deployment configuration name. </p>
     */
    inline void SetDeploymentConfigName(Aws::String&& value) { m_deploymentConfigNameHasBeenSet = true; m_deploymentConfigName = std::move(value); }

    /**
     * <p> The deployment configuration name. </p>
     */
    inline void SetDeploymentConfigName(const char* value) { m_deploymentConfigNameHasBeenSet = true; m_deploymentConfigName.assign(value); }

    /**
     * <p> The deployment configuration name. </p>
     */
    inline DeploymentInfo& WithDeploymentConfigName(const Aws::String& value) { SetDeploymentConfigName(value); return *this;}

    /**
     * <p> The deployment configuration name. </p>
     */
    inline DeploymentInfo& WithDeploymentConfigName(Aws::String&& value) { SetDeploymentConfigName(std::move(value)); return *this;}

    /**
     * <p> The deployment configuration name. </p>
     */
    inline DeploymentInfo& WithDeploymentConfigName(const char* value) { SetDeploymentConfigName(value); return *this;}


    /**
     * <p> The unique ID of a deployment. </p>
     */
    inline const Aws::String& GetDeploymentId() const{ return m_deploymentId; }

    /**
     * <p> The unique ID of a deployment. </p>
     */
    inline bool DeploymentIdHasBeenSet() const { return m_deploymentIdHasBeenSet; }

    /**
     * <p> The unique ID of a deployment. </p>
     */
    inline void SetDeploymentId(const Aws::String& value) { m_deploymentIdHasBeenSet = true; m_deploymentId = value; }

    /**
     * <p> The unique ID of a deployment. </p>
     */
    inline void SetDeploymentId(Aws::String&& value) { m_deploymentIdHasBeenSet = true; m_deploymentId = std::move(value); }

    /**
     * <p> The unique ID of a deployment. </p>
     */
    inline void SetDeploymentId(const char* value) { m_deploymentIdHasBeenSet = true; m_deploymentId.assign(value); }

    /**
     * <p> The unique ID of a deployment. </p>
     */
    inline DeploymentInfo& WithDeploymentId(const Aws::String& value) { SetDeploymentId(value); return *this;}

    /**
     * <p> The unique ID of a deployment. </p>
     */
    inline DeploymentInfo& WithDeploymentId(Aws::String&& value) { SetDeploymentId(std::move(value)); return *this;}

    /**
     * <p> The unique ID of a deployment. </p>
     */
    inline DeploymentInfo& WithDeploymentId(const char* value) { SetDeploymentId(value); return *this;}


    /**
     * <p>Information about the application revision that was deployed to the
     * deployment group before the most recent successful deployment.</p>
     */
    inline const RevisionLocation& GetPreviousRevision() const{ return m_previousRevision; }

    /**
     * <p>Information about the application revision that was deployed to the
     * deployment group before the most recent successful deployment.</p>
     */
    inline bool PreviousRevisionHasBeenSet() const { return m_previousRevisionHasBeenSet; }

    /**
     * <p>Information about the application revision that was deployed to the
     * deployment group before the most recent successful deployment.</p>
     */
    inline void SetPreviousRevision(const RevisionLocation& value) { m_previousRevisionHasBeenSet = true; m_previousRevision = value; }

    /**
     * <p>Information about the application revision that was deployed to the
     * deployment group before the most recent successful deployment.</p>
     */
    inline void SetPreviousRevision(RevisionLocation&& value) { m_previousRevisionHasBeenSet = true; m_previousRevision = std::move(value); }

    /**
     * <p>Information about the application revision that was deployed to the
     * deployment group before the most recent successful deployment.</p>
     */
    inline DeploymentInfo& WithPreviousRevision(const RevisionLocation& value) { SetPreviousRevision(value); return *this;}

    /**
     * <p>Information about the application revision that was deployed to the
     * deployment group before the most recent successful deployment.</p>
     */
    inline DeploymentInfo& WithPreviousRevision(RevisionLocation&& value) { SetPreviousRevision(std::move(value)); return *this;}


    /**
     * <p>Information about the location of stored application artifacts and the
     * service from which to retrieve them.</p>
     */
    inline const RevisionLocation& GetRevision() const{ return m_revision; }

    /**
     * <p>Information about the location of stored application artifacts and the
     * service from which to retrieve them.</p>
     */
    inline bool RevisionHasBeenSet() const { return m_revisionHasBeenSet; }

    /**
     * <p>Information about the location of stored application artifacts and the
     * service from which to retrieve them.</p>
     */
    inline void SetRevision(const RevisionLocation& value) { m_revisionHasBeenSet = true; m_revision = value; }

    /**
     * <p>Information about the location of stored application artifacts and the
     * service from which to retrieve them.</p>
     */
    inline void SetRevision(RevisionLocation&& value) { m_revisionHasBeenSet = true; m_revision = std::move(value); }

    /**
     * <p>Information about the location of stored application artifacts and the
     * service from which to retrieve them.</p>
     */
    inline DeploymentInfo& WithRevision(const RevisionLocation& value) { SetRevision(value); return *this;}

    /**
     * <p>Information about the location of stored application artifacts and the
     * service from which to retrieve them.</p>
     */
    inline DeploymentInfo& WithRevision(RevisionLocation&& value) { SetRevision(std::move(value)); return *this;}


    /**
     * <p>The current state of the deployment as a whole.</p>
     */
    inline const DeploymentStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The current state of the deployment as a whole.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The current state of the deployment as a whole.</p>
     */
    inline void SetStatus(const DeploymentStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The current state of the deployment as a whole.</p>
     */
    inline void SetStatus(DeploymentStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The current state of the deployment as a whole.</p>
     */
    inline DeploymentInfo& WithStatus(const DeploymentStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The current state of the deployment as a whole.</p>
     */
    inline DeploymentInfo& WithStatus(DeploymentStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>Information about any error associated with this deployment.</p>
     */
    inline const ErrorInformation& GetErrorInformation() const{ return m_errorInformation; }

    /**
     * <p>Information about any error associated with this deployment.</p>
     */
    inline bool ErrorInformationHasBeenSet() const { return m_errorInformationHasBeenSet; }

    /**
     * <p>Information about any error associated with this deployment.</p>
     */
    inline void SetErrorInformation(const ErrorInformation& value) { m_errorInformationHasBeenSet = true; m_errorInformation = value; }

    /**
     * <p>Information about any error associated with this deployment.</p>
     */
    inline void SetErrorInformation(ErrorInformation&& value) { m_errorInformationHasBeenSet = true; m_errorInformation = std::move(value); }

    /**
     * <p>Information about any error associated with this deployment.</p>
     */
    inline DeploymentInfo& WithErrorInformation(const ErrorInformation& value) { SetErrorInformation(value); return *this;}

    /**
     * <p>Information about any error associated with this deployment.</p>
     */
    inline DeploymentInfo& WithErrorInformation(ErrorInformation&& value) { SetErrorInformation(std::move(value)); return *this;}


    /**
     * <p>A timestamp that indicates when the deployment was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const{ return m_createTime; }

    /**
     * <p>A timestamp that indicates when the deployment was created.</p>
     */
    inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }

    /**
     * <p>A timestamp that indicates when the deployment was created.</p>
     */
    inline void SetCreateTime(const Aws::Utils::DateTime& value) { m_createTimeHasBeenSet = true; m_createTime = value; }

    /**
     * <p>A timestamp that indicates when the deployment was created.</p>
     */
    inline void SetCreateTime(Aws::Utils::DateTime&& value) { m_createTimeHasBeenSet = true; m_createTime = std::move(value); }

    /**
     * <p>A timestamp that indicates when the deployment was created.</p>
     */
    inline DeploymentInfo& WithCreateTime(const Aws::Utils::DateTime& value) { SetCreateTime(value); return *this;}

    /**
     * <p>A timestamp that indicates when the deployment was created.</p>
     */
    inline DeploymentInfo& WithCreateTime(Aws::Utils::DateTime&& value) { SetCreateTime(std::move(value)); return *this;}


    /**
     * <p>A timestamp that indicates when the deployment was deployed to the deployment
     * group.</p> <p>In some cases, the reported value of the start time might be later
     * than the complete time. This is due to differences in the clock settings of
     * backend servers that participate in the deployment process.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>A timestamp that indicates when the deployment was deployed to the deployment
     * group.</p> <p>In some cases, the reported value of the start time might be later
     * than the complete time. This is due to differences in the clock settings of
     * backend servers that participate in the deployment process.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>A timestamp that indicates when the deployment was deployed to the deployment
     * group.</p> <p>In some cases, the reported value of the start time might be later
     * than the complete time. This is due to differences in the clock settings of
     * backend servers that participate in the deployment process.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>A timestamp that indicates when the deployment was deployed to the deployment
     * group.</p> <p>In some cases, the reported value of the start time might be later
     * than the complete time. This is due to differences in the clock settings of
     * backend servers that participate in the deployment process.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>A timestamp that indicates when the deployment was deployed to the deployment
     * group.</p> <p>In some cases, the reported value of the start time might be later
     * than the complete time. This is due to differences in the clock settings of
     * backend servers that participate in the deployment process.</p>
     */
    inline DeploymentInfo& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>A timestamp that indicates when the deployment was deployed to the deployment
     * group.</p> <p>In some cases, the reported value of the start time might be later
     * than the complete time. This is due to differences in the clock settings of
     * backend servers that participate in the deployment process.</p>
     */
    inline DeploymentInfo& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>A timestamp that indicates when the deployment was complete.</p>
     */
    inline const Aws::Utils::DateTime& GetCompleteTime() const{ return m_completeTime; }

    /**
     * <p>A timestamp that indicates when the deployment was complete.</p>
     */
    inline bool CompleteTimeHasBeenSet() const { return m_completeTimeHasBeenSet; }

    /**
     * <p>A timestamp that indicates when the deployment was complete.</p>
     */
    inline void SetCompleteTime(const Aws::Utils::DateTime& value) { m_completeTimeHasBeenSet = true; m_completeTime = value; }

    /**
     * <p>A timestamp that indicates when the deployment was complete.</p>
     */
    inline void SetCompleteTime(Aws::Utils::DateTime&& value) { m_completeTimeHasBeenSet = true; m_completeTime = std::move(value); }

    /**
     * <p>A timestamp that indicates when the deployment was complete.</p>
     */
    inline DeploymentInfo& WithCompleteTime(const Aws::Utils::DateTime& value) { SetCompleteTime(value); return *this;}

    /**
     * <p>A timestamp that indicates when the deployment was complete.</p>
     */
    inline DeploymentInfo& WithCompleteTime(Aws::Utils::DateTime&& value) { SetCompleteTime(std::move(value)); return *this;}


    /**
     * <p>A summary of the deployment status of the instances in the deployment.</p>
     */
    inline const DeploymentOverview& GetDeploymentOverview() const{ return m_deploymentOverview; }

    /**
     * <p>A summary of the deployment status of the instances in the deployment.</p>
     */
    inline bool DeploymentOverviewHasBeenSet() const { return m_deploymentOverviewHasBeenSet; }

    /**
     * <p>A summary of the deployment status of the instances in the deployment.</p>
     */
    inline void SetDeploymentOverview(const DeploymentOverview& value) { m_deploymentOverviewHasBeenSet = true; m_deploymentOverview = value; }

    /**
     * <p>A summary of the deployment status of the instances in the deployment.</p>
     */
    inline void SetDeploymentOverview(DeploymentOverview&& value) { m_deploymentOverviewHasBeenSet = true; m_deploymentOverview = std::move(value); }

    /**
     * <p>A summary of the deployment status of the instances in the deployment.</p>
     */
    inline DeploymentInfo& WithDeploymentOverview(const DeploymentOverview& value) { SetDeploymentOverview(value); return *this;}

    /**
     * <p>A summary of the deployment status of the instances in the deployment.</p>
     */
    inline DeploymentInfo& WithDeploymentOverview(DeploymentOverview&& value) { SetDeploymentOverview(std::move(value)); return *this;}


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
    inline DeploymentInfo& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A comment about the deployment.</p>
     */
    inline DeploymentInfo& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A comment about the deployment.</p>
     */
    inline DeploymentInfo& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The means by which the deployment was created:</p> <ul> <li> <p>user: A user
     * created the deployment.</p> </li> <li> <p>autoscaling: Amazon EC2 Auto Scaling
     * created the deployment.</p> </li> <li> <p>codeDeployRollback: A rollback process
     * created the deployment.</p> </li> </ul>
     */
    inline const DeploymentCreator& GetCreator() const{ return m_creator; }

    /**
     * <p>The means by which the deployment was created:</p> <ul> <li> <p>user: A user
     * created the deployment.</p> </li> <li> <p>autoscaling: Amazon EC2 Auto Scaling
     * created the deployment.</p> </li> <li> <p>codeDeployRollback: A rollback process
     * created the deployment.</p> </li> </ul>
     */
    inline bool CreatorHasBeenSet() const { return m_creatorHasBeenSet; }

    /**
     * <p>The means by which the deployment was created:</p> <ul> <li> <p>user: A user
     * created the deployment.</p> </li> <li> <p>autoscaling: Amazon EC2 Auto Scaling
     * created the deployment.</p> </li> <li> <p>codeDeployRollback: A rollback process
     * created the deployment.</p> </li> </ul>
     */
    inline void SetCreator(const DeploymentCreator& value) { m_creatorHasBeenSet = true; m_creator = value; }

    /**
     * <p>The means by which the deployment was created:</p> <ul> <li> <p>user: A user
     * created the deployment.</p> </li> <li> <p>autoscaling: Amazon EC2 Auto Scaling
     * created the deployment.</p> </li> <li> <p>codeDeployRollback: A rollback process
     * created the deployment.</p> </li> </ul>
     */
    inline void SetCreator(DeploymentCreator&& value) { m_creatorHasBeenSet = true; m_creator = std::move(value); }

    /**
     * <p>The means by which the deployment was created:</p> <ul> <li> <p>user: A user
     * created the deployment.</p> </li> <li> <p>autoscaling: Amazon EC2 Auto Scaling
     * created the deployment.</p> </li> <li> <p>codeDeployRollback: A rollback process
     * created the deployment.</p> </li> </ul>
     */
    inline DeploymentInfo& WithCreator(const DeploymentCreator& value) { SetCreator(value); return *this;}

    /**
     * <p>The means by which the deployment was created:</p> <ul> <li> <p>user: A user
     * created the deployment.</p> </li> <li> <p>autoscaling: Amazon EC2 Auto Scaling
     * created the deployment.</p> </li> <li> <p>codeDeployRollback: A rollback process
     * created the deployment.</p> </li> </ul>
     */
    inline DeploymentInfo& WithCreator(DeploymentCreator&& value) { SetCreator(std::move(value)); return *this;}


    /**
     * <p> If true, then if an <code>ApplicationStop</code>,
     * <code>BeforeBlockTraffic</code>, or <code>AfterBlockTraffic</code> deployment
     * lifecycle event to an instance fails, then the deployment continues to the next
     * deployment lifecycle event. For example, if <code>ApplicationStop</code> fails,
     * the deployment continues with DownloadBundle. If <code>BeforeBlockTraffic</code>
     * fails, the deployment continues with <code>BlockTraffic</code>. If
     * <code>AfterBlockTraffic</code> fails, the deployment continues with
     * <code>ApplicationStop</code>. </p> <p> If false or not specified, then if a
     * lifecycle event fails during a deployment to an instance, that deployment fails.
     * If deployment to that instance is part of an overall deployment and the number
     * of healthy hosts is not less than the minimum number of healthy hosts, then a
     * deployment to the next instance is attempted. </p> <p> During a deployment, the
     * AWS CodeDeploy agent runs the scripts specified for
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
     * the deployment continues with DownloadBundle. If <code>BeforeBlockTraffic</code>
     * fails, the deployment continues with <code>BlockTraffic</code>. If
     * <code>AfterBlockTraffic</code> fails, the deployment continues with
     * <code>ApplicationStop</code>. </p> <p> If false or not specified, then if a
     * lifecycle event fails during a deployment to an instance, that deployment fails.
     * If deployment to that instance is part of an overall deployment and the number
     * of healthy hosts is not less than the minimum number of healthy hosts, then a
     * deployment to the next instance is attempted. </p> <p> During a deployment, the
     * AWS CodeDeploy agent runs the scripts specified for
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
     * the deployment continues with DownloadBundle. If <code>BeforeBlockTraffic</code>
     * fails, the deployment continues with <code>BlockTraffic</code>. If
     * <code>AfterBlockTraffic</code> fails, the deployment continues with
     * <code>ApplicationStop</code>. </p> <p> If false or not specified, then if a
     * lifecycle event fails during a deployment to an instance, that deployment fails.
     * If deployment to that instance is part of an overall deployment and the number
     * of healthy hosts is not less than the minimum number of healthy hosts, then a
     * deployment to the next instance is attempted. </p> <p> During a deployment, the
     * AWS CodeDeploy agent runs the scripts specified for
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
     * the deployment continues with DownloadBundle. If <code>BeforeBlockTraffic</code>
     * fails, the deployment continues with <code>BlockTraffic</code>. If
     * <code>AfterBlockTraffic</code> fails, the deployment continues with
     * <code>ApplicationStop</code>. </p> <p> If false or not specified, then if a
     * lifecycle event fails during a deployment to an instance, that deployment fails.
     * If deployment to that instance is part of an overall deployment and the number
     * of healthy hosts is not less than the minimum number of healthy hosts, then a
     * deployment to the next instance is attempted. </p> <p> During a deployment, the
     * AWS CodeDeploy agent runs the scripts specified for
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
    inline DeploymentInfo& WithIgnoreApplicationStopFailures(bool value) { SetIgnoreApplicationStopFailures(value); return *this;}


    /**
     * <p>Information about the automatic rollback configuration associated with the
     * deployment.</p>
     */
    inline const AutoRollbackConfiguration& GetAutoRollbackConfiguration() const{ return m_autoRollbackConfiguration; }

    /**
     * <p>Information about the automatic rollback configuration associated with the
     * deployment.</p>
     */
    inline bool AutoRollbackConfigurationHasBeenSet() const { return m_autoRollbackConfigurationHasBeenSet; }

    /**
     * <p>Information about the automatic rollback configuration associated with the
     * deployment.</p>
     */
    inline void SetAutoRollbackConfiguration(const AutoRollbackConfiguration& value) { m_autoRollbackConfigurationHasBeenSet = true; m_autoRollbackConfiguration = value; }

    /**
     * <p>Information about the automatic rollback configuration associated with the
     * deployment.</p>
     */
    inline void SetAutoRollbackConfiguration(AutoRollbackConfiguration&& value) { m_autoRollbackConfigurationHasBeenSet = true; m_autoRollbackConfiguration = std::move(value); }

    /**
     * <p>Information about the automatic rollback configuration associated with the
     * deployment.</p>
     */
    inline DeploymentInfo& WithAutoRollbackConfiguration(const AutoRollbackConfiguration& value) { SetAutoRollbackConfiguration(value); return *this;}

    /**
     * <p>Information about the automatic rollback configuration associated with the
     * deployment.</p>
     */
    inline DeploymentInfo& WithAutoRollbackConfiguration(AutoRollbackConfiguration&& value) { SetAutoRollbackConfiguration(std::move(value)); return *this;}


    /**
     * <p>Indicates whether only instances that are not running the latest application
     * revision are to be deployed to.</p>
     */
    inline bool GetUpdateOutdatedInstancesOnly() const{ return m_updateOutdatedInstancesOnly; }

    /**
     * <p>Indicates whether only instances that are not running the latest application
     * revision are to be deployed to.</p>
     */
    inline bool UpdateOutdatedInstancesOnlyHasBeenSet() const { return m_updateOutdatedInstancesOnlyHasBeenSet; }

    /**
     * <p>Indicates whether only instances that are not running the latest application
     * revision are to be deployed to.</p>
     */
    inline void SetUpdateOutdatedInstancesOnly(bool value) { m_updateOutdatedInstancesOnlyHasBeenSet = true; m_updateOutdatedInstancesOnly = value; }

    /**
     * <p>Indicates whether only instances that are not running the latest application
     * revision are to be deployed to.</p>
     */
    inline DeploymentInfo& WithUpdateOutdatedInstancesOnly(bool value) { SetUpdateOutdatedInstancesOnly(value); return *this;}


    /**
     * <p>Information about a deployment rollback.</p>
     */
    inline const RollbackInfo& GetRollbackInfo() const{ return m_rollbackInfo; }

    /**
     * <p>Information about a deployment rollback.</p>
     */
    inline bool RollbackInfoHasBeenSet() const { return m_rollbackInfoHasBeenSet; }

    /**
     * <p>Information about a deployment rollback.</p>
     */
    inline void SetRollbackInfo(const RollbackInfo& value) { m_rollbackInfoHasBeenSet = true; m_rollbackInfo = value; }

    /**
     * <p>Information about a deployment rollback.</p>
     */
    inline void SetRollbackInfo(RollbackInfo&& value) { m_rollbackInfoHasBeenSet = true; m_rollbackInfo = std::move(value); }

    /**
     * <p>Information about a deployment rollback.</p>
     */
    inline DeploymentInfo& WithRollbackInfo(const RollbackInfo& value) { SetRollbackInfo(value); return *this;}

    /**
     * <p>Information about a deployment rollback.</p>
     */
    inline DeploymentInfo& WithRollbackInfo(RollbackInfo&& value) { SetRollbackInfo(std::move(value)); return *this;}


    /**
     * <p>Information about the type of deployment, either in-place or blue/green, you
     * want to run and whether to route deployment traffic behind a load balancer.</p>
     */
    inline const DeploymentStyle& GetDeploymentStyle() const{ return m_deploymentStyle; }

    /**
     * <p>Information about the type of deployment, either in-place or blue/green, you
     * want to run and whether to route deployment traffic behind a load balancer.</p>
     */
    inline bool DeploymentStyleHasBeenSet() const { return m_deploymentStyleHasBeenSet; }

    /**
     * <p>Information about the type of deployment, either in-place or blue/green, you
     * want to run and whether to route deployment traffic behind a load balancer.</p>
     */
    inline void SetDeploymentStyle(const DeploymentStyle& value) { m_deploymentStyleHasBeenSet = true; m_deploymentStyle = value; }

    /**
     * <p>Information about the type of deployment, either in-place or blue/green, you
     * want to run and whether to route deployment traffic behind a load balancer.</p>
     */
    inline void SetDeploymentStyle(DeploymentStyle&& value) { m_deploymentStyleHasBeenSet = true; m_deploymentStyle = std::move(value); }

    /**
     * <p>Information about the type of deployment, either in-place or blue/green, you
     * want to run and whether to route deployment traffic behind a load balancer.</p>
     */
    inline DeploymentInfo& WithDeploymentStyle(const DeploymentStyle& value) { SetDeploymentStyle(value); return *this;}

    /**
     * <p>Information about the type of deployment, either in-place or blue/green, you
     * want to run and whether to route deployment traffic behind a load balancer.</p>
     */
    inline DeploymentInfo& WithDeploymentStyle(DeploymentStyle&& value) { SetDeploymentStyle(std::move(value)); return *this;}


    /**
     * <p>Information about the instances that belong to the replacement environment in
     * a blue/green deployment.</p>
     */
    inline const TargetInstances& GetTargetInstances() const{ return m_targetInstances; }

    /**
     * <p>Information about the instances that belong to the replacement environment in
     * a blue/green deployment.</p>
     */
    inline bool TargetInstancesHasBeenSet() const { return m_targetInstancesHasBeenSet; }

    /**
     * <p>Information about the instances that belong to the replacement environment in
     * a blue/green deployment.</p>
     */
    inline void SetTargetInstances(const TargetInstances& value) { m_targetInstancesHasBeenSet = true; m_targetInstances = value; }

    /**
     * <p>Information about the instances that belong to the replacement environment in
     * a blue/green deployment.</p>
     */
    inline void SetTargetInstances(TargetInstances&& value) { m_targetInstancesHasBeenSet = true; m_targetInstances = std::move(value); }

    /**
     * <p>Information about the instances that belong to the replacement environment in
     * a blue/green deployment.</p>
     */
    inline DeploymentInfo& WithTargetInstances(const TargetInstances& value) { SetTargetInstances(value); return *this;}

    /**
     * <p>Information about the instances that belong to the replacement environment in
     * a blue/green deployment.</p>
     */
    inline DeploymentInfo& WithTargetInstances(TargetInstances&& value) { SetTargetInstances(std::move(value)); return *this;}


    /**
     * <p>Indicates whether the wait period set for the termination of instances in the
     * original environment has started. Status is 'false' if the KEEP_ALIVE option is
     * specified. Otherwise, 'true' as soon as the termination wait period starts.</p>
     */
    inline bool GetInstanceTerminationWaitTimeStarted() const{ return m_instanceTerminationWaitTimeStarted; }

    /**
     * <p>Indicates whether the wait period set for the termination of instances in the
     * original environment has started. Status is 'false' if the KEEP_ALIVE option is
     * specified. Otherwise, 'true' as soon as the termination wait period starts.</p>
     */
    inline bool InstanceTerminationWaitTimeStartedHasBeenSet() const { return m_instanceTerminationWaitTimeStartedHasBeenSet; }

    /**
     * <p>Indicates whether the wait period set for the termination of instances in the
     * original environment has started. Status is 'false' if the KEEP_ALIVE option is
     * specified. Otherwise, 'true' as soon as the termination wait period starts.</p>
     */
    inline void SetInstanceTerminationWaitTimeStarted(bool value) { m_instanceTerminationWaitTimeStartedHasBeenSet = true; m_instanceTerminationWaitTimeStarted = value; }

    /**
     * <p>Indicates whether the wait period set for the termination of instances in the
     * original environment has started. Status is 'false' if the KEEP_ALIVE option is
     * specified. Otherwise, 'true' as soon as the termination wait period starts.</p>
     */
    inline DeploymentInfo& WithInstanceTerminationWaitTimeStarted(bool value) { SetInstanceTerminationWaitTimeStarted(value); return *this;}


    /**
     * <p>Information about blue/green deployment options for this deployment.</p>
     */
    inline const BlueGreenDeploymentConfiguration& GetBlueGreenDeploymentConfiguration() const{ return m_blueGreenDeploymentConfiguration; }

    /**
     * <p>Information about blue/green deployment options for this deployment.</p>
     */
    inline bool BlueGreenDeploymentConfigurationHasBeenSet() const { return m_blueGreenDeploymentConfigurationHasBeenSet; }

    /**
     * <p>Information about blue/green deployment options for this deployment.</p>
     */
    inline void SetBlueGreenDeploymentConfiguration(const BlueGreenDeploymentConfiguration& value) { m_blueGreenDeploymentConfigurationHasBeenSet = true; m_blueGreenDeploymentConfiguration = value; }

    /**
     * <p>Information about blue/green deployment options for this deployment.</p>
     */
    inline void SetBlueGreenDeploymentConfiguration(BlueGreenDeploymentConfiguration&& value) { m_blueGreenDeploymentConfigurationHasBeenSet = true; m_blueGreenDeploymentConfiguration = std::move(value); }

    /**
     * <p>Information about blue/green deployment options for this deployment.</p>
     */
    inline DeploymentInfo& WithBlueGreenDeploymentConfiguration(const BlueGreenDeploymentConfiguration& value) { SetBlueGreenDeploymentConfiguration(value); return *this;}

    /**
     * <p>Information about blue/green deployment options for this deployment.</p>
     */
    inline DeploymentInfo& WithBlueGreenDeploymentConfiguration(BlueGreenDeploymentConfiguration&& value) { SetBlueGreenDeploymentConfiguration(std::move(value)); return *this;}


    /**
     * <p>Information about the load balancer used in the deployment.</p>
     */
    inline const LoadBalancerInfo& GetLoadBalancerInfo() const{ return m_loadBalancerInfo; }

    /**
     * <p>Information about the load balancer used in the deployment.</p>
     */
    inline bool LoadBalancerInfoHasBeenSet() const { return m_loadBalancerInfoHasBeenSet; }

    /**
     * <p>Information about the load balancer used in the deployment.</p>
     */
    inline void SetLoadBalancerInfo(const LoadBalancerInfo& value) { m_loadBalancerInfoHasBeenSet = true; m_loadBalancerInfo = value; }

    /**
     * <p>Information about the load balancer used in the deployment.</p>
     */
    inline void SetLoadBalancerInfo(LoadBalancerInfo&& value) { m_loadBalancerInfoHasBeenSet = true; m_loadBalancerInfo = std::move(value); }

    /**
     * <p>Information about the load balancer used in the deployment.</p>
     */
    inline DeploymentInfo& WithLoadBalancerInfo(const LoadBalancerInfo& value) { SetLoadBalancerInfo(value); return *this;}

    /**
     * <p>Information about the load balancer used in the deployment.</p>
     */
    inline DeploymentInfo& WithLoadBalancerInfo(LoadBalancerInfo&& value) { SetLoadBalancerInfo(std::move(value)); return *this;}


    /**
     * <p>Provides information about the results of a deployment, such as whether
     * instances in the original environment in a blue/green deployment were not
     * terminated.</p>
     */
    inline const Aws::String& GetAdditionalDeploymentStatusInfo() const{ return m_additionalDeploymentStatusInfo; }

    /**
     * <p>Provides information about the results of a deployment, such as whether
     * instances in the original environment in a blue/green deployment were not
     * terminated.</p>
     */
    inline bool AdditionalDeploymentStatusInfoHasBeenSet() const { return m_additionalDeploymentStatusInfoHasBeenSet; }

    /**
     * <p>Provides information about the results of a deployment, such as whether
     * instances in the original environment in a blue/green deployment were not
     * terminated.</p>
     */
    inline void SetAdditionalDeploymentStatusInfo(const Aws::String& value) { m_additionalDeploymentStatusInfoHasBeenSet = true; m_additionalDeploymentStatusInfo = value; }

    /**
     * <p>Provides information about the results of a deployment, such as whether
     * instances in the original environment in a blue/green deployment were not
     * terminated.</p>
     */
    inline void SetAdditionalDeploymentStatusInfo(Aws::String&& value) { m_additionalDeploymentStatusInfoHasBeenSet = true; m_additionalDeploymentStatusInfo = std::move(value); }

    /**
     * <p>Provides information about the results of a deployment, such as whether
     * instances in the original environment in a blue/green deployment were not
     * terminated.</p>
     */
    inline void SetAdditionalDeploymentStatusInfo(const char* value) { m_additionalDeploymentStatusInfoHasBeenSet = true; m_additionalDeploymentStatusInfo.assign(value); }

    /**
     * <p>Provides information about the results of a deployment, such as whether
     * instances in the original environment in a blue/green deployment were not
     * terminated.</p>
     */
    inline DeploymentInfo& WithAdditionalDeploymentStatusInfo(const Aws::String& value) { SetAdditionalDeploymentStatusInfo(value); return *this;}

    /**
     * <p>Provides information about the results of a deployment, such as whether
     * instances in the original environment in a blue/green deployment were not
     * terminated.</p>
     */
    inline DeploymentInfo& WithAdditionalDeploymentStatusInfo(Aws::String&& value) { SetAdditionalDeploymentStatusInfo(std::move(value)); return *this;}

    /**
     * <p>Provides information about the results of a deployment, such as whether
     * instances in the original environment in a blue/green deployment were not
     * terminated.</p>
     */
    inline DeploymentInfo& WithAdditionalDeploymentStatusInfo(const char* value) { SetAdditionalDeploymentStatusInfo(value); return *this;}


    /**
     * <p>Information about how AWS CodeDeploy handles files that already exist in a
     * deployment target location but weren't part of the previous successful
     * deployment.</p> <ul> <li> <p>DISALLOW: The deployment fails. This is also the
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
     * deployment.</p> <ul> <li> <p>DISALLOW: The deployment fails. This is also the
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
     * deployment.</p> <ul> <li> <p>DISALLOW: The deployment fails. This is also the
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
     * deployment.</p> <ul> <li> <p>DISALLOW: The deployment fails. This is also the
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
     * deployment.</p> <ul> <li> <p>DISALLOW: The deployment fails. This is also the
     * default behavior if no option is specified.</p> </li> <li> <p>OVERWRITE: The
     * version of the file from the application revision currently being deployed
     * replaces the version already on the instance.</p> </li> <li> <p>RETAIN: The
     * version of the file already on the instance is kept and used as part of the new
     * deployment.</p> </li> </ul>
     */
    inline DeploymentInfo& WithFileExistsBehavior(const FileExistsBehavior& value) { SetFileExistsBehavior(value); return *this;}

    /**
     * <p>Information about how AWS CodeDeploy handles files that already exist in a
     * deployment target location but weren't part of the previous successful
     * deployment.</p> <ul> <li> <p>DISALLOW: The deployment fails. This is also the
     * default behavior if no option is specified.</p> </li> <li> <p>OVERWRITE: The
     * version of the file from the application revision currently being deployed
     * replaces the version already on the instance.</p> </li> <li> <p>RETAIN: The
     * version of the file already on the instance is kept and used as part of the new
     * deployment.</p> </li> </ul>
     */
    inline DeploymentInfo& WithFileExistsBehavior(FileExistsBehavior&& value) { SetFileExistsBehavior(std::move(value)); return *this;}


    /**
     * <p>Messages that contain information about the status of a deployment.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDeploymentStatusMessages() const{ return m_deploymentStatusMessages; }

    /**
     * <p>Messages that contain information about the status of a deployment.</p>
     */
    inline bool DeploymentStatusMessagesHasBeenSet() const { return m_deploymentStatusMessagesHasBeenSet; }

    /**
     * <p>Messages that contain information about the status of a deployment.</p>
     */
    inline void SetDeploymentStatusMessages(const Aws::Vector<Aws::String>& value) { m_deploymentStatusMessagesHasBeenSet = true; m_deploymentStatusMessages = value; }

    /**
     * <p>Messages that contain information about the status of a deployment.</p>
     */
    inline void SetDeploymentStatusMessages(Aws::Vector<Aws::String>&& value) { m_deploymentStatusMessagesHasBeenSet = true; m_deploymentStatusMessages = std::move(value); }

    /**
     * <p>Messages that contain information about the status of a deployment.</p>
     */
    inline DeploymentInfo& WithDeploymentStatusMessages(const Aws::Vector<Aws::String>& value) { SetDeploymentStatusMessages(value); return *this;}

    /**
     * <p>Messages that contain information about the status of a deployment.</p>
     */
    inline DeploymentInfo& WithDeploymentStatusMessages(Aws::Vector<Aws::String>&& value) { SetDeploymentStatusMessages(std::move(value)); return *this;}

    /**
     * <p>Messages that contain information about the status of a deployment.</p>
     */
    inline DeploymentInfo& AddDeploymentStatusMessages(const Aws::String& value) { m_deploymentStatusMessagesHasBeenSet = true; m_deploymentStatusMessages.push_back(value); return *this; }

    /**
     * <p>Messages that contain information about the status of a deployment.</p>
     */
    inline DeploymentInfo& AddDeploymentStatusMessages(Aws::String&& value) { m_deploymentStatusMessagesHasBeenSet = true; m_deploymentStatusMessages.push_back(std::move(value)); return *this; }

    /**
     * <p>Messages that contain information about the status of a deployment.</p>
     */
    inline DeploymentInfo& AddDeploymentStatusMessages(const char* value) { m_deploymentStatusMessagesHasBeenSet = true; m_deploymentStatusMessages.push_back(value); return *this; }


    /**
     * <p>The destination platform type for the deployment (<code>Lambda</code>,
     * <code>Server</code>, or <code>ECS</code>).</p>
     */
    inline const ComputePlatform& GetComputePlatform() const{ return m_computePlatform; }

    /**
     * <p>The destination platform type for the deployment (<code>Lambda</code>,
     * <code>Server</code>, or <code>ECS</code>).</p>
     */
    inline bool ComputePlatformHasBeenSet() const { return m_computePlatformHasBeenSet; }

    /**
     * <p>The destination platform type for the deployment (<code>Lambda</code>,
     * <code>Server</code>, or <code>ECS</code>).</p>
     */
    inline void SetComputePlatform(const ComputePlatform& value) { m_computePlatformHasBeenSet = true; m_computePlatform = value; }

    /**
     * <p>The destination platform type for the deployment (<code>Lambda</code>,
     * <code>Server</code>, or <code>ECS</code>).</p>
     */
    inline void SetComputePlatform(ComputePlatform&& value) { m_computePlatformHasBeenSet = true; m_computePlatform = std::move(value); }

    /**
     * <p>The destination platform type for the deployment (<code>Lambda</code>,
     * <code>Server</code>, or <code>ECS</code>).</p>
     */
    inline DeploymentInfo& WithComputePlatform(const ComputePlatform& value) { SetComputePlatform(value); return *this;}

    /**
     * <p>The destination platform type for the deployment (<code>Lambda</code>,
     * <code>Server</code>, or <code>ECS</code>).</p>
     */
    inline DeploymentInfo& WithComputePlatform(ComputePlatform&& value) { SetComputePlatform(std::move(value)); return *this;}

  private:

    Aws::String m_applicationName;
    bool m_applicationNameHasBeenSet;

    Aws::String m_deploymentGroupName;
    bool m_deploymentGroupNameHasBeenSet;

    Aws::String m_deploymentConfigName;
    bool m_deploymentConfigNameHasBeenSet;

    Aws::String m_deploymentId;
    bool m_deploymentIdHasBeenSet;

    RevisionLocation m_previousRevision;
    bool m_previousRevisionHasBeenSet;

    RevisionLocation m_revision;
    bool m_revisionHasBeenSet;

    DeploymentStatus m_status;
    bool m_statusHasBeenSet;

    ErrorInformation m_errorInformation;
    bool m_errorInformationHasBeenSet;

    Aws::Utils::DateTime m_createTime;
    bool m_createTimeHasBeenSet;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet;

    Aws::Utils::DateTime m_completeTime;
    bool m_completeTimeHasBeenSet;

    DeploymentOverview m_deploymentOverview;
    bool m_deploymentOverviewHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    DeploymentCreator m_creator;
    bool m_creatorHasBeenSet;

    bool m_ignoreApplicationStopFailures;
    bool m_ignoreApplicationStopFailuresHasBeenSet;

    AutoRollbackConfiguration m_autoRollbackConfiguration;
    bool m_autoRollbackConfigurationHasBeenSet;

    bool m_updateOutdatedInstancesOnly;
    bool m_updateOutdatedInstancesOnlyHasBeenSet;

    RollbackInfo m_rollbackInfo;
    bool m_rollbackInfoHasBeenSet;

    DeploymentStyle m_deploymentStyle;
    bool m_deploymentStyleHasBeenSet;

    TargetInstances m_targetInstances;
    bool m_targetInstancesHasBeenSet;

    bool m_instanceTerminationWaitTimeStarted;
    bool m_instanceTerminationWaitTimeStartedHasBeenSet;

    BlueGreenDeploymentConfiguration m_blueGreenDeploymentConfiguration;
    bool m_blueGreenDeploymentConfigurationHasBeenSet;

    LoadBalancerInfo m_loadBalancerInfo;
    bool m_loadBalancerInfoHasBeenSet;

    Aws::String m_additionalDeploymentStatusInfo;
    bool m_additionalDeploymentStatusInfoHasBeenSet;

    FileExistsBehavior m_fileExistsBehavior;
    bool m_fileExistsBehaviorHasBeenSet;

    Aws::Vector<Aws::String> m_deploymentStatusMessages;
    bool m_deploymentStatusMessagesHasBeenSet;

    ComputePlatform m_computePlatform;
    bool m_computePlatformHasBeenSet;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
