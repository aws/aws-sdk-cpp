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
    AWS_APPCONFIG_API StopDeploymentResult();
    AWS_APPCONFIG_API StopDeploymentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPCONFIG_API StopDeploymentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ID of the application that was deployed.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }

    /**
     * <p>The ID of the application that was deployed.</p>
     */
    inline void SetApplicationId(const Aws::String& value) { m_applicationId = value; }

    /**
     * <p>The ID of the application that was deployed.</p>
     */
    inline void SetApplicationId(Aws::String&& value) { m_applicationId = std::move(value); }

    /**
     * <p>The ID of the application that was deployed.</p>
     */
    inline void SetApplicationId(const char* value) { m_applicationId.assign(value); }

    /**
     * <p>The ID of the application that was deployed.</p>
     */
    inline StopDeploymentResult& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}

    /**
     * <p>The ID of the application that was deployed.</p>
     */
    inline StopDeploymentResult& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}

    /**
     * <p>The ID of the application that was deployed.</p>
     */
    inline StopDeploymentResult& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}


    /**
     * <p>The ID of the environment that was deployed.</p>
     */
    inline const Aws::String& GetEnvironmentId() const{ return m_environmentId; }

    /**
     * <p>The ID of the environment that was deployed.</p>
     */
    inline void SetEnvironmentId(const Aws::String& value) { m_environmentId = value; }

    /**
     * <p>The ID of the environment that was deployed.</p>
     */
    inline void SetEnvironmentId(Aws::String&& value) { m_environmentId = std::move(value); }

    /**
     * <p>The ID of the environment that was deployed.</p>
     */
    inline void SetEnvironmentId(const char* value) { m_environmentId.assign(value); }

    /**
     * <p>The ID of the environment that was deployed.</p>
     */
    inline StopDeploymentResult& WithEnvironmentId(const Aws::String& value) { SetEnvironmentId(value); return *this;}

    /**
     * <p>The ID of the environment that was deployed.</p>
     */
    inline StopDeploymentResult& WithEnvironmentId(Aws::String&& value) { SetEnvironmentId(std::move(value)); return *this;}

    /**
     * <p>The ID of the environment that was deployed.</p>
     */
    inline StopDeploymentResult& WithEnvironmentId(const char* value) { SetEnvironmentId(value); return *this;}


    /**
     * <p>The ID of the deployment strategy that was deployed.</p>
     */
    inline const Aws::String& GetDeploymentStrategyId() const{ return m_deploymentStrategyId; }

    /**
     * <p>The ID of the deployment strategy that was deployed.</p>
     */
    inline void SetDeploymentStrategyId(const Aws::String& value) { m_deploymentStrategyId = value; }

    /**
     * <p>The ID of the deployment strategy that was deployed.</p>
     */
    inline void SetDeploymentStrategyId(Aws::String&& value) { m_deploymentStrategyId = std::move(value); }

    /**
     * <p>The ID of the deployment strategy that was deployed.</p>
     */
    inline void SetDeploymentStrategyId(const char* value) { m_deploymentStrategyId.assign(value); }

    /**
     * <p>The ID of the deployment strategy that was deployed.</p>
     */
    inline StopDeploymentResult& WithDeploymentStrategyId(const Aws::String& value) { SetDeploymentStrategyId(value); return *this;}

    /**
     * <p>The ID of the deployment strategy that was deployed.</p>
     */
    inline StopDeploymentResult& WithDeploymentStrategyId(Aws::String&& value) { SetDeploymentStrategyId(std::move(value)); return *this;}

    /**
     * <p>The ID of the deployment strategy that was deployed.</p>
     */
    inline StopDeploymentResult& WithDeploymentStrategyId(const char* value) { SetDeploymentStrategyId(value); return *this;}


    /**
     * <p>The ID of the configuration profile that was deployed.</p>
     */
    inline const Aws::String& GetConfigurationProfileId() const{ return m_configurationProfileId; }

    /**
     * <p>The ID of the configuration profile that was deployed.</p>
     */
    inline void SetConfigurationProfileId(const Aws::String& value) { m_configurationProfileId = value; }

    /**
     * <p>The ID of the configuration profile that was deployed.</p>
     */
    inline void SetConfigurationProfileId(Aws::String&& value) { m_configurationProfileId = std::move(value); }

    /**
     * <p>The ID of the configuration profile that was deployed.</p>
     */
    inline void SetConfigurationProfileId(const char* value) { m_configurationProfileId.assign(value); }

    /**
     * <p>The ID of the configuration profile that was deployed.</p>
     */
    inline StopDeploymentResult& WithConfigurationProfileId(const Aws::String& value) { SetConfigurationProfileId(value); return *this;}

    /**
     * <p>The ID of the configuration profile that was deployed.</p>
     */
    inline StopDeploymentResult& WithConfigurationProfileId(Aws::String&& value) { SetConfigurationProfileId(std::move(value)); return *this;}

    /**
     * <p>The ID of the configuration profile that was deployed.</p>
     */
    inline StopDeploymentResult& WithConfigurationProfileId(const char* value) { SetConfigurationProfileId(value); return *this;}


    /**
     * <p>The sequence number of the deployment.</p>
     */
    inline int GetDeploymentNumber() const{ return m_deploymentNumber; }

    /**
     * <p>The sequence number of the deployment.</p>
     */
    inline void SetDeploymentNumber(int value) { m_deploymentNumber = value; }

    /**
     * <p>The sequence number of the deployment.</p>
     */
    inline StopDeploymentResult& WithDeploymentNumber(int value) { SetDeploymentNumber(value); return *this;}


    /**
     * <p>The name of the configuration.</p>
     */
    inline const Aws::String& GetConfigurationName() const{ return m_configurationName; }

    /**
     * <p>The name of the configuration.</p>
     */
    inline void SetConfigurationName(const Aws::String& value) { m_configurationName = value; }

    /**
     * <p>The name of the configuration.</p>
     */
    inline void SetConfigurationName(Aws::String&& value) { m_configurationName = std::move(value); }

    /**
     * <p>The name of the configuration.</p>
     */
    inline void SetConfigurationName(const char* value) { m_configurationName.assign(value); }

    /**
     * <p>The name of the configuration.</p>
     */
    inline StopDeploymentResult& WithConfigurationName(const Aws::String& value) { SetConfigurationName(value); return *this;}

    /**
     * <p>The name of the configuration.</p>
     */
    inline StopDeploymentResult& WithConfigurationName(Aws::String&& value) { SetConfigurationName(std::move(value)); return *this;}

    /**
     * <p>The name of the configuration.</p>
     */
    inline StopDeploymentResult& WithConfigurationName(const char* value) { SetConfigurationName(value); return *this;}


    /**
     * <p>Information about the source location of the configuration.</p>
     */
    inline const Aws::String& GetConfigurationLocationUri() const{ return m_configurationLocationUri; }

    /**
     * <p>Information about the source location of the configuration.</p>
     */
    inline void SetConfigurationLocationUri(const Aws::String& value) { m_configurationLocationUri = value; }

    /**
     * <p>Information about the source location of the configuration.</p>
     */
    inline void SetConfigurationLocationUri(Aws::String&& value) { m_configurationLocationUri = std::move(value); }

    /**
     * <p>Information about the source location of the configuration.</p>
     */
    inline void SetConfigurationLocationUri(const char* value) { m_configurationLocationUri.assign(value); }

    /**
     * <p>Information about the source location of the configuration.</p>
     */
    inline StopDeploymentResult& WithConfigurationLocationUri(const Aws::String& value) { SetConfigurationLocationUri(value); return *this;}

    /**
     * <p>Information about the source location of the configuration.</p>
     */
    inline StopDeploymentResult& WithConfigurationLocationUri(Aws::String&& value) { SetConfigurationLocationUri(std::move(value)); return *this;}

    /**
     * <p>Information about the source location of the configuration.</p>
     */
    inline StopDeploymentResult& WithConfigurationLocationUri(const char* value) { SetConfigurationLocationUri(value); return *this;}


    /**
     * <p>The configuration version that was deployed.</p>
     */
    inline const Aws::String& GetConfigurationVersion() const{ return m_configurationVersion; }

    /**
     * <p>The configuration version that was deployed.</p>
     */
    inline void SetConfigurationVersion(const Aws::String& value) { m_configurationVersion = value; }

    /**
     * <p>The configuration version that was deployed.</p>
     */
    inline void SetConfigurationVersion(Aws::String&& value) { m_configurationVersion = std::move(value); }

    /**
     * <p>The configuration version that was deployed.</p>
     */
    inline void SetConfigurationVersion(const char* value) { m_configurationVersion.assign(value); }

    /**
     * <p>The configuration version that was deployed.</p>
     */
    inline StopDeploymentResult& WithConfigurationVersion(const Aws::String& value) { SetConfigurationVersion(value); return *this;}

    /**
     * <p>The configuration version that was deployed.</p>
     */
    inline StopDeploymentResult& WithConfigurationVersion(Aws::String&& value) { SetConfigurationVersion(std::move(value)); return *this;}

    /**
     * <p>The configuration version that was deployed.</p>
     */
    inline StopDeploymentResult& WithConfigurationVersion(const char* value) { SetConfigurationVersion(value); return *this;}


    /**
     * <p>The description of the deployment.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the deployment.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The description of the deployment.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>The description of the deployment.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The description of the deployment.</p>
     */
    inline StopDeploymentResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the deployment.</p>
     */
    inline StopDeploymentResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the deployment.</p>
     */
    inline StopDeploymentResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Total amount of time the deployment lasted.</p>
     */
    inline int GetDeploymentDurationInMinutes() const{ return m_deploymentDurationInMinutes; }

    /**
     * <p>Total amount of time the deployment lasted.</p>
     */
    inline void SetDeploymentDurationInMinutes(int value) { m_deploymentDurationInMinutes = value; }

    /**
     * <p>Total amount of time the deployment lasted.</p>
     */
    inline StopDeploymentResult& WithDeploymentDurationInMinutes(int value) { SetDeploymentDurationInMinutes(value); return *this;}


    /**
     * <p>The algorithm used to define how percentage grew over time.</p>
     */
    inline const GrowthType& GetGrowthType() const{ return m_growthType; }

    /**
     * <p>The algorithm used to define how percentage grew over time.</p>
     */
    inline void SetGrowthType(const GrowthType& value) { m_growthType = value; }

    /**
     * <p>The algorithm used to define how percentage grew over time.</p>
     */
    inline void SetGrowthType(GrowthType&& value) { m_growthType = std::move(value); }

    /**
     * <p>The algorithm used to define how percentage grew over time.</p>
     */
    inline StopDeploymentResult& WithGrowthType(const GrowthType& value) { SetGrowthType(value); return *this;}

    /**
     * <p>The algorithm used to define how percentage grew over time.</p>
     */
    inline StopDeploymentResult& WithGrowthType(GrowthType&& value) { SetGrowthType(std::move(value)); return *this;}


    /**
     * <p>The percentage of targets to receive a deployed configuration during each
     * interval.</p>
     */
    inline double GetGrowthFactor() const{ return m_growthFactor; }

    /**
     * <p>The percentage of targets to receive a deployed configuration during each
     * interval.</p>
     */
    inline void SetGrowthFactor(double value) { m_growthFactor = value; }

    /**
     * <p>The percentage of targets to receive a deployed configuration during each
     * interval.</p>
     */
    inline StopDeploymentResult& WithGrowthFactor(double value) { SetGrowthFactor(value); return *this;}


    /**
     * <p>The amount of time that AppConfig monitored for alarms before considering the
     * deployment to be complete and no longer eligible for automatic rollback.</p>
     */
    inline int GetFinalBakeTimeInMinutes() const{ return m_finalBakeTimeInMinutes; }

    /**
     * <p>The amount of time that AppConfig monitored for alarms before considering the
     * deployment to be complete and no longer eligible for automatic rollback.</p>
     */
    inline void SetFinalBakeTimeInMinutes(int value) { m_finalBakeTimeInMinutes = value; }

    /**
     * <p>The amount of time that AppConfig monitored for alarms before considering the
     * deployment to be complete and no longer eligible for automatic rollback.</p>
     */
    inline StopDeploymentResult& WithFinalBakeTimeInMinutes(int value) { SetFinalBakeTimeInMinutes(value); return *this;}


    /**
     * <p>The state of the deployment.</p>
     */
    inline const DeploymentState& GetState() const{ return m_state; }

    /**
     * <p>The state of the deployment.</p>
     */
    inline void SetState(const DeploymentState& value) { m_state = value; }

    /**
     * <p>The state of the deployment.</p>
     */
    inline void SetState(DeploymentState&& value) { m_state = std::move(value); }

    /**
     * <p>The state of the deployment.</p>
     */
    inline StopDeploymentResult& WithState(const DeploymentState& value) { SetState(value); return *this;}

    /**
     * <p>The state of the deployment.</p>
     */
    inline StopDeploymentResult& WithState(DeploymentState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>A list containing all events related to a deployment. The most recent events
     * are displayed first.</p>
     */
    inline const Aws::Vector<DeploymentEvent>& GetEventLog() const{ return m_eventLog; }

    /**
     * <p>A list containing all events related to a deployment. The most recent events
     * are displayed first.</p>
     */
    inline void SetEventLog(const Aws::Vector<DeploymentEvent>& value) { m_eventLog = value; }

    /**
     * <p>A list containing all events related to a deployment. The most recent events
     * are displayed first.</p>
     */
    inline void SetEventLog(Aws::Vector<DeploymentEvent>&& value) { m_eventLog = std::move(value); }

    /**
     * <p>A list containing all events related to a deployment. The most recent events
     * are displayed first.</p>
     */
    inline StopDeploymentResult& WithEventLog(const Aws::Vector<DeploymentEvent>& value) { SetEventLog(value); return *this;}

    /**
     * <p>A list containing all events related to a deployment. The most recent events
     * are displayed first.</p>
     */
    inline StopDeploymentResult& WithEventLog(Aws::Vector<DeploymentEvent>&& value) { SetEventLog(std::move(value)); return *this;}

    /**
     * <p>A list containing all events related to a deployment. The most recent events
     * are displayed first.</p>
     */
    inline StopDeploymentResult& AddEventLog(const DeploymentEvent& value) { m_eventLog.push_back(value); return *this; }

    /**
     * <p>A list containing all events related to a deployment. The most recent events
     * are displayed first.</p>
     */
    inline StopDeploymentResult& AddEventLog(DeploymentEvent&& value) { m_eventLog.push_back(std::move(value)); return *this; }


    /**
     * <p>The percentage of targets for which the deployment is available.</p>
     */
    inline double GetPercentageComplete() const{ return m_percentageComplete; }

    /**
     * <p>The percentage of targets for which the deployment is available.</p>
     */
    inline void SetPercentageComplete(double value) { m_percentageComplete = value; }

    /**
     * <p>The percentage of targets for which the deployment is available.</p>
     */
    inline StopDeploymentResult& WithPercentageComplete(double value) { SetPercentageComplete(value); return *this;}


    /**
     * <p>The time the deployment started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartedAt() const{ return m_startedAt; }

    /**
     * <p>The time the deployment started.</p>
     */
    inline void SetStartedAt(const Aws::Utils::DateTime& value) { m_startedAt = value; }

    /**
     * <p>The time the deployment started.</p>
     */
    inline void SetStartedAt(Aws::Utils::DateTime&& value) { m_startedAt = std::move(value); }

    /**
     * <p>The time the deployment started.</p>
     */
    inline StopDeploymentResult& WithStartedAt(const Aws::Utils::DateTime& value) { SetStartedAt(value); return *this;}

    /**
     * <p>The time the deployment started.</p>
     */
    inline StopDeploymentResult& WithStartedAt(Aws::Utils::DateTime&& value) { SetStartedAt(std::move(value)); return *this;}


    /**
     * <p>The time the deployment completed. </p>
     */
    inline const Aws::Utils::DateTime& GetCompletedAt() const{ return m_completedAt; }

    /**
     * <p>The time the deployment completed. </p>
     */
    inline void SetCompletedAt(const Aws::Utils::DateTime& value) { m_completedAt = value; }

    /**
     * <p>The time the deployment completed. </p>
     */
    inline void SetCompletedAt(Aws::Utils::DateTime&& value) { m_completedAt = std::move(value); }

    /**
     * <p>The time the deployment completed. </p>
     */
    inline StopDeploymentResult& WithCompletedAt(const Aws::Utils::DateTime& value) { SetCompletedAt(value); return *this;}

    /**
     * <p>The time the deployment completed. </p>
     */
    inline StopDeploymentResult& WithCompletedAt(Aws::Utils::DateTime&& value) { SetCompletedAt(std::move(value)); return *this;}


    /**
     * <p>A list of extensions that were processed as part of the deployment. The
     * extensions that were previously associated to the configuration profile,
     * environment, or the application when <code>StartDeployment</code> was
     * called.</p>
     */
    inline const Aws::Vector<AppliedExtension>& GetAppliedExtensions() const{ return m_appliedExtensions; }

    /**
     * <p>A list of extensions that were processed as part of the deployment. The
     * extensions that were previously associated to the configuration profile,
     * environment, or the application when <code>StartDeployment</code> was
     * called.</p>
     */
    inline void SetAppliedExtensions(const Aws::Vector<AppliedExtension>& value) { m_appliedExtensions = value; }

    /**
     * <p>A list of extensions that were processed as part of the deployment. The
     * extensions that were previously associated to the configuration profile,
     * environment, or the application when <code>StartDeployment</code> was
     * called.</p>
     */
    inline void SetAppliedExtensions(Aws::Vector<AppliedExtension>&& value) { m_appliedExtensions = std::move(value); }

    /**
     * <p>A list of extensions that were processed as part of the deployment. The
     * extensions that were previously associated to the configuration profile,
     * environment, or the application when <code>StartDeployment</code> was
     * called.</p>
     */
    inline StopDeploymentResult& WithAppliedExtensions(const Aws::Vector<AppliedExtension>& value) { SetAppliedExtensions(value); return *this;}

    /**
     * <p>A list of extensions that were processed as part of the deployment. The
     * extensions that were previously associated to the configuration profile,
     * environment, or the application when <code>StartDeployment</code> was
     * called.</p>
     */
    inline StopDeploymentResult& WithAppliedExtensions(Aws::Vector<AppliedExtension>&& value) { SetAppliedExtensions(std::move(value)); return *this;}

    /**
     * <p>A list of extensions that were processed as part of the deployment. The
     * extensions that were previously associated to the configuration profile,
     * environment, or the application when <code>StartDeployment</code> was
     * called.</p>
     */
    inline StopDeploymentResult& AddAppliedExtensions(const AppliedExtension& value) { m_appliedExtensions.push_back(value); return *this; }

    /**
     * <p>A list of extensions that were processed as part of the deployment. The
     * extensions that were previously associated to the configuration profile,
     * environment, or the application when <code>StartDeployment</code> was
     * called.</p>
     */
    inline StopDeploymentResult& AddAppliedExtensions(AppliedExtension&& value) { m_appliedExtensions.push_back(std::move(value)); return *this; }

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
  };

} // namespace Model
} // namespace AppConfig
} // namespace Aws
