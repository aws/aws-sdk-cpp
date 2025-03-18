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
    AWS_CODEDEPLOY_API CreateDeploymentRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDeployment"; }

    AWS_CODEDEPLOY_API Aws::String SerializePayload() const override;

    AWS_CODEDEPLOY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of an CodeDeploy application associated with the user or Amazon Web
     * Services account.</p>
     */
    inline const Aws::String& GetApplicationName() const { return m_applicationName; }
    inline bool ApplicationNameHasBeenSet() const { return m_applicationNameHasBeenSet; }
    template<typename ApplicationNameT = Aws::String>
    void SetApplicationName(ApplicationNameT&& value) { m_applicationNameHasBeenSet = true; m_applicationName = std::forward<ApplicationNameT>(value); }
    template<typename ApplicationNameT = Aws::String>
    CreateDeploymentRequest& WithApplicationName(ApplicationNameT&& value) { SetApplicationName(std::forward<ApplicationNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the deployment group.</p>
     */
    inline const Aws::String& GetDeploymentGroupName() const { return m_deploymentGroupName; }
    inline bool DeploymentGroupNameHasBeenSet() const { return m_deploymentGroupNameHasBeenSet; }
    template<typename DeploymentGroupNameT = Aws::String>
    void SetDeploymentGroupName(DeploymentGroupNameT&& value) { m_deploymentGroupNameHasBeenSet = true; m_deploymentGroupName = std::forward<DeploymentGroupNameT>(value); }
    template<typename DeploymentGroupNameT = Aws::String>
    CreateDeploymentRequest& WithDeploymentGroupName(DeploymentGroupNameT&& value) { SetDeploymentGroupName(std::forward<DeploymentGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The type and location of the revision to deploy. </p>
     */
    inline const RevisionLocation& GetRevision() const { return m_revision; }
    inline bool RevisionHasBeenSet() const { return m_revisionHasBeenSet; }
    template<typename RevisionT = RevisionLocation>
    void SetRevision(RevisionT&& value) { m_revisionHasBeenSet = true; m_revision = std::forward<RevisionT>(value); }
    template<typename RevisionT = RevisionLocation>
    CreateDeploymentRequest& WithRevision(RevisionT&& value) { SetRevision(std::forward<RevisionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of a deployment configuration associated with the user or Amazon Web
     * Services account.</p> <p>If not specified, the value configured in the
     * deployment group is used as the default. If the deployment group does not have a
     * deployment configuration associated with it,
     * <code>CodeDeployDefault</code>.<code>OneAtATime</code> is used by default.</p>
     */
    inline const Aws::String& GetDeploymentConfigName() const { return m_deploymentConfigName; }
    inline bool DeploymentConfigNameHasBeenSet() const { return m_deploymentConfigNameHasBeenSet; }
    template<typename DeploymentConfigNameT = Aws::String>
    void SetDeploymentConfigName(DeploymentConfigNameT&& value) { m_deploymentConfigNameHasBeenSet = true; m_deploymentConfigName = std::forward<DeploymentConfigNameT>(value); }
    template<typename DeploymentConfigNameT = Aws::String>
    CreateDeploymentRequest& WithDeploymentConfigName(DeploymentConfigNameT&& value) { SetDeploymentConfigName(std::forward<DeploymentConfigNameT>(value)); return *this;}
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
    CreateDeploymentRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
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
    inline bool GetIgnoreApplicationStopFailures() const { return m_ignoreApplicationStopFailures; }
    inline bool IgnoreApplicationStopFailuresHasBeenSet() const { return m_ignoreApplicationStopFailuresHasBeenSet; }
    inline void SetIgnoreApplicationStopFailures(bool value) { m_ignoreApplicationStopFailuresHasBeenSet = true; m_ignoreApplicationStopFailures = value; }
    inline CreateDeploymentRequest& WithIgnoreApplicationStopFailures(bool value) { SetIgnoreApplicationStopFailures(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Information about the instances that belong to the replacement environment
     * in a blue/green deployment. </p>
     */
    inline const TargetInstances& GetTargetInstances() const { return m_targetInstances; }
    inline bool TargetInstancesHasBeenSet() const { return m_targetInstancesHasBeenSet; }
    template<typename TargetInstancesT = TargetInstances>
    void SetTargetInstances(TargetInstancesT&& value) { m_targetInstancesHasBeenSet = true; m_targetInstances = std::forward<TargetInstancesT>(value); }
    template<typename TargetInstancesT = TargetInstances>
    CreateDeploymentRequest& WithTargetInstances(TargetInstancesT&& value) { SetTargetInstances(std::forward<TargetInstancesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration information for an automatic rollback that is added when a
     * deployment is created.</p>
     */
    inline const AutoRollbackConfiguration& GetAutoRollbackConfiguration() const { return m_autoRollbackConfiguration; }
    inline bool AutoRollbackConfigurationHasBeenSet() const { return m_autoRollbackConfigurationHasBeenSet; }
    template<typename AutoRollbackConfigurationT = AutoRollbackConfiguration>
    void SetAutoRollbackConfiguration(AutoRollbackConfigurationT&& value) { m_autoRollbackConfigurationHasBeenSet = true; m_autoRollbackConfiguration = std::forward<AutoRollbackConfigurationT>(value); }
    template<typename AutoRollbackConfigurationT = AutoRollbackConfiguration>
    CreateDeploymentRequest& WithAutoRollbackConfiguration(AutoRollbackConfigurationT&& value) { SetAutoRollbackConfiguration(std::forward<AutoRollbackConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Indicates whether to deploy to all instances or only to instances that are
     * not running the latest application revision. </p>
     */
    inline bool GetUpdateOutdatedInstancesOnly() const { return m_updateOutdatedInstancesOnly; }
    inline bool UpdateOutdatedInstancesOnlyHasBeenSet() const { return m_updateOutdatedInstancesOnlyHasBeenSet; }
    inline void SetUpdateOutdatedInstancesOnly(bool value) { m_updateOutdatedInstancesOnlyHasBeenSet = true; m_updateOutdatedInstancesOnly = value; }
    inline CreateDeploymentRequest& WithUpdateOutdatedInstancesOnly(bool value) { SetUpdateOutdatedInstancesOnly(value); return *this;}
    ///@}

    ///@{
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
    inline FileExistsBehavior GetFileExistsBehavior() const { return m_fileExistsBehavior; }
    inline bool FileExistsBehaviorHasBeenSet() const { return m_fileExistsBehaviorHasBeenSet; }
    inline void SetFileExistsBehavior(FileExistsBehavior value) { m_fileExistsBehaviorHasBeenSet = true; m_fileExistsBehavior = value; }
    inline CreateDeploymentRequest& WithFileExistsBehavior(FileExistsBehavior value) { SetFileExistsBehavior(value); return *this;}
    ///@}

    ///@{
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
    inline const AlarmConfiguration& GetOverrideAlarmConfiguration() const { return m_overrideAlarmConfiguration; }
    inline bool OverrideAlarmConfigurationHasBeenSet() const { return m_overrideAlarmConfigurationHasBeenSet; }
    template<typename OverrideAlarmConfigurationT = AlarmConfiguration>
    void SetOverrideAlarmConfiguration(OverrideAlarmConfigurationT&& value) { m_overrideAlarmConfigurationHasBeenSet = true; m_overrideAlarmConfiguration = std::forward<OverrideAlarmConfigurationT>(value); }
    template<typename OverrideAlarmConfigurationT = AlarmConfiguration>
    CreateDeploymentRequest& WithOverrideAlarmConfiguration(OverrideAlarmConfigurationT&& value) { SetOverrideAlarmConfiguration(std::forward<OverrideAlarmConfigurationT>(value)); return *this;}
    ///@}
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

    bool m_ignoreApplicationStopFailures{false};
    bool m_ignoreApplicationStopFailuresHasBeenSet = false;

    TargetInstances m_targetInstances;
    bool m_targetInstancesHasBeenSet = false;

    AutoRollbackConfiguration m_autoRollbackConfiguration;
    bool m_autoRollbackConfigurationHasBeenSet = false;

    bool m_updateOutdatedInstancesOnly{false};
    bool m_updateOutdatedInstancesOnlyHasBeenSet = false;

    FileExistsBehavior m_fileExistsBehavior{FileExistsBehavior::NOT_SET};
    bool m_fileExistsBehaviorHasBeenSet = false;

    AlarmConfiguration m_overrideAlarmConfiguration;
    bool m_overrideAlarmConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
