/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/autoscaling/AutoScalingRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/autoscaling/model/RefreshStrategy.h>
#include <aws/autoscaling/model/RefreshPreferences.h>
#include <utility>

namespace Aws
{
namespace AutoScaling
{
namespace Model
{

  /**
   */
  class AWS_AUTOSCALING_API StartInstanceRefreshRequest : public AutoScalingRequest
  {
  public:
    StartInstanceRefreshRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartInstanceRefresh"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The name of the Auto Scaling group.</p>
     */
    inline const Aws::String& GetAutoScalingGroupName() const{ return m_autoScalingGroupName; }

    /**
     * <p>The name of the Auto Scaling group.</p>
     */
    inline bool AutoScalingGroupNameHasBeenSet() const { return m_autoScalingGroupNameHasBeenSet; }

    /**
     * <p>The name of the Auto Scaling group.</p>
     */
    inline void SetAutoScalingGroupName(const Aws::String& value) { m_autoScalingGroupNameHasBeenSet = true; m_autoScalingGroupName = value; }

    /**
     * <p>The name of the Auto Scaling group.</p>
     */
    inline void SetAutoScalingGroupName(Aws::String&& value) { m_autoScalingGroupNameHasBeenSet = true; m_autoScalingGroupName = std::move(value); }

    /**
     * <p>The name of the Auto Scaling group.</p>
     */
    inline void SetAutoScalingGroupName(const char* value) { m_autoScalingGroupNameHasBeenSet = true; m_autoScalingGroupName.assign(value); }

    /**
     * <p>The name of the Auto Scaling group.</p>
     */
    inline StartInstanceRefreshRequest& WithAutoScalingGroupName(const Aws::String& value) { SetAutoScalingGroupName(value); return *this;}

