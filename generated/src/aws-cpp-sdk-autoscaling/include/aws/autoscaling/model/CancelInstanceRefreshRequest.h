/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/autoscaling/AutoScalingRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace AutoScaling
{
namespace Model
{

  /**
   */
  class CancelInstanceRefreshRequest : public AutoScalingRequest
  {
  public:
    AWS_AUTOSCALING_API CancelInstanceRefreshRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CancelInstanceRefresh"; }

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
    CancelInstanceRefreshRequest& WithAutoScalingGroupName(AutoScalingGroupNameT&& value) { SetAutoScalingGroupName(std::forward<AutoScalingGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When cancelling an instance refresh, this indicates whether to wait for
     * in-flight launches and terminations to complete. The default is true.</p>
     * <p>When set to false, Amazon EC2 Auto Scaling cancels the instance refresh
     * without waiting for any pending launches or terminations to complete.</p>
     */
    inline bool GetWaitForTransitioningInstances() const { return m_waitForTransitioningInstances; }
    inline bool WaitForTransitioningInstancesHasBeenSet() const { return m_waitForTransitioningInstancesHasBeenSet; }
    inline void SetWaitForTransitioningInstances(bool value) { m_waitForTransitioningInstancesHasBeenSet = true; m_waitForTransitioningInstances = value; }
    inline CancelInstanceRefreshRequest& WithWaitForTransitioningInstances(bool value) { SetWaitForTransitioningInstances(value); return *this;}
    ///@}
  private:

    Aws::String m_autoScalingGroupName;
    bool m_autoScalingGroupNameHasBeenSet = false;

    bool m_waitForTransitioningInstances{false};
    bool m_waitForTransitioningInstancesHasBeenSet = false;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
