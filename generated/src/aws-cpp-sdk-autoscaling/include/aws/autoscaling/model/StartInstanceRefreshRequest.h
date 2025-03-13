/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/autoscaling/AutoScalingRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/autoscaling/model/RefreshStrategy.h>
#include <aws/autoscaling/model/DesiredConfiguration.h>
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
  class StartInstanceRefreshRequest : public AutoScalingRequest
  {
  public:
    AWS_AUTOSCALING_API StartInstanceRefreshRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartInstanceRefresh"; }

    AWS_AUTOSCALING_API Aws::String SerializePayload() const override;

  protected:
    AWS_AUTOSCALING_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The name of the Auto Scaling group.</p>
     */
    inline const Aws::String& GetAutoScalingGroupName() const { return m_autoScalingGroupName; }
    inline bool AutoScalingGroupNameHasBeenSet() const { return m_autoScalingGroupNameHasBeenSet; }
    template<typename AutoScalingGroupNameT = Aws::String>
    void SetAutoScalingGroupName(AutoScalingGroupNameT&& value) { m_autoScalingGroupNameHasBeenSet = true; m_autoScalingGroupName = std::forward<AutoScalingGroupNameT>(value); }
    template<typename AutoScalingGroupNameT = Aws::String>
    StartInstanceRefreshRequest& WithAutoScalingGroupName(AutoScalingGroupNameT&& value) { SetAutoScalingGroupName(std::forward<AutoScalingGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The strategy to use for the instance refresh. The only valid value is
     * <code>Rolling</code>.</p>
     */
    inline RefreshStrategy GetStrategy() const { return m_strategy; }
    inline bool StrategyHasBeenSet() const { return m_strategyHasBeenSet; }
    inline void SetStrategy(RefreshStrategy value) { m_strategyHasBeenSet = true; m_strategy = value; }
    inline StartInstanceRefreshRequest& WithStrategy(RefreshStrategy value) { SetStrategy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The desired configuration. For example, the desired configuration can specify
     * a new launch template or a new version of the current launch template.</p>
     * <p>Once the instance refresh succeeds, Amazon EC2 Auto Scaling updates the
     * settings of the Auto Scaling group to reflect the new desired configuration.
     * </p>  <p>When you specify a new launch template or a new version of the
     * current launch template for your desired configuration, consider enabling the
     * <code>SkipMatching</code> property in preferences. If it's enabled, Amazon EC2
     * Auto Scaling skips replacing instances that already use the specified launch
     * template and instance types. This can help you reduce the number of replacements
     * that are required to apply updates. </p> 
     */
    inline const DesiredConfiguration& GetDesiredConfiguration() const { return m_desiredConfiguration; }
    inline bool DesiredConfigurationHasBeenSet() const { return m_desiredConfigurationHasBeenSet; }
    template<typename DesiredConfigurationT = DesiredConfiguration>
    void SetDesiredConfiguration(DesiredConfigurationT&& value) { m_desiredConfigurationHasBeenSet = true; m_desiredConfiguration = std::forward<DesiredConfigurationT>(value); }
    template<typename DesiredConfigurationT = DesiredConfiguration>
    StartInstanceRefreshRequest& WithDesiredConfiguration(DesiredConfigurationT&& value) { SetDesiredConfiguration(std::forward<DesiredConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sets your preferences for the instance refresh so that it performs as
     * expected when you start it. Includes the instance warmup time, the minimum and
     * maximum healthy percentages, and the behaviors that you want Amazon EC2 Auto
     * Scaling to use if instances that are in <code>Standby</code> state or protected
     * from scale in are found. You can also choose to enable additional features, such
     * as the following:</p> <ul> <li> <p>Auto rollback</p> </li> <li>
     * <p>Checkpoints</p> </li> <li> <p>CloudWatch alarms</p> </li> <li> <p>Skip
     * matching</p> </li> <li> <p>Bake time</p> </li> </ul>
     */
    inline const RefreshPreferences& GetPreferences() const { return m_preferences; }
    inline bool PreferencesHasBeenSet() const { return m_preferencesHasBeenSet; }
    template<typename PreferencesT = RefreshPreferences>
    void SetPreferences(PreferencesT&& value) { m_preferencesHasBeenSet = true; m_preferences = std::forward<PreferencesT>(value); }
    template<typename PreferencesT = RefreshPreferences>
    StartInstanceRefreshRequest& WithPreferences(PreferencesT&& value) { SetPreferences(std::forward<PreferencesT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_autoScalingGroupName;
    bool m_autoScalingGroupNameHasBeenSet = false;

    RefreshStrategy m_strategy{RefreshStrategy::NOT_SET};
    bool m_strategyHasBeenSet = false;

    DesiredConfiguration m_desiredConfiguration;
    bool m_desiredConfigurationHasBeenSet = false;

    RefreshPreferences m_preferences;
    bool m_preferencesHasBeenSet = false;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
