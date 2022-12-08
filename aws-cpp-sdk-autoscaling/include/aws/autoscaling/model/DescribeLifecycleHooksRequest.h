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
    AWS_AUTOSCALING_API DescribeLifecycleHooksRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeLifecycleHooks"; }

    AWS_AUTOSCALING_API Aws::String SerializePayload() const override;

  protected:
    AWS_AUTOSCALING_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

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
    inline DescribeLifecycleHooksRequest& WithAutoScalingGroupName(const Aws::String& value) { SetAutoScalingGroupName(value); return *this;}

    /**
     * <p>The name of the Auto Scaling group.</p>
     */
    inline DescribeLifecycleHooksRequest& WithAutoScalingGroupName(Aws::String&& value) { SetAutoScalingGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the Auto Scaling group.</p>
     */
    inline DescribeLifecycleHooksRequest& WithAutoScalingGroupName(const char* value) { SetAutoScalingGroupName(value); return *this;}


    /**
     * <p>The names of one or more lifecycle hooks. If you omit this property, all
     * lifecycle hooks are described.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLifecycleHookNames() const{ return m_lifecycleHookNames; }

    /**
     * <p>The names of one or more lifecycle hooks. If you omit this property, all
     * lifecycle hooks are described.</p>
     */
    inline bool LifecycleHookNamesHasBeenSet() const { return m_lifecycleHookNamesHasBeenSet; }

    /**
     * <p>The names of one or more lifecycle hooks. If you omit this property, all
     * lifecycle hooks are described.</p>
     */
    inline void SetLifecycleHookNames(const Aws::Vector<Aws::String>& value) { m_lifecycleHookNamesHasBeenSet = true; m_lifecycleHookNames = value; }

    /**
     * <p>The names of one or more lifecycle hooks. If you omit this property, all
     * lifecycle hooks are described.</p>
     */
    inline void SetLifecycleHookNames(Aws::Vector<Aws::String>&& value) { m_lifecycleHookNamesHasBeenSet = true; m_lifecycleHookNames = std::move(value); }

    /**
     * <p>The names of one or more lifecycle hooks. If you omit this property, all
     * lifecycle hooks are described.</p>
     */
    inline DescribeLifecycleHooksRequest& WithLifecycleHookNames(const Aws::Vector<Aws::String>& value) { SetLifecycleHookNames(value); return *this;}

    /**
     * <p>The names of one or more lifecycle hooks. If you omit this property, all
     * lifecycle hooks are described.</p>
     */
    inline DescribeLifecycleHooksRequest& WithLifecycleHookNames(Aws::Vector<Aws::String>&& value) { SetLifecycleHookNames(std::move(value)); return *this;}

    /**
     * <p>The names of one or more lifecycle hooks. If you omit this property, all
     * lifecycle hooks are described.</p>
     */
    inline DescribeLifecycleHooksRequest& AddLifecycleHookNames(const Aws::String& value) { m_lifecycleHookNamesHasBeenSet = true; m_lifecycleHookNames.push_back(value); return *this; }

    /**
     * <p>The names of one or more lifecycle hooks. If you omit this property, all
     * lifecycle hooks are described.</p>
     */
    inline DescribeLifecycleHooksRequest& AddLifecycleHookNames(Aws::String&& value) { m_lifecycleHookNamesHasBeenSet = true; m_lifecycleHookNames.push_back(std::move(value)); return *this; }

    /**
     * <p>The names of one or more lifecycle hooks. If you omit this property, all
     * lifecycle hooks are described.</p>
     */
    inline DescribeLifecycleHooksRequest& AddLifecycleHookNames(const char* value) { m_lifecycleHookNamesHasBeenSet = true; m_lifecycleHookNames.push_back(value); return *this; }

  private:

    Aws::String m_autoScalingGroupName;
    bool m_autoScalingGroupNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_lifecycleHookNames;
    bool m_lifecycleHookNamesHasBeenSet = false;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
