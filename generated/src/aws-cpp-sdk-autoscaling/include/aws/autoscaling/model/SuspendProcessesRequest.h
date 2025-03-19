/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/autoscaling/AutoScalingRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace AutoScaling
{
namespace Model
{

  /**
   */
  class SuspendProcessesRequest : public AutoScalingRequest
  {
  public:
    AWS_AUTOSCALING_API SuspendProcessesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SuspendProcesses"; }

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
    SuspendProcessesRequest& WithAutoScalingGroupName(AutoScalingGroupNameT&& value) { SetAutoScalingGroupName(std::forward<AutoScalingGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more of the following processes:</p> <ul> <li> <p> <code>Launch</code>
     * </p> </li> <li> <p> <code>Terminate</code> </p> </li> <li> <p>
     * <code>AddToLoadBalancer</code> </p> </li> <li> <p>
     * <code>AlarmNotification</code> </p> </li> <li> <p> <code>AZRebalance</code> </p>
     * </li> <li> <p> <code>HealthCheck</code> </p> </li> <li> <p>
     * <code>InstanceRefresh</code> </p> </li> <li> <p> <code>ReplaceUnhealthy</code>
     * </p> </li> <li> <p> <code>ScheduledActions</code> </p> </li> </ul> <p>If you
     * omit this property, all processes are specified.</p>
     */
    inline const Aws::Vector<Aws::String>& GetScalingProcesses() const { return m_scalingProcesses; }
    inline bool ScalingProcessesHasBeenSet() const { return m_scalingProcessesHasBeenSet; }
    template<typename ScalingProcessesT = Aws::Vector<Aws::String>>
    void SetScalingProcesses(ScalingProcessesT&& value) { m_scalingProcessesHasBeenSet = true; m_scalingProcesses = std::forward<ScalingProcessesT>(value); }
    template<typename ScalingProcessesT = Aws::Vector<Aws::String>>
    SuspendProcessesRequest& WithScalingProcesses(ScalingProcessesT&& value) { SetScalingProcesses(std::forward<ScalingProcessesT>(value)); return *this;}
    template<typename ScalingProcessesT = Aws::String>
    SuspendProcessesRequest& AddScalingProcesses(ScalingProcessesT&& value) { m_scalingProcessesHasBeenSet = true; m_scalingProcesses.emplace_back(std::forward<ScalingProcessesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_autoScalingGroupName;
    bool m_autoScalingGroupNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_scalingProcesses;
    bool m_scalingProcessesHasBeenSet = false;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
