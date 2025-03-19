/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
#include <aws/codedeploy/model/RelatedDeployments.h>
#include <aws/codedeploy/model/AlarmConfiguration.h>
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
  class DeploymentInfo
  {
  public:
    AWS_CODEDEPLOY_API DeploymentInfo() = default;
    AWS_CODEDEPLOY_API DeploymentInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEDEPLOY_API DeploymentInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEDEPLOY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The application name.</p>
     */
    inline const Aws::String& GetApplicationName() const { return m_applicationName; }
    inline bool ApplicationNameHasBeenSet() const { return m_applicationNameHasBeenSet; }
    template<typename ApplicationNameT = Aws::String>
    void SetApplicationName(ApplicationNameT&& value) { m_applicationNameHasBeenSet = true; m_applicationName = std::forward<ApplicationNameT>(value); }
    template<typename ApplicationNameT = Aws::String>
    DeploymentInfo& WithApplicationName(ApplicationNameT&& value) { SetApplicationName(std::forward<ApplicationNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The deployment group name. </p>
     */
    inline const Aws::String& GetDeploymentGroupName() const { return m_deploymentGroupName; }
    inline bool DeploymentGroupNameHasBeenSet() const { return m_deploymentGroupNameHasBeenSet; }
    template<typename DeploymentGroupNameT = Aws::String>
    void SetDeploymentGroupName(DeploymentGroupNameT&& value) { m_deploymentGroupNameHasBeenSet = true; m_deploymentGroupName = std::forward<DeploymentGroupNameT>(value); }
    template<typename DeploymentGroupNameT = Aws::String>
    DeploymentInfo& WithDeploymentGroupName(DeploymentGroupNameT&& value) { SetDeploymentGroupName(std::forward<DeploymentGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The deployment configuration name. </p>
     */
    inline const Aws::String& GetDeploymentConfigName() const { return m_deploymentConfigName; }
    inline bool DeploymentConfigNameHasBeenSet() const { return m_deploymentConfigNameHasBeenSet; }
    template<typename DeploymentConfigNameT = Aws::String>
    void SetDeploymentConfigName(DeploymentConfigNameT&& value) { m_deploymentConfigNameHasBeenSet = true; m_deploymentConfigName = std::forward<DeploymentConfigNameT>(value); }
    template<typename DeploymentConfigNameT = Aws::String>
    DeploymentInfo& WithDeploymentConfigName(DeploymentConfigNameT&& value) { SetDeploymentConfigName(std::forward<DeploymentConfigNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The unique ID of a deployment. </p>
     */
    inline const Aws::String& GetDeploymentId() const { return m_deploymentId; }
    inline bool DeploymentIdHasBeenSet() const { return m_deploymentIdHasBeenSet; }
    template<typename DeploymentIdT = Aws::String>
    void SetDeploymentId(DeploymentIdT&& value) { m_deploymentIdHasBeenSet = true; m_deploymentId = std::forward<DeploymentIdT>(value); }
    template<typename DeploymentIdT = Aws::String>
    DeploymentInfo& WithDeploymentId(DeploymentIdT&& value) { SetDeploymentId(std::forward<DeploymentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the application revision that was deployed to the
     * deployment group before the most recent successful deployment.</p>
     */
    inline const RevisionLocation& GetPreviousRevision() const { return m_previousRevision; }
    inline bool PreviousRevisionHasBeenSet() const { return m_previousRevisionHasBeenSet; }
    template<typename PreviousRevisionT = RevisionLocation>
    void SetPreviousRevision(PreviousRevisionT&& value) { m_previousRevisionHasBeenSet = true; m_previousRevision = std::forward<PreviousRevisionT>(value); }
    template<typename PreviousRevisionT = RevisionLocation>
    DeploymentInfo& WithPreviousRevision(PreviousRevisionT&& value) { SetPreviousRevision(std::forward<PreviousRevisionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the location of stored application artifacts and the
     * service from which to retrieve them.</p>
     */
    inline const RevisionLocation& GetRevision() const { return m_revision; }
    inline bool RevisionHasBeenSet() const { return m_revisionHasBeenSet; }
    template<typename RevisionT = RevisionLocation>
    void SetRevision(RevisionT&& value) { m_revisionHasBeenSet = true; m_revision = std::forward<RevisionT>(value); }
    template<typename RevisionT = RevisionLocation>
    DeploymentInfo& WithRevision(RevisionT&& value) { SetRevision(std::forward<RevisionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of the deployment as a whole.</p>
     */
    inline DeploymentStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(DeploymentStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline DeploymentInfo& WithStatus(DeploymentStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about any error associated with this deployment.</p>
     */
    inline const ErrorInformation& GetErrorInformation() const { return m_errorInformation; }
    inline bool ErrorInformationHasBeenSet() const { return m_errorInformationHasBeenSet; }
    template<typename ErrorInformationT = ErrorInformation>
    void SetErrorInformation(ErrorInformationT&& value) { m_errorInformationHasBeenSet = true; m_errorInformation = std::forward<ErrorInformationT>(value); }
    template<typename ErrorInformationT = ErrorInformation>
    DeploymentInfo& WithErrorInformation(ErrorInformationT&& value) { SetErrorInformation(std::forward<ErrorInformationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp that indicates when the deployment was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const { return m_createTime; }
    inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }
    template<typename CreateTimeT = Aws::Utils::DateTime>
    void SetCreateTime(CreateTimeT&& value) { m_createTimeHasBeenSet = true; m_createTime = std::forward<CreateTimeT>(value); }
    template<typename CreateTimeT = Aws::Utils::DateTime>
    DeploymentInfo& WithCreateTime(CreateTimeT&& value) { SetCreateTime(std::forward<CreateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp that indicates when the deployment was deployed to the deployment
     * group.</p> <p>In some cases, the reported value of the start time might be later
     * than the complete time. This is due to differences in the clock settings of
     * backend servers that participate in the deployment process.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    DeploymentInfo& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp that indicates when the deployment was complete.</p>
     */
    inline const Aws::Utils::DateTime& GetCompleteTime() const { return m_completeTime; }
    inline bool CompleteTimeHasBeenSet() const { return m_completeTimeHasBeenSet; }
    template<typename CompleteTimeT = Aws::Utils::DateTime>
    void SetCompleteTime(CompleteTimeT&& value) { m_completeTimeHasBeenSet = true; m_completeTime = std::forward<CompleteTimeT>(value); }
    template<typename CompleteTimeT = Aws::Utils::DateTime>
    DeploymentInfo& WithCompleteTime(CompleteTimeT&& value) { SetCompleteTime(std::forward<CompleteTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A summary of the deployment status of the instances in the deployment.</p>
     */
    inline const DeploymentOverview& GetDeploymentOverview() const { return m_deploymentOverview; }
    inline bool DeploymentOverviewHasBeenSet() const { return m_deploymentOverviewHasBeenSet; }
    template<typename DeploymentOverviewT = DeploymentOverview>
    void SetDeploymentOverview(DeploymentOverviewT&& value) { m_deploymentOverviewHasBeenSet = true; m_deploymentOverview = std::forward<DeploymentOverviewT>(value); }
    template<typename DeploymentOverviewT = DeploymentOverview>
    DeploymentInfo& WithDeploymentOverview(DeploymentOverviewT&& value) { SetDeploymentOverview(std::forward<DeploymentOverviewT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A comment about the deployment.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    DeploymentInfo& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The means by which the deployment was created:</p> <ul> <li> <p>
     * <code>user</code>: A user created the deployment.</p> </li> <li> <p>
     * <code>autoscaling</code>: Amazon EC2 Auto Scaling created the deployment.</p>
     * </li> <li> <p> <code>codeDeployRollback</code>: A rollback process created the
     * deployment.</p> </li> <li> <p> <code>CodeDeployAutoUpdate</code>: An auto-update
     * process created the deployment when it detected outdated Amazon EC2
     * instances.</p> </li> </ul>
     */
    inline DeploymentCreator GetCreator() const { return m_creator; }
    inline bool CreatorHasBeenSet() const { return m_creatorHasBeenSet; }
    inline void SetCreator(DeploymentCreator value) { m_creatorHasBeenSet = true; m_creator = value; }
    inline DeploymentInfo& WithCreator(DeploymentCreator value) { SetCreator(value); return *this;}
    ///@}

    ///@{
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
     * CodeDeploy agent runs the scripts specified for <code>ApplicationStop</code>,
     * <code>BeforeBlockTraffic</code>, and <code>AfterBlockTraffic</code> in the
     * AppSpec file from the previous successful deployment. (All other scripts are run
     * from the AppSpec file in the current deployment.) If one of these scripts
     * contains an error and does not run successfully, the deployment can fail. </p>
     * <p> If the cause of the failure is a script from the last successful deployment
     * that will never run successfully, create a new deployment and use
     * <code>ignoreApplicationStopFailures</code> to specify that the
     * <code>ApplicationStop</code>, <code>BeforeBlockTraffic</code>, and
     * <code>AfterBlockTraffic</code> failures should be ignored. </p>
     */
    inline bool GetIgnoreApplicationStopFailures() const { return m_ignoreApplicationStopFailures; }
    inline bool IgnoreApplicationStopFailuresHasBeenSet() const { return m_ignoreApplicationStopFailuresHasBeenSet; }
    inline void SetIgnoreApplicationStopFailures(bool value) { m_ignoreApplicationStopFailuresHasBeenSet = true; m_ignoreApplicationStopFailures = value; }
    inline DeploymentInfo& WithIgnoreApplicationStopFailures(bool value) { SetIgnoreApplicationStopFailures(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the automatic rollback configuration associated with the
     * deployment.</p>
     */
    inline const AutoRollbackConfiguration& GetAutoRollbackConfiguration() const { return m_autoRollbackConfiguration; }
    inline bool AutoRollbackConfigurationHasBeenSet() const { return m_autoRollbackConfigurationHasBeenSet; }
    template<typename AutoRollbackConfigurationT = AutoRollbackConfiguration>
    void SetAutoRollbackConfiguration(AutoRollbackConfigurationT&& value) { m_autoRollbackConfigurationHasBeenSet = true; m_autoRollbackConfiguration = std::forward<AutoRollbackConfigurationT>(value); }
    template<typename AutoRollbackConfigurationT = AutoRollbackConfiguration>
    DeploymentInfo& WithAutoRollbackConfiguration(AutoRollbackConfigurationT&& value) { SetAutoRollbackConfiguration(std::forward<AutoRollbackConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether only instances that are not running the latest application
     * revision are to be deployed to.</p>
     */
    inline bool GetUpdateOutdatedInstancesOnly() const { return m_updateOutdatedInstancesOnly; }
    inline bool UpdateOutdatedInstancesOnlyHasBeenSet() const { return m_updateOutdatedInstancesOnlyHasBeenSet; }
    inline void SetUpdateOutdatedInstancesOnly(bool value) { m_updateOutdatedInstancesOnlyHasBeenSet = true; m_updateOutdatedInstancesOnly = value; }
    inline DeploymentInfo& WithUpdateOutdatedInstancesOnly(bool value) { SetUpdateOutdatedInstancesOnly(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about a deployment rollback.</p>
     */
    inline const RollbackInfo& GetRollbackInfo() const { return m_rollbackInfo; }
    inline bool RollbackInfoHasBeenSet() const { return m_rollbackInfoHasBeenSet; }
    template<typename RollbackInfoT = RollbackInfo>
    void SetRollbackInfo(RollbackInfoT&& value) { m_rollbackInfoHasBeenSet = true; m_rollbackInfo = std::forward<RollbackInfoT>(value); }
    template<typename RollbackInfoT = RollbackInfo>
    DeploymentInfo& WithRollbackInfo(RollbackInfoT&& value) { SetRollbackInfo(std::forward<RollbackInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the type of deployment, either in-place or blue/green, you
     * want to run and whether to route deployment traffic behind a load balancer.</p>
     */
    inline const DeploymentStyle& GetDeploymentStyle() const { return m_deploymentStyle; }
    inline bool DeploymentStyleHasBeenSet() const { return m_deploymentStyleHasBeenSet; }
    template<typename DeploymentStyleT = DeploymentStyle>
    void SetDeploymentStyle(DeploymentStyleT&& value) { m_deploymentStyleHasBeenSet = true; m_deploymentStyle = std::forward<DeploymentStyleT>(value); }
    template<typename DeploymentStyleT = DeploymentStyle>
    DeploymentInfo& WithDeploymentStyle(DeploymentStyleT&& value) { SetDeploymentStyle(std::forward<DeploymentStyleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the instances that belong to the replacement environment in
     * a blue/green deployment.</p>
     */
    inline const TargetInstances& GetTargetInstances() const { return m_targetInstances; }
    inline bool TargetInstancesHasBeenSet() const { return m_targetInstancesHasBeenSet; }
    template<typename TargetInstancesT = TargetInstances>
    void SetTargetInstances(TargetInstancesT&& value) { m_targetInstancesHasBeenSet = true; m_targetInstances = std::forward<TargetInstancesT>(value); }
    template<typename TargetInstancesT = TargetInstances>
    DeploymentInfo& WithTargetInstances(TargetInstancesT&& value) { SetTargetInstances(std::forward<TargetInstancesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the wait period set for the termination of instances in the
     * original environment has started. Status is 'false' if the KEEP_ALIVE option is
     * specified. Otherwise, 'true' as soon as the termination wait period starts.</p>
     */
    inline bool GetInstanceTerminationWaitTimeStarted() const { return m_instanceTerminationWaitTimeStarted; }
    inline bool InstanceTerminationWaitTimeStartedHasBeenSet() const { return m_instanceTerminationWaitTimeStartedHasBeenSet; }
    inline void SetInstanceTerminationWaitTimeStarted(bool value) { m_instanceTerminationWaitTimeStartedHasBeenSet = true; m_instanceTerminationWaitTimeStarted = value; }
    inline DeploymentInfo& WithInstanceTerminationWaitTimeStarted(bool value) { SetInstanceTerminationWaitTimeStarted(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about blue/green deployment options for this deployment.</p>
     */
    inline const BlueGreenDeploymentConfiguration& GetBlueGreenDeploymentConfiguration() const { return m_blueGreenDeploymentConfiguration; }
    inline bool BlueGreenDeploymentConfigurationHasBeenSet() const { return m_blueGreenDeploymentConfigurationHasBeenSet; }
    template<typename BlueGreenDeploymentConfigurationT = BlueGreenDeploymentConfiguration>
    void SetBlueGreenDeploymentConfiguration(BlueGreenDeploymentConfigurationT&& value) { m_blueGreenDeploymentConfigurationHasBeenSet = true; m_blueGreenDeploymentConfiguration = std::forward<BlueGreenDeploymentConfigurationT>(value); }
    template<typename BlueGreenDeploymentConfigurationT = BlueGreenDeploymentConfiguration>
    DeploymentInfo& WithBlueGreenDeploymentConfiguration(BlueGreenDeploymentConfigurationT&& value) { SetBlueGreenDeploymentConfiguration(std::forward<BlueGreenDeploymentConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the load balancer used in the deployment.</p>
     */
    inline const LoadBalancerInfo& GetLoadBalancerInfo() const { return m_loadBalancerInfo; }
    inline bool LoadBalancerInfoHasBeenSet() const { return m_loadBalancerInfoHasBeenSet; }
    template<typename LoadBalancerInfoT = LoadBalancerInfo>
    void SetLoadBalancerInfo(LoadBalancerInfoT&& value) { m_loadBalancerInfoHasBeenSet = true; m_loadBalancerInfo = std::forward<LoadBalancerInfoT>(value); }
    template<typename LoadBalancerInfoT = LoadBalancerInfo>
    DeploymentInfo& WithLoadBalancerInfo(LoadBalancerInfoT&& value) { SetLoadBalancerInfo(std::forward<LoadBalancerInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides information about the results of a deployment, such as whether
     * instances in the original environment in a blue/green deployment were not
     * terminated.</p>
     */
    inline const Aws::String& GetAdditionalDeploymentStatusInfo() const { return m_additionalDeploymentStatusInfo; }
    inline bool AdditionalDeploymentStatusInfoHasBeenSet() const { return m_additionalDeploymentStatusInfoHasBeenSet; }
    template<typename AdditionalDeploymentStatusInfoT = Aws::String>
    void SetAdditionalDeploymentStatusInfo(AdditionalDeploymentStatusInfoT&& value) { m_additionalDeploymentStatusInfoHasBeenSet = true; m_additionalDeploymentStatusInfo = std::forward<AdditionalDeploymentStatusInfoT>(value); }
    template<typename AdditionalDeploymentStatusInfoT = Aws::String>
    DeploymentInfo& WithAdditionalDeploymentStatusInfo(AdditionalDeploymentStatusInfoT&& value) { SetAdditionalDeploymentStatusInfo(std::forward<AdditionalDeploymentStatusInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about how CodeDeploy handles files that already exist in a
     * deployment target location but weren't part of the previous successful
     * deployment.</p> <ul> <li> <p> <code>DISALLOW</code>: The deployment fails. This
     * is also the default behavior if no option is specified.</p> </li> <li> <p>
     * <code>OVERWRITE</code>: The version of the file from the application revision
     * currently being deployed replaces the version already on the instance.</p> </li>
     * <li> <p> <code>RETAIN</code>: The version of the file already on the instance is
     * kept and used as part of the new deployment.</p> </li> </ul>
     */
    inline FileExistsBehavior GetFileExistsBehavior() const { return m_fileExistsBehavior; }
    inline bool FileExistsBehaviorHasBeenSet() const { return m_fileExistsBehaviorHasBeenSet; }
    inline void SetFileExistsBehavior(FileExistsBehavior value) { m_fileExistsBehaviorHasBeenSet = true; m_fileExistsBehavior = value; }
    inline DeploymentInfo& WithFileExistsBehavior(FileExistsBehavior value) { SetFileExistsBehavior(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Messages that contain information about the status of a deployment.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDeploymentStatusMessages() const { return m_deploymentStatusMessages; }
    inline bool DeploymentStatusMessagesHasBeenSet() const { return m_deploymentStatusMessagesHasBeenSet; }
    template<typename DeploymentStatusMessagesT = Aws::Vector<Aws::String>>
    void SetDeploymentStatusMessages(DeploymentStatusMessagesT&& value) { m_deploymentStatusMessagesHasBeenSet = true; m_deploymentStatusMessages = std::forward<DeploymentStatusMessagesT>(value); }
    template<typename DeploymentStatusMessagesT = Aws::Vector<Aws::String>>
    DeploymentInfo& WithDeploymentStatusMessages(DeploymentStatusMessagesT&& value) { SetDeploymentStatusMessages(std::forward<DeploymentStatusMessagesT>(value)); return *this;}
    template<typename DeploymentStatusMessagesT = Aws::String>
    DeploymentInfo& AddDeploymentStatusMessages(DeploymentStatusMessagesT&& value) { m_deploymentStatusMessagesHasBeenSet = true; m_deploymentStatusMessages.emplace_back(std::forward<DeploymentStatusMessagesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The destination platform type for the deployment (<code>Lambda</code>,
     * <code>Server</code>, or <code>ECS</code>).</p>
     */
    inline ComputePlatform GetComputePlatform() const { return m_computePlatform; }
    inline bool ComputePlatformHasBeenSet() const { return m_computePlatformHasBeenSet; }
    inline void SetComputePlatform(ComputePlatform value) { m_computePlatformHasBeenSet = true; m_computePlatform = value; }
    inline DeploymentInfo& WithComputePlatform(ComputePlatform value) { SetComputePlatform(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique ID for an external resource (for example, a CloudFormation stack
     * ID) that is linked to this deployment.</p>
     */
    inline const Aws::String& GetExternalId() const { return m_externalId; }
    inline bool ExternalIdHasBeenSet() const { return m_externalIdHasBeenSet; }
    template<typename ExternalIdT = Aws::String>
    void SetExternalId(ExternalIdT&& value) { m_externalIdHasBeenSet = true; m_externalId = std::forward<ExternalIdT>(value); }
    template<typename ExternalIdT = Aws::String>
    DeploymentInfo& WithExternalId(ExternalIdT&& value) { SetExternalId(std::forward<ExternalIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const RelatedDeployments& GetRelatedDeployments() const { return m_relatedDeployments; }
    inline bool RelatedDeploymentsHasBeenSet() const { return m_relatedDeploymentsHasBeenSet; }
    template<typename RelatedDeploymentsT = RelatedDeployments>
    void SetRelatedDeployments(RelatedDeploymentsT&& value) { m_relatedDeploymentsHasBeenSet = true; m_relatedDeployments = std::forward<RelatedDeploymentsT>(value); }
    template<typename RelatedDeploymentsT = RelatedDeployments>
    DeploymentInfo& WithRelatedDeployments(RelatedDeploymentsT&& value) { SetRelatedDeployments(std::forward<RelatedDeploymentsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const AlarmConfiguration& GetOverrideAlarmConfiguration() const { return m_overrideAlarmConfiguration; }
    inline bool OverrideAlarmConfigurationHasBeenSet() const { return m_overrideAlarmConfigurationHasBeenSet; }
    template<typename OverrideAlarmConfigurationT = AlarmConfiguration>
    void SetOverrideAlarmConfiguration(OverrideAlarmConfigurationT&& value) { m_overrideAlarmConfigurationHasBeenSet = true; m_overrideAlarmConfiguration = std::forward<OverrideAlarmConfigurationT>(value); }
    template<typename OverrideAlarmConfigurationT = AlarmConfiguration>
    DeploymentInfo& WithOverrideAlarmConfiguration(OverrideAlarmConfigurationT&& value) { SetOverrideAlarmConfiguration(std::forward<OverrideAlarmConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_applicationName;
    bool m_applicationNameHasBeenSet = false;

    Aws::String m_deploymentGroupName;
    bool m_deploymentGroupNameHasBeenSet = false;

    Aws::String m_deploymentConfigName;
    bool m_deploymentConfigNameHasBeenSet = false;

    Aws::String m_deploymentId;
    bool m_deploymentIdHasBeenSet = false;

    RevisionLocation m_previousRevision;
    bool m_previousRevisionHasBeenSet = false;

    RevisionLocation m_revision;
    bool m_revisionHasBeenSet = false;

    DeploymentStatus m_status{DeploymentStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    ErrorInformation m_errorInformation;
    bool m_errorInformationHasBeenSet = false;

    Aws::Utils::DateTime m_createTime{};
    bool m_createTimeHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_completeTime{};
    bool m_completeTimeHasBeenSet = false;

    DeploymentOverview m_deploymentOverview;
    bool m_deploymentOverviewHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    DeploymentCreator m_creator{DeploymentCreator::NOT_SET};
    bool m_creatorHasBeenSet = false;

    bool m_ignoreApplicationStopFailures{false};
    bool m_ignoreApplicationStopFailuresHasBeenSet = false;

    AutoRollbackConfiguration m_autoRollbackConfiguration;
    bool m_autoRollbackConfigurationHasBeenSet = false;

    bool m_updateOutdatedInstancesOnly{false};
    bool m_updateOutdatedInstancesOnlyHasBeenSet = false;

    RollbackInfo m_rollbackInfo;
    bool m_rollbackInfoHasBeenSet = false;

    DeploymentStyle m_deploymentStyle;
    bool m_deploymentStyleHasBeenSet = false;

    TargetInstances m_targetInstances;
    bool m_targetInstancesHasBeenSet = false;

    bool m_instanceTerminationWaitTimeStarted{false};
    bool m_instanceTerminationWaitTimeStartedHasBeenSet = false;

    BlueGreenDeploymentConfiguration m_blueGreenDeploymentConfiguration;
    bool m_blueGreenDeploymentConfigurationHasBeenSet = false;

    LoadBalancerInfo m_loadBalancerInfo;
    bool m_loadBalancerInfoHasBeenSet = false;

    Aws::String m_additionalDeploymentStatusInfo;
    bool m_additionalDeploymentStatusInfoHasBeenSet = false;

    FileExistsBehavior m_fileExistsBehavior{FileExistsBehavior::NOT_SET};
    bool m_fileExistsBehaviorHasBeenSet = false;

    Aws::Vector<Aws::String> m_deploymentStatusMessages;
    bool m_deploymentStatusMessagesHasBeenSet = false;

    ComputePlatform m_computePlatform{ComputePlatform::NOT_SET};
    bool m_computePlatformHasBeenSet = false;

    Aws::String m_externalId;
    bool m_externalIdHasBeenSet = false;

    RelatedDeployments m_relatedDeployments;
    bool m_relatedDeploymentsHasBeenSet = false;

    AlarmConfiguration m_overrideAlarmConfiguration;
    bool m_overrideAlarmConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
