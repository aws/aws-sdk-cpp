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
  class GetDeploymentResult
  {
  public:
    AWS_APPCONFIG_API GetDeploymentResult();
    AWS_APPCONFIG_API GetDeploymentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPCONFIG_API GetDeploymentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the application that was deployed.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }
    inline void SetApplicationId(const Aws::String& value) { m_applicationId = value; }
    inline void SetApplicationId(Aws::String&& value) { m_applicationId = std::move(value); }
    inline void SetApplicationId(const char* value) { m_applicationId.assign(value); }
    inline GetDeploymentResult& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}
    inline GetDeploymentResult& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}
    inline GetDeploymentResult& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the environment that was deployed.</p>
     */
    inline const Aws::String& GetEnvironmentId() const{ return m_environmentId; }
    inline void SetEnvironmentId(const Aws::String& value) { m_environmentId = value; }
    inline void SetEnvironmentId(Aws::String&& value) { m_environmentId = std::move(value); }
    inline void SetEnvironmentId(const char* value) { m_environmentId.assign(value); }
    inline GetDeploymentResult& WithEnvironmentId(const Aws::String& value) { SetEnvironmentId(value); return *this;}
    inline GetDeploymentResult& WithEnvironmentId(Aws::String&& value) { SetEnvironmentId(std::move(value)); return *this;}
    inline GetDeploymentResult& WithEnvironmentId(const char* value) { SetEnvironmentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the deployment strategy that was deployed.</p>
     */
    inline const Aws::String& GetDeploymentStrategyId() const{ return m_deploymentStrategyId; }
    inline void SetDeploymentStrategyId(const Aws::String& value) { m_deploymentStrategyId = value; }
    inline void SetDeploymentStrategyId(Aws::String&& value) { m_deploymentStrategyId = std::move(value); }
    inline void SetDeploymentStrategyId(const char* value) { m_deploymentStrategyId.assign(value); }
    inline GetDeploymentResult& WithDeploymentStrategyId(const Aws::String& value) { SetDeploymentStrategyId(value); return *this;}
    inline GetDeploymentResult& WithDeploymentStrategyId(Aws::String&& value) { SetDeploymentStrategyId(std::move(value)); return *this;}
    inline GetDeploymentResult& WithDeploymentStrategyId(const char* value) { SetDeploymentStrategyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the configuration profile that was deployed.</p>
     */
    inline const Aws::String& GetConfigurationProfileId() const{ return m_configurationProfileId; }
    inline void SetConfigurationProfileId(const Aws::String& value) { m_configurationProfileId = value; }
    inline void SetConfigurationProfileId(Aws::String&& value) { m_configurationProfileId = std::move(value); }
    inline void SetConfigurationProfileId(const char* value) { m_configurationProfileId.assign(value); }
    inline GetDeploymentResult& WithConfigurationProfileId(const Aws::String& value) { SetConfigurationProfileId(value); return *this;}
    inline GetDeploymentResult& WithConfigurationProfileId(Aws::String&& value) { SetConfigurationProfileId(std::move(value)); return *this;}
    inline GetDeploymentResult& WithConfigurationProfileId(const char* value) { SetConfigurationProfileId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sequence number of the deployment.</p>
     */
    inline int GetDeploymentNumber() const{ return m_deploymentNumber; }
    inline void SetDeploymentNumber(int value) { m_deploymentNumber = value; }
    inline GetDeploymentResult& WithDeploymentNumber(int value) { SetDeploymentNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the configuration.</p>
     */
    inline const Aws::String& GetConfigurationName() const{ return m_configurationName; }
    inline void SetConfigurationName(const Aws::String& value) { m_configurationName = value; }
    inline void SetConfigurationName(Aws::String&& value) { m_configurationName = std::move(value); }
    inline void SetConfigurationName(const char* value) { m_configurationName.assign(value); }
    inline GetDeploymentResult& WithConfigurationName(const Aws::String& value) { SetConfigurationName(value); return *this;}
    inline GetDeploymentResult& WithConfigurationName(Aws::String&& value) { SetConfigurationName(std::move(value)); return *this;}
    inline GetDeploymentResult& WithConfigurationName(const char* value) { SetConfigurationName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the source location of the configuration.</p>
     */
    inline const Aws::String& GetConfigurationLocationUri() const{ return m_configurationLocationUri; }
    inline void SetConfigurationLocationUri(const Aws::String& value) { m_configurationLocationUri = value; }
    inline void SetConfigurationLocationUri(Aws::String&& value) { m_configurationLocationUri = std::move(value); }
    inline void SetConfigurationLocationUri(const char* value) { m_configurationLocationUri.assign(value); }
    inline GetDeploymentResult& WithConfigurationLocationUri(const Aws::String& value) { SetConfigurationLocationUri(value); return *this;}
    inline GetDeploymentResult& WithConfigurationLocationUri(Aws::String&& value) { SetConfigurationLocationUri(std::move(value)); return *this;}
    inline GetDeploymentResult& WithConfigurationLocationUri(const char* value) { SetConfigurationLocationUri(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration version that was deployed.</p>
     */
    inline const Aws::String& GetConfigurationVersion() const{ return m_configurationVersion; }
    inline void SetConfigurationVersion(const Aws::String& value) { m_configurationVersion = value; }
    inline void SetConfigurationVersion(Aws::String&& value) { m_configurationVersion = std::move(value); }
    inline void SetConfigurationVersion(const char* value) { m_configurationVersion.assign(value); }
    inline GetDeploymentResult& WithConfigurationVersion(const Aws::String& value) { SetConfigurationVersion(value); return *this;}
    inline GetDeploymentResult& WithConfigurationVersion(Aws::String&& value) { SetConfigurationVersion(std::move(value)); return *this;}
    inline GetDeploymentResult& WithConfigurationVersion(const char* value) { SetConfigurationVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the deployment.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline GetDeploymentResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline GetDeploymentResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline GetDeploymentResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Total amount of time the deployment lasted.</p>
     */
    inline int GetDeploymentDurationInMinutes() const{ return m_deploymentDurationInMinutes; }
    inline void SetDeploymentDurationInMinutes(int value) { m_deploymentDurationInMinutes = value; }
    inline GetDeploymentResult& WithDeploymentDurationInMinutes(int value) { SetDeploymentDurationInMinutes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The algorithm used to define how percentage grew over time.</p>
     */
    inline const GrowthType& GetGrowthType() const{ return m_growthType; }
    inline void SetGrowthType(const GrowthType& value) { m_growthType = value; }
    inline void SetGrowthType(GrowthType&& value) { m_growthType = std::move(value); }
    inline GetDeploymentResult& WithGrowthType(const GrowthType& value) { SetGrowthType(value); return *this;}
    inline GetDeploymentResult& WithGrowthType(GrowthType&& value) { SetGrowthType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The percentage of targets to receive a deployed configuration during each
     * interval.</p>
     */
    inline double GetGrowthFactor() const{ return m_growthFactor; }
    inline void SetGrowthFactor(double value) { m_growthFactor = value; }
    inline GetDeploymentResult& WithGrowthFactor(double value) { SetGrowthFactor(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of time that AppConfig monitored for alarms before considering the
     * deployment to be complete and no longer eligible for automatic rollback.</p>
     */
    inline int GetFinalBakeTimeInMinutes() const{ return m_finalBakeTimeInMinutes; }
    inline void SetFinalBakeTimeInMinutes(int value) { m_finalBakeTimeInMinutes = value; }
    inline GetDeploymentResult& WithFinalBakeTimeInMinutes(int value) { SetFinalBakeTimeInMinutes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the deployment.</p>
     */
    inline const DeploymentState& GetState() const{ return m_state; }
    inline void SetState(const DeploymentState& value) { m_state = value; }
    inline void SetState(DeploymentState&& value) { m_state = std::move(value); }
    inline GetDeploymentResult& WithState(const DeploymentState& value) { SetState(value); return *this;}
    inline GetDeploymentResult& WithState(DeploymentState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list containing all events related to a deployment. The most recent events
     * are displayed first.</p>
     */
    inline const Aws::Vector<DeploymentEvent>& GetEventLog() const{ return m_eventLog; }
    inline void SetEventLog(const Aws::Vector<DeploymentEvent>& value) { m_eventLog = value; }
    inline void SetEventLog(Aws::Vector<DeploymentEvent>&& value) { m_eventLog = std::move(value); }
    inline GetDeploymentResult& WithEventLog(const Aws::Vector<DeploymentEvent>& value) { SetEventLog(value); return *this;}
    inline GetDeploymentResult& WithEventLog(Aws::Vector<DeploymentEvent>&& value) { SetEventLog(std::move(value)); return *this;}
    inline GetDeploymentResult& AddEventLog(const DeploymentEvent& value) { m_eventLog.push_back(value); return *this; }
    inline GetDeploymentResult& AddEventLog(DeploymentEvent&& value) { m_eventLog.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The percentage of targets for which the deployment is available.</p>
     */
    inline double GetPercentageComplete() const{ return m_percentageComplete; }
    inline void SetPercentageComplete(double value) { m_percentageComplete = value; }
    inline GetDeploymentResult& WithPercentageComplete(double value) { SetPercentageComplete(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the deployment started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartedAt() const{ return m_startedAt; }
    inline void SetStartedAt(const Aws::Utils::DateTime& value) { m_startedAt = value; }
    inline void SetStartedAt(Aws::Utils::DateTime&& value) { m_startedAt = std::move(value); }
    inline GetDeploymentResult& WithStartedAt(const Aws::Utils::DateTime& value) { SetStartedAt(value); return *this;}
    inline GetDeploymentResult& WithStartedAt(Aws::Utils::DateTime&& value) { SetStartedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the deployment completed. </p>
     */
    inline const Aws::Utils::DateTime& GetCompletedAt() const{ return m_completedAt; }
    inline void SetCompletedAt(const Aws::Utils::DateTime& value) { m_completedAt = value; }
    inline void SetCompletedAt(Aws::Utils::DateTime&& value) { m_completedAt = std::move(value); }
    inline GetDeploymentResult& WithCompletedAt(const Aws::Utils::DateTime& value) { SetCompletedAt(value); return *this;}
    inline GetDeploymentResult& WithCompletedAt(Aws::Utils::DateTime&& value) { SetCompletedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of extensions that were processed as part of the deployment. The
     * extensions that were previously associated to the configuration profile,
     * environment, or the application when <code>StartDeployment</code> was
     * called.</p>
     */
    inline const Aws::Vector<AppliedExtension>& GetAppliedExtensions() const{ return m_appliedExtensions; }
    inline void SetAppliedExtensions(const Aws::Vector<AppliedExtension>& value) { m_appliedExtensions = value; }
    inline void SetAppliedExtensions(Aws::Vector<AppliedExtension>&& value) { m_appliedExtensions = std::move(value); }
    inline GetDeploymentResult& WithAppliedExtensions(const Aws::Vector<AppliedExtension>& value) { SetAppliedExtensions(value); return *this;}
    inline GetDeploymentResult& WithAppliedExtensions(Aws::Vector<AppliedExtension>&& value) { SetAppliedExtensions(std::move(value)); return *this;}
    inline GetDeploymentResult& AddAppliedExtensions(const AppliedExtension& value) { m_appliedExtensions.push_back(value); return *this; }
    inline GetDeploymentResult& AddAppliedExtensions(AppliedExtension&& value) { m_appliedExtensions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name of the Key Management Service key used to encrypt
     * configuration data. You can encrypt secrets stored in Secrets Manager, Amazon
     * Simple Storage Service (Amazon S3) objects encrypted with SSE-KMS, or secure
     * string parameters stored in Amazon Web Services Systems Manager Parameter Store.
     * </p>
     */
    inline const Aws::String& GetKmsKeyArn() const{ return m_kmsKeyArn; }
    inline void SetKmsKeyArn(const Aws::String& value) { m_kmsKeyArn = value; }
    inline void SetKmsKeyArn(Aws::String&& value) { m_kmsKeyArn = std::move(value); }
    inline void SetKmsKeyArn(const char* value) { m_kmsKeyArn.assign(value); }
    inline GetDeploymentResult& WithKmsKeyArn(const Aws::String& value) { SetKmsKeyArn(value); return *this;}
    inline GetDeploymentResult& WithKmsKeyArn(Aws::String&& value) { SetKmsKeyArn(std::move(value)); return *this;}
    inline GetDeploymentResult& WithKmsKeyArn(const char* value) { SetKmsKeyArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Key Management Service key identifier (key ID, key alias, or key ARN)
     * provided when the resource was created or updated.</p>
     */
    inline const Aws::String& GetKmsKeyIdentifier() const{ return m_kmsKeyIdentifier; }
    inline void SetKmsKeyIdentifier(const Aws::String& value) { m_kmsKeyIdentifier = value; }
    inline void SetKmsKeyIdentifier(Aws::String&& value) { m_kmsKeyIdentifier = std::move(value); }
    inline void SetKmsKeyIdentifier(const char* value) { m_kmsKeyIdentifier.assign(value); }
    inline GetDeploymentResult& WithKmsKeyIdentifier(const Aws::String& value) { SetKmsKeyIdentifier(value); return *this;}
    inline GetDeploymentResult& WithKmsKeyIdentifier(Aws::String&& value) { SetKmsKeyIdentifier(std::move(value)); return *this;}
    inline GetDeploymentResult& WithKmsKeyIdentifier(const char* value) { SetKmsKeyIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A user-defined label for an AppConfig hosted configuration version.</p>
     */
    inline const Aws::String& GetVersionLabel() const{ return m_versionLabel; }
    inline void SetVersionLabel(const Aws::String& value) { m_versionLabel = value; }
    inline void SetVersionLabel(Aws::String&& value) { m_versionLabel = std::move(value); }
    inline void SetVersionLabel(const char* value) { m_versionLabel.assign(value); }
    inline GetDeploymentResult& WithVersionLabel(const Aws::String& value) { SetVersionLabel(value); return *this;}
    inline GetDeploymentResult& WithVersionLabel(Aws::String&& value) { SetVersionLabel(std::move(value)); return *this;}
    inline GetDeploymentResult& WithVersionLabel(const char* value) { SetVersionLabel(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetDeploymentResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetDeploymentResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetDeploymentResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_applicationId;

    Aws::String m_environmentId;

    Aws::String m_deploymentStrategyId;

    Aws::String m_configurationProfileId;

    int m_deploymentNumber;

    Aws::String m_configurationName;

    Aws::String m_configurationLocationUri;

    Aws::String m_configurationVersion;

    Aws::String m_description;

    int m_deploymentDurationInMinutes;

    GrowthType m_growthType;

    double m_growthFactor;

    int m_finalBakeTimeInMinutes;

    DeploymentState m_state;

    Aws::Vector<DeploymentEvent> m_eventLog;

    double m_percentageComplete;

    Aws::Utils::DateTime m_startedAt;

    Aws::Utils::DateTime m_completedAt;

    Aws::Vector<AppliedExtension> m_appliedExtensions;

    Aws::String m_kmsKeyArn;

    Aws::String m_kmsKeyIdentifier;

    Aws::String m_versionLabel;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AppConfig
} // namespace Aws
