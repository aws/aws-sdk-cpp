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
  class DescribeLifecycleHooksRequest : public AutoScalingRequest
  {
  public:
    AWS_AUTOSCALING_API DescribeLifecycleHooksRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeLifecycleHooks"; }

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
    DescribeLifecycleHooksRequest& WithAutoScalingGroupName(AutoScalingGroupNameT&& value) { SetAutoScalingGroupName(std::forward<AutoScalingGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The names of one or more lifecycle hooks. If you omit this property, all
     * lifecycle hooks are described.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLifecycleHookNames() const { return m_lifecycleHookNames; }
    inline bool LifecycleHookNamesHasBeenSet() const { return m_lifecycleHookNamesHasBeenSet; }
    template<typename LifecycleHookNamesT = Aws::Vector<Aws::String>>
    void SetLifecycleHookNames(LifecycleHookNamesT&& value) { m_lifecycleHookNamesHasBeenSet = true; m_lifecycleHookNames = std::forward<LifecycleHookNamesT>(value); }
    template<typename LifecycleHookNamesT = Aws::Vector<Aws::String>>
    DescribeLifecycleHooksRequest& WithLifecycleHookNames(LifecycleHookNamesT&& value) { SetLifecycleHookNames(std::forward<LifecycleHookNamesT>(value)); return *this;}
    template<typename LifecycleHookNamesT = Aws::String>
    DescribeLifecycleHooksRequest& AddLifecycleHookNames(LifecycleHookNamesT&& value) { m_lifecycleHookNamesHasBeenSet = true; m_lifecycleHookNames.emplace_back(std::forward<LifecycleHookNamesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_autoScalingGroupName;
    bool m_autoScalingGroupNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_lifecycleHookNames;
    bool m_lifecycleHookNamesHasBeenSet = false;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
