/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appconfig/AppConfig_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appconfig/model/GrowthType.h>
#include <aws/appconfig/model/DeploymentState.h>
#include <aws/core/utils/DateTime.h>
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
namespace AppConfig
{
namespace Model
{

  /**
   * <p>Information about the deployment.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/DeploymentSummary">AWS
   * API Reference</a></p>
   */
  class DeploymentSummary
  {
  public:
    AWS_APPCONFIG_API DeploymentSummary() = default;
    AWS_APPCONFIG_API DeploymentSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPCONFIG_API DeploymentSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPCONFIG_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The sequence number of the deployment.</p>
     */
    inline int GetDeploymentNumber() const { return m_deploymentNumber; }
    inline bool DeploymentNumberHasBeenSet() const { return m_deploymentNumberHasBeenSet; }
    inline void SetDeploymentNumber(int value) { m_deploymentNumberHasBeenSet = true; m_deploymentNumber = value; }
    inline DeploymentSummary& WithDeploymentNumber(int value) { SetDeploymentNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the configuration.</p>
     */
    inline const Aws::String& GetConfigurationName() const { return m_configurationName; }
    inline bool ConfigurationNameHasBeenSet() const { return m_configurationNameHasBeenSet; }
    template<typename ConfigurationNameT = Aws::String>
    void SetConfigurationName(ConfigurationNameT&& value) { m_configurationNameHasBeenSet = true; m_configurationName = std::forward<ConfigurationNameT>(value); }
    template<typename ConfigurationNameT = Aws::String>
    DeploymentSummary& WithConfigurationName(ConfigurationNameT&& value) { SetConfigurationName(std::forward<ConfigurationNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the configuration.</p>
     */
    inline const Aws::String& GetConfigurationVersion() const { return m_configurationVersion; }
    inline bool ConfigurationVersionHasBeenSet() const { return m_configurationVersionHasBeenSet; }
    template<typename ConfigurationVersionT = Aws::String>
    void SetConfigurationVersion(ConfigurationVersionT&& value) { m_configurationVersionHasBeenSet = true; m_configurationVersion = std::forward<ConfigurationVersionT>(value); }
    template<typename ConfigurationVersionT = Aws::String>
    DeploymentSummary& WithConfigurationVersion(ConfigurationVersionT&& value) { SetConfigurationVersion(std::forward<ConfigurationVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Total amount of time the deployment lasted.</p>
     */
    inline int GetDeploymentDurationInMinutes() const { return m_deploymentDurationInMinutes; }
    inline bool DeploymentDurationInMinutesHasBeenSet() const { return m_deploymentDurationInMinutesHasBeenSet; }
    inline void SetDeploymentDurationInMinutes(int value) { m_deploymentDurationInMinutesHasBeenSet = true; m_deploymentDurationInMinutes = value; }
    inline DeploymentSummary& WithDeploymentDurationInMinutes(int value) { SetDeploymentDurationInMinutes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The algorithm used to define how percentage grows over time.</p>
     */
    inline GrowthType GetGrowthType() const { return m_growthType; }
    inline bool GrowthTypeHasBeenSet() const { return m_growthTypeHasBeenSet; }
    inline void SetGrowthType(GrowthType value) { m_growthTypeHasBeenSet = true; m_growthType = value; }
    inline DeploymentSummary& WithGrowthType(GrowthType value) { SetGrowthType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The percentage of targets to receive a deployed configuration during each
     * interval.</p>
     */
    inline double GetGrowthFactor() const { return m_growthFactor; }
    inline bool GrowthFactorHasBeenSet() const { return m_growthFactorHasBeenSet; }
    inline void SetGrowthFactor(double value) { m_growthFactorHasBeenSet = true; m_growthFactor = value; }
    inline DeploymentSummary& WithGrowthFactor(double value) { SetGrowthFactor(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of time that AppConfig monitors for alarms before considering the
     * deployment to be complete and no longer eligible for automatic rollback.</p>
     */
    inline int GetFinalBakeTimeInMinutes() const { return m_finalBakeTimeInMinutes; }
    inline bool FinalBakeTimeInMinutesHasBeenSet() const { return m_finalBakeTimeInMinutesHasBeenSet; }
    inline void SetFinalBakeTimeInMinutes(int value) { m_finalBakeTimeInMinutesHasBeenSet = true; m_finalBakeTimeInMinutes = value; }
    inline DeploymentSummary& WithFinalBakeTimeInMinutes(int value) { SetFinalBakeTimeInMinutes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the deployment.</p>
     */
    inline DeploymentState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(DeploymentState value) { m_stateHasBeenSet = true; m_state = value; }
    inline DeploymentSummary& WithState(DeploymentState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The percentage of targets for which the deployment is available.</p>
     */
    inline double GetPercentageComplete() const { return m_percentageComplete; }
    inline bool PercentageCompleteHasBeenSet() const { return m_percentageCompleteHasBeenSet; }
    inline void SetPercentageComplete(double value) { m_percentageCompleteHasBeenSet = true; m_percentageComplete = value; }
    inline DeploymentSummary& WithPercentageComplete(double value) { SetPercentageComplete(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Time the deployment started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartedAt() const { return m_startedAt; }
    inline bool StartedAtHasBeenSet() const { return m_startedAtHasBeenSet; }
    template<typename StartedAtT = Aws::Utils::DateTime>
    void SetStartedAt(StartedAtT&& value) { m_startedAtHasBeenSet = true; m_startedAt = std::forward<StartedAtT>(value); }
    template<typename StartedAtT = Aws::Utils::DateTime>
    DeploymentSummary& WithStartedAt(StartedAtT&& value) { SetStartedAt(std::forward<StartedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Time the deployment completed.</p>
     */
    inline const Aws::Utils::DateTime& GetCompletedAt() const { return m_completedAt; }
    inline bool CompletedAtHasBeenSet() const { return m_completedAtHasBeenSet; }
    template<typename CompletedAtT = Aws::Utils::DateTime>
    void SetCompletedAt(CompletedAtT&& value) { m_completedAtHasBeenSet = true; m_completedAt = std::forward<CompletedAtT>(value); }
    template<typename CompletedAtT = Aws::Utils::DateTime>
    DeploymentSummary& WithCompletedAt(CompletedAtT&& value) { SetCompletedAt(std::forward<CompletedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A user-defined label for an AppConfig hosted configuration version.</p>
     */
    inline const Aws::String& GetVersionLabel() const { return m_versionLabel; }
    inline bool VersionLabelHasBeenSet() const { return m_versionLabelHasBeenSet; }
    template<typename VersionLabelT = Aws::String>
    void SetVersionLabel(VersionLabelT&& value) { m_versionLabelHasBeenSet = true; m_versionLabel = std::forward<VersionLabelT>(value); }
    template<typename VersionLabelT = Aws::String>
    DeploymentSummary& WithVersionLabel(VersionLabelT&& value) { SetVersionLabel(std::forward<VersionLabelT>(value)); return *this;}
    ///@}
  private:

    int m_deploymentNumber{0};
    bool m_deploymentNumberHasBeenSet = false;

    Aws::String m_configurationName;
    bool m_configurationNameHasBeenSet = false;

    Aws::String m_configurationVersion;
    bool m_configurationVersionHasBeenSet = false;

    int m_deploymentDurationInMinutes{0};
    bool m_deploymentDurationInMinutesHasBeenSet = false;

    GrowthType m_growthType{GrowthType::NOT_SET};
    bool m_growthTypeHasBeenSet = false;

    double m_growthFactor{0.0};
    bool m_growthFactorHasBeenSet = false;

    int m_finalBakeTimeInMinutes{0};
    bool m_finalBakeTimeInMinutesHasBeenSet = false;

    DeploymentState m_state{DeploymentState::NOT_SET};
    bool m_stateHasBeenSet = false;

    double m_percentageComplete{0.0};
    bool m_percentageCompleteHasBeenSet = false;

    Aws::Utils::DateTime m_startedAt{};
    bool m_startedAtHasBeenSet = false;

    Aws::Utils::DateTime m_completedAt{};
    bool m_completedAtHasBeenSet = false;

    Aws::String m_versionLabel;
    bool m_versionLabelHasBeenSet = false;
  };

} // namespace Model
} // namespace AppConfig
} // namespace Aws
