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
  class CompleteLifecycleActionRequest : public AutoScalingRequest
  {
  public:
    AWS_AUTOSCALING_API CompleteLifecycleActionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CompleteLifecycleAction"; }

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
    inline CompleteLifecycleActionRequest& WithLifecycleHookName(const Aws::String& value) { SetLifecycleHookName(value); return *this;}
    inline CompleteLifecycleActionRequest& WithLifecycleHookName(Aws::String&& value) { SetLifecycleHookName(std::move(value)); return *this;}
    inline CompleteLifecycleActionRequest& WithLifecycleHookName(const char* value) { SetLifecycleHookName(value); return *this;}
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
    inline CompleteLifecycleActionRequest& WithAutoScalingGroupName(const Aws::String& value) { SetAutoScalingGroupName(value); return *this;}
    inline CompleteLifecycleActionRequest& WithAutoScalingGroupName(Aws::String&& value) { SetAutoScalingGroupName(std::move(value)); return *this;}
    inline CompleteLifecycleActionRequest& WithAutoScalingGroupName(const char* value) { SetAutoScalingGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A universally unique identifier (UUID) that identifies a specific lifecycle
     * action associated with an instance. Amazon EC2 Auto Scaling sends this token to
     * the notification target you specified when you created the lifecycle hook.</p>
     */
    inline const Aws::String& GetLifecycleActionToken() const{ return m_lifecycleActionToken; }
    inline bool LifecycleActionTokenHasBeenSet() const { return m_lifecycleActionTokenHasBeenSet; }
    inline void SetLifecycleActionToken(const Aws::String& value) { m_lifecycleActionTokenHasBeenSet = true; m_lifecycleActionToken = value; }
    inline void SetLifecycleActionToken(Aws::String&& value) { m_lifecycleActionTokenHasBeenSet = true; m_lifecycleActionToken = std::move(value); }
    inline void SetLifecycleActionToken(const char* value) { m_lifecycleActionTokenHasBeenSet = true; m_lifecycleActionToken.assign(value); }
    inline CompleteLifecycleActionRequest& WithLifecycleActionToken(const Aws::String& value) { SetLifecycleActionToken(value); return *this;}
    inline CompleteLifecycleActionRequest& WithLifecycleActionToken(Aws::String&& value) { SetLifecycleActionToken(std::move(value)); return *this;}
    inline CompleteLifecycleActionRequest& WithLifecycleActionToken(const char* value) { SetLifecycleActionToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The action for the group to take. You can specify either
     * <code>CONTINUE</code> or <code>ABANDON</code>.</p>
     */
    inline const Aws::String& GetLifecycleActionResult() const{ return m_lifecycleActionResult; }
    inline bool LifecycleActionResultHasBeenSet() const { return m_lifecycleActionResultHasBeenSet; }
    inline void SetLifecycleActionResult(const Aws::String& value) { m_lifecycleActionResultHasBeenSet = true; m_lifecycleActionResult = value; }
    inline void SetLifecycleActionResult(Aws::String&& value) { m_lifecycleActionResultHasBeenSet = true; m_lifecycleActionResult = std::move(value); }
    inline void SetLifecycleActionResult(const char* value) { m_lifecycleActionResultHasBeenSet = true; m_lifecycleActionResult.assign(value); }
    inline CompleteLifecycleActionRequest& WithLifecycleActionResult(const Aws::String& value) { SetLifecycleActionResult(value); return *this;}
    inline CompleteLifecycleActionRequest& WithLifecycleActionResult(Aws::String&& value) { SetLifecycleActionResult(std::move(value)); return *this;}
    inline CompleteLifecycleActionRequest& WithLifecycleActionResult(const char* value) { SetLifecycleActionResult(value); return *this;}
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
    inline CompleteLifecycleActionRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}
    inline CompleteLifecycleActionRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}
    inline CompleteLifecycleActionRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}
    ///@}
  private:

    Aws::String m_lifecycleHookName;
    bool m_lifecycleHookNameHasBeenSet = false;

    Aws::String m_autoScalingGroupName;
    bool m_autoScalingGroupNameHasBeenSet = false;

    Aws::String m_lifecycleActionToken;
    bool m_lifecycleActionTokenHasBeenSet = false;

    Aws::String m_lifecycleActionResult;
    bool m_lifecycleActionResultHasBeenSet = false;

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
