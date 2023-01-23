/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appconfig/AppConfig_EXPORTS.h>
#include <aws/appconfig/AppConfigRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appconfig/model/GrowthType.h>
#include <utility>

namespace Aws
{
namespace AppConfig
{
namespace Model
{

  /**
   */
  class UpdateDeploymentStrategyRequest : public AppConfigRequest
  {
  public:
    AWS_APPCONFIG_API UpdateDeploymentStrategyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateDeploymentStrategy"; }

    AWS_APPCONFIG_API Aws::String SerializePayload() const override;


    /**
     * <p>The deployment strategy ID.</p>
     */
    inline const Aws::String& GetDeploymentStrategyId() const{ return m_deploymentStrategyId; }

    /**
     * <p>The deployment strategy ID.</p>
     */
    inline bool DeploymentStrategyIdHasBeenSet() const { return m_deploymentStrategyIdHasBeenSet; }

    /**
     * <p>The deployment strategy ID.</p>
     */
    inline void SetDeploymentStrategyId(const Aws::String& value) { m_deploymentStrategyIdHasBeenSet = true; m_deploymentStrategyId = value; }

    /**
     * <p>The deployment strategy ID.</p>
     */
    inline void SetDeploymentStrategyId(Aws::String&& value) { m_deploymentStrategyIdHasBeenSet = true; m_deploymentStrategyId = std::move(value); }

    /**
     * <p>The deployment strategy ID.</p>
     */
    inline void SetDeploymentStrategyId(const char* value) { m_deploymentStrategyIdHasBeenSet = true; m_deploymentStrategyId.assign(value); }

    /**
     * <p>The deployment strategy ID.</p>
     */
    inline UpdateDeploymentStrategyRequest& WithDeploymentStrategyId(const Aws::String& value) { SetDeploymentStrategyId(value); return *this;}

    /**
     * <p>The deployment strategy ID.</p>
     */
    inline UpdateDeploymentStrategyRequest& WithDeploymentStrategyId(Aws::String&& value) { SetDeploymentStrategyId(std::move(value)); return *this;}

    /**
     * <p>The deployment strategy ID.</p>
     */
    inline UpdateDeploymentStrategyRequest& WithDeploymentStrategyId(const char* value) { SetDeploymentStrategyId(value); return *this;}


    /**
     * <p>A description of the deployment strategy.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the deployment strategy.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the deployment strategy.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the deployment strategy.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the deployment strategy.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the deployment strategy.</p>
     */
    inline UpdateDeploymentStrategyRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the deployment strategy.</p>
     */
    inline UpdateDeploymentStrategyRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the deployment strategy.</p>
     */
    inline UpdateDeploymentStrategyRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Total amount of time for a deployment to last.</p>
     */
    inline int GetDeploymentDurationInMinutes() const{ return m_deploymentDurationInMinutes; }

    /**
     * <p>Total amount of time for a deployment to last.</p>
     */
    inline bool DeploymentDurationInMinutesHasBeenSet() const { return m_deploymentDurationInMinutesHasBeenSet; }

    /**
     * <p>Total amount of time for a deployment to last.</p>
     */
    inline void SetDeploymentDurationInMinutes(int value) { m_deploymentDurationInMinutesHasBeenSet = true; m_deploymentDurationInMinutes = value; }

    /**
     * <p>Total amount of time for a deployment to last.</p>
     */
    inline UpdateDeploymentStrategyRequest& WithDeploymentDurationInMinutes(int value) { SetDeploymentDurationInMinutes(value); return *this;}


    /**
     * <p>The amount of time that AppConfig monitors for alarms before considering the
     * deployment to be complete and no longer eligible for automatic rollback.</p>
     */
    inline int GetFinalBakeTimeInMinutes() const{ return m_finalBakeTimeInMinutes; }

    /**
     * <p>The amount of time that AppConfig monitors for alarms before considering the
     * deployment to be complete and no longer eligible for automatic rollback.</p>
     */
    inline bool FinalBakeTimeInMinutesHasBeenSet() const { return m_finalBakeTimeInMinutesHasBeenSet; }

    /**
     * <p>The amount of time that AppConfig monitors for alarms before considering the
     * deployment to be complete and no longer eligible for automatic rollback.</p>
     */
    inline void SetFinalBakeTimeInMinutes(int value) { m_finalBakeTimeInMinutesHasBeenSet = true; m_finalBakeTimeInMinutes = value; }

    /**
     * <p>The amount of time that AppConfig monitors for alarms before considering the
     * deployment to be complete and no longer eligible for automatic rollback.</p>
     */
    inline UpdateDeploymentStrategyRequest& WithFinalBakeTimeInMinutes(int value) { SetFinalBakeTimeInMinutes(value); return *this;}


