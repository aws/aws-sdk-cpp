/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appconfig/AppConfig_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appconfig/model/GrowthType.h>
#include <aws/appconfig/model/DeploymentState.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/appconfig/model/DeploymentEvent.h>
#include <aws/appconfig/model/AppliedExtension.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace AppConfig
{
namespace Model
{
  class StopDeploymentResult
  {
  public:
    AWS_APPCONFIG_API StopDeploymentResult() = default;
    AWS_APPCONFIG_API StopDeploymentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPCONFIG_API StopDeploymentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the application that was deployed.</p>
     */
    inline const Aws::String& GetApplicationId() const { return m_applicationId; }
    template<typename ApplicationIdT = Aws::String>
    void SetApplicationId(ApplicationIdT&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::forward<ApplicationIdT>(value); }
    template<typename ApplicationIdT = Aws::String>
    StopDeploymentResult& WithApplicationId(ApplicationIdT&& value) { SetApplicationId(std::forward<ApplicationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the environment that was deployed.</p>
     */
    inline const Aws::String& GetEnvironmentId() const { return m_environmentId; }
    template<typename EnvironmentIdT = Aws::String>
    void SetEnvironmentId(EnvironmentIdT&& value) { m_environmentIdHasBeenSet = true; m_environmentId = std::forward<EnvironmentIdT>(value); }
    template<typename EnvironmentIdT = Aws::String>
    StopDeploymentResult& WithEnvironmentId(EnvironmentIdT&& value) { SetEnvironmentId(std::forward<EnvironmentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the deployment strategy that was deployed.</p>
     */
    inline const Aws::String& GetDeploymentStrategyId() const { return m_deploymentStrategyId; }
    template<typename DeploymentStrategyIdT = Aws::String>
    void SetDeploymentStrategyId(DeploymentStrategyIdT&& value) { m_deploymentStrategyIdHasBeenSet = true; m_deploymentStrategyId = std::forward<DeploymentStrategyIdT>(value); }
    template<typename DeploymentStrategyIdT = Aws::String>
    StopDeploymentResult& WithDeploymentStrategyId(DeploymentStrategyIdT&& value) { SetDeploymentStrategyId(std::forward<DeploymentStrategyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the configuration profile that was deployed.</p>
     */
    inline const Aws::String& GetConfigurationProfileId() const { return m_configurationProfileId; }
    template<typename ConfigurationProfileIdT = Aws::String>
    void SetConfigurationProfileId(ConfigurationProfileIdT&& value) { m_configurationProfileIdHasBeenSet = true; m_configurationProfileId = std::forward<ConfigurationProfileIdT>(value); }
    template<typename ConfigurationProfileIdT = Aws::String>
    StopDeploymentResult& WithConfigurationProfileId(ConfigurationProfileIdT&& value) { SetConfigurationProfileId(std::forward<ConfigurationProfileIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sequence number of the deployment.</p>
     */
    inline int GetDeploymentNumber() const { return m_deploymentNumber; }
    inline void SetDeploymentNumber(int value) { m_deploymentNumberHasBeenSet = true; m_deploymentNumber = value; }
    inline StopDeploymentResult& WithDeploymentNumber(int value) { SetDeploymentNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the configuration.</p>
     */
    inline const Aws::String& GetConfigurationName() const { return m_configurationName; }
    template<typename ConfigurationNameT = Aws::String>
    void SetConfigurationName(ConfigurationNameT&& value) { m_configurationNameHasBeenSet = true; m_configurationName = std::forward<ConfigurationNameT>(value); }
    template<typename ConfigurationNameT = Aws::String>
    StopDeploymentResult& WithConfigurationName(ConfigurationNameT&& value) { SetConfigurationName(std::forward<ConfigurationNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the source location of the configuration.</p>
     */
    inline const Aws::String& GetConfigurationLocationUri() const { return m_configurationLocationUri; }
    template<typename ConfigurationLocationUriT = Aws::String>
    void SetConfigurationLocationUri(ConfigurationLocationUriT&& value) { m_configurationLocationUriHasBeenSet = true; m_configurationLocationUri = std::forward<ConfigurationLocationUriT>(value); }
    template<typename ConfigurationLocationUriT = Aws::String>
    StopDeploymentResult& WithConfigurationLocationUri(ConfigurationLocationUriT&& value) { SetConfigurationLocationUri(std::forward<ConfigurationLocationUriT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration version that was deployed.</p>
     */
    inline const Aws::String& GetConfigurationVersion() const { return m_configurationVersion; }
    template<typename ConfigurationVersionT = Aws::String>
    void SetConfigurationVersion(ConfigurationVersionT&& value) { m_configurationVersionHasBeenSet = true; m_configurationVersion = std::forward<ConfigurationVersionT>(value); }
    template<typename ConfigurationVersionT = Aws::String>
    StopDeploymentResult& WithConfigurationVersion(ConfigurationVersionT&& value) { SetConfigurationVersion(std::forward<ConfigurationVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the deployment.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    StopDeploymentResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Total amount of time the deployment lasted.</p>
     */
    inline int GetDeploymentDurationInMinutes() const { return m_deploymentDurationInMinutes; }
    inline void SetDeploymentDurationInMinutes(int value) { m_deploymentDurationInMinutesHasBeenSet = true; m_deploymentDurationInMinutes = value; }
    inline StopDeploymentResult& WithDeploymentDurationInMinutes(int value) { SetDeploymentDurationInMinutes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The algorithm used to define how percentage grew over time.</p>
     */
    inline GrowthType GetGrowthType() const { return m_growthType; }
    inline void SetGrowthType(GrowthType value) { m_growthTypeHasBeenSet = true; m_growthType = value; }
    inline StopDeploymentResult& WithGrowthType(GrowthType value) { SetGrowthType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The percentage of targets to receive a deployed configuration during each
     * interval.</p>
     */
    inline double GetGrowthFactor() const { return m_growthFactor; }
    inline void SetGrowthFactor(double value) { m_growthFactorHasBeenSet = true; m_growthFactor = value; }
    inline StopDeploymentResult& WithGrowthFactor(double value) { SetGrowthFactor(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of time that AppConfig monitored for alarms before considering the
     * deployment to be complete and no longer eligible for automatic rollback.</p>
     */
    inline int GetFinalBakeTimeInMinutes() const { return m_finalBakeTimeInMinutes; }
    inline void SetFinalBakeTimeInMinutes(int value) { m_finalBakeTimeInMinutesHasBeenSet = true; m_finalBakeTimeInMinutes = value; }
    inline StopDeploymentResult& WithFinalBakeTimeInMinutes(int value) { SetFinalBakeTimeInMinutes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the deployment.</p>
     */
    inline DeploymentState GetState() const { return m_state; }
    inline void SetState(DeploymentState value) { m_stateHasBeenSet = true; m_state = value; }
    inline StopDeploymentResult& WithState(DeploymentState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list containing all events related to a deployment. The most recent events
     * are displayed first.</p>
     */
    inline const Aws::Vector<DeploymentEvent>& GetEventLog() const { return m_eventLog; }
    template<typename EventLogT = Aws::Vector<DeploymentEvent>>
    void SetEventLog(EventLogT&& value) { m_eventLogHasBeenSet = true; m_eventLog = std::forward<EventLogT>(value); }
    template<typename EventLogT = Aws::Vector<DeploymentEvent>>
    StopDeploymentResult& WithEventLog(EventLogT&& value) { SetEventLog(std::forward<EventLogT>(value)); return *this;}
    template<typename EventLogT = DeploymentEvent>
    StopDeploymentResult& AddEventLog(EventLogT&& value) { m_eventLogHasBeenSet = true; m_eventLog.emplace_back(std::forward<EventLogT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The percentage of targets for which the deployment is available.</p>
     */
    inline double GetPercentageComplete() const { return m_percentageComplete; }
    inline void SetPercentageComplete(double value) { m_percentageCompleteHasBeenSet = true; m_percentageComplete = value; }
    inline StopDeploymentResult& WithPercentageComplete(double value) { SetPercentageComplete(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the deployment started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartedAt() const { return m_startedAt; }
    template<typename StartedAtT = Aws::Utils::DateTime>
    void SetStartedAt(StartedAtT&& value) { m_startedAtHasBeenSet = true; m_startedAt = std::forward<StartedAtT>(value); }
    template<typename StartedAtT = Aws::Utils::DateTime>
    StopDeploymentResult& WithStartedAt(StartedAtT&& value) { SetStartedAt(std::forward<StartedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the deployment completed. </p>
     */
    inline const Aws::Utils::DateTime& GetCompletedAt() const { return m_completedAt; }
    template<typename CompletedAtT = Aws::Utils::DateTime>
    void SetCompletedAt(CompletedAtT&& value) { m_completedAtHasBeenSet = true; m_completedAt = std::forward<CompletedAtT>(value); }
    template<typename CompletedAtT = Aws::Utils::DateTime>
    StopDeploymentResult& WithCompletedAt(CompletedAtT&& value) { SetCompletedAt(std::forward<CompletedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of extensions that were processed as part of the deployment. The
     * extensions that were previously associated to the configuration profile,
     * environment, or the application when <code>StartDeployment</code> was
     * called.</p>
     */
    inline const Aws::Vector<AppliedExtension>& GetAppliedExtensions() const { return m_appliedExtensions; }
    template<typename AppliedExtensionsT = Aws::Vector<AppliedExtension>>
    void SetAppliedExtensions(AppliedExtensionsT&& value) { m_appliedExtensionsHasBeenSet = true; m_appliedExtensions = std::forward<AppliedExtensionsT>(value); }
    template<typename AppliedExtensionsT = Aws::Vector<AppliedExtension>>
    StopDeploymentResult& WithAppliedExtensions(AppliedExtensionsT&& value) { SetAppliedExtensions(std::forward<AppliedExtensionsT>(value)); return *this;}
    template<typename AppliedExtensionsT = AppliedExtension>
    StopDeploymentResult& AddAppliedExtensions(AppliedExtensionsT&& value) { m_appliedExtensionsHasBeenSet = true; m_appliedExtensions.emplace_back(std::forward<AppliedExtensionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name of the Key Management Service key used to encrypt
     * configuration data. You can encrypt secrets stored in Secrets Manager, Amazon
     * Simple Storage Service (Amazon S3) objects encrypted with SSE-KMS, or secure
     * string parameters stored in Amazon Web Services Systems Manager Parameter Store.
     * </p>
     */
    inline const Aws::String& GetKmsKeyArn() const { return m_kmsKeyArn; }
    template<typename KmsKeyArnT = Aws::String>
    void SetKmsKeyArn(KmsKeyArnT&& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = std::forward<KmsKeyArnT>(value); }
    template<typename KmsKeyArnT = Aws::String>
    StopDeploymentResult& WithKmsKeyArn(KmsKeyArnT&& value) { SetKmsKeyArn(std::forward<KmsKeyArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Key Management Service key identifier (key ID, key alias, or key ARN)
     * provided when the resource was created or updated.</p>
     */
    inline const Aws::String& GetKmsKeyIdentifier() const { return m_kmsKeyIdentifier; }
    template<typename KmsKeyIdentifierT = Aws::String>
    void SetKmsKeyIdentifier(KmsKeyIdentifierT&& value) { m_kmsKeyIdentifierHasBeenSet = true; m_kmsKeyIdentifier = std::forward<KmsKeyIdentifierT>(value); }
    template<typename KmsKeyIdentifierT = Aws::String>
    StopDeploymentResult& WithKmsKeyIdentifier(KmsKeyIdentifierT&& value) { SetKmsKeyIdentifier(std::forward<KmsKeyIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A user-defined label for an AppConfig hosted configuration version.</p>
     */
    inline const Aws::String& GetVersionLabel() const { return m_versionLabel; }
    template<typename VersionLabelT = Aws::String>
    void SetVersionLabel(VersionLabelT&& value) { m_versionLabelHasBeenSet = true; m_versionLabel = std::forward<VersionLabelT>(value); }
    template<typename VersionLabelT = Aws::String>
    StopDeploymentResult& WithVersionLabel(VersionLabelT&& value) { SetVersionLabel(std::forward<VersionLabelT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    StopDeploymentResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    Aws::String m_environmentId;
    bool m_environmentIdHasBeenSet = false;

    Aws::String m_deploymentStrategyId;
    bool m_deploymentStrategyIdHasBeenSet = false;

    Aws::String m_configurationProfileId;
    bool m_configurationProfileIdHasBeenSet = false;

    int m_deploymentNumber{0};
    bool m_deploymentNumberHasBeenSet = false;

    Aws::String m_configurationName;
    bool m_configurationNameHasBeenSet = false;

    Aws::String m_configurationLocationUri;
    bool m_configurationLocationUriHasBeenSet = false;

    Aws::String m_configurationVersion;
    bool m_configurationVersionHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

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

    Aws::Vector<DeploymentEvent> m_eventLog;
    bool m_eventLogHasBeenSet = false;

    double m_percentageComplete{0.0};
    bool m_percentageCompleteHasBeenSet = false;

    Aws::Utils::DateTime m_startedAt{};
    bool m_startedAtHasBeenSet = false;

    Aws::Utils::DateTime m_completedAt{};
    bool m_completedAtHasBeenSet = false;

    Aws::Vector<AppliedExtension> m_appliedExtensions;
    bool m_appliedExtensionsHasBeenSet = false;

    Aws::String m_kmsKeyArn;
    bool m_kmsKeyArnHasBeenSet = false;

    Aws::String m_kmsKeyIdentifier;
    bool m_kmsKeyIdentifierHasBeenSet = false;

    Aws::String m_versionLabel;
    bool m_versionLabelHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AppConfig
} // namespace Aws
