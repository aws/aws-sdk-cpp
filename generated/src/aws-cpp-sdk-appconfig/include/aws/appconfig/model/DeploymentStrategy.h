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

  class DeploymentStrategy
  {
  public:
    AWS_APPCONFIG_API DeploymentStrategy();
    AWS_APPCONFIG_API DeploymentStrategy(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPCONFIG_API DeploymentStrategy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPCONFIG_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The deployment strategy ID.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The deployment strategy ID.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The deployment strategy ID.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The deployment strategy ID.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The deployment strategy ID.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The deployment strategy ID.</p>
     */
    inline DeploymentStrategy& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The deployment strategy ID.</p>
     */
    inline DeploymentStrategy& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The deployment strategy ID.</p>
     */
    inline DeploymentStrategy& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The name of the deployment strategy.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the deployment strategy.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the deployment strategy.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the deployment strategy.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the deployment strategy.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the deployment strategy.</p>
     */
    inline DeploymentStrategy& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the deployment strategy.</p>
     */
    inline DeploymentStrategy& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the deployment strategy.</p>
     */
    inline DeploymentStrategy& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The description of the deployment strategy.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the deployment strategy.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the deployment strategy.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the deployment strategy.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the deployment strategy.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the deployment strategy.</p>
     */
    inline DeploymentStrategy& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the deployment strategy.</p>
     */
    inline DeploymentStrategy& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the deployment strategy.</p>
     */
    inline DeploymentStrategy& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Total amount of time the deployment lasted.</p>
     */
    inline int GetDeploymentDurationInMinutes() const{ return m_deploymentDurationInMinutes; }

    /**
     * <p>Total amount of time the deployment lasted.</p>
     */
    inline bool DeploymentDurationInMinutesHasBeenSet() const { return m_deploymentDurationInMinutesHasBeenSet; }

    /**
     * <p>Total amount of time the deployment lasted.</p>
     */
    inline void SetDeploymentDurationInMinutes(int value) { m_deploymentDurationInMinutesHasBeenSet = true; m_deploymentDurationInMinutes = value; }

    /**
     * <p>Total amount of time the deployment lasted.</p>
     */
    inline DeploymentStrategy& WithDeploymentDurationInMinutes(int value) { SetDeploymentDurationInMinutes(value); return *this;}


    /**
     * <p>The algorithm used to define how percentage grew over time.</p>
     */
    inline const GrowthType& GetGrowthType() const{ return m_growthType; }

    /**
     * <p>The algorithm used to define how percentage grew over time.</p>
     */
    inline bool GrowthTypeHasBeenSet() const { return m_growthTypeHasBeenSet; }

    /**
     * <p>The algorithm used to define how percentage grew over time.</p>
     */
    inline void SetGrowthType(const GrowthType& value) { m_growthTypeHasBeenSet = true; m_growthType = value; }

    /**
     * <p>The algorithm used to define how percentage grew over time.</p>
     */
    inline void SetGrowthType(GrowthType&& value) { m_growthTypeHasBeenSet = true; m_growthType = std::move(value); }

    /**
     * <p>The algorithm used to define how percentage grew over time.</p>
     */
    inline DeploymentStrategy& WithGrowthType(const GrowthType& value) { SetGrowthType(value); return *this;}

    /**
     * <p>The algorithm used to define how percentage grew over time.</p>
     */
    inline DeploymentStrategy& WithGrowthType(GrowthType&& value) { SetGrowthType(std::move(value)); return *this;}


    /**
     * <p>The percentage of targets that received a deployed configuration during each
     * interval.</p>
     */
    inline double GetGrowthFactor() const{ return m_growthFactor; }

    /**
     * <p>The percentage of targets that received a deployed configuration during each
     * interval.</p>
     */
    inline bool GrowthFactorHasBeenSet() const { return m_growthFactorHasBeenSet; }

    /**
     * <p>The percentage of targets that received a deployed configuration during each
     * interval.</p>
     */
    inline void SetGrowthFactor(double value) { m_growthFactorHasBeenSet = true; m_growthFactor = value; }

    /**
     * <p>The percentage of targets that received a deployed configuration during each
     * interval.</p>
     */
    inline DeploymentStrategy& WithGrowthFactor(double value) { SetGrowthFactor(value); return *this;}


    /**
     * <p>The amount of time that AppConfig monitored for alarms before considering the
     * deployment to be complete and no longer eligible for automatic rollback.</p>
     */
    inline int GetFinalBakeTimeInMinutes() const{ return m_finalBakeTimeInMinutes; }

    /**
     * <p>The amount of time that AppConfig monitored for alarms before considering the
     * deployment to be complete and no longer eligible for automatic rollback.</p>
     */
    inline bool FinalBakeTimeInMinutesHasBeenSet() const { return m_finalBakeTimeInMinutesHasBeenSet; }

    /**
     * <p>The amount of time that AppConfig monitored for alarms before considering the
     * deployment to be complete and no longer eligible for automatic rollback.</p>
     */
    inline void SetFinalBakeTimeInMinutes(int value) { m_finalBakeTimeInMinutesHasBeenSet = true; m_finalBakeTimeInMinutes = value; }

    /**
     * <p>The amount of time that AppConfig monitored for alarms before considering the
     * deployment to be complete and no longer eligible for automatic rollback.</p>
     */
    inline DeploymentStrategy& WithFinalBakeTimeInMinutes(int value) { SetFinalBakeTimeInMinutes(value); return *this;}


    /**
     * <p>Save the deployment strategy to a Systems Manager (SSM) document.</p>
     */
    inline const ReplicateTo& GetReplicateTo() const{ return m_replicateTo; }

    /**
     * <p>Save the deployment strategy to a Systems Manager (SSM) document.</p>
     */
    inline bool ReplicateToHasBeenSet() const { return m_replicateToHasBeenSet; }

    /**
     * <p>Save the deployment strategy to a Systems Manager (SSM) document.</p>
     */
    inline void SetReplicateTo(const ReplicateTo& value) { m_replicateToHasBeenSet = true; m_replicateTo = value; }

    /**
     * <p>Save the deployment strategy to a Systems Manager (SSM) document.</p>
     */
    inline void SetReplicateTo(ReplicateTo&& value) { m_replicateToHasBeenSet = true; m_replicateTo = std::move(value); }

    /**
     * <p>Save the deployment strategy to a Systems Manager (SSM) document.</p>
     */
    inline DeploymentStrategy& WithReplicateTo(const ReplicateTo& value) { SetReplicateTo(value); return *this;}

    /**
     * <p>Save the deployment strategy to a Systems Manager (SSM) document.</p>
     */
    inline DeploymentStrategy& WithReplicateTo(ReplicateTo&& value) { SetReplicateTo(std::move(value)); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    int m_deploymentDurationInMinutes;
    bool m_deploymentDurationInMinutesHasBeenSet = false;

    GrowthType m_growthType;
    bool m_growthTypeHasBeenSet = false;

    double m_growthFactor;
    bool m_growthFactorHasBeenSet = false;

    int m_finalBakeTimeInMinutes;
    bool m_finalBakeTimeInMinutesHasBeenSet = false;

    ReplicateTo m_replicateTo;
    bool m_replicateToHasBeenSet = false;
  };

} // namespace Model
} // namespace AppConfig
} // namespace Aws