    /**
     * <p>The name of the Auto Scaling group.</p>
     */
    inline StartInstanceRefreshRequest& WithAutoScalingGroupName(Aws::String&& value) { SetAutoScalingGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the Auto Scaling group.</p>
     */
    inline StartInstanceRefreshRequest& WithAutoScalingGroupName(const char* value) { SetAutoScalingGroupName(value); return *this;}


    /**
     * <p>The strategy to use for the instance refresh. The only valid value is
     * <code>Rolling</code>.</p> <p>A rolling update is an update that is applied to
     * all instances in an Auto Scaling group until all instances have been updated. A
     * rolling update can fail due to failed health checks or if instances are on
     * standby or are protected from scale in. If the rolling update process fails, any
     * instances that were already replaced are not rolled back to their previous
     * configuration. </p>
     */
    inline const RefreshStrategy& GetStrategy() const{ return m_strategy; }

    /**
     * <p>The strategy to use for the instance refresh. The only valid value is
     * <code>Rolling</code>.</p> <p>A rolling update is an update that is applied to
     * all instances in an Auto Scaling group until all instances have been updated. A
     * rolling update can fail due to failed health checks or if instances are on
     * standby or are protected from scale in. If the rolling update process fails, any
     * instances that were already replaced are not rolled back to their previous
     * configuration. </p>
     */
    inline bool StrategyHasBeenSet() const { return m_strategyHasBeenSet; }

    /**
     * <p>The strategy to use for the instance refresh. The only valid value is
     * <code>Rolling</code>.</p> <p>A rolling update is an update that is applied to
     * all instances in an Auto Scaling group until all instances have been updated. A
     * rolling update can fail due to failed health checks or if instances are on
     * standby or are protected from scale in. If the rolling update process fails, any
     * instances that were already replaced are not rolled back to their previous
     * configuration. </p>
     */
    inline void SetStrategy(const RefreshStrategy& value) { m_strategyHasBeenSet = true; m_strategy = value; }

    /**
     * <p>The strategy to use for the instance refresh. The only valid value is
     * <code>Rolling</code>.</p> <p>A rolling update is an update that is applied to
     * all instances in an Auto Scaling group until all instances have been updated. A
     * rolling update can fail due to failed health checks or if instances are on
     * standby or are protected from scale in. If the rolling update process fails, any
     * instances that were already replaced are not rolled back to their previous
     * configuration. </p>
     */
    inline void SetStrategy(RefreshStrategy&& value) { m_strategyHasBeenSet = true; m_strategy = std::move(value); }

    /**
     * <p>The strategy to use for the instance refresh. The only valid value is
     * <code>Rolling</code>.</p> <p>A rolling update is an update that is applied to
     * all instances in an Auto Scaling group until all instances have been updated. A
     * rolling update can fail due to failed health checks or if instances are on
     * standby or are protected from scale in. If the rolling update process fails, any
     * instances that were already replaced are not rolled back to their previous
     * configuration. </p>
     */
    inline StartInstanceRefreshRequest& WithStrategy(const RefreshStrategy& value) { SetStrategy(value); return *this;}

    /**
     * <p>The strategy to use for the instance refresh. The only valid value is
     * <code>Rolling</code>.</p> <p>A rolling update is an update that is applied to
     * all instances in an Auto Scaling group until all instances have been updated. A
     * rolling update can fail due to failed health checks or if instances are on
     * standby or are protected from scale in. If the rolling update process fails, any
     * instances that were already replaced are not rolled back to their previous
     * configuration. </p>
     */
    inline StartInstanceRefreshRequest& WithStrategy(RefreshStrategy&& value) { SetStrategy(std::move(value)); return *this;}


    /**
     * <p>Set of preferences associated with the instance refresh request.</p> <p>If
     * not provided, the default values are used. For
     * <code>MinHealthyPercentage</code>, the default value is <code>90</code>. For
     * <code>InstanceWarmup</code>, the default is to use the value specified for the
     * health check grace period for the Auto Scaling group.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/APIReference/API_RefreshPreferences.html">RefreshPreferences</a>
     * in the <i>Amazon EC2 Auto Scaling API Reference</i>.</p>
     */
    inline const RefreshPreferences& GetPreferences() const{ return m_preferences; }

    /**
     * <p>Set of preferences associated with the instance refresh request.</p> <p>If
     * not provided, the default values are used. For
     * <code>MinHealthyPercentage</code>, the default value is <code>90</code>. For
     * <code>InstanceWarmup</code>, the default is to use the value specified for the
     * health check grace period for the Auto Scaling group.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/APIReference/API_RefreshPreferences.html">RefreshPreferences</a>
     * in the <i>Amazon EC2 Auto Scaling API Reference</i>.</p>
     */
    inline bool PreferencesHasBeenSet() const { return m_preferencesHasBeenSet; }

    /**
     * <p>Set of preferences associated with the instance refresh request.</p> <p>If
     * not provided, the default values are used. For
     * <code>MinHealthyPercentage</code>, the default value is <code>90</code>. For
     * <code>InstanceWarmup</code>, the default is to use the value specified for the
     * health check grace period for the Auto Scaling group.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/APIReference/API_RefreshPreferences.html">RefreshPreferences</a>
     * in the <i>Amazon EC2 Auto Scaling API Reference</i>.</p>
     */
    inline void SetPreferences(const RefreshPreferences& value) { m_preferencesHasBeenSet = true; m_preferences = value; }

    /**
     * <p>Set of preferences associated with the instance refresh request.</p> <p>If
     * not provided, the default values are used. For
     * <code>MinHealthyPercentage</code>, the default value is <code>90</code>. For
     * <code>InstanceWarmup</code>, the default is to use the value specified for the
     * health check grace period for the Auto Scaling group.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/APIReference/API_RefreshPreferences.html">RefreshPreferences</a>
     * in the <i>Amazon EC2 Auto Scaling API Reference</i>.</p>
     */
    inline void SetPreferences(RefreshPreferences&& value) { m_preferencesHasBeenSet = true; m_preferences = std::move(value); }

    /**
     * <p>Set of preferences associated with the instance refresh request.</p> <p>If
     * not provided, the default values are used. For
     * <code>MinHealthyPercentage</code>, the default value is <code>90</code>. For
     * <code>InstanceWarmup</code>, the default is to use the value specified for the
     * health check grace period for the Auto Scaling group.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/APIReference/API_RefreshPreferences.html">RefreshPreferences</a>
     * in the <i>Amazon EC2 Auto Scaling API Reference</i>.</p>
     */
    inline StartInstanceRefreshRequest& WithPreferences(const RefreshPreferences& value) { SetPreferences(value); return *this;}

    /**
     * <p>Set of preferences associated with the instance refresh request.</p> <p>If
     * not provided, the default values are used. For
     * <code>MinHealthyPercentage</code>, the default value is <code>90</code>. For
     * <code>InstanceWarmup</code>, the default is to use the value specified for the
     * health check grace period for the Auto Scaling group.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/APIReference/API_RefreshPreferences.html">RefreshPreferences</a>
     * in the <i>Amazon EC2 Auto Scaling API Reference</i>.</p>
     */
    inline StartInstanceRefreshRequest& WithPreferences(RefreshPreferences&& value) { SetPreferences(std::move(value)); return *this;}

  private:

    Aws::String m_autoScalingGroupName;
    bool m_autoScalingGroupNameHasBeenSet;

    RefreshStrategy m_strategy;
    bool m_strategyHasBeenSet;

    RefreshPreferences m_preferences;
    bool m_preferencesHasBeenSet;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
