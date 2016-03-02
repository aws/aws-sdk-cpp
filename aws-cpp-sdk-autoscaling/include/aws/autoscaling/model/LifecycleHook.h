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
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
   * <p>Describes a lifecycle hook, which tells Auto Scaling that you want to perform
   * an action when an instance launches or terminates. When you have a lifecycle
   * hook in place, the Auto Scaling group will either:</p> <ul> <li>Pause the
   * instance after it launches, but before it is put into service</li> <li>Pause the
   * instance as it terminates, but before it is fully terminated</li> </ul> <p>For
   * more information, see <a
   * href="http://docs.aws.amazon.com/AutoScaling/latest/DeveloperGuide/AutoScalingGroupLifecycle.html">Auto
   * Scaling Lifecycle</a> in the <i>Auto Scaling Developer Guide</i>.</p>
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
    inline LifecycleHook& WithLifecycleHookName(const Aws::String& value) { SetLifecycleHookName(value); return *this;}

    /**
     * <p>The name of the lifecycle hook.</p>
     */
    inline LifecycleHook& WithLifecycleHookName(Aws::String&& value) { SetLifecycleHookName(value); return *this;}

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
    inline void SetAutoScalingGroupName(const Aws::String& value) { m_autoScalingGroupNameHasBeenSet = true; m_autoScalingGroupName = value; }

    /**
     * <p>The name of the Auto Scaling group for the lifecycle hook.</p>
     */
    inline void SetAutoScalingGroupName(Aws::String&& value) { m_autoScalingGroupNameHasBeenSet = true; m_autoScalingGroupName = value; }

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
    inline LifecycleHook& WithAutoScalingGroupName(Aws::String&& value) { SetAutoScalingGroupName(value); return *this;}

    /**
     * <p>The name of the Auto Scaling group for the lifecycle hook.</p>
     */
    inline LifecycleHook& WithAutoScalingGroupName(const char* value) { SetAutoScalingGroupName(value); return *this;}

    /**
     * <p>The state of the EC2 instance to which you want to attach the lifecycle hook.
     * For a list of lifecycle hook types, see <a>DescribeLifecycleHookTypes</a>.</p>
     */
    inline const Aws::String& GetLifecycleTransition() const{ return m_lifecycleTransition; }

    /**
     * <p>The state of the EC2 instance to which you want to attach the lifecycle hook.
     * For a list of lifecycle hook types, see <a>DescribeLifecycleHookTypes</a>.</p>
     */
    inline void SetLifecycleTransition(const Aws::String& value) { m_lifecycleTransitionHasBeenSet = true; m_lifecycleTransition = value; }

    /**
     * <p>The state of the EC2 instance to which you want to attach the lifecycle hook.
     * For a list of lifecycle hook types, see <a>DescribeLifecycleHookTypes</a>.</p>
     */
    inline void SetLifecycleTransition(Aws::String&& value) { m_lifecycleTransitionHasBeenSet = true; m_lifecycleTransition = value; }

    /**
     * <p>The state of the EC2 instance to which you want to attach the lifecycle hook.
     * For a list of lifecycle hook types, see <a>DescribeLifecycleHookTypes</a>.</p>
     */
    inline void SetLifecycleTransition(const char* value) { m_lifecycleTransitionHasBeenSet = true; m_lifecycleTransition.assign(value); }

    /**
     * <p>The state of the EC2 instance to which you want to attach the lifecycle hook.
     * For a list of lifecycle hook types, see <a>DescribeLifecycleHookTypes</a>.</p>
     */
    inline LifecycleHook& WithLifecycleTransition(const Aws::String& value) { SetLifecycleTransition(value); return *this;}

    /**
     * <p>The state of the EC2 instance to which you want to attach the lifecycle hook.
     * For a list of lifecycle hook types, see <a>DescribeLifecycleHookTypes</a>.</p>
     */
    inline LifecycleHook& WithLifecycleTransition(Aws::String&& value) { SetLifecycleTransition(value); return *this;}

    /**
     * <p>The state of the EC2 instance to which you want to attach the lifecycle hook.
     * For a list of lifecycle hook types, see <a>DescribeLifecycleHookTypes</a>.</p>
     */
    inline LifecycleHook& WithLifecycleTransition(const char* value) { SetLifecycleTransition(value); return *this;}

    /**
     * <p>The ARN of the notification target that Auto Scaling uses to notify you when
     * an instance is in the transition state for the lifecycle hook. This ARN target
     * can be either an SQS queue or an SNS topic. The notification message sent to the
     * target includes the following:</p> <ul> <li>Lifecycle action token</li> <li>User
     * account ID</li> <li>Name of the Auto Scaling group</li> <li>Lifecycle hook
     * name</li> <li>EC2 instance ID</li> <li>Lifecycle transition</li>
     * <li>Notification metadata</li> </ul>
     */
    inline const Aws::String& GetNotificationTargetARN() const{ return m_notificationTargetARN; }

    /**
     * <p>The ARN of the notification target that Auto Scaling uses to notify you when
     * an instance is in the transition state for the lifecycle hook. This ARN target
     * can be either an SQS queue or an SNS topic. The notification message sent to the
     * target includes the following:</p> <ul> <li>Lifecycle action token</li> <li>User
     * account ID</li> <li>Name of the Auto Scaling group</li> <li>Lifecycle hook
     * name</li> <li>EC2 instance ID</li> <li>Lifecycle transition</li>
     * <li>Notification metadata</li> </ul>
     */
    inline void SetNotificationTargetARN(const Aws::String& value) { m_notificationTargetARNHasBeenSet = true; m_notificationTargetARN = value; }

    /**
     * <p>The ARN of the notification target that Auto Scaling uses to notify you when
     * an instance is in the transition state for the lifecycle hook. This ARN target
     * can be either an SQS queue or an SNS topic. The notification message sent to the
     * target includes the following:</p> <ul> <li>Lifecycle action token</li> <li>User
     * account ID</li> <li>Name of the Auto Scaling group</li> <li>Lifecycle hook
     * name</li> <li>EC2 instance ID</li> <li>Lifecycle transition</li>
     * <li>Notification metadata</li> </ul>
     */
    inline void SetNotificationTargetARN(Aws::String&& value) { m_notificationTargetARNHasBeenSet = true; m_notificationTargetARN = value; }

    /**
     * <p>The ARN of the notification target that Auto Scaling uses to notify you when
     * an instance is in the transition state for the lifecycle hook. This ARN target
     * can be either an SQS queue or an SNS topic. The notification message sent to the
     * target includes the following:</p> <ul> <li>Lifecycle action token</li> <li>User
     * account ID</li> <li>Name of the Auto Scaling group</li> <li>Lifecycle hook
     * name</li> <li>EC2 instance ID</li> <li>Lifecycle transition</li>
     * <li>Notification metadata</li> </ul>
     */
    inline void SetNotificationTargetARN(const char* value) { m_notificationTargetARNHasBeenSet = true; m_notificationTargetARN.assign(value); }

    /**
     * <p>The ARN of the notification target that Auto Scaling uses to notify you when
     * an instance is in the transition state for the lifecycle hook. This ARN target
     * can be either an SQS queue or an SNS topic. The notification message sent to the
     * target includes the following:</p> <ul> <li>Lifecycle action token</li> <li>User
     * account ID</li> <li>Name of the Auto Scaling group</li> <li>Lifecycle hook
     * name</li> <li>EC2 instance ID</li> <li>Lifecycle transition</li>
     * <li>Notification metadata</li> </ul>
     */
    inline LifecycleHook& WithNotificationTargetARN(const Aws::String& value) { SetNotificationTargetARN(value); return *this;}

    /**
     * <p>The ARN of the notification target that Auto Scaling uses to notify you when
     * an instance is in the transition state for the lifecycle hook. This ARN target
     * can be either an SQS queue or an SNS topic. The notification message sent to the
     * target includes the following:</p> <ul> <li>Lifecycle action token</li> <li>User
     * account ID</li> <li>Name of the Auto Scaling group</li> <li>Lifecycle hook
     * name</li> <li>EC2 instance ID</li> <li>Lifecycle transition</li>
     * <li>Notification metadata</li> </ul>
     */
    inline LifecycleHook& WithNotificationTargetARN(Aws::String&& value) { SetNotificationTargetARN(value); return *this;}

    /**
     * <p>The ARN of the notification target that Auto Scaling uses to notify you when
     * an instance is in the transition state for the lifecycle hook. This ARN target
     * can be either an SQS queue or an SNS topic. The notification message sent to the
     * target includes the following:</p> <ul> <li>Lifecycle action token</li> <li>User
     * account ID</li> <li>Name of the Auto Scaling group</li> <li>Lifecycle hook
     * name</li> <li>EC2 instance ID</li> <li>Lifecycle transition</li>
     * <li>Notification metadata</li> </ul>
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
    inline void SetRoleARN(const Aws::String& value) { m_roleARNHasBeenSet = true; m_roleARN = value; }

    /**
     * <p>The ARN of the IAM role that allows the Auto Scaling group to publish to the
     * specified notification target.</p>
     */
    inline void SetRoleARN(Aws::String&& value) { m_roleARNHasBeenSet = true; m_roleARN = value; }

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
    inline LifecycleHook& WithRoleARN(Aws::String&& value) { SetRoleARN(value); return *this;}

    /**
     * <p>The ARN of the IAM role that allows the Auto Scaling group to publish to the
     * specified notification target.</p>
     */
    inline LifecycleHook& WithRoleARN(const char* value) { SetRoleARN(value); return *this;}

    /**
     * <p>Additional information that you want to include any time Auto Scaling sends a
     * message to the notification target.</p>
     */
    inline const Aws::String& GetNotificationMetadata() const{ return m_notificationMetadata; }

    /**
     * <p>Additional information that you want to include any time Auto Scaling sends a
     * message to the notification target.</p>
     */
    inline void SetNotificationMetadata(const Aws::String& value) { m_notificationMetadataHasBeenSet = true; m_notificationMetadata = value; }

    /**
     * <p>Additional information that you want to include any time Auto Scaling sends a
     * message to the notification target.</p>
     */
    inline void SetNotificationMetadata(Aws::String&& value) { m_notificationMetadataHasBeenSet = true; m_notificationMetadata = value; }

    /**
     * <p>Additional information that you want to include any time Auto Scaling sends a
     * message to the notification target.</p>
     */
    inline void SetNotificationMetadata(const char* value) { m_notificationMetadataHasBeenSet = true; m_notificationMetadata.assign(value); }

    /**
     * <p>Additional information that you want to include any time Auto Scaling sends a
     * message to the notification target.</p>
     */
    inline LifecycleHook& WithNotificationMetadata(const Aws::String& value) { SetNotificationMetadata(value); return *this;}

    /**
     * <p>Additional information that you want to include any time Auto Scaling sends a
     * message to the notification target.</p>
     */
    inline LifecycleHook& WithNotificationMetadata(Aws::String&& value) { SetNotificationMetadata(value); return *this;}

    /**
     * <p>Additional information that you want to include any time Auto Scaling sends a
     * message to the notification target.</p>
     */
    inline LifecycleHook& WithNotificationMetadata(const char* value) { SetNotificationMetadata(value); return *this;}

    /**
     * <p>The maximum time, in seconds, that can elapse before the lifecycle hook times
     * out. The default is 3600 seconds (1 hour). When the lifecycle hook times out,
     * Auto Scaling performs the default action. You can prevent the lifecycle hook
     * from timing out by calling <a>RecordLifecycleActionHeartbeat</a>.</p>
     */
    inline long GetHeartbeatTimeout() const{ return m_heartbeatTimeout; }

    /**
     * <p>The maximum time, in seconds, that can elapse before the lifecycle hook times
     * out. The default is 3600 seconds (1 hour). When the lifecycle hook times out,
     * Auto Scaling performs the default action. You can prevent the lifecycle hook
     * from timing out by calling <a>RecordLifecycleActionHeartbeat</a>.</p>
     */
    inline void SetHeartbeatTimeout(long value) { m_heartbeatTimeoutHasBeenSet = true; m_heartbeatTimeout = value; }

    /**
     * <p>The maximum time, in seconds, that can elapse before the lifecycle hook times
     * out. The default is 3600 seconds (1 hour). When the lifecycle hook times out,
     * Auto Scaling performs the default action. You can prevent the lifecycle hook
     * from timing out by calling <a>RecordLifecycleActionHeartbeat</a>.</p>
     */
    inline LifecycleHook& WithHeartbeatTimeout(long value) { SetHeartbeatTimeout(value); return *this;}

    /**
     * <p>The maximum time, in seconds, that an instance can remain in a
     * <code>Pending:Wait</code> or <code>Terminating:Wait</code> state. The default is
     * 172800 seconds (48 hours).</p>
     */
    inline long GetGlobalTimeout() const{ return m_globalTimeout; }

    /**
     * <p>The maximum time, in seconds, that an instance can remain in a
     * <code>Pending:Wait</code> or <code>Terminating:Wait</code> state. The default is
     * 172800 seconds (48 hours).</p>
     */
    inline void SetGlobalTimeout(long value) { m_globalTimeoutHasBeenSet = true; m_globalTimeout = value; }

    /**
     * <p>The maximum time, in seconds, that an instance can remain in a
     * <code>Pending:Wait</code> or <code>Terminating:Wait</code> state. The default is
     * 172800 seconds (48 hours).</p>
     */
    inline LifecycleHook& WithGlobalTimeout(long value) { SetGlobalTimeout(value); return *this;}

    /**
     * <p>Defines the action the Auto Scaling group should take when the lifecycle hook
     * timeout elapses or if an unexpected failure occurs. The valid values are
     * <code>CONTINUE</code> and <code>ABANDON</code>. The default value is
     * <code>CONTINUE</code>.</p>
     */
    inline const Aws::String& GetDefaultResult() const{ return m_defaultResult; }

    /**
     * <p>Defines the action the Auto Scaling group should take when the lifecycle hook
     * timeout elapses or if an unexpected failure occurs. The valid values are
     * <code>CONTINUE</code> and <code>ABANDON</code>. The default value is
     * <code>CONTINUE</code>.</p>
     */
    inline void SetDefaultResult(const Aws::String& value) { m_defaultResultHasBeenSet = true; m_defaultResult = value; }

    /**
     * <p>Defines the action the Auto Scaling group should take when the lifecycle hook
     * timeout elapses or if an unexpected failure occurs. The valid values are
     * <code>CONTINUE</code> and <code>ABANDON</code>. The default value is
     * <code>CONTINUE</code>.</p>
     */
    inline void SetDefaultResult(Aws::String&& value) { m_defaultResultHasBeenSet = true; m_defaultResult = value; }

    /**
     * <p>Defines the action the Auto Scaling group should take when the lifecycle hook
     * timeout elapses or if an unexpected failure occurs. The valid values are
     * <code>CONTINUE</code> and <code>ABANDON</code>. The default value is
     * <code>CONTINUE</code>.</p>
     */
    inline void SetDefaultResult(const char* value) { m_defaultResultHasBeenSet = true; m_defaultResult.assign(value); }

    /**
     * <p>Defines the action the Auto Scaling group should take when the lifecycle hook
     * timeout elapses or if an unexpected failure occurs. The valid values are
     * <code>CONTINUE</code> and <code>ABANDON</code>. The default value is
     * <code>CONTINUE</code>.</p>
     */
    inline LifecycleHook& WithDefaultResult(const Aws::String& value) { SetDefaultResult(value); return *this;}

    /**
     * <p>Defines the action the Auto Scaling group should take when the lifecycle hook
     * timeout elapses or if an unexpected failure occurs. The valid values are
     * <code>CONTINUE</code> and <code>ABANDON</code>. The default value is
     * <code>CONTINUE</code>.</p>
     */
    inline LifecycleHook& WithDefaultResult(Aws::String&& value) { SetDefaultResult(value); return *this;}

    /**
     * <p>Defines the action the Auto Scaling group should take when the lifecycle hook
     * timeout elapses or if an unexpected failure occurs. The valid values are
     * <code>CONTINUE</code> and <code>ABANDON</code>. The default value is
     * <code>CONTINUE</code>.</p>
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
    long m_heartbeatTimeout;
    bool m_heartbeatTimeoutHasBeenSet;
    long m_globalTimeout;
    bool m_globalTimeoutHasBeenSet;
    Aws::String m_defaultResult;
    bool m_defaultResultHasBeenSet;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
