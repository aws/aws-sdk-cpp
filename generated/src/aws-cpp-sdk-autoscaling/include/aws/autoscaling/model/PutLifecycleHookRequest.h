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
  class PutLifecycleHookRequest : public AutoScalingRequest
  {
  public:
    AWS_AUTOSCALING_API PutLifecycleHookRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutLifecycleHook"; }

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
    PutLifecycleHookRequest& WithLifecycleHookName(LifecycleHookNameT&& value) { SetLifecycleHookName(std::forward<LifecycleHookNameT>(value)); return *this;}
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
    PutLifecycleHookRequest& WithAutoScalingGroupName(AutoScalingGroupNameT&& value) { SetAutoScalingGroupName(std::forward<AutoScalingGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The lifecycle transition. For Auto Scaling groups, there are two major
     * lifecycle transitions.</p> <ul> <li> <p>To create a lifecycle hook for scale-out
     * events, specify <code>autoscaling:EC2_INSTANCE_LAUNCHING</code>.</p> </li> <li>
     * <p>To create a lifecycle hook for scale-in events, specify
     * <code>autoscaling:EC2_INSTANCE_TERMINATING</code>.</p> </li> </ul> <p>Required
     * for new lifecycle hooks, but optional when updating existing hooks.</p>
     */
    inline const Aws::String& GetLifecycleTransition() const { return m_lifecycleTransition; }
    inline bool LifecycleTransitionHasBeenSet() const { return m_lifecycleTransitionHasBeenSet; }
    template<typename LifecycleTransitionT = Aws::String>
    void SetLifecycleTransition(LifecycleTransitionT&& value) { m_lifecycleTransitionHasBeenSet = true; m_lifecycleTransition = std::forward<LifecycleTransitionT>(value); }
    template<typename LifecycleTransitionT = Aws::String>
    PutLifecycleHookRequest& WithLifecycleTransition(LifecycleTransitionT&& value) { SetLifecycleTransition(std::forward<LifecycleTransitionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the IAM role that allows the Auto Scaling group to publish to the
     * specified notification target.</p> <p>Valid only if the notification target is
     * an Amazon SNS topic or an Amazon SQS queue. Required for new lifecycle hooks,
     * but optional when updating existing hooks.</p>
     */
    inline const Aws::String& GetRoleARN() const { return m_roleARN; }
    inline bool RoleARNHasBeenSet() const { return m_roleARNHasBeenSet; }
    template<typename RoleARNT = Aws::String>
    void SetRoleARN(RoleARNT&& value) { m_roleARNHasBeenSet = true; m_roleARN = std::forward<RoleARNT>(value); }
    template<typename RoleARNT = Aws::String>
    PutLifecycleHookRequest& WithRoleARN(RoleARNT&& value) { SetRoleARN(std::forward<RoleARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the notification target that Amazon EC2
     * Auto Scaling uses to notify you when an instance is in a wait state for the
     * lifecycle hook. You can specify either an Amazon SNS topic or an Amazon SQS
     * queue.</p> <p>If you specify an empty string, this overrides the current
     * ARN.</p> <p>This operation uses the JSON format when sending notifications to an
     * Amazon SQS queue, and an email key-value pair format when sending notifications
     * to an Amazon SNS topic.</p> <p>When you specify a notification target, Amazon
     * EC2 Auto Scaling sends it a test message. Test messages contain the following
     * additional key-value pair: <code>"Event":
     * "autoscaling:TEST_NOTIFICATION"</code>.</p>
     */
    inline const Aws::String& GetNotificationTargetARN() const { return m_notificationTargetARN; }
    inline bool NotificationTargetARNHasBeenSet() const { return m_notificationTargetARNHasBeenSet; }
    template<typename NotificationTargetARNT = Aws::String>
    void SetNotificationTargetARN(NotificationTargetARNT&& value) { m_notificationTargetARNHasBeenSet = true; m_notificationTargetARN = std::forward<NotificationTargetARNT>(value); }
    template<typename NotificationTargetARNT = Aws::String>
    PutLifecycleHookRequest& WithNotificationTargetARN(NotificationTargetARNT&& value) { SetNotificationTargetARN(std::forward<NotificationTargetARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional information that you want to include any time Amazon EC2 Auto
     * Scaling sends a message to the notification target.</p>
     */
    inline const Aws::String& GetNotificationMetadata() const { return m_notificationMetadata; }
    inline bool NotificationMetadataHasBeenSet() const { return m_notificationMetadataHasBeenSet; }
    template<typename NotificationMetadataT = Aws::String>
    void SetNotificationMetadata(NotificationMetadataT&& value) { m_notificationMetadataHasBeenSet = true; m_notificationMetadata = std::forward<NotificationMetadataT>(value); }
    template<typename NotificationMetadataT = Aws::String>
    PutLifecycleHookRequest& WithNotificationMetadata(NotificationMetadataT&& value) { SetNotificationMetadata(std::forward<NotificationMetadataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum time, in seconds, that can elapse before the lifecycle hook times
     * out. The range is from <code>30</code> to <code>7200</code> seconds. The default
     * value is <code>3600</code> seconds (1 hour).</p>
     */
    inline int GetHeartbeatTimeout() const { return m_heartbeatTimeout; }
    inline bool HeartbeatTimeoutHasBeenSet() const { return m_heartbeatTimeoutHasBeenSet; }
    inline void SetHeartbeatTimeout(int value) { m_heartbeatTimeoutHasBeenSet = true; m_heartbeatTimeout = value; }
    inline PutLifecycleHookRequest& WithHeartbeatTimeout(int value) { SetHeartbeatTimeout(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The action the Auto Scaling group takes when the lifecycle hook timeout
     * elapses or if an unexpected failure occurs. The default value is
     * <code>ABANDON</code>.</p> <p>Valid values: <code>CONTINUE</code> |
     * <code>ABANDON</code> </p>
     */
    inline const Aws::String& GetDefaultResult() const { return m_defaultResult; }
    inline bool DefaultResultHasBeenSet() const { return m_defaultResultHasBeenSet; }
    template<typename DefaultResultT = Aws::String>
    void SetDefaultResult(DefaultResultT&& value) { m_defaultResultHasBeenSet = true; m_defaultResult = std::forward<DefaultResultT>(value); }
    template<typename DefaultResultT = Aws::String>
    PutLifecycleHookRequest& WithDefaultResult(DefaultResultT&& value) { SetDefaultResult(std::forward<DefaultResultT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_lifecycleHookName;
    bool m_lifecycleHookNameHasBeenSet = false;

    Aws::String m_autoScalingGroupName;
    bool m_autoScalingGroupNameHasBeenSet = false;

    Aws::String m_lifecycleTransition;
    bool m_lifecycleTransitionHasBeenSet = false;

    Aws::String m_roleARN;
    bool m_roleARNHasBeenSet = false;

    Aws::String m_notificationTargetARN;
    bool m_notificationTargetARNHasBeenSet = false;

    Aws::String m_notificationMetadata;
    bool m_notificationMetadataHasBeenSet = false;

    int m_heartbeatTimeout{0};
    bool m_heartbeatTimeoutHasBeenSet = false;

    Aws::String m_defaultResult;
    bool m_defaultResultHasBeenSet = false;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
