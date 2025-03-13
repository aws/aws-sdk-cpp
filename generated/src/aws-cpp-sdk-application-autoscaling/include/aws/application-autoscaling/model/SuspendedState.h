/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-autoscaling/ApplicationAutoScaling_EXPORTS.h>

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
namespace ApplicationAutoScaling
{
namespace Model
{

  /**
   * <p>Specifies whether the scaling activities for a scalable target are in a
   * suspended state. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/application-autoscaling-2016-02-06/SuspendedState">AWS
   * API Reference</a></p>
   */
  class SuspendedState
  {
  public:
    AWS_APPLICATIONAUTOSCALING_API SuspendedState() = default;
    AWS_APPLICATIONAUTOSCALING_API SuspendedState(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONAUTOSCALING_API SuspendedState& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONAUTOSCALING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Whether scale in by a target tracking scaling policy or a step scaling policy
     * is suspended. Set the value to <code>true</code> if you don't want Application
     * Auto Scaling to remove capacity when a scaling policy is triggered. The default
     * is <code>false</code>. </p>
     */
    inline bool GetDynamicScalingInSuspended() const { return m_dynamicScalingInSuspended; }
    inline bool DynamicScalingInSuspendedHasBeenSet() const { return m_dynamicScalingInSuspendedHasBeenSet; }
    inline void SetDynamicScalingInSuspended(bool value) { m_dynamicScalingInSuspendedHasBeenSet = true; m_dynamicScalingInSuspended = value; }
    inline SuspendedState& WithDynamicScalingInSuspended(bool value) { SetDynamicScalingInSuspended(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether scale out by a target tracking scaling policy or a step scaling
     * policy is suspended. Set the value to <code>true</code> if you don't want
     * Application Auto Scaling to add capacity when a scaling policy is triggered. The
     * default is <code>false</code>. </p>
     */
    inline bool GetDynamicScalingOutSuspended() const { return m_dynamicScalingOutSuspended; }
    inline bool DynamicScalingOutSuspendedHasBeenSet() const { return m_dynamicScalingOutSuspendedHasBeenSet; }
    inline void SetDynamicScalingOutSuspended(bool value) { m_dynamicScalingOutSuspendedHasBeenSet = true; m_dynamicScalingOutSuspended = value; }
    inline SuspendedState& WithDynamicScalingOutSuspended(bool value) { SetDynamicScalingOutSuspended(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether scheduled scaling is suspended. Set the value to <code>true</code> if
     * you don't want Application Auto Scaling to add or remove capacity by initiating
     * scheduled actions. The default is <code>false</code>. </p>
     */
    inline bool GetScheduledScalingSuspended() const { return m_scheduledScalingSuspended; }
    inline bool ScheduledScalingSuspendedHasBeenSet() const { return m_scheduledScalingSuspendedHasBeenSet; }
    inline void SetScheduledScalingSuspended(bool value) { m_scheduledScalingSuspendedHasBeenSet = true; m_scheduledScalingSuspended = value; }
    inline SuspendedState& WithScheduledScalingSuspended(bool value) { SetScheduledScalingSuspended(value); return *this;}
    ///@}
  private:

    bool m_dynamicScalingInSuspended{false};
    bool m_dynamicScalingInSuspendedHasBeenSet = false;

    bool m_dynamicScalingOutSuspended{false};
    bool m_dynamicScalingOutSuspendedHasBeenSet = false;

    bool m_scheduledScalingSuspended{false};
    bool m_scheduledScalingSuspendedHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationAutoScaling
} // namespace Aws
