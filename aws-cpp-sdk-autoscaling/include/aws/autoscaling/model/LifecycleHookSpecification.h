/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace AutoScaling
{
namespace Model
{

  /**
   * <p>Describes information used to specify a lifecycle hook for an Auto Scaling
   * group.</p> <p>For more information, see <a
   * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/lifecycle-hooks.html">Amazon
   * EC2 Auto Scaling lifecycle hooks</a> in the <i>Amazon EC2 Auto Scaling User
   * Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/LifecycleHookSpecification">AWS
   * API Reference</a></p>
   */
  class LifecycleHookSpecification
  {
  public:
    AWS_AUTOSCALING_API LifecycleHookSpecification();
    AWS_AUTOSCALING_API LifecycleHookSpecification(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_AUTOSCALING_API LifecycleHookSpecification& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


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
    inline LifecycleHookSpecification& WithLifecycleHookName(const Aws::String& value) { SetLifecycleHookName(value); return *this;}

    /**
     * <p>The name of the lifecycle hook.</p>
     */
    inline LifecycleHookSpecification& WithLifecycleHookName(Aws::String&& value) { SetLifecycleHookName(std::move(value)); return *this;}

    /**
     * <p>The name of the lifecycle hook.</p>
     */
    inline LifecycleHookSpecification& WithLifecycleHookName(const char* value) { SetLifecycleHookName(value); return *this;}


    /**
     * <p>The lifecycle transition. For Auto Scaling groups, there are two major
     * lifecycle transitions.</p> <ul> <li> <p>To create a lifecycle hook for scale-out
     * events, specify <code>autoscaling:EC2_INSTANCE_LAUNCHING</code>.</p> </li> <li>
     * <p>To create a lifecycle hook for scale-in events, specify
     * <code>autoscaling:EC2_INSTANCE_TERMINATING</code>.</p> </li> </ul>
     */
    inline const Aws::String& GetLifecycleTransition() const{ return m_lifecycleTransition; }

    /**
     * <p>The lifecycle transition. For Auto Scaling groups, there are two major
     * lifecycle transitions.</p> <ul> <li> <p>To create a lifecycle hook for scale-out
     * events, specify <code>autoscaling:EC2_INSTANCE_LAUNCHING</code>.</p> </li> <li>
     * <p>To create a lifecycle hook for scale-in events, specify
     * <code>autoscaling:EC2_INSTANCE_TERMINATING</code>.</p> </li> </ul>
     */
    inline bool LifecycleTransitionHasBeenSet() const { return m_lifecycleTransitionHasBeenSet; }

    /**
     * <p>The lifecycle transition. For Auto Scaling groups, there are two major
     * lifecycle transitions.</p> <ul> <li> <p>To create a lifecycle hook for scale-out
     * events, specify <code>autoscaling:EC2_INSTANCE_LAUNCHING</code>.</p> </li> <li>
     * <p>To create a lifecycle hook for scale-in events, specify
     * <code>autoscaling:EC2_INSTANCE_TERMINATING</code>.</p> </li> </ul>
     */
    inline void SetLifecycleTransition(const Aws::String& value) { m_lifecycleTransitionHasBeenSet = true; m_lifecycleTransition = value; }

    /**
     * <p>The lifecycle transition. For Auto Scaling groups, there are two major
     * lifecycle transitions.</p> <ul> <li> <p>To create a lifecycle hook for scale-out
     * events, specify <code>autoscaling:EC2_INSTANCE_LAUNCHING</code>.</p> </li> <li>
     * <p>To create a lifecycle hook for scale-in events, specify
     * <code>autoscaling:EC2_INSTANCE_TERMINATING</code>.</p> </li> </ul>
     */
    inline void SetLifecycleTransition(Aws::String&& value) { m_lifecycleTransitionHasBeenSet = true; m_lifecycleTransition = std::move(value); }

    /**
     * <p>The lifecycle transition. For Auto Scaling groups, there are two major
     * lifecycle transitions.</p> <ul> <li> <p>To create a lifecycle hook for scale-out
     * events, specify <code>autoscaling:EC2_INSTANCE_LAUNCHING</code>.</p> </li> <li>
     * <p>To create a lifecycle hook for scale-in events, specify
     * <code>autoscaling:EC2_INSTANCE_TERMINATING</code>.</p> </li> </ul>
     */
    inline void SetLifecycleTransition(const char* value) { m_lifecycleTransitionHasBeenSet = true; m_lifecycleTransition.assign(value); }

    /**
     * <p>The lifecycle transition. For Auto Scaling groups, there are two major
     * lifecycle transitions.</p> <ul> <li> <p>To create a lifecycle hook for scale-out
     * events, specify <code>autoscaling:EC2_INSTANCE_LAUNCHING</code>.</p> </li> <li>
     * <p>To create a lifecycle hook for scale-in events, specify
     * <code>autoscaling:EC2_INSTANCE_TERMINATING</code>.</p> </li> </ul>
     */
    inline LifecycleHookSpecification& WithLifecycleTransition(const Aws::String& value) { SetLifecycleTransition(value); return *this;}

    /**
     * <p>The lifecycle transition. For Auto Scaling groups, there are two major
     * lifecycle transitions.</p> <ul> <li> <p>To create a lifecycle hook for scale-out
     * events, specify <code>autoscaling:EC2_INSTANCE_LAUNCHING</code>.</p> </li> <li>
     * <p>To create a lifecycle hook for scale-in events, specify
     * <code>autoscaling:EC2_INSTANCE_TERMINATING</code>.</p> </li> </ul>
     */
    inline LifecycleHookSpecification& WithLifecycleTransition(Aws::String&& value) { SetLifecycleTransition(std::move(value)); return *this;}

    /**
     * <p>The lifecycle transition. For Auto Scaling groups, there are two major
     * lifecycle transitions.</p> <ul> <li> <p>To create a lifecycle hook for scale-out
     * events, specify <code>autoscaling:EC2_INSTANCE_LAUNCHING</code>.</p> </li> <li>
     * <p>To create a lifecycle hook for scale-in events, specify
     * <code>autoscaling:EC2_INSTANCE_TERMINATING</code>.</p> </li> </ul>
     */
    inline LifecycleHookSpecification& WithLifecycleTransition(const char* value) { SetLifecycleTransition(value); return *this;}


    /**
     * <p>Additional information that you want to include any time Amazon EC2 Auto
     * Scaling sends a message to the notification target.</p>
     */
    inline const Aws::String& GetNotificationMetadata() const{ return m_notificationMetadata; }

    /**
     * <p>Additional information that you want to include any time Amazon EC2 Auto
     * Scaling sends a message to the notification target.</p>
     */
    inline bool NotificationMetadataHasBeenSet() const { return m_notificationMetadataHasBeenSet; }

    /**
     * <p>Additional information that you want to include any time Amazon EC2 Auto
     * Scaling sends a message to the notification target.</p>
     */
    inline void SetNotificationMetadata(const Aws::String& value) { m_notificationMetadataHasBeenSet = true; m_notificationMetadata = value; }

    /**
     * <p>Additional information that you want to include any time Amazon EC2 Auto
     * Scaling sends a message to the notification target.</p>
     */
    inline void SetNotificationMetadata(Aws::String&& value) { m_notificationMetadataHasBeenSet = true; m_notificationMetadata = std::move(value); }

    /**
     * <p>Additional information that you want to include any time Amazon EC2 Auto
     * Scaling sends a message to the notification target.</p>
     */
    inline void SetNotificationMetadata(const char* value) { m_notificationMetadataHasBeenSet = true; m_notificationMetadata.assign(value); }

    /**
     * <p>Additional information that you want to include any time Amazon EC2 Auto
     * Scaling sends a message to the notification target.</p>
     */
    inline LifecycleHookSpecification& WithNotificationMetadata(const Aws::String& value) { SetNotificationMetadata(value); return *this;}

    /**
     * <p>Additional information that you want to include any time Amazon EC2 Auto
     * Scaling sends a message to the notification target.</p>
     */
    inline LifecycleHookSpecification& WithNotificationMetadata(Aws::String&& value) { SetNotificationMetadata(std::move(value)); return *this;}

    /**
     * <p>Additional information that you want to include any time Amazon EC2 Auto
     * Scaling sends a message to the notification target.</p>
     */
    inline LifecycleHookSpecification& WithNotificationMetadata(const char* value) { SetNotificationMetadata(value); return *this;}


    /**
     * <p>The maximum time, in seconds, that can elapse before the lifecycle hook times
     * out. The range is from <code>30</code> to <code>7200</code> seconds. The default
     * value is <code>3600</code> seconds (1 hour).</p>
     */
    inline int GetHeartbeatTimeout() const{ return m_heartbeatTimeout; }

    /**
     * <p>The maximum time, in seconds, that can elapse before the lifecycle hook times
     * out. The range is from <code>30</code> to <code>7200</code> seconds. The default
     * value is <code>3600</code> seconds (1 hour).</p>
     */
    inline bool HeartbeatTimeoutHasBeenSet() const { return m_heartbeatTimeoutHasBeenSet; }

    /**
     * <p>The maximum time, in seconds, that can elapse before the lifecycle hook times
     * out. The range is from <code>30</code> to <code>7200</code> seconds. The default
     * value is <code>3600</code> seconds (1 hour).</p>
     */
    inline void SetHeartbeatTimeout(int value) { m_heartbeatTimeoutHasBeenSet = true; m_heartbeatTimeout = value; }

    /**
     * <p>The maximum time, in seconds, that can elapse before the lifecycle hook times
     * out. The range is from <code>30</code> to <code>7200</code> seconds. The default
     * value is <code>3600</code> seconds (1 hour).</p>
     */
    inline LifecycleHookSpecification& WithHeartbeatTimeout(int value) { SetHeartbeatTimeout(value); return *this;}


    /**
     * <p>The action the Auto Scaling group takes when the lifecycle hook timeout
     * elapses or if an unexpected failure occurs. The default value is
     * <code>ABANDON</code>.</p> <p>Valid values: <code>CONTINUE</code> |
     * <code>ABANDON</code> </p>
     */
    inline const Aws::String& GetDefaultResult() const{ return m_defaultResult; }

    /**
     * <p>The action the Auto Scaling group takes when the lifecycle hook timeout
     * elapses or if an unexpected failure occurs. The default value is
     * <code>ABANDON</code>.</p> <p>Valid values: <code>CONTINUE</code> |
     * <code>ABANDON</code> </p>
     */
    inline bool DefaultResultHasBeenSet() const { return m_defaultResultHasBeenSet; }

    /**
     * <p>The action the Auto Scaling group takes when the lifecycle hook timeout
     * elapses or if an unexpected failure occurs. The default value is
     * <code>ABANDON</code>.</p> <p>Valid values: <code>CONTINUE</code> |
     * <code>ABANDON</code> </p>
     */
    inline void SetDefaultResult(const Aws::String& value) { m_defaultResultHasBeenSet = true; m_defaultResult = value; }

    /**
     * <p>The action the Auto Scaling group takes when the lifecycle hook timeout
     * elapses or if an unexpected failure occurs. The default value is
     * <code>ABANDON</code>.</p> <p>Valid values: <code>CONTINUE</code> |
     * <code>ABANDON</code> </p>
     */
    inline void SetDefaultResult(Aws::String&& value) { m_defaultResultHasBeenSet = true; m_defaultResult = std::move(value); }

    /**
     * <p>The action the Auto Scaling group takes when the lifecycle hook timeout
     * elapses or if an unexpected failure occurs. The default value is
     * <code>ABANDON</code>.</p> <p>Valid values: <code>CONTINUE</code> |
     * <code>ABANDON</code> </p>
     */
    inline void SetDefaultResult(const char* value) { m_defaultResultHasBeenSet = true; m_defaultResult.assign(value); }

    /**
     * <p>The action the Auto Scaling group takes when the lifecycle hook timeout
     * elapses or if an unexpected failure occurs. The default value is
     * <code>ABANDON</code>.</p> <p>Valid values: <code>CONTINUE</code> |
     * <code>ABANDON</code> </p>
     */
    inline LifecycleHookSpecification& WithDefaultResult(const Aws::String& value) { SetDefaultResult(value); return *this;}

    /**
     * <p>The action the Auto Scaling group takes when the lifecycle hook timeout
     * elapses or if an unexpected failure occurs. The default value is
     * <code>ABANDON</code>.</p> <p>Valid values: <code>CONTINUE</code> |
     * <code>ABANDON</code> </p>
     */
    inline LifecycleHookSpecification& WithDefaultResult(Aws::String&& value) { SetDefaultResult(std::move(value)); return *this;}

    /**
     * <p>The action the Auto Scaling group takes when the lifecycle hook timeout
     * elapses or if an unexpected failure occurs. The default value is
     * <code>ABANDON</code>.</p> <p>Valid values: <code>CONTINUE</code> |
     * <code>ABANDON</code> </p>
     */
    inline LifecycleHookSpecification& WithDefaultResult(const char* value) { SetDefaultResult(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the notification target that Amazon EC2
     * Auto Scaling sends notifications to when an instance is in a wait state for the
     * lifecycle hook. You can specify an Amazon SNS topic or an Amazon SQS queue.</p>
     */
    inline const Aws::String& GetNotificationTargetARN() const{ return m_notificationTargetARN; }

    /**
     * <p>The Amazon Resource Name (ARN) of the notification target that Amazon EC2
     * Auto Scaling sends notifications to when an instance is in a wait state for the
     * lifecycle hook. You can specify an Amazon SNS topic or an Amazon SQS queue.</p>
     */
    inline bool NotificationTargetARNHasBeenSet() const { return m_notificationTargetARNHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the notification target that Amazon EC2
     * Auto Scaling sends notifications to when an instance is in a wait state for the
     * lifecycle hook. You can specify an Amazon SNS topic or an Amazon SQS queue.</p>
     */
    inline void SetNotificationTargetARN(const Aws::String& value) { m_notificationTargetARNHasBeenSet = true; m_notificationTargetARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the notification target that Amazon EC2
     * Auto Scaling sends notifications to when an instance is in a wait state for the
     * lifecycle hook. You can specify an Amazon SNS topic or an Amazon SQS queue.</p>
     */
    inline void SetNotificationTargetARN(Aws::String&& value) { m_notificationTargetARNHasBeenSet = true; m_notificationTargetARN = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the notification target that Amazon EC2
     * Auto Scaling sends notifications to when an instance is in a wait state for the
     * lifecycle hook. You can specify an Amazon SNS topic or an Amazon SQS queue.</p>
     */
    inline void SetNotificationTargetARN(const char* value) { m_notificationTargetARNHasBeenSet = true; m_notificationTargetARN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the notification target that Amazon EC2
     * Auto Scaling sends notifications to when an instance is in a wait state for the
     * lifecycle hook. You can specify an Amazon SNS topic or an Amazon SQS queue.</p>
     */
    inline LifecycleHookSpecification& WithNotificationTargetARN(const Aws::String& value) { SetNotificationTargetARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the notification target that Amazon EC2
     * Auto Scaling sends notifications to when an instance is in a wait state for the
     * lifecycle hook. You can specify an Amazon SNS topic or an Amazon SQS queue.</p>
     */
    inline LifecycleHookSpecification& WithNotificationTargetARN(Aws::String&& value) { SetNotificationTargetARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the notification target that Amazon EC2
     * Auto Scaling sends notifications to when an instance is in a wait state for the
     * lifecycle hook. You can specify an Amazon SNS topic or an Amazon SQS queue.</p>
     */
    inline LifecycleHookSpecification& WithNotificationTargetARN(const char* value) { SetNotificationTargetARN(value); return *this;}


    /**
     * <p>The ARN of the IAM role that allows the Auto Scaling group to publish to the
     * specified notification target. For information about creating this role, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/prepare-for-lifecycle-notifications.html#lifecycle-hook-notification-target">Configure
     * a notification target for a lifecycle hook</a> in the <i>Amazon EC2 Auto Scaling
     * User Guide</i>.</p> <p>Valid only if the notification target is an Amazon SNS
     * topic or an Amazon SQS queue.</p>
     */
    inline const Aws::String& GetRoleARN() const{ return m_roleARN; }

    /**
     * <p>The ARN of the IAM role that allows the Auto Scaling group to publish to the
     * specified notification target. For information about creating this role, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/prepare-for-lifecycle-notifications.html#lifecycle-hook-notification-target">Configure
     * a notification target for a lifecycle hook</a> in the <i>Amazon EC2 Auto Scaling
     * User Guide</i>.</p> <p>Valid only if the notification target is an Amazon SNS
     * topic or an Amazon SQS queue.</p>
     */
    inline bool RoleARNHasBeenSet() const { return m_roleARNHasBeenSet; }

    /**
     * <p>The ARN of the IAM role that allows the Auto Scaling group to publish to the
     * specified notification target. For information about creating this role, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/prepare-for-lifecycle-notifications.html#lifecycle-hook-notification-target">Configure
     * a notification target for a lifecycle hook</a> in the <i>Amazon EC2 Auto Scaling
     * User Guide</i>.</p> <p>Valid only if the notification target is an Amazon SNS
     * topic or an Amazon SQS queue.</p>
     */
    inline void SetRoleARN(const Aws::String& value) { m_roleARNHasBeenSet = true; m_roleARN = value; }

    /**
     * <p>The ARN of the IAM role that allows the Auto Scaling group to publish to the
     * specified notification target. For information about creating this role, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/prepare-for-lifecycle-notifications.html#lifecycle-hook-notification-target">Configure
     * a notification target for a lifecycle hook</a> in the <i>Amazon EC2 Auto Scaling
     * User Guide</i>.</p> <p>Valid only if the notification target is an Amazon SNS
     * topic or an Amazon SQS queue.</p>
     */
    inline void SetRoleARN(Aws::String&& value) { m_roleARNHasBeenSet = true; m_roleARN = std::move(value); }

    /**
     * <p>The ARN of the IAM role that allows the Auto Scaling group to publish to the
     * specified notification target. For information about creating this role, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/prepare-for-lifecycle-notifications.html#lifecycle-hook-notification-target">Configure
     * a notification target for a lifecycle hook</a> in the <i>Amazon EC2 Auto Scaling
     * User Guide</i>.</p> <p>Valid only if the notification target is an Amazon SNS
     * topic or an Amazon SQS queue.</p>
     */
    inline void SetRoleARN(const char* value) { m_roleARNHasBeenSet = true; m_roleARN.assign(value); }

    /**
     * <p>The ARN of the IAM role that allows the Auto Scaling group to publish to the
     * specified notification target. For information about creating this role, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/prepare-for-lifecycle-notifications.html#lifecycle-hook-notification-target">Configure
     * a notification target for a lifecycle hook</a> in the <i>Amazon EC2 Auto Scaling
     * User Guide</i>.</p> <p>Valid only if the notification target is an Amazon SNS
     * topic or an Amazon SQS queue.</p>
     */
    inline LifecycleHookSpecification& WithRoleARN(const Aws::String& value) { SetRoleARN(value); return *this;}

    /**
     * <p>The ARN of the IAM role that allows the Auto Scaling group to publish to the
     * specified notification target. For information about creating this role, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/prepare-for-lifecycle-notifications.html#lifecycle-hook-notification-target">Configure
     * a notification target for a lifecycle hook</a> in the <i>Amazon EC2 Auto Scaling
     * User Guide</i>.</p> <p>Valid only if the notification target is an Amazon SNS
     * topic or an Amazon SQS queue.</p>
     */
    inline LifecycleHookSpecification& WithRoleARN(Aws::String&& value) { SetRoleARN(std::move(value)); return *this;}

    /**
     * <p>The ARN of the IAM role that allows the Auto Scaling group to publish to the
     * specified notification target. For information about creating this role, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/prepare-for-lifecycle-notifications.html#lifecycle-hook-notification-target">Configure
     * a notification target for a lifecycle hook</a> in the <i>Amazon EC2 Auto Scaling
     * User Guide</i>.</p> <p>Valid only if the notification target is an Amazon SNS
     * topic or an Amazon SQS queue.</p>
     */
    inline LifecycleHookSpecification& WithRoleARN(const char* value) { SetRoleARN(value); return *this;}

  private:

    Aws::String m_lifecycleHookName;
    bool m_lifecycleHookNameHasBeenSet = false;

    Aws::String m_lifecycleTransition;
    bool m_lifecycleTransitionHasBeenSet = false;

    Aws::String m_notificationMetadata;
    bool m_notificationMetadataHasBeenSet = false;

    int m_heartbeatTimeout;
    bool m_heartbeatTimeoutHasBeenSet = false;

    Aws::String m_defaultResult;
    bool m_defaultResultHasBeenSet = false;

    Aws::String m_notificationTargetARN;
    bool m_notificationTargetARNHasBeenSet = false;

    Aws::String m_roleARN;
    bool m_roleARNHasBeenSet = false;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
