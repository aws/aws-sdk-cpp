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
  class AWS_AUTOSCALING_API RecordLifecycleActionHeartbeatRequest : public AutoScalingRequest
  {
  public:
    RecordLifecycleActionHeartbeatRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RecordLifecycleActionHeartbeat"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The name of the lifecycle hook.</p>
     */
    inline const Aws::String& GetLifecycleHookName() const{ return m_lifecycleHookName; }

    /**
     * <p>The name of the lifecycle hook.</p>
     */
    inline bool LifecycleHookNameHasBeenSet() const { return m_lifecycleHookNameHasBeenSet; }

    /**
     * <p>The name of the lifecycle hook.</p>
     */
    inline void SetLifecycleHookName(const Aws::String& value) { m_lifecycleHookNameHasBeenSet = true; m_lifecycleHookName = value; }

    /**
     * <p>The name of the lifecycle hook.</p>
     */
    inline void SetLifecycleHookName(Aws::String&& value) { m_lifecycleHookNameHasBeenSet = true; m_lifecycleHookName = std::move(value); }

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
    inline RecordLifecycleActionHeartbeatRequest& WithLifecycleHookName(Aws::String&& value) { SetLifecycleHookName(std::move(value)); return *this;}

    /**
     * <p>The name of the lifecycle hook.</p>
     */
    inline RecordLifecycleActionHeartbeatRequest& WithLifecycleHookName(const char* value) { SetLifecycleHookName(value); return *this;}


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
    inline RecordLifecycleActionHeartbeatRequest& WithAutoScalingGroupName(const Aws::String& value) { SetAutoScalingGroupName(value); return *this;}

    /**
     * <p>The name of the Auto Scaling group.</p>
     */
    inline RecordLifecycleActionHeartbeatRequest& WithAutoScalingGroupName(Aws::String&& value) { SetAutoScalingGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the Auto Scaling group.</p>
     */
    inline RecordLifecycleActionHeartbeatRequest& WithAutoScalingGroupName(const char* value) { SetAutoScalingGroupName(value); return *this;}


    /**
     * <p>A token that uniquely identifies a specific lifecycle action associated with
     * an instance. Amazon EC2 Auto Scaling sends this token to the notification target
     * that you specified when you created the lifecycle hook.</p>
     */
    inline const Aws::String& GetLifecycleActionToken() const{ return m_lifecycleActionToken; }

    /**
     * <p>A token that uniquely identifies a specific lifecycle action associated with
     * an instance. Amazon EC2 Auto Scaling sends this token to the notification target
     * that you specified when you created the lifecycle hook.</p>
     */
    inline bool LifecycleActionTokenHasBeenSet() const { return m_lifecycleActionTokenHasBeenSet; }

    /**
     * <p>A token that uniquely identifies a specific lifecycle action associated with
     * an instance. Amazon EC2 Auto Scaling sends this token to the notification target
     * that you specified when you created the lifecycle hook.</p>
     */
    inline void SetLifecycleActionToken(const Aws::String& value) { m_lifecycleActionTokenHasBeenSet = true; m_lifecycleActionToken = value; }

    /**
     * <p>A token that uniquely identifies a specific lifecycle action associated with
     * an instance. Amazon EC2 Auto Scaling sends this token to the notification target
     * that you specified when you created the lifecycle hook.</p>
     */
    inline void SetLifecycleActionToken(Aws::String&& value) { m_lifecycleActionTokenHasBeenSet = true; m_lifecycleActionToken = std::move(value); }

    /**
     * <p>A token that uniquely identifies a specific lifecycle action associated with
     * an instance. Amazon EC2 Auto Scaling sends this token to the notification target
     * that you specified when you created the lifecycle hook.</p>
     */
    inline void SetLifecycleActionToken(const char* value) { m_lifecycleActionTokenHasBeenSet = true; m_lifecycleActionToken.assign(value); }

    /**
     * <p>A token that uniquely identifies a specific lifecycle action associated with
     * an instance. Amazon EC2 Auto Scaling sends this token to the notification target
     * that you specified when you created the lifecycle hook.</p>
     */
    inline RecordLifecycleActionHeartbeatRequest& WithLifecycleActionToken(const Aws::String& value) { SetLifecycleActionToken(value); return *this;}

    /**
     * <p>A token that uniquely identifies a specific lifecycle action associated with
     * an instance. Amazon EC2 Auto Scaling sends this token to the notification target
     * that you specified when you created the lifecycle hook.</p>
     */
    inline RecordLifecycleActionHeartbeatRequest& WithLifecycleActionToken(Aws::String&& value) { SetLifecycleActionToken(std::move(value)); return *this;}

    /**
     * <p>A token that uniquely identifies a specific lifecycle action associated with
     * an instance. Amazon EC2 Auto Scaling sends this token to the notification target
     * that you specified when you created the lifecycle hook.</p>
     */
    inline RecordLifecycleActionHeartbeatRequest& WithLifecycleActionToken(const char* value) { SetLifecycleActionToken(value); return *this;}


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
    inline RecordLifecycleActionHeartbeatRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The ID of the instance.</p>
     */
    inline RecordLifecycleActionHeartbeatRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

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
