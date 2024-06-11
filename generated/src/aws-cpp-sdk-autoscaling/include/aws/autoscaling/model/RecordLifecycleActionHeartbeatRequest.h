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
  class RecordLifecycleActionHeartbeatRequest : public AutoScalingRequest
  {
  public:
    AWS_AUTOSCALING_API RecordLifecycleActionHeartbeatRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RecordLifecycleActionHeartbeat"; }

    AWS_AUTOSCALING_API Aws::String SerializePayload() const override;

  protected:
    AWS_AUTOSCALING_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The name of the lifecycle hook.</p>
     */
    inline const Aws::String& GetLifecycleHookName() const{ return m_lifecycleHookName; }
    inline bool LifecycleHookNameHasBeenSet() const { return m_lifecycleHookNameHasBeenSet; }
    inline void SetLifecycleHookName(const Aws::String& value) { m_lifecycleHookNameHasBeenSet = true; m_lifecycleHookName = value; }
    inline void SetLifecycleHookName(Aws::String&& value) { m_lifecycleHookNameHasBeenSet = true; m_lifecycleHookName = std::move(value); }
    inline void SetLifecycleHookName(const char* value) { m_lifecycleHookNameHasBeenSet = true; m_lifecycleHookName.assign(value); }
    inline RecordLifecycleActionHeartbeatRequest& WithLifecycleHookName(const Aws::String& value) { SetLifecycleHookName(value); return *this;}
    inline RecordLifecycleActionHeartbeatRequest& WithLifecycleHookName(Aws::String&& value) { SetLifecycleHookName(std::move(value)); return *this;}
    inline RecordLifecycleActionHeartbeatRequest& WithLifecycleHookName(const char* value) { SetLifecycleHookName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Auto Scaling group.</p>
     */
    inline const Aws::String& GetAutoScalingGroupName() const{ return m_autoScalingGroupName; }
    inline bool AutoScalingGroupNameHasBeenSet() const { return m_autoScalingGroupNameHasBeenSet; }
    inline void SetAutoScalingGroupName(const Aws::String& value) { m_autoScalingGroupNameHasBeenSet = true; m_autoScalingGroupName = value; }
    inline void SetAutoScalingGroupName(Aws::String&& value) { m_autoScalingGroupNameHasBeenSet = true; m_autoScalingGroupName = std::move(value); }
    inline void SetAutoScalingGroupName(const char* value) { m_autoScalingGroupNameHasBeenSet = true; m_autoScalingGroupName.assign(value); }
    inline RecordLifecycleActionHeartbeatRequest& WithAutoScalingGroupName(const Aws::String& value) { SetAutoScalingGroupName(value); return *this;}
    inline RecordLifecycleActionHeartbeatRequest& WithAutoScalingGroupName(Aws::String&& value) { SetAutoScalingGroupName(std::move(value)); return *this;}
    inline RecordLifecycleActionHeartbeatRequest& WithAutoScalingGroupName(const char* value) { SetAutoScalingGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A token that uniquely identifies a specific lifecycle action associated with
     * an instance. Amazon EC2 Auto Scaling sends this token to the notification target
     * that you specified when you created the lifecycle hook.</p>
     */
    inline const Aws::String& GetLifecycleActionToken() const{ return m_lifecycleActionToken; }
    inline bool LifecycleActionTokenHasBeenSet() const { return m_lifecycleActionTokenHasBeenSet; }
    inline void SetLifecycleActionToken(const Aws::String& value) { m_lifecycleActionTokenHasBeenSet = true; m_lifecycleActionToken = value; }
    inline void SetLifecycleActionToken(Aws::String&& value) { m_lifecycleActionTokenHasBeenSet = true; m_lifecycleActionToken = std::move(value); }
    inline void SetLifecycleActionToken(const char* value) { m_lifecycleActionTokenHasBeenSet = true; m_lifecycleActionToken.assign(value); }
    inline RecordLifecycleActionHeartbeatRequest& WithLifecycleActionToken(const Aws::String& value) { SetLifecycleActionToken(value); return *this;}
    inline RecordLifecycleActionHeartbeatRequest& WithLifecycleActionToken(Aws::String&& value) { SetLifecycleActionToken(std::move(value)); return *this;}
    inline RecordLifecycleActionHeartbeatRequest& WithLifecycleActionToken(const char* value) { SetLifecycleActionToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }
    inline RecordLifecycleActionHeartbeatRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}
    inline RecordLifecycleActionHeartbeatRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}
    inline RecordLifecycleActionHeartbeatRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}
    ///@}
  private:

    Aws::String m_lifecycleHookName;
    bool m_lifecycleHookNameHasBeenSet = false;

    Aws::String m_autoScalingGroupName;
    bool m_autoScalingGroupNameHasBeenSet = false;

    Aws::String m_lifecycleActionToken;
    bool m_lifecycleActionTokenHasBeenSet = false;

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
