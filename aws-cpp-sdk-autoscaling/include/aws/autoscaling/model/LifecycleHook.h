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
   * <p>Describes a lifecycle hook. A lifecycle hook lets you create solutions that
   * are aware of events in the Auto Scaling instance lifecycle, and then perform a
   * custom action on instances when the corresponding lifecycle event
   * occurs.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/LifecycleHook">AWS
   * API Reference</a></p>
   */
  class LifecycleHook
  {
  public:
    AWS_AUTOSCALING_API LifecycleHook();
    AWS_AUTOSCALING_API LifecycleHook(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_AUTOSCALING_API LifecycleHook& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

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
    inline LifecycleHook& WithLifecycleHookName(const Aws::String& value) { SetLifecycleHookName(value); return *this;}

    /**
     * <p>The name of the lifecycle hook.</p>
     */
    inline LifecycleHook& WithLifecycleHookName(Aws::String&& value) { SetLifecycleHookName(std::move(value)); return *this;}

    /**
     * <p>The name of the lifecycle hook.</p>
     */
    inline LifecycleHook& WithLifecycleHookName(const char* value) { SetLifecycleHookName(value); return *this;}


    /**
     * <p>The name of the Auto Scaling group for the lifecycle hook.</p>
     */
    inline const Aws::String& GetAutoScalingGroupName() const{ return m_autoScalingGroupName; }

    /**
     * <p>The name of the Auto Scaling group for the lifecycle hook.</p>
     */
    inline bool AutoScalingGroupNameHasBeenSet() const { return m_autoScalingGroupNameHasBeenSet; }

    /**
     * <p>The name of the Auto Scaling group for the lifecycle hook.</p>
     */
    inline void SetAutoScalingGroupName(const Aws::String& value) { m_autoScalingGroupNameHasBeenSet = true; m_autoScalingGroupName = value; }

    /**
     * <p>The name of the Auto Scaling group for the lifecycle hook.</p>
     */
    inline void SetAutoScalingGroupName(Aws::String&& value) { m_autoScalingGroupNameHasBeenSet = true; m_autoScalingGroupName = std::move(value); }

    /**
     * <p>The name of the Auto Scaling group for the lifecycle hook.</p>
     */
    inline void SetAutoScalingGroupName(const char* value) { m_autoScalingGroupNameHasBeenSet = true; m_autoScalingGroupName.assign(value); }

    /**
     * <p>The name of the Auto Scaling group for the lifecycle hook.</p>
     */
    inline LifecycleHook& WithAutoScalingGroupName(const Aws::String& value) { SetAutoScalingGroupName(value); return *this;}

    /**
     * <p>The name of the Auto Scaling group for the lifecycle hook.</p>
     */
    inline LifecycleHook& WithAutoScalingGroupName(Aws::String&& value) { SetAutoScalingGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the Auto Scaling group for the lifecycle hook.</p>
     */
    inline LifecycleHook& WithAutoScalingGroupName(const char* value) { SetAutoScalingGroupName(value); return *this;}


    /**
     * <p>The lifecycle transition.</p> <p>Valid values:
     * <code>autoscaling:EC2_INSTANCE_LAUNCHING</code> |
     * <code>autoscaling:EC2_INSTANCE_TERMINATING</code> </p>
     */
    inline const Aws::String& GetLifecycleTransition() const{ return m_lifecycleTransition; }

    /**
     * <p>The lifecycle transition.</p> <p>Valid values:
     * <code>autoscaling:EC2_INSTANCE_LAUNCHING</code> |
     * <code>autoscaling:EC2_INSTANCE_TERMINATING</code> </p>
     */
    inline bool LifecycleTransitionHasBeenSet() const { return m_lifecycleTransitionHasBeenSet; }

    /**
     * <p>The lifecycle transition.</p> <p>Valid values:
     * <code>autoscaling:EC2_INSTANCE_LAUNCHING</code> |
     * <code>autoscaling:EC2_INSTANCE_TERMINATING</code> </p>
     */
    inline void SetLifecycleTransition(const Aws::String& value) { m_lifecycleTransitionHasBeenSet = true; m_lifecycleTransition = value; }

    /**
     * <p>The lifecycle transition.</p> <p>Valid values:
     * <code>autoscaling:EC2_INSTANCE_LAUNCHING</code> |
     * <code>autoscaling:EC2_INSTANCE_TERMINATING</code> </p>
     */
    inline void SetLifecycleTransition(Aws::String&& value) { m_lifecycleTransitionHasBeenSet = true; m_lifecycleTransition = std::move(value); }

    /**
     * <p>The lifecycle transition.</p> <p>Valid values:
     * <code>autoscaling:EC2_INSTANCE_LAUNCHING</code> |
     * <code>autoscaling:EC2_INSTANCE_TERMINATING</code> </p>
     */
    inline void SetLifecycleTransition(const char* value) { m_lifecycleTransitionHasBeenSet = true; m_lifecycleTransition.assign(value); }

    /**
     * <p>The lifecycle transition.</p> <p>Valid values:
     * <code>autoscaling:EC2_INSTANCE_LAUNCHING</code> |
     * <code>autoscaling:EC2_INSTANCE_TERMINATING</code> </p>
     */
    inline LifecycleHook& WithLifecycleTransition(const Aws::String& value) { SetLifecycleTransition(value); return *this;}

    /**
     * <p>The lifecycle transition.</p> <p>Valid values:
     * <code>autoscaling:EC2_INSTANCE_LAUNCHING</code> |
     * <code>autoscaling:EC2_INSTANCE_TERMINATING</code> </p>
     */
    inline LifecycleHook& WithLifecycleTransition(Aws::String&& value) { SetLifecycleTransition(std::move(value)); return *this;}

    /**
     * <p>The lifecycle transition.</p> <p>Valid values:
     * <code>autoscaling:EC2_INSTANCE_LAUNCHING</code> |
     * <code>autoscaling:EC2_INSTANCE_TERMINATING</code> </p>
     */
    inline LifecycleHook& WithLifecycleTransition(const char* value) { SetLifecycleTransition(value); return *this;}


    /**
     * <p>The ARN of the target that Amazon EC2 Auto Scaling sends notifications to
     * when an instance is in a wait state for the lifecycle hook.</p>
     */
    inline const Aws::String& GetNotificationTargetARN() const{ return m_notificationTargetARN; }

    /**
     * <p>The ARN of the target that Amazon EC2 Auto Scaling sends notifications to
     * when an instance is in a wait state for the lifecycle hook.</p>
     */
    inline bool NotificationTargetARNHasBeenSet() const { return m_notificationTargetARNHasBeenSet; }

    /**
     * <p>The ARN of the target that Amazon EC2 Auto Scaling sends notifications to
     * when an instance is in a wait state for the lifecycle hook.</p>
     */
    inline void SetNotificationTargetARN(const Aws::String& value) { m_notificationTargetARNHasBeenSet = true; m_notificationTargetARN = value; }

    /**
     * <p>The ARN of the target that Amazon EC2 Auto Scaling sends notifications to
     * when an instance is in a wait state for the lifecycle hook.</p>
     */
    inline void SetNotificationTargetARN(Aws::String&& value) { m_notificationTargetARNHasBeenSet = true; m_notificationTargetARN = std::move(value); }

    /**
     * <p>The ARN of the target that Amazon EC2 Auto Scaling sends notifications to
     * when an instance is in a wait state for the lifecycle hook.</p>
     */
    inline void SetNotificationTargetARN(const char* value) { m_notificationTargetARNHasBeenSet = true; m_notificationTargetARN.assign(value); }

    /**
     * <p>The ARN of the target that Amazon EC2 Auto Scaling sends notifications to
     * when an instance is in a wait state for the lifecycle hook.</p>
     */
    inline LifecycleHook& WithNotificationTargetARN(const Aws::String& value) { SetNotificationTargetARN(value); return *this;}

    /**
     * <p>The ARN of the target that Amazon EC2 Auto Scaling sends notifications to
     * when an instance is in a wait state for the lifecycle hook.</p>
     */
    inline LifecycleHook& WithNotificationTargetARN(Aws::String&& value) { SetNotificationTargetARN(std::move(value)); return *this;}

    /**
     * <p>The ARN of the target that Amazon EC2 Auto Scaling sends notifications to
     * when an instance is in a wait state for the lifecycle hook.</p>
     */
    inline LifecycleHook& WithNotificationTargetARN(const char* value) { SetNotificationTargetARN(value); return *this;}


    /**
     * <p>The ARN of the IAM role that allows the Auto Scaling group to publish to the
     * specified notification target (an Amazon SNS topic or an Amazon SQS queue).</p>
     */
    inline const Aws::String& GetRoleARN() const{ return m_roleARN; }

    /**
     * <p>The ARN of the IAM role that allows the Auto Scaling group to publish to the
     * specified notification target (an Amazon SNS topic or an Amazon SQS queue).</p>
     */
    inline bool RoleARNHasBeenSet() const { return m_roleARNHasBeenSet; }

    /**
     * <p>The ARN of the IAM role that allows the Auto Scaling group to publish to the
     * specified notification target (an Amazon SNS topic or an Amazon SQS queue).</p>
     */
    inline void SetRoleARN(const Aws::String& value) { m_roleARNHasBeenSet = true; m_roleARN = value; }

    /**
     * <p>The ARN of the IAM role that allows the Auto Scaling group to publish to the
     * specified notification target (an Amazon SNS topic or an Amazon SQS queue).</p>
     */
    inline void SetRoleARN(Aws::String&& value) { m_roleARNHasBeenSet = true; m_roleARN = std::move(value); }

    /**
     * <p>The ARN of the IAM role that allows the Auto Scaling group to publish to the
     * specified notification target (an Amazon SNS topic or an Amazon SQS queue).</p>
     */
    inline void SetRoleARN(const char* value) { m_roleARNHasBeenSet = true; m_roleARN.assign(value); }

    /**
     * <p>The ARN of the IAM role that allows the Auto Scaling group to publish to the
     * specified notification target (an Amazon SNS topic or an Amazon SQS queue).</p>
     */
    inline LifecycleHook& WithRoleARN(const Aws::String& value) { SetRoleARN(value); return *this;}

    /**
     * <p>The ARN of the IAM role that allows the Auto Scaling group to publish to the
     * specified notification target (an Amazon SNS topic or an Amazon SQS queue).</p>
     */
    inline LifecycleHook& WithRoleARN(Aws::String&& value) { SetRoleARN(std::move(value)); return *this;}

    /**
     * <p>The ARN of the IAM role that allows the Auto Scaling group to publish to the
     * specified notification target (an Amazon SNS topic or an Amazon SQS queue).</p>
     */
    inline LifecycleHook& WithRoleARN(const char* value) { SetRoleARN(value); return *this;}


    /**
     * <p>Additional information that is included any time Amazon EC2 Auto Scaling
     * sends a message to the notification target.</p>
     */
    inline const Aws::String& GetNotificationMetadata() const{ return m_notificationMetadata; }

    /**
     * <p>Additional information that is included any time Amazon EC2 Auto Scaling
     * sends a message to the notification target.</p>
     */
    inline bool NotificationMetadataHasBeenSet() const { return m_notificationMetadataHasBeenSet; }

    /**
     * <p>Additional information that is included any time Amazon EC2 Auto Scaling
     * sends a message to the notification target.</p>
     */
    inline void SetNotificationMetadata(const Aws::String& value) { m_notificationMetadataHasBeenSet = true; m_notificationMetadata = value; }

    /**
     * <p>Additional information that is included any time Amazon EC2 Auto Scaling
     * sends a message to the notification target.</p>
     */
    inline void SetNotificationMetadata(Aws::String&& value) { m_notificationMetadataHasBeenSet = true; m_notificationMetadata = std::move(value); }

    /**
     * <p>Additional information that is included any time Amazon EC2 Auto Scaling
     * sends a message to the notification target.</p>
     */
    inline void SetNotificationMetadata(const char* value) { m_notificationMetadataHasBeenSet = true; m_notificationMetadata.assign(value); }

    /**
     * <p>Additional information that is included any time Amazon EC2 Auto Scaling
     * sends a message to the notification target.</p>
     */
    inline LifecycleHook& WithNotificationMetadata(const Aws::String& value) { SetNotificationMetadata(value); return *this;}

    /**
     * <p>Additional information that is included any time Amazon EC2 Auto Scaling
     * sends a message to the notification target.</p>
     */
    inline LifecycleHook& WithNotificationMetadata(Aws::String&& value) { SetNotificationMetadata(std::move(value)); return *this;}

    /**
     * <p>Additional information that is included any time Amazon EC2 Auto Scaling
     * sends a message to the notification target.</p>
     */
    inline LifecycleHook& WithNotificationMetadata(const char* value) { SetNotificationMetadata(value); return *this;}


    /**
     * <p>The maximum time, in seconds, that can elapse before the lifecycle hook times
     * out. If the lifecycle hook times out, Amazon EC2 Auto Scaling performs the
     * action that you specified in the <code>DefaultResult</code> property.</p>
     */
    inline int GetHeartbeatTimeout() const{ return m_heartbeatTimeout; }

    /**
     * <p>The maximum time, in seconds, that can elapse before the lifecycle hook times
     * out. If the lifecycle hook times out, Amazon EC2 Auto Scaling performs the
     * action that you specified in the <code>DefaultResult</code> property.</p>
     */
    inline bool HeartbeatTimeoutHasBeenSet() const { return m_heartbeatTimeoutHasBeenSet; }

    /**
     * <p>The maximum time, in seconds, that can elapse before the lifecycle hook times
     * out. If the lifecycle hook times out, Amazon EC2 Auto Scaling performs the
     * action that you specified in the <code>DefaultResult</code> property.</p>
     */
    inline void SetHeartbeatTimeout(int value) { m_heartbeatTimeoutHasBeenSet = true; m_heartbeatTimeout = value; }

    /**
     * <p>The maximum time, in seconds, that can elapse before the lifecycle hook times
     * out. If the lifecycle hook times out, Amazon EC2 Auto Scaling performs the
     * action that you specified in the <code>DefaultResult</code> property.</p>
     */
    inline LifecycleHook& WithHeartbeatTimeout(int value) { SetHeartbeatTimeout(value); return *this;}


    /**
     * <p>The maximum time, in seconds, that an instance can remain in a wait state.
     * The maximum is 172800 seconds (48 hours) or 100 times
     * <code>HeartbeatTimeout</code>, whichever is smaller.</p>
     */
    inline int GetGlobalTimeout() const{ return m_globalTimeout; }

    /**
     * <p>The maximum time, in seconds, that an instance can remain in a wait state.
     * The maximum is 172800 seconds (48 hours) or 100 times
     * <code>HeartbeatTimeout</code>, whichever is smaller.</p>
     */
    inline bool GlobalTimeoutHasBeenSet() const { return m_globalTimeoutHasBeenSet; }

    /**
     * <p>The maximum time, in seconds, that an instance can remain in a wait state.
     * The maximum is 172800 seconds (48 hours) or 100 times
     * <code>HeartbeatTimeout</code>, whichever is smaller.</p>
     */
    inline void SetGlobalTimeout(int value) { m_globalTimeoutHasBeenSet = true; m_globalTimeout = value; }

    /**
     * <p>The maximum time, in seconds, that an instance can remain in a wait state.
     * The maximum is 172800 seconds (48 hours) or 100 times
     * <code>HeartbeatTimeout</code>, whichever is smaller.</p>
     */
    inline LifecycleHook& WithGlobalTimeout(int value) { SetGlobalTimeout(value); return *this;}


    /**
     * <p>The action the Auto Scaling group takes when the lifecycle hook timeout
     * elapses or if an unexpected failure occurs.</p> <p>Valid values:
     * <code>CONTINUE</code> | <code>ABANDON</code> </p>
     */
    inline const Aws::String& GetDefaultResult() const{ return m_defaultResult; }

    /**
     * <p>The action the Auto Scaling group takes when the lifecycle hook timeout
     * elapses or if an unexpected failure occurs.</p> <p>Valid values:
     * <code>CONTINUE</code> | <code>ABANDON</code> </p>
     */
    inline bool DefaultResultHasBeenSet() const { return m_defaultResultHasBeenSet; }

    /**
     * <p>The action the Auto Scaling group takes when the lifecycle hook timeout
     * elapses or if an unexpected failure occurs.</p> <p>Valid values:
     * <code>CONTINUE</code> | <code>ABANDON</code> </p>
     */
    inline void SetDefaultResult(const Aws::String& value) { m_defaultResultHasBeenSet = true; m_defaultResult = value; }

    /**
     * <p>The action the Auto Scaling group takes when the lifecycle hook timeout
     * elapses or if an unexpected failure occurs.</p> <p>Valid values:
     * <code>CONTINUE</code> | <code>ABANDON</code> </p>
     */
    inline void SetDefaultResult(Aws::String&& value) { m_defaultResultHasBeenSet = true; m_defaultResult = std::move(value); }

    /**
     * <p>The action the Auto Scaling group takes when the lifecycle hook timeout
     * elapses or if an unexpected failure occurs.</p> <p>Valid values:
     * <code>CONTINUE</code> | <code>ABANDON</code> </p>
     */
    inline void SetDefaultResult(const char* value) { m_defaultResultHasBeenSet = true; m_defaultResult.assign(value); }

    /**
     * <p>The action the Auto Scaling group takes when the lifecycle hook timeout
     * elapses or if an unexpected failure occurs.</p> <p>Valid values:
     * <code>CONTINUE</code> | <code>ABANDON</code> </p>
     */
    inline LifecycleHook& WithDefaultResult(const Aws::String& value) { SetDefaultResult(value); return *this;}

    /**
     * <p>The action the Auto Scaling group takes when the lifecycle hook timeout
     * elapses or if an unexpected failure occurs.</p> <p>Valid values:
     * <code>CONTINUE</code> | <code>ABANDON</code> </p>
     */
    inline LifecycleHook& WithDefaultResult(Aws::String&& value) { SetDefaultResult(std::move(value)); return *this;}

    /**
     * <p>The action the Auto Scaling group takes when the lifecycle hook timeout
     * elapses or if an unexpected failure occurs.</p> <p>Valid values:
     * <code>CONTINUE</code> | <code>ABANDON</code> </p>
     */
    inline LifecycleHook& WithDefaultResult(const char* value) { SetDefaultResult(value); return *this;}

  private:

    Aws::String m_lifecycleHookName;
    bool m_lifecycleHookNameHasBeenSet = false;

    Aws::String m_autoScalingGroupName;
    bool m_autoScalingGroupNameHasBeenSet = false;

    Aws::String m_lifecycleTransition;
    bool m_lifecycleTransitionHasBeenSet = false;

    Aws::String m_notificationTargetARN;
    bool m_notificationTargetARNHasBeenSet = false;

    Aws::String m_roleARN;
    bool m_roleARNHasBeenSet = false;

    Aws::String m_notificationMetadata;
    bool m_notificationMetadataHasBeenSet = false;

    int m_heartbeatTimeout;
    bool m_heartbeatTimeoutHasBeenSet = false;

    int m_globalTimeout;
    bool m_globalTimeoutHasBeenSet = false;

    Aws::String m_defaultResult;
    bool m_defaultResultHasBeenSet = false;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
