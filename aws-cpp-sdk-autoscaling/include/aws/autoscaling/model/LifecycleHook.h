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
   * <p>Describes a lifecycle hook, which tells Amazon EC2 Auto Scaling that you want
   * to perform an action whenever it launches instances or whenever it terminates
   * instances. Used in response to <a>DescribeLifecycleHooks</a>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/LifecycleHook">AWS
   * API Reference</a></p>
   */
  class AWS_AUTOSCALING_API LifecycleHook
  {
  public:
    LifecycleHook();
    LifecycleHook(const Aws::Utils::Xml::XmlNode& xmlNode);
    LifecycleHook& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


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
     * <p>The state of the EC2 instance to which to attach the lifecycle hook. The
     * following are possible values:</p> <ul> <li>
     * <p>autoscaling:EC2_INSTANCE_LAUNCHING</p> </li> <li>
     * <p>autoscaling:EC2_INSTANCE_TERMINATING</p> </li> </ul>
     */
    inline const Aws::String& GetLifecycleTransition() const{ return m_lifecycleTransition; }

    /**
     * <p>The state of the EC2 instance to which to attach the lifecycle hook. The
     * following are possible values:</p> <ul> <li>
     * <p>autoscaling:EC2_INSTANCE_LAUNCHING</p> </li> <li>
     * <p>autoscaling:EC2_INSTANCE_TERMINATING</p> </li> </ul>
     */
    inline bool LifecycleTransitionHasBeenSet() const { return m_lifecycleTransitionHasBeenSet; }

    /**
     * <p>The state of the EC2 instance to which to attach the lifecycle hook. The
     * following are possible values:</p> <ul> <li>
     * <p>autoscaling:EC2_INSTANCE_LAUNCHING</p> </li> <li>
     * <p>autoscaling:EC2_INSTANCE_TERMINATING</p> </li> </ul>
     */
    inline void SetLifecycleTransition(const Aws::String& value) { m_lifecycleTransitionHasBeenSet = true; m_lifecycleTransition = value; }

    /**
     * <p>The state of the EC2 instance to which to attach the lifecycle hook. The
     * following are possible values:</p> <ul> <li>
     * <p>autoscaling:EC2_INSTANCE_LAUNCHING</p> </li> <li>
     * <p>autoscaling:EC2_INSTANCE_TERMINATING</p> </li> </ul>
     */
    inline void SetLifecycleTransition(Aws::String&& value) { m_lifecycleTransitionHasBeenSet = true; m_lifecycleTransition = std::move(value); }

    /**
     * <p>The state of the EC2 instance to which to attach the lifecycle hook. The
     * following are possible values:</p> <ul> <li>
     * <p>autoscaling:EC2_INSTANCE_LAUNCHING</p> </li> <li>
     * <p>autoscaling:EC2_INSTANCE_TERMINATING</p> </li> </ul>
     */
    inline void SetLifecycleTransition(const char* value) { m_lifecycleTransitionHasBeenSet = true; m_lifecycleTransition.assign(value); }

    /**
     * <p>The state of the EC2 instance to which to attach the lifecycle hook. The
     * following are possible values:</p> <ul> <li>
     * <p>autoscaling:EC2_INSTANCE_LAUNCHING</p> </li> <li>
     * <p>autoscaling:EC2_INSTANCE_TERMINATING</p> </li> </ul>
     */
    inline LifecycleHook& WithLifecycleTransition(const Aws::String& value) { SetLifecycleTransition(value); return *this;}

    /**
     * <p>The state of the EC2 instance to which to attach the lifecycle hook. The
     * following are possible values:</p> <ul> <li>
     * <p>autoscaling:EC2_INSTANCE_LAUNCHING</p> </li> <li>
     * <p>autoscaling:EC2_INSTANCE_TERMINATING</p> </li> </ul>
     */
    inline LifecycleHook& WithLifecycleTransition(Aws::String&& value) { SetLifecycleTransition(std::move(value)); return *this;}

    /**
     * <p>The state of the EC2 instance to which to attach the lifecycle hook. The
     * following are possible values:</p> <ul> <li>
     * <p>autoscaling:EC2_INSTANCE_LAUNCHING</p> </li> <li>
     * <p>autoscaling:EC2_INSTANCE_TERMINATING</p> </li> </ul>
     */
    inline LifecycleHook& WithLifecycleTransition(const char* value) { SetLifecycleTransition(value); return *this;}


    /**
     * <p>The ARN of the target that Amazon EC2 Auto Scaling sends notifications to
     * when an instance is in the transition state for the lifecycle hook. The
     * notification target can be either an SQS queue or an SNS topic.</p>
     */
    inline const Aws::String& GetNotificationTargetARN() const{ return m_notificationTargetARN; }

    /**
     * <p>The ARN of the target that Amazon EC2 Auto Scaling sends notifications to
     * when an instance is in the transition state for the lifecycle hook. The
     * notification target can be either an SQS queue or an SNS topic.</p>
     */
    inline bool NotificationTargetARNHasBeenSet() const { return m_notificationTargetARNHasBeenSet; }

    /**
     * <p>The ARN of the target that Amazon EC2 Auto Scaling sends notifications to
     * when an instance is in the transition state for the lifecycle hook. The
     * notification target can be either an SQS queue or an SNS topic.</p>
     */
    inline void SetNotificationTargetARN(const Aws::String& value) { m_notificationTargetARNHasBeenSet = true; m_notificationTargetARN = value; }

    /**
     * <p>The ARN of the target that Amazon EC2 Auto Scaling sends notifications to
     * when an instance is in the transition state for the lifecycle hook. The
     * notification target can be either an SQS queue or an SNS topic.</p>
     */
    inline void SetNotificationTargetARN(Aws::String&& value) { m_notificationTargetARNHasBeenSet = true; m_notificationTargetARN = std::move(value); }

    /**
     * <p>The ARN of the target that Amazon EC2 Auto Scaling sends notifications to
     * when an instance is in the transition state for the lifecycle hook. The
     * notification target can be either an SQS queue or an SNS topic.</p>
     */
    inline void SetNotificationTargetARN(const char* value) { m_notificationTargetARNHasBeenSet = true; m_notificationTargetARN.assign(value); }

    /**
     * <p>The ARN of the target that Amazon EC2 Auto Scaling sends notifications to
     * when an instance is in the transition state for the lifecycle hook. The
     * notification target can be either an SQS queue or an SNS topic.</p>
     */
    inline LifecycleHook& WithNotificationTargetARN(const Aws::String& value) { SetNotificationTargetARN(value); return *this;}

    /**
     * <p>The ARN of the target that Amazon EC2 Auto Scaling sends notifications to
     * when an instance is in the transition state for the lifecycle hook. The
     * notification target can be either an SQS queue or an SNS topic.</p>
     */
    inline LifecycleHook& WithNotificationTargetARN(Aws::String&& value) { SetNotificationTargetARN(std::move(value)); return *this;}

    /**
     * <p>The ARN of the target that Amazon EC2 Auto Scaling sends notifications to
     * when an instance is in the transition state for the lifecycle hook. The
     * notification target can be either an SQS queue or an SNS topic.</p>
     */
    inline LifecycleHook& WithNotificationTargetARN(const char* value) { SetNotificationTargetARN(value); return *this;}


    /**
     * <p>The ARN of the IAM role that allows the Auto Scaling group to publish to the
     * specified notification target.</p>
     */
    inline const Aws::String& GetRoleARN() const{ return m_roleARN; }

    /**
     * <p>The ARN of the IAM role that allows the Auto Scaling group to publish to the
     * specified notification target.</p>
     */
    inline bool RoleARNHasBeenSet() const { return m_roleARNHasBeenSet; }

    /**
     * <p>The ARN of the IAM role that allows the Auto Scaling group to publish to the
     * specified notification target.</p>
     */
    inline void SetRoleARN(const Aws::String& value) { m_roleARNHasBeenSet = true; m_roleARN = value; }

    /**
     * <p>The ARN of the IAM role that allows the Auto Scaling group to publish to the
     * specified notification target.</p>
     */
    inline void SetRoleARN(Aws::String&& value) { m_roleARNHasBeenSet = true; m_roleARN = std::move(value); }

    /**
     * <p>The ARN of the IAM role that allows the Auto Scaling group to publish to the
     * specified notification target.</p>
     */
    inline void SetRoleARN(const char* value) { m_roleARNHasBeenSet = true; m_roleARN.assign(value); }

    /**
     * <p>The ARN of the IAM role that allows the Auto Scaling group to publish to the
     * specified notification target.</p>
     */
    inline LifecycleHook& WithRoleARN(const Aws::String& value) { SetRoleARN(value); return *this;}

    /**
     * <p>The ARN of the IAM role that allows the Auto Scaling group to publish to the
     * specified notification target.</p>
     */
    inline LifecycleHook& WithRoleARN(Aws::String&& value) { SetRoleARN(std::move(value)); return *this;}

    /**
     * <p>The ARN of the IAM role that allows the Auto Scaling group to publish to the
     * specified notification target.</p>
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
     * action that you specified in the <code>DefaultResult</code> parameter.</p>
     */
    inline int GetHeartbeatTimeout() const{ return m_heartbeatTimeout; }

    /**
     * <p>The maximum time, in seconds, that can elapse before the lifecycle hook times
     * out. If the lifecycle hook times out, Amazon EC2 Auto Scaling performs the
     * action that you specified in the <code>DefaultResult</code> parameter.</p>
     */
    inline bool HeartbeatTimeoutHasBeenSet() const { return m_heartbeatTimeoutHasBeenSet; }

    /**
     * <p>The maximum time, in seconds, that can elapse before the lifecycle hook times
     * out. If the lifecycle hook times out, Amazon EC2 Auto Scaling performs the
     * action that you specified in the <code>DefaultResult</code> parameter.</p>
     */
    inline void SetHeartbeatTimeout(int value) { m_heartbeatTimeoutHasBeenSet = true; m_heartbeatTimeout = value; }

    /**
     * <p>The maximum time, in seconds, that can elapse before the lifecycle hook times
     * out. If the lifecycle hook times out, Amazon EC2 Auto Scaling performs the
     * action that you specified in the <code>DefaultResult</code> parameter.</p>
     */
    inline LifecycleHook& WithHeartbeatTimeout(int value) { SetHeartbeatTimeout(value); return *this;}


    /**
     * <p>The maximum time, in seconds, that an instance can remain in a
     * <code>Pending:Wait</code> or <code>Terminating:Wait</code> state. The maximum is
     * 172800 seconds (48 hours) or 100 times <code>HeartbeatTimeout</code>, whichever
     * is smaller.</p>
     */
    inline int GetGlobalTimeout() const{ return m_globalTimeout; }

    /**
     * <p>The maximum time, in seconds, that an instance can remain in a
     * <code>Pending:Wait</code> or <code>Terminating:Wait</code> state. The maximum is
     * 172800 seconds (48 hours) or 100 times <code>HeartbeatTimeout</code>, whichever
     * is smaller.</p>
     */
    inline bool GlobalTimeoutHasBeenSet() const { return m_globalTimeoutHasBeenSet; }

    /**
     * <p>The maximum time, in seconds, that an instance can remain in a
     * <code>Pending:Wait</code> or <code>Terminating:Wait</code> state. The maximum is
     * 172800 seconds (48 hours) or 100 times <code>HeartbeatTimeout</code>, whichever
     * is smaller.</p>
     */
    inline void SetGlobalTimeout(int value) { m_globalTimeoutHasBeenSet = true; m_globalTimeout = value; }

    /**
     * <p>The maximum time, in seconds, that an instance can remain in a
     * <code>Pending:Wait</code> or <code>Terminating:Wait</code> state. The maximum is
     * 172800 seconds (48 hours) or 100 times <code>HeartbeatTimeout</code>, whichever
     * is smaller.</p>
     */
    inline LifecycleHook& WithGlobalTimeout(int value) { SetGlobalTimeout(value); return *this;}


    /**
     * <p>Defines the action the Auto Scaling group should take when the lifecycle hook
     * timeout elapses or if an unexpected failure occurs. The possible values are
     * <code>CONTINUE</code> and <code>ABANDON</code>.</p>
     */
    inline const Aws::String& GetDefaultResult() const{ return m_defaultResult; }

    /**
     * <p>Defines the action the Auto Scaling group should take when the lifecycle hook
     * timeout elapses or if an unexpected failure occurs. The possible values are
     * <code>CONTINUE</code> and <code>ABANDON</code>.</p>
     */
    inline bool DefaultResultHasBeenSet() const { return m_defaultResultHasBeenSet; }

    /**
     * <p>Defines the action the Auto Scaling group should take when the lifecycle hook
     * timeout elapses or if an unexpected failure occurs. The possible values are
     * <code>CONTINUE</code> and <code>ABANDON</code>.</p>
     */
    inline void SetDefaultResult(const Aws::String& value) { m_defaultResultHasBeenSet = true; m_defaultResult = value; }

    /**
     * <p>Defines the action the Auto Scaling group should take when the lifecycle hook
     * timeout elapses or if an unexpected failure occurs. The possible values are
     * <code>CONTINUE</code> and <code>ABANDON</code>.</p>
     */
    inline void SetDefaultResult(Aws::String&& value) { m_defaultResultHasBeenSet = true; m_defaultResult = std::move(value); }

    /**
     * <p>Defines the action the Auto Scaling group should take when the lifecycle hook
     * timeout elapses or if an unexpected failure occurs. The possible values are
     * <code>CONTINUE</code> and <code>ABANDON</code>.</p>
     */
    inline void SetDefaultResult(const char* value) { m_defaultResultHasBeenSet = true; m_defaultResult.assign(value); }

    /**
     * <p>Defines the action the Auto Scaling group should take when the lifecycle hook
     * timeout elapses or if an unexpected failure occurs. The possible values are
     * <code>CONTINUE</code> and <code>ABANDON</code>.</p>
     */
    inline LifecycleHook& WithDefaultResult(const Aws::String& value) { SetDefaultResult(value); return *this;}

    /**
     * <p>Defines the action the Auto Scaling group should take when the lifecycle hook
     * timeout elapses or if an unexpected failure occurs. The possible values are
     * <code>CONTINUE</code> and <code>ABANDON</code>.</p>
     */
    inline LifecycleHook& WithDefaultResult(Aws::String&& value) { SetDefaultResult(std::move(value)); return *this;}

    /**
     * <p>Defines the action the Auto Scaling group should take when the lifecycle hook
     * timeout elapses or if an unexpected failure occurs. The possible values are
     * <code>CONTINUE</code> and <code>ABANDON</code>.</p>
     */
    inline LifecycleHook& WithDefaultResult(const char* value) { SetDefaultResult(value); return *this;}

  private:

    Aws::String m_lifecycleHookName;
    bool m_lifecycleHookNameHasBeenSet;

    Aws::String m_autoScalingGroupName;
    bool m_autoScalingGroupNameHasBeenSet;

    Aws::String m_lifecycleTransition;
    bool m_lifecycleTransitionHasBeenSet;

    Aws::String m_notificationTargetARN;
    bool m_notificationTargetARNHasBeenSet;

    Aws::String m_roleARN;
    bool m_roleARNHasBeenSet;

    Aws::String m_notificationMetadata;
    bool m_notificationMetadataHasBeenSet;

    int m_heartbeatTimeout;
    bool m_heartbeatTimeoutHasBeenSet;

    int m_globalTimeout;
    bool m_globalTimeoutHasBeenSet;

    Aws::String m_defaultResult;
    bool m_defaultResultHasBeenSet;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
