/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appconfig/AppConfig_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appconfig/model/GrowthType.h>
#include <aws/appconfig/model/ReplicateTo.h>
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
  class UpdateDeploymentStrategyResult
  {
  public:
    AWS_APPCONFIG_API UpdateDeploymentStrategyResult();
    AWS_APPCONFIG_API UpdateDeploymentStrategyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPCONFIG_API UpdateDeploymentStrategyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The deployment strategy ID.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The deployment strategy ID.</p>
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * <p>The deployment strategy ID.</p>
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * <p>The deployment strategy ID.</p>
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * <p>The deployment strategy ID.</p>
     */
    inline UpdateDeploymentStrategyResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The deployment strategy ID.</p>
     */
    inline UpdateDeploymentStrategyResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The deployment strategy ID.</p>
     */
    inline UpdateDeploymentStrategyResult& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The name of the deployment strategy.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the deployment strategy.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of the deployment strategy.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of the deployment strategy.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of the deployment strategy.</p>
     */
    inline UpdateDeploymentStrategyResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the deployment strategy.</p>
     */
    inline UpdateDeploymentStrategyResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the deployment strategy.</p>
     */
    inline UpdateDeploymentStrategyResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The description of the deployment strategy.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the deployment strategy.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The description of the deployment strategy.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>The description of the deployment strategy.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The description of the deployment strategy.</p>
     */
    inline UpdateDeploymentStrategyResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the deployment strategy.</p>
     */
    inline UpdateDeploymentStrategyResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the deployment strategy.</p>
     */
    inline UpdateDeploymentStrategyResult& WithDescription(const char* value) { SetDescription(value); return *this;}


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
    inline UpdateDeploymentStrategyResult& WithDeploymentDurationInMinutes(int value) { SetDeploymentDurationInMinutes(value); return *this;}


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
    inline UpdateDeploymentStrategyResult& WithGrowthType(const GrowthType& value) { SetGrowthType(value); return *this;}

    /**
     * <p>The algorithm used to define how percentage grew over time.</p>
     */
    inline UpdateDeploymentStrategyResult& WithGrowthType(GrowthType&& value) { SetGrowthType(std::move(value)); return *this;}


    /**
     * <p>The percentage of targets that received a deployed configuration during each
     * interval.</p>
     */
    inline double GetGrowthFactor() const{ return m_growthFactor; }

    /**
     * <p>The percentage of targets that received a deployed configuration during each
     * interval.</p>
     */
    inline void SetGrowthFactor(double value) { m_growthFactor = value; }

    /**
     * <p>The percentage of targets that received a deployed configuration during each
     * interval.</p>
     */
    inline UpdateDeploymentStrategyResult& WithGrowthFactor(double value) { SetGrowthFactor(value); return *this;}


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
    inline UpdateDeploymentStrategyResult& WithFinalBakeTimeInMinutes(int value) { SetFinalBakeTimeInMinutes(value); return *this;}


    /**
     * <p>Save the deployment strategy to a Systems Manager (SSM) document.</p>
     */
    inline const ReplicateTo& GetReplicateTo() const{ return m_replicateTo; }

    /**
     * <p>Save the deployment strategy to a Systems Manager (SSM) document.</p>
     */
    inline void SetReplicateTo(const ReplicateTo& value) { m_replicateTo = value; }

    /**
     * <p>Save the deployment strategy to a Systems Manager (SSM) document.</p>
     */
    inline void SetReplicateTo(ReplicateTo&& value) { m_replicateTo = std::move(value); }

    /**
     * <p>Save the deployment strategy to a Systems Manager (SSM) document.</p>
     */
    inline UpdateDeploymentStrategyResult& WithReplicateTo(const ReplicateTo& value) { SetReplicateTo(value); return *this;}

    /**
     * <p>Save the deployment strategy to a Systems Manager (SSM) document.</p>
     */
    inline UpdateDeploymentStrategyResult& WithReplicateTo(ReplicateTo&& value) { SetReplicateTo(std::move(value)); return *this;}

  private:

    Aws::String m_id;

    Aws::String m_name;

    Aws::String m_description;

    int m_deploymentDurationInMinutes;

    GrowthType m_growthType;

    double m_growthFactor;

    int m_finalBakeTimeInMinutes;

    ReplicateTo m_replicateTo;
  };

} // namespace Model
} // namespace AppConfig
} // namespace Aws
