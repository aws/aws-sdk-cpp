/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appconfig/AppConfig_EXPORTS.h>
#include <aws/appconfig/AppConfigRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appconfig/model/GrowthType.h>
#include <aws/appconfig/model/ReplicateTo.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace AppConfig
{
namespace Model
{

  /**
   */
  class CreateDeploymentStrategyRequest : public AppConfigRequest
  {
  public:
    AWS_APPCONFIG_API CreateDeploymentStrategyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDeploymentStrategy"; }

    AWS_APPCONFIG_API Aws::String SerializePayload() const override;


    /**
     * <p>A name for the deployment strategy.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A name for the deployment strategy.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A name for the deployment strategy.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A name for the deployment strategy.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A name for the deployment strategy.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A name for the deployment strategy.</p>
     */
    inline CreateDeploymentStrategyRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A name for the deployment strategy.</p>
     */
    inline CreateDeploymentStrategyRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A name for the deployment strategy.</p>
     */
    inline CreateDeploymentStrategyRequest& WithName(const char* value) { SetName(value); return *this;}


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
    inline CreateDeploymentStrategyRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the deployment strategy.</p>
     */
    inline CreateDeploymentStrategyRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the deployment strategy.</p>
     */
    inline CreateDeploymentStrategyRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


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
    inline CreateDeploymentStrategyRequest& WithDeploymentDurationInMinutes(int value) { SetDeploymentDurationInMinutes(value); return *this;}


    /**
     * <p>Specifies the amount of time AppConfig monitors for Amazon CloudWatch alarms
     * after the configuration has been deployed to 100% of its targets, before
     * considering the deployment to be complete. If an alarm is triggered during this
     * time, AppConfig rolls back the deployment. You must configure permissions for
     * AppConfig to roll back based on CloudWatch alarms. For more information, see <a
     * href="https://docs.aws.amazon.com/appconfig/latest/userguide/getting-started-with-appconfig-cloudwatch-alarms-permissions.html">Configuring
     * permissions for rollback based on Amazon CloudWatch alarms</a> in the
     * <i>AppConfig User Guide</i>.</p>
     */
    inline int GetFinalBakeTimeInMinutes() const{ return m_finalBakeTimeInMinutes; }

    /**
     * <p>Specifies the amount of time AppConfig monitors for Amazon CloudWatch alarms
     * after the configuration has been deployed to 100% of its targets, before
     * considering the deployment to be complete. If an alarm is triggered during this
     * time, AppConfig rolls back the deployment. You must configure permissions for
     * AppConfig to roll back based on CloudWatch alarms. For more information, see <a
     * href="https://docs.aws.amazon.com/appconfig/latest/userguide/getting-started-with-appconfig-cloudwatch-alarms-permissions.html">Configuring
     * permissions for rollback based on Amazon CloudWatch alarms</a> in the
     * <i>AppConfig User Guide</i>.</p>
     */
    inline bool FinalBakeTimeInMinutesHasBeenSet() const { return m_finalBakeTimeInMinutesHasBeenSet; }

    /**
     * <p>Specifies the amount of time AppConfig monitors for Amazon CloudWatch alarms
     * after the configuration has been deployed to 100% of its targets, before
     * considering the deployment to be complete. If an alarm is triggered during this
     * time, AppConfig rolls back the deployment. You must configure permissions for
     * AppConfig to roll back based on CloudWatch alarms. For more information, see <a
     * href="https://docs.aws.amazon.com/appconfig/latest/userguide/getting-started-with-appconfig-cloudwatch-alarms-permissions.html">Configuring
     * permissions for rollback based on Amazon CloudWatch alarms</a> in the
     * <i>AppConfig User Guide</i>.</p>
     */
    inline void SetFinalBakeTimeInMinutes(int value) { m_finalBakeTimeInMinutesHasBeenSet = true; m_finalBakeTimeInMinutes = value; }

    /**
     * <p>Specifies the amount of time AppConfig monitors for Amazon CloudWatch alarms
     * after the configuration has been deployed to 100% of its targets, before
     * considering the deployment to be complete. If an alarm is triggered during this
     * time, AppConfig rolls back the deployment. You must configure permissions for
     * AppConfig to roll back based on CloudWatch alarms. For more information, see <a
     * href="https://docs.aws.amazon.com/appconfig/latest/userguide/getting-started-with-appconfig-cloudwatch-alarms-permissions.html">Configuring
     * permissions for rollback based on Amazon CloudWatch alarms</a> in the
     * <i>AppConfig User Guide</i>.</p>
     */
    inline CreateDeploymentStrategyRequest& WithFinalBakeTimeInMinutes(int value) { SetFinalBakeTimeInMinutes(value); return *this;}


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
    inline CreateDeploymentStrategyRequest& WithGrowthFactor(double value) { SetGrowthFactor(value); return *this;}


    /**
     * <p>The algorithm used to define how percentage grows over time. AppConfig
     * supports the following growth types:</p> <p> <b>Linear</b>: For this type,
     * AppConfig processes the deployment by dividing the total number of targets by
     * the value specified for <code>Step percentage</code>. For example, a linear
     * deployment that uses a <code>Step percentage</code> of 10 deploys the
     * configuration to 10 percent of the hosts. After those deployments are complete,
     * the system deploys the configuration to the next 10 percent. This continues
     * until 100% of the targets have successfully received the configuration.</p> <p>
     * <b>Exponential</b>: For this type, AppConfig processes the deployment
     * exponentially using the following formula: <code>G*(2^N)</code>. In this
     * formula, <code>G</code> is the growth factor specified by the user and
     * <code>N</code> is the number of steps until the configuration is deployed to all
     * targets. For example, if you specify a growth factor of 2, then the system rolls
     * out the configuration as follows:</p> <p> <code>2*(2^0)</code> </p> <p>
     * <code>2*(2^1)</code> </p> <p> <code>2*(2^2)</code> </p> <p>Expressed
     * numerically, the deployment rolls out as follows: 2% of the targets, 4% of the
     * targets, 8% of the targets, and continues until the configuration has been
     * deployed to all targets.</p>
     */
    inline const GrowthType& GetGrowthType() const{ return m_growthType; }

    /**
     * <p>The algorithm used to define how percentage grows over time. AppConfig
     * supports the following growth types:</p> <p> <b>Linear</b>: For this type,
     * AppConfig processes the deployment by dividing the total number of targets by
     * the value specified for <code>Step percentage</code>. For example, a linear
     * deployment that uses a <code>Step percentage</code> of 10 deploys the
     * configuration to 10 percent of the hosts. After those deployments are complete,
     * the system deploys the configuration to the next 10 percent. This continues
     * until 100% of the targets have successfully received the configuration.</p> <p>
     * <b>Exponential</b>: For this type, AppConfig processes the deployment
     * exponentially using the following formula: <code>G*(2^N)</code>. In this
     * formula, <code>G</code> is the growth factor specified by the user and
     * <code>N</code> is the number of steps until the configuration is deployed to all
     * targets. For example, if you specify a growth factor of 2, then the system rolls
     * out the configuration as follows:</p> <p> <code>2*(2^0)</code> </p> <p>
     * <code>2*(2^1)</code> </p> <p> <code>2*(2^2)</code> </p> <p>Expressed
     * numerically, the deployment rolls out as follows: 2% of the targets, 4% of the
     * targets, 8% of the targets, and continues until the configuration has been
     * deployed to all targets.</p>
     */
    inline bool GrowthTypeHasBeenSet() const { return m_growthTypeHasBeenSet; }

    /**
     * <p>The algorithm used to define how percentage grows over time. AppConfig
     * supports the following growth types:</p> <p> <b>Linear</b>: For this type,
     * AppConfig processes the deployment by dividing the total number of targets by
     * the value specified for <code>Step percentage</code>. For example, a linear
     * deployment that uses a <code>Step percentage</code> of 10 deploys the
     * configuration to 10 percent of the hosts. After those deployments are complete,
     * the system deploys the configuration to the next 10 percent. This continues
     * until 100% of the targets have successfully received the configuration.</p> <p>
     * <b>Exponential</b>: For this type, AppConfig processes the deployment
     * exponentially using the following formula: <code>G*(2^N)</code>. In this
     * formula, <code>G</code> is the growth factor specified by the user and
     * <code>N</code> is the number of steps until the configuration is deployed to all
     * targets. For example, if you specify a growth factor of 2, then the system rolls
     * out the configuration as follows:</p> <p> <code>2*(2^0)</code> </p> <p>
     * <code>2*(2^1)</code> </p> <p> <code>2*(2^2)</code> </p> <p>Expressed
     * numerically, the deployment rolls out as follows: 2% of the targets, 4% of the
     * targets, 8% of the targets, and continues until the configuration has been
     * deployed to all targets.</p>
     */
    inline void SetGrowthType(const GrowthType& value) { m_growthTypeHasBeenSet = true; m_growthType = value; }

    /**
     * <p>The algorithm used to define how percentage grows over time. AppConfig
     * supports the following growth types:</p> <p> <b>Linear</b>: For this type,
     * AppConfig processes the deployment by dividing the total number of targets by
     * the value specified for <code>Step percentage</code>. For example, a linear
     * deployment that uses a <code>Step percentage</code> of 10 deploys the
     * configuration to 10 percent of the hosts. After those deployments are complete,
     * the system deploys the configuration to the next 10 percent. This continues
     * until 100% of the targets have successfully received the configuration.</p> <p>
     * <b>Exponential</b>: For this type, AppConfig processes the deployment
     * exponentially using the following formula: <code>G*(2^N)</code>. In this
     * formula, <code>G</code> is the growth factor specified by the user and
     * <code>N</code> is the number of steps until the configuration is deployed to all
     * targets. For example, if you specify a growth factor of 2, then the system rolls
     * out the configuration as follows:</p> <p> <code>2*(2^0)</code> </p> <p>
     * <code>2*(2^1)</code> </p> <p> <code>2*(2^2)</code> </p> <p>Expressed
     * numerically, the deployment rolls out as follows: 2% of the targets, 4% of the
     * targets, 8% of the targets, and continues until the configuration has been
     * deployed to all targets.</p>
     */
    inline void SetGrowthType(GrowthType&& value) { m_growthTypeHasBeenSet = true; m_growthType = std::move(value); }

    /**
     * <p>The algorithm used to define how percentage grows over time. AppConfig
     * supports the following growth types:</p> <p> <b>Linear</b>: For this type,
     * AppConfig processes the deployment by dividing the total number of targets by
     * the value specified for <code>Step percentage</code>. For example, a linear
     * deployment that uses a <code>Step percentage</code> of 10 deploys the
     * configuration to 10 percent of the hosts. After those deployments are complete,
     * the system deploys the configuration to the next 10 percent. This continues
     * until 100% of the targets have successfully received the configuration.</p> <p>
     * <b>Exponential</b>: For this type, AppConfig processes the deployment
     * exponentially using the following formula: <code>G*(2^N)</code>. In this
     * formula, <code>G</code> is the growth factor specified by the user and
     * <code>N</code> is the number of steps until the configuration is deployed to all
     * targets. For example, if you specify a growth factor of 2, then the system rolls
     * out the configuration as follows:</p> <p> <code>2*(2^0)</code> </p> <p>
     * <code>2*(2^1)</code> </p> <p> <code>2*(2^2)</code> </p> <p>Expressed
     * numerically, the deployment rolls out as follows: 2% of the targets, 4% of the
     * targets, 8% of the targets, and continues until the configuration has been
     * deployed to all targets.</p>
     */
    inline CreateDeploymentStrategyRequest& WithGrowthType(const GrowthType& value) { SetGrowthType(value); return *this;}

    /**
     * <p>The algorithm used to define how percentage grows over time. AppConfig
     * supports the following growth types:</p> <p> <b>Linear</b>: For this type,
     * AppConfig processes the deployment by dividing the total number of targets by
     * the value specified for <code>Step percentage</code>. For example, a linear
     * deployment that uses a <code>Step percentage</code> of 10 deploys the
     * configuration to 10 percent of the hosts. After those deployments are complete,
     * the system deploys the configuration to the next 10 percent. This continues
     * until 100% of the targets have successfully received the configuration.</p> <p>
     * <b>Exponential</b>: For this type, AppConfig processes the deployment
     * exponentially using the following formula: <code>G*(2^N)</code>. In this
     * formula, <code>G</code> is the growth factor specified by the user and
     * <code>N</code> is the number of steps until the configuration is deployed to all
     * targets. For example, if you specify a growth factor of 2, then the system rolls
     * out the configuration as follows:</p> <p> <code>2*(2^0)</code> </p> <p>
     * <code>2*(2^1)</code> </p> <p> <code>2*(2^2)</code> </p> <p>Expressed
     * numerically, the deployment rolls out as follows: 2% of the targets, 4% of the
     * targets, 8% of the targets, and continues until the configuration has been
     * deployed to all targets.</p>
     */
    inline CreateDeploymentStrategyRequest& WithGrowthType(GrowthType&& value) { SetGrowthType(std::move(value)); return *this;}


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
    inline CreateDeploymentStrategyRequest& WithReplicateTo(const ReplicateTo& value) { SetReplicateTo(value); return *this;}

    /**
     * <p>Save the deployment strategy to a Systems Manager (SSM) document.</p>
     */
    inline CreateDeploymentStrategyRequest& WithReplicateTo(ReplicateTo&& value) { SetReplicateTo(std::move(value)); return *this;}


    /**
     * <p>Metadata to assign to the deployment strategy. Tags help organize and
     * categorize your AppConfig resources. Each tag consists of a key and an optional
     * value, both of which you define.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>Metadata to assign to the deployment strategy. Tags help organize and
     * categorize your AppConfig resources. Each tag consists of a key and an optional
     * value, both of which you define.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Metadata to assign to the deployment strategy. Tags help organize and
     * categorize your AppConfig resources. Each tag consists of a key and an optional
     * value, both of which you define.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Metadata to assign to the deployment strategy. Tags help organize and
     * categorize your AppConfig resources. Each tag consists of a key and an optional
     * value, both of which you define.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Metadata to assign to the deployment strategy. Tags help organize and
     * categorize your AppConfig resources. Each tag consists of a key and an optional
     * value, both of which you define.</p>
     */
    inline CreateDeploymentStrategyRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>Metadata to assign to the deployment strategy. Tags help organize and
     * categorize your AppConfig resources. Each tag consists of a key and an optional
     * value, both of which you define.</p>
     */
    inline CreateDeploymentStrategyRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Metadata to assign to the deployment strategy. Tags help organize and
     * categorize your AppConfig resources. Each tag consists of a key and an optional
     * value, both of which you define.</p>
     */
    inline CreateDeploymentStrategyRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>Metadata to assign to the deployment strategy. Tags help organize and
     * categorize your AppConfig resources. Each tag consists of a key and an optional
     * value, both of which you define.</p>
     */
    inline CreateDeploymentStrategyRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Metadata to assign to the deployment strategy. Tags help organize and
     * categorize your AppConfig resources. Each tag consists of a key and an optional
     * value, both of which you define.</p>
     */
    inline CreateDeploymentStrategyRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Metadata to assign to the deployment strategy. Tags help organize and
     * categorize your AppConfig resources. Each tag consists of a key and an optional
     * value, both of which you define.</p>
     */
    inline CreateDeploymentStrategyRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Metadata to assign to the deployment strategy. Tags help organize and
     * categorize your AppConfig resources. Each tag consists of a key and an optional
     * value, both of which you define.</p>
     */
    inline CreateDeploymentStrategyRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Metadata to assign to the deployment strategy. Tags help organize and
     * categorize your AppConfig resources. Each tag consists of a key and an optional
     * value, both of which you define.</p>
     */
    inline CreateDeploymentStrategyRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Metadata to assign to the deployment strategy. Tags help organize and
     * categorize your AppConfig resources. Each tag consists of a key and an optional
     * value, both of which you define.</p>
     */
    inline CreateDeploymentStrategyRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

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

    ReplicateTo m_replicateTo;
    bool m_replicateToHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace AppConfig
} // namespace Aws
