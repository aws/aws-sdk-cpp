/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

namespace Aws
{
namespace AutoScaling
{
namespace Model
{

  /**
   * <p>Contains the parameters for RecordLifecycleActionHeartbeat.</p>
   */
  class AWS_AUTOSCALING_API RecordLifecycleActionHeartbeatRequest : public AutoScalingRequest
  {
  public:
    RecordLifecycleActionHeartbeatRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The name of the lifecycle hook.</p>
     */
    inline const Aws::String& GetLifecycleHookName() const{ return m_lifecycleHookName; }

    /**
     * <p>The name of the lifecycle hook.</p>
     */
    inline void SetLifecycleHookName(const Aws::String& value) { m_lifecycleHookNameHasBeenSet = true; m_lifecycleHookName = value; }

    /**
     * <p>The name of the lifecycle hook.</p>
     */
    inline void SetLifecycleHookName(Aws::String&& value) { m_lifecycleHookNameHasBeenSet = true; m_lifecycleHookName = value; }

    /**
     * <p>The name of the lifecycle hook.</p>
     */
    inline void SetLifecycleHookName(const char* value) { m_lifecycleHookNameHasBeenSet = true; m_lifecycleHookName.assign(value); }

    /**
     * <p>The name of the lifecycle hook.</p>
     */
    inline RecordLifecycleActionHeartbeatRequest& WithLifecycleHookName(const Aws::String& value) { SetLifecycleHookName(value); return *this;}

    /**
     * <p>The name of the lifecycle hook.</p>
     */
    inline RecordLifecycleActionHeartbeatRequest& WithLifecycleHookName(Aws::String&& value) { SetLifecycleHookName(value); return *this;}

    /**
     * <p>The name of the lifecycle hook.</p>
     */
    inline RecordLifecycleActionHeartbeatRequest& WithLifecycleHookName(const char* value) { SetLifecycleHookName(value); return *this;}

    /**
     * <p>The name of the Auto Scaling group for the hook.</p>
     */
    inline const Aws::String& GetAutoScalingGroupName() const{ return m_autoScalingGroupName; }

    /**
     * <p>The name of the Auto Scaling group for the hook.</p>
     */
    inline void SetAutoScalingGroupName(const Aws::String& value) { m_autoScalingGroupNameHasBeenSet = true; m_autoScalingGroupName = value; }

    /**
     * <p>The name of the Auto Scaling group for the hook.</p>
     */
    inline void SetAutoScalingGroupName(Aws::String&& value) { m_autoScalingGroupNameHasBeenSet = true; m_autoScalingGroupName = value; }

    /**
     * <p>The name of the Auto Scaling group for the hook.</p>
     */
    inline void SetAutoScalingGroupName(const char* value) { m_autoScalingGroupNameHasBeenSet = true; m_autoScalingGroupName.assign(value); }

    /**
     * <p>The name of the Auto Scaling group for the hook.</p>
     */
    inline RecordLifecycleActionHeartbeatRequest& WithAutoScalingGroupName(const Aws::String& value) { SetAutoScalingGroupName(value); return *this;}

    /**
     * <p>The name of the Auto Scaling group for the hook.</p>
     */
    inline RecordLifecycleActionHeartbeatRequest& WithAutoScalingGroupName(Aws::String&& value) { SetAutoScalingGroupName(value); return *this;}

    /**
     * <p>The name of the Auto Scaling group for the hook.</p>
     */
    inline RecordLifecycleActionHeartbeatRequest& WithAutoScalingGroupName(const char* value) { SetAutoScalingGroupName(value); return *this;}

    /**
     * <p>A token that uniquely identifies a specific lifecycle action associated with
     * an instance. Auto Scaling sends this token to the notification target you
     * specified when you created the lifecycle hook.</p>
     */
    inline const Aws::String& GetLifecycleActionToken() const{ return m_lifecycleActionToken; }

    /**
     * <p>A token that uniquely identifies a specific lifecycle action associated with
     * an instance. Auto Scaling sends this token to the notification target you
     * specified when you created the lifecycle hook.</p>
     */
    inline void SetLifecycleActionToken(const Aws::String& value) { m_lifecycleActionTokenHasBeenSet = true; m_lifecycleActionToken = value; }

    /**
     * <p>A token that uniquely identifies a specific lifecycle action associated with
     * an instance. Auto Scaling sends this token to the notification target you
     * specified when you created the lifecycle hook.</p>
     */
    inline void SetLifecycleActionToken(Aws::String&& value) { m_lifecycleActionTokenHasBeenSet = true; m_lifecycleActionToken = value; }

    /**
     * <p>A token that uniquely identifies a specific lifecycle action associated with
     * an instance. Auto Scaling sends this token to the notification target you
     * specified when you created the lifecycle hook.</p>
     */
    inline void SetLifecycleActionToken(const char* value) { m_lifecycleActionTokenHasBeenSet = true; m_lifecycleActionToken.assign(value); }

    /**
     * <p>A token that uniquely identifies a specific lifecycle action associated with
     * an instance. Auto Scaling sends this token to the notification target you
     * specified when you created the lifecycle hook.</p>
     */
    inline RecordLifecycleActionHeartbeatRequest& WithLifecycleActionToken(const Aws::String& value) { SetLifecycleActionToken(value); return *this;}

    /**
     * <p>A token that uniquely identifies a specific lifecycle action associated with
     * an instance. Auto Scaling sends this token to the notification target you
     * specified when you created the lifecycle hook.</p>
     */
    inline RecordLifecycleActionHeartbeatRequest& WithLifecycleActionToken(Aws::String&& value) { SetLifecycleActionToken(value); return *this;}

    /**
     * <p>A token that uniquely identifies a specific lifecycle action associated with
     * an instance. Auto Scaling sends this token to the notification target you
     * specified when you created the lifecycle hook.</p>
     */
    inline RecordLifecycleActionHeartbeatRequest& WithLifecycleActionToken(const char* value) { SetLifecycleActionToken(value); return *this;}

    /**
     * <p>The ID of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The ID of the instance.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The ID of the instance.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The ID of the instance.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>The ID of the instance.</p>
     */
    inline RecordLifecycleActionHeartbeatRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The ID of the instance.</p>
     */
    inline RecordLifecycleActionHeartbeatRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The ID of the instance.</p>
     */
    inline RecordLifecycleActionHeartbeatRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}

  private:
    Aws::String m_lifecycleHookName;
    bool m_lifecycleHookNameHasBeenSet;
    Aws::String m_autoScalingGroupName;
    bool m_autoScalingGroupNameHasBeenSet;
    Aws::String m_lifecycleActionToken;
    bool m_lifecycleActionTokenHasBeenSet;
    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
