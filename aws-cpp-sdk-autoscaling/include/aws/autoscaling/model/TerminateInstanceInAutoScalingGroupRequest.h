/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_AUTOSCALING_API TerminateInstanceInAutoScalingGroupRequest : public AutoScalingRequest
  {
  public:
    TerminateInstanceInAutoScalingGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "TerminateInstanceInAutoScalingGroup"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The ID of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The ID of the instance.</p>
     */
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }

    /**
     * <p>The ID of the instance.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The ID of the instance.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }

    /**
     * <p>The ID of the instance.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>The ID of the instance.</p>
     */
    inline TerminateInstanceInAutoScalingGroupRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The ID of the instance.</p>
     */
    inline TerminateInstanceInAutoScalingGroupRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the instance.</p>
     */
    inline TerminateInstanceInAutoScalingGroupRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}


    /**
     * <p>Indicates whether terminating the instance also decrements the size of the
     * Auto Scaling group.</p>
     */
    inline bool GetShouldDecrementDesiredCapacity() const{ return m_shouldDecrementDesiredCapacity; }

    /**
     * <p>Indicates whether terminating the instance also decrements the size of the
     * Auto Scaling group.</p>
     */
    inline bool ShouldDecrementDesiredCapacityHasBeenSet() const { return m_shouldDecrementDesiredCapacityHasBeenSet; }

    /**
     * <p>Indicates whether terminating the instance also decrements the size of the
     * Auto Scaling group.</p>
     */
    inline void SetShouldDecrementDesiredCapacity(bool value) { m_shouldDecrementDesiredCapacityHasBeenSet = true; m_shouldDecrementDesiredCapacity = value; }

    /**
     * <p>Indicates whether terminating the instance also decrements the size of the
     * Auto Scaling group.</p>
     */
    inline TerminateInstanceInAutoScalingGroupRequest& WithShouldDecrementDesiredCapacity(bool value) { SetShouldDecrementDesiredCapacity(value); return *this;}

  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet;

    bool m_shouldDecrementDesiredCapacity;
    bool m_shouldDecrementDesiredCapacityHasBeenSet;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