    /**
     * <p>The percentage of targets to receive a deployed configuration during each
     * interval.</p>
     */
    inline double GetGrowthFactor() const{ return m_growthFactor; }

    /**
     * <p>The percentage of targets to receive a deployed configuration during each
     * interval.</p>
     */
    inline bool GrowthFactorHasBeenSet() const { return m_growthFactorHasBeenSet; }

    /**
     * <p>The percentage of targets to receive a deployed configuration during each
     * interval.</p>
     */
    inline void SetGrowthFactor(double value) { m_growthFactorHasBeenSet = true; m_growthFactor = value; }

    /**
     * <p>The percentage of targets to receive a deployed configuration during each
     * interval.</p>
     */
    inline UpdateDeploymentStrategyRequest& WithGrowthFactor(double value) { SetGrowthFactor(value); return *this;}


    /**
     * <p>The algorithm used to define how percentage grows over time. AppConfig
     * supports the following growth types:</p> <p> <b>Linear</b>: For this type,
     * AppConfig processes the deployment by increments of the growth factor evenly
     * distributed over the deployment time. For example, a linear deployment that uses
     * a growth factor of 20 initially makes the configuration available to 20 percent
     * of the targets. After 1/5th of the deployment time has passed, the system
     * updates the percentage to 40 percent. This continues until 100% of the targets
     * are set to receive the deployed configuration.</p> <p> <b>Exponential</b>: For
     * this type, AppConfig processes the deployment exponentially using the following
     * formula: <code>G*(2^N)</code>. In this formula, <code>G</code> is the growth
     * factor specified by the user and <code>N</code> is the number of steps until the
     * configuration is deployed to all targets. For example, if you specify a growth
     * factor of 2, then the system rolls out the configuration as follows:</p> <p>
     * <code>2*(2^0)</code> </p> <p> <code>2*(2^1)</code> </p> <p> <code>2*(2^2)</code>
     * </p> <p>Expressed numerically, the deployment rolls out as follows: 2% of the
     * targets, 4% of the targets, 8% of the targets, and continues until the
     * configuration has been deployed to all targets.</p>
     */
    inline const GrowthType& GetGrowthType() const{ return m_growthType; }

    /**
     * <p>The algorithm used to define how percentage grows over time. AppConfig
     * supports the following growth types:</p> <p> <b>Linear</b>: For this type,
     * AppConfig processes the deployment by increments of the growth factor evenly
     * distributed over the deployment time. For example, a linear deployment that uses
     * a growth factor of 20 initially makes the configuration available to 20 percent
     * of the targets. After 1/5th of the deployment time has passed, the system
     * updates the percentage to 40 percent. This continues until 100% of the targets
     * are set to receive the deployed configuration.</p> <p> <b>Exponential</b>: For
     * this type, AppConfig processes the deployment exponentially using the following
     * formula: <code>G*(2^N)</code>. In this formula, <code>G</code> is the growth
     * factor specified by the user and <code>N</code> is the number of steps until the
     * configuration is deployed to all targets. For example, if you specify a growth
     * factor of 2, then the system rolls out the configuration as follows:</p> <p>
     * <code>2*(2^0)</code> </p> <p> <code>2*(2^1)</code> </p> <p> <code>2*(2^2)</code>
     * </p> <p>Expressed numerically, the deployment rolls out as follows: 2% of the
     * targets, 4% of the targets, 8% of the targets, and continues until the
     * configuration has been deployed to all targets.</p>
     */
    inline bool GrowthTypeHasBeenSet() const { return m_growthTypeHasBeenSet; }

    /**
     * <p>The algorithm used to define how percentage grows over time. AppConfig
     * supports the following growth types:</p> <p> <b>Linear</b>: For this type,
     * AppConfig processes the deployment by increments of the growth factor evenly
     * distributed over the deployment time. For example, a linear deployment that uses
     * a growth factor of 20 initially makes the configuration available to 20 percent
     * of the targets. After 1/5th of the deployment time has passed, the system
     * updates the percentage to 40 percent. This continues until 100% of the targets
     * are set to receive the deployed configuration.</p> <p> <b>Exponential</b>: For
     * this type, AppConfig processes the deployment exponentially using the following
     * formula: <code>G*(2^N)</code>. In this formula, <code>G</code> is the growth
     * factor specified by the user and <code>N</code> is the number of steps until the
     * configuration is deployed to all targets. For example, if you specify a growth
     * factor of 2, then the system rolls out the configuration as follows:</p> <p>
     * <code>2*(2^0)</code> </p> <p> <code>2*(2^1)</code> </p> <p> <code>2*(2^2)</code>
     * </p> <p>Expressed numerically, the deployment rolls out as follows: 2% of the
     * targets, 4% of the targets, 8% of the targets, and continues until the
     * configuration has been deployed to all targets.</p>
     */
    inline void SetGrowthType(const GrowthType& value) { m_growthTypeHasBeenSet = true; m_growthType = value; }

