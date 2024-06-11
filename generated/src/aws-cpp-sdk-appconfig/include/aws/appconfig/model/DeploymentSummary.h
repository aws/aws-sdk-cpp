﻿/**
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
    AWS_APPCONFIG_API DeploymentSummary();
    AWS_APPCONFIG_API DeploymentSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPCONFIG_API DeploymentSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPCONFIG_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The sequence number of the deployment.</p>
     */
    inline int GetDeploymentNumber() const{ return m_deploymentNumber; }
    inline bool DeploymentNumberHasBeenSet() const { return m_deploymentNumberHasBeenSet; }
    inline void SetDeploymentNumber(int value) { m_deploymentNumberHasBeenSet = true; m_deploymentNumber = value; }
    inline DeploymentSummary& WithDeploymentNumber(int value) { SetDeploymentNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the configuration.</p>
     */
    inline const Aws::String& GetConfigurationName() const{ return m_configurationName; }
    inline bool ConfigurationNameHasBeenSet() const { return m_configurationNameHasBeenSet; }
    inline void SetConfigurationName(const Aws::String& value) { m_configurationNameHasBeenSet = true; m_configurationName = value; }
    inline void SetConfigurationName(Aws::String&& value) { m_configurationNameHasBeenSet = true; m_configurationName = std::move(value); }
    inline void SetConfigurationName(const char* value) { m_configurationNameHasBeenSet = true; m_configurationName.assign(value); }
    inline DeploymentSummary& WithConfigurationName(const Aws::String& value) { SetConfigurationName(value); return *this;}
    inline DeploymentSummary& WithConfigurationName(Aws::String&& value) { SetConfigurationName(std::move(value)); return *this;}
    inline DeploymentSummary& WithConfigurationName(const char* value) { SetConfigurationName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the configuration.</p>
     */
    inline const Aws::String& GetConfigurationVersion() const{ return m_configurationVersion; }
    inline bool ConfigurationVersionHasBeenSet() const { return m_configurationVersionHasBeenSet; }
    inline void SetConfigurationVersion(const Aws::String& value) { m_configurationVersionHasBeenSet = true; m_configurationVersion = value; }
    inline void SetConfigurationVersion(Aws::String&& value) { m_configurationVersionHasBeenSet = true; m_configurationVersion = std::move(value); }
    inline void SetConfigurationVersion(const char* value) { m_configurationVersionHasBeenSet = true; m_configurationVersion.assign(value); }
    inline DeploymentSummary& WithConfigurationVersion(const Aws::String& value) { SetConfigurationVersion(value); return *this;}
    inline DeploymentSummary& WithConfigurationVersion(Aws::String&& value) { SetConfigurationVersion(std::move(value)); return *this;}
    inline DeploymentSummary& WithConfigurationVersion(const char* value) { SetConfigurationVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Total amount of time the deployment lasted.</p>
     */
    inline int GetDeploymentDurationInMinutes() const{ return m_deploymentDurationInMinutes; }
    inline bool DeploymentDurationInMinutesHasBeenSet() const { return m_deploymentDurationInMinutesHasBeenSet; }
    inline void SetDeploymentDurationInMinutes(int value) { m_deploymentDurationInMinutesHasBeenSet = true; m_deploymentDurationInMinutes = value; }
    inline DeploymentSummary& WithDeploymentDurationInMinutes(int value) { SetDeploymentDurationInMinutes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The algorithm used to define how percentage grows over time.</p>
     */
    inline const GrowthType& GetGrowthType() const{ return m_growthType; }
    inline bool GrowthTypeHasBeenSet() const { return m_growthTypeHasBeenSet; }
    inline void SetGrowthType(const GrowthType& value) { m_growthTypeHasBeenSet = true; m_growthType = value; }
    inline void SetGrowthType(GrowthType&& value) { m_growthTypeHasBeenSet = true; m_growthType = std::move(value); }
    inline DeploymentSummary& WithGrowthType(const GrowthType& value) { SetGrowthType(value); return *this;}
    inline DeploymentSummary& WithGrowthType(GrowthType&& value) { SetGrowthType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The percentage of targets to receive a deployed configuration during each
     * interval.</p>
     */
    inline double GetGrowthFactor() const{ return m_growthFactor; }
    inline bool GrowthFactorHasBeenSet() const { return m_growthFactorHasBeenSet; }
    inline void SetGrowthFactor(double value) { m_growthFactorHasBeenSet = true; m_growthFactor = value; }
    inline DeploymentSummary& WithGrowthFactor(double value) { SetGrowthFactor(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of time that AppConfig monitors for alarms before considering the
     * deployment to be complete and no longer eligible for automatic rollback.</p>
     */
    inline int GetFinalBakeTimeInMinutes() const{ return m_finalBakeTimeInMinutes; }
    inline bool FinalBakeTimeInMinutesHasBeenSet() const { return m_finalBakeTimeInMinutesHasBeenSet; }
    inline void SetFinalBakeTimeInMinutes(int value) { m_finalBakeTimeInMinutesHasBeenSet = true; m_finalBakeTimeInMinutes = value; }
    inline DeploymentSummary& WithFinalBakeTimeInMinutes(int value) { SetFinalBakeTimeInMinutes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the deployment.</p>
     */
    inline const DeploymentState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const DeploymentState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(DeploymentState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline DeploymentSummary& WithState(const DeploymentState& value) { SetState(value); return *this;}
    inline DeploymentSummary& WithState(DeploymentState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The percentage of targets for which the deployment is available.</p>
     */
    inline double GetPercentageComplete() const{ return m_percentageComplete; }
    inline bool PercentageCompleteHasBeenSet() const { return m_percentageCompleteHasBeenSet; }
    inline void SetPercentageComplete(double value) { m_percentageCompleteHasBeenSet = true; m_percentageComplete = value; }
    inline DeploymentSummary& WithPercentageComplete(double value) { SetPercentageComplete(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Time the deployment started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartedAt() const{ return m_startedAt; }
    inline bool StartedAtHasBeenSet() const { return m_startedAtHasBeenSet; }
    inline void SetStartedAt(const Aws::Utils::DateTime& value) { m_startedAtHasBeenSet = true; m_startedAt = value; }
    inline void SetStartedAt(Aws::Utils::DateTime&& value) { m_startedAtHasBeenSet = true; m_startedAt = std::move(value); }
    inline DeploymentSummary& WithStartedAt(const Aws::Utils::DateTime& value) { SetStartedAt(value); return *this;}
    inline DeploymentSummary& WithStartedAt(Aws::Utils::DateTime&& value) { SetStartedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Time the deployment completed.</p>
     */
    inline const Aws::Utils::DateTime& GetCompletedAt() const{ return m_completedAt; }
    inline bool CompletedAtHasBeenSet() const { return m_completedAtHasBeenSet; }
    inline void SetCompletedAt(const Aws::Utils::DateTime& value) { m_completedAtHasBeenSet = true; m_completedAt = value; }
    inline void SetCompletedAt(Aws::Utils::DateTime&& value) { m_completedAtHasBeenSet = true; m_completedAt = std::move(value); }
    inline DeploymentSummary& WithCompletedAt(const Aws::Utils::DateTime& value) { SetCompletedAt(value); return *this;}
    inline DeploymentSummary& WithCompletedAt(Aws::Utils::DateTime&& value) { SetCompletedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A user-defined label for an AppConfig hosted configuration version.</p>
     */
    inline const Aws::String& GetVersionLabel() const{ return m_versionLabel; }
    inline bool VersionLabelHasBeenSet() const { return m_versionLabelHasBeenSet; }
    inline void SetVersionLabel(const Aws::String& value) { m_versionLabelHasBeenSet = true; m_versionLabel = value; }
    inline void SetVersionLabel(Aws::String&& value) { m_versionLabelHasBeenSet = true; m_versionLabel = std::move(value); }
    inline void SetVersionLabel(const char* value) { m_versionLabelHasBeenSet = true; m_versionLabel.assign(value); }
    inline DeploymentSummary& WithVersionLabel(const Aws::String& value) { SetVersionLabel(value); return *this;}
    inline DeploymentSummary& WithVersionLabel(Aws::String&& value) { SetVersionLabel(std::move(value)); return *this;}
    inline DeploymentSummary& WithVersionLabel(const char* value) { SetVersionLabel(value); return *this;}
    ///@}
  private:

    int m_deploymentNumber;
    bool m_deploymentNumberHasBeenSet = false;

    Aws::String m_configurationName;
    bool m_configurationNameHasBeenSet = false;

    Aws::String m_configurationVersion;
    bool m_configurationVersionHasBeenSet = false;

    int m_deploymentDurationInMinutes;
    bool m_deploymentDurationInMinutesHasBeenSet = false;

    GrowthType m_growthType;
    bool m_growthTypeHasBeenSet = false;

    double m_growthFactor;
    bool m_growthFactorHasBeenSet = false;

    int m_finalBakeTimeInMinutes;
    bool m_finalBakeTimeInMinutesHasBeenSet = false;

    DeploymentState m_state;
    bool m_stateHasBeenSet = false;

    double m_percentageComplete;
    bool m_percentageCompleteHasBeenSet = false;

    Aws::Utils::DateTime m_startedAt;
    bool m_startedAtHasBeenSet = false;

    Aws::Utils::DateTime m_completedAt;
    bool m_completedAtHasBeenSet = false;

    Aws::String m_versionLabel;
    bool m_versionLabelHasBeenSet = false;
  };

} // namespace Model
} // namespace AppConfig
} // namespace Aws
