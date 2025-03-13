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
  class DetachLoadBalancerTargetGroupsRequest : public AutoScalingRequest
  {
  public:
    AWS_AUTOSCALING_API DetachLoadBalancerTargetGroupsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DetachLoadBalancerTargetGroups"; }

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
    DetachLoadBalancerTargetGroupsRequest& WithAutoScalingGroupName(AutoScalingGroupNameT&& value) { SetAutoScalingGroupName(std::forward<AutoScalingGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Names (ARN) of the target groups. You can specify up to
     * 10 target groups.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTargetGroupARNs() const { return m_targetGroupARNs; }
    inline bool TargetGroupARNsHasBeenSet() const { return m_targetGroupARNsHasBeenSet; }
    template<typename TargetGroupARNsT = Aws::Vector<Aws::String>>
    void SetTargetGroupARNs(TargetGroupARNsT&& value) { m_targetGroupARNsHasBeenSet = true; m_targetGroupARNs = std::forward<TargetGroupARNsT>(value); }
    template<typename TargetGroupARNsT = Aws::Vector<Aws::String>>
    DetachLoadBalancerTargetGroupsRequest& WithTargetGroupARNs(TargetGroupARNsT&& value) { SetTargetGroupARNs(std::forward<TargetGroupARNsT>(value)); return *this;}
    template<typename TargetGroupARNsT = Aws::String>
    DetachLoadBalancerTargetGroupsRequest& AddTargetGroupARNs(TargetGroupARNsT&& value) { m_targetGroupARNsHasBeenSet = true; m_targetGroupARNs.emplace_back(std::forward<TargetGroupARNsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_autoScalingGroupName;
    bool m_autoScalingGroupNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_targetGroupARNs;
    bool m_targetGroupARNsHasBeenSet = false;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
