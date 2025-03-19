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
    AWS_AUTOSCALING_API RecordLifecycleActionHeartbeatRequest() = default;

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
    inline const Aws::String& GetLifecycleHookName() const { return m_lifecycleHookName; }
    inline bool LifecycleHookNameHasBeenSet() const { return m_lifecycleHookNameHasBeenSet; }
    template<typename LifecycleHookNameT = Aws::String>
    void SetLifecycleHookName(LifecycleHookNameT&& value) { m_lifecycleHookNameHasBeenSet = true; m_lifecycleHookName = std::forward<LifecycleHookNameT>(value); }
    template<typename LifecycleHookNameT = Aws::String>
    RecordLifecycleActionHeartbeatRequest& WithLifecycleHookName(LifecycleHookNameT&& value) { SetLifecycleHookName(std::forward<LifecycleHookNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Auto Scaling group.</p>
     */
    inline const Aws::String& GetAutoScalingGroupName() const { return m_autoScalingGroupName; }
    inline bool AutoScalingGroupNameHasBeenSet() const { return m_autoScalingGroupNameHasBeenSet; }
    template<typename AutoScalingGroupNameT = Aws::String>
    void SetAutoScalingGroupName(AutoScalingGroupNameT&& value) { m_autoScalingGroupNameHasBeenSet = true; m_autoScalingGroupName = std::forward<AutoScalingGroupNameT>(value); }
    template<typename AutoScalingGroupNameT = Aws::String>
    RecordLifecycleActionHeartbeatRequest& WithAutoScalingGroupName(AutoScalingGroupNameT&& value) { SetAutoScalingGroupName(std::forward<AutoScalingGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A token that uniquely identifies a specific lifecycle action associated with
     * an instance. Amazon EC2 Auto Scaling sends this token to the notification target
     * that you specified when you created the lifecycle hook.</p>
     */
    inline const Aws::String& GetLifecycleActionToken() const { return m_lifecycleActionToken; }
    inline bool LifecycleActionTokenHasBeenSet() const { return m_lifecycleActionTokenHasBeenSet; }
    template<typename LifecycleActionTokenT = Aws::String>
    void SetLifecycleActionToken(LifecycleActionTokenT&& value) { m_lifecycleActionTokenHasBeenSet = true; m_lifecycleActionToken = std::forward<LifecycleActionTokenT>(value); }
    template<typename LifecycleActionTokenT = Aws::String>
    RecordLifecycleActionHeartbeatRequest& WithLifecycleActionToken(LifecycleActionTokenT&& value) { SetLifecycleActionToken(std::forward<LifecycleActionTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const { return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    template<typename InstanceIdT = Aws::String>
    void SetInstanceId(InstanceIdT&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::forward<InstanceIdT>(value); }
    template<typename InstanceIdT = Aws::String>
    RecordLifecycleActionHeartbeatRequest& WithInstanceId(InstanceIdT&& value) { SetInstanceId(std::forward<InstanceIdT>(value)); return *this;}
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