    /**
     * <p>The algorithm used to define how percentage grows over time. AppConfig
     * supports the following growth types:</p> <p> <b>Linear</b>: For this type,
     * AppConfig processes the deployment by increments of the growth factor evenly
     * distributed over the deployment time. For example, a linear deployment that uses
     * a growth factor of 20 initially makes the configuration available to 20 percent
     * of the targets. After 1/5th of the deployment time has passed, the system
     * updates the percentage to 40 percent. This continues until 100% of the targets
     * are set to receive the deployed configuration.</p> <p> <b>Exponential</b>: For
     * this type, AppConfig processes the deployment exponentially using the following
     * formula: <code>G*(2^N)</code>. In this formula, <code>G</code> is the growth
     * factor specified by the user and <code>N</code> is the number of steps until the
     * configuration is deployed to all targets. For example, if you specify a growth
     * factor of 2, then the system rolls out the configuration as follows:</p> <p>
     * <code>2*(2^0)</code> </p> <p> <code>2*(2^1)</code> </p> <p> <code>2*(2^2)</code>
     * </p> <p>Expressed numerically, the deployment rolls out as follows: 2% of the
     * targets, 4% of the targets, 8% of the targets, and continues until the
     * configuration has been deployed to all targets.</p>
     */
    inline void SetGrowthType(GrowthType&& value) { m_growthTypeHasBeenSet = true; m_growthType = std::move(value); }

    /**
     * <p>The algorithm used to define how percentage grows over time. AppConfig
     * supports the following growth types:</p> <p> <b>Linear</b>: For this type,
     * AppConfig processes the deployment by increments of the growth factor evenly
     * distributed over the deployment time. For example, a linear deployment that uses
     * a growth factor of 20 initially makes the configuration available to 20 percent
     * of the targets. After 1/5th of the deployment time has passed, the system
     * updates the percentage to 40 percent. This continues until 100% of the targets
     * are set to receive the deployed configuration.</p> <p> <b>Exponential</b>: For
     * this type, AppConfig processes the deployment exponentially using the following
     * formula: <code>G*(2^N)</code>. In this formula, <code>G</code> is the growth
     * factor specified by the user and <code>N</code> is the number of steps until the
     * configuration is deployed to all targets. For example, if you specify a growth
     * factor of 2, then the system rolls out the configuration as follows:</p> <p>
     * <code>2*(2^0)</code> </p> <p> <code>2*(2^1)</code> </p> <p> <code>2*(2^2)</code>
     * </p> <p>Expressed numerically, the deployment rolls out as follows: 2% of the
     * targets, 4% of the targets, 8% of the targets, and continues until the
     * configuration has been deployed to all targets.</p>
     */
    inline UpdateDeploymentStrategyRequest& WithGrowthType(const GrowthType& value) { SetGrowthType(value); return *this;}

    /**
     * <p>The algorithm used to define how percentage grows over time. AppConfig
     * supports the following growth types:</p> <p> <b>Linear</b>: For this type,
     * AppConfig processes the deployment by increments of the growth factor evenly
     * distributed over the deployment time. For example, a linear deployment that uses
     * a growth factor of 20 initially makes the configuration available to 20 percent
     * of the targets. After 1/5th of the deployment time has passed, the system
     * updates the percentage to 40 percent. This continues until 100% of the targets
     * are set to receive the deployed configuration.</p> <p> <b>Exponential</b>: For
     * this type, AppConfig processes the deployment exponentially using the following
     * formula: <code>G*(2^N)</code>. In this formula, <code>G</code> is the growth
     * factor specified by the user and <code>N</code> is the number of steps until the
     * configuration is deployed to all targets. For example, if you specify a growth
     * factor of 2, then the system rolls out the configuration as follows:</p> <p>
     * <code>2*(2^0)</code> </p> <p> <code>2*(2^1)</code> </p> <p> <code>2*(2^2)</code>
     * </p> <p>Expressed numerically, the deployment rolls out as follows: 2% of the
     * targets, 4% of the targets, 8% of the targets, and continues until the
     * configuration has been deployed to all targets.</p>
     */
    inline UpdateDeploymentStrategyRequest& WithGrowthType(GrowthType&& value) { SetGrowthType(std::move(value)); return *this;}

  private:

    Aws::String m_deploymentStrategyId;
    bool m_deploymentStrategyIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    int m_deploymentDurationInMinutes;
    bool m_deploymentDurationInMinutesHasBeenSet = false;

    int m_finalBakeTimeInMinutes;
    bool m_finalBakeTimeInMinutesHasBeenSet = false;

    double m_growthFactor;
    bool m_growthFactorHasBeenSet = false;

    GrowthType m_growthType;
    bool m_growthTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace AppConfig
} // namespace Aws
