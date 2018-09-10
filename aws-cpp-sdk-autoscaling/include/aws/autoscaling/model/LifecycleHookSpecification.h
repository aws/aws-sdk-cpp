﻿/*
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
   * instances.</p> <p>For more information, see <a
   * href="http://docs.aws.amazon.com/autoscaling/ec2/userguide/lifecycle-hooks.html">Lifecycle
   * Hooks</a> in the <i>Amazon EC2 Auto Scaling User Guide</i>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/LifecycleHookSpecification">AWS
   * API Reference</a></p>
   */
  class AWS_AUTOSCALING_API LifecycleHookSpecification
  {
  public:
    LifecycleHookSpecification();
    LifecycleHookSpecification(const Aws::Utils::Xml::XmlNode& xmlNode);
    LifecycleHookSpecification& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

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
     * <p>The state of the EC2 instance to which you want to attach the lifecycle hook.
     * The possible values are:</p> <ul> <li> <p>autoscaling:EC2_INSTANCE_LAUNCHING</p>
     * </li> <li> <p>autoscaling:EC2_INSTANCE_TERMINATING</p> </li> </ul>
     */
    inline const Aws::String& GetLifecycleTransition() const{ return m_lifecycleTransition; }

    /**
     * <p>The state of the EC2 instance to which you want to attach the lifecycle hook.
     * The possible values are:</p> <ul> <li> <p>autoscaling:EC2_INSTANCE_LAUNCHING</p>
     * </li> <li> <p>autoscaling:EC2_INSTANCE_TERMINATING</p> </li> </ul>
     */
    inline void SetLifecycleTransition(const Aws::String& value) { m_lifecycleTransitionHasBeenSet = true; m_lifecycleTransition = value; }

    /**
     * <p>The state of the EC2 instance to which you want to attach the lifecycle hook.
     * The possible values are:</p> <ul> <li> <p>autoscaling:EC2_INSTANCE_LAUNCHING</p>
     * </li> <li> <p>autoscaling:EC2_INSTANCE_TERMINATING</p> </li> </ul>
     */
    inline void SetLifecycleTransition(Aws::String&& value) { m_lifecycleTransitionHasBeenSet = true; m_lifecycleTransition = std::move(value); }

    /**
     * <p>The state of the EC2 instance to which you want to attach the lifecycle hook.
     * The possible values are:</p> <ul> <li> <p>autoscaling:EC2_INSTANCE_LAUNCHING</p>
     * </li> <li> <p>autoscaling:EC2_INSTANCE_TERMINATING</p> </li> </ul>
     */
    inline void SetLifecycleTransition(const char* value) { m_lifecycleTransitionHasBeenSet = true; m_lifecycleTransition.assign(value); }

    /**
     * <p>The state of the EC2 instance to which you want to attach the lifecycle hook.
     * The possible values are:</p> <ul> <li> <p>autoscaling:EC2_INSTANCE_LAUNCHING</p>
     * </li> <li> <p>autoscaling:EC2_INSTANCE_TERMINATING</p> </li> </ul>
     */
    inline LifecycleHookSpecification& WithLifecycleTransition(const Aws::String& value) { SetLifecycleTransition(value); return *this;}

    /**
     * <p>The state of the EC2 instance to which you want to attach the lifecycle hook.
     * The possible values are:</p> <ul> <li> <p>autoscaling:EC2_INSTANCE_LAUNCHING</p>
     * </li> <li> <p>autoscaling:EC2_INSTANCE_TERMINATING</p> </li> </ul>
     */
    inline LifecycleHookSpecification& WithLifecycleTransition(Aws::String&& value) { SetLifecycleTransition(std::move(value)); return *this;}

    /**
     * <p>The state of the EC2 instance to which you want to attach the lifecycle hook.
     * The possible values are:</p> <ul> <li> <p>autoscaling:EC2_INSTANCE_LAUNCHING</p>
     * </li> <li> <p>autoscaling:EC2_INSTANCE_TERMINATING</p> </li> </ul>
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
     * out. If the lifecycle hook times out, Amazon EC2 Auto Scaling performs the
     * default action. You can prevent the lifecycle hook from timing out by calling
     * <a>RecordLifecycleActionHeartbeat</a>.</p>
     */
    inline int GetHeartbeatTimeout() const{ return m_heartbeatTimeout; }

    /**
     * <p>The maximum time, in seconds, that can elapse before the lifecycle hook times
     * out. If the lifecycle hook times out, Amazon EC2 Auto Scaling performs the
     * default action. You can prevent the lifecycle hook from timing out by calling
     * <a>RecordLifecycleActionHeartbeat</a>.</p>
     */
    inline void SetHeartbeatTimeout(int value) { m_heartbeatTimeoutHasBeenSet = true; m_heartbeatTimeout = value; }

    /**
     * <p>The maximum time, in seconds, that can elapse before the lifecycle hook times
     * out. If the lifecycle hook times out, Amazon EC2 Auto Scaling performs the
     * default action. You can prevent the lifecycle hook from timing out by calling
     * <a>RecordLifecycleActionHeartbeat</a>.</p>
     */
    inline LifecycleHookSpecification& WithHeartbeatTimeout(int value) { SetHeartbeatTimeout(value); return *this;}


    /**
     * <p>Defines the action the Auto Scaling group should take when the lifecycle hook
     * timeout elapses or if an unexpected failure occurs. The valid values are
     * <code>CONTINUE</code> and <code>ABANDON</code>.</p>
     */
    inline const Aws::String& GetDefaultResult() const{ return m_defaultResult; }

    /**
     * <p>Defines the action the Auto Scaling group should take when the lifecycle hook
     * timeout elapses or if an unexpected failure occurs. The valid values are
     * <code>CONTINUE</code> and <code>ABANDON</code>.</p>
     */
    inline void SetDefaultResult(const Aws::String& value) { m_defaultResultHasBeenSet = true; m_defaultResult = value; }

    /**
     * <p>Defines the action the Auto Scaling group should take when the lifecycle hook
     * timeout elapses or if an unexpected failure occurs. The valid values are
     * <code>CONTINUE</code> and <code>ABANDON</code>.</p>
     */
    inline void SetDefaultResult(Aws::String&& value) { m_defaultResultHasBeenSet = true; m_defaultResult = std::move(value); }

    /**
     * <p>Defines the action the Auto Scaling group should take when the lifecycle hook
     * timeout elapses or if an unexpected failure occurs. The valid values are
     * <code>CONTINUE</code> and <code>ABANDON</code>.</p>
     */
    inline void SetDefaultResult(const char* value) { m_defaultResultHasBeenSet = true; m_defaultResult.assign(value); }

    /**
     * <p>Defines the action the Auto Scaling group should take when the lifecycle hook
     * timeout elapses or if an unexpected failure occurs. The valid values are
     * <code>CONTINUE</code> and <code>ABANDON</code>.</p>
     */
    inline LifecycleHookSpecification& WithDefaultResult(const Aws::String& value) { SetDefaultResult(value); return *this;}

    /**
     * <p>Defines the action the Auto Scaling group should take when the lifecycle hook
     * timeout elapses or if an unexpected failure occurs. The valid values are
     * <code>CONTINUE</code> and <code>ABANDON</code>.</p>
     */
    inline LifecycleHookSpecification& WithDefaultResult(Aws::String&& value) { SetDefaultResult(std::move(value)); return *this;}

    /**
     * <p>Defines the action the Auto Scaling group should take when the lifecycle hook
     * timeout elapses or if an unexpected failure occurs. The valid values are
     * <code>CONTINUE</code> and <code>ABANDON</code>.</p>
     */
    inline LifecycleHookSpecification& WithDefaultResult(const char* value) { SetDefaultResult(value); return *this;}


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
    inline LifecycleHookSpecification& WithNotificationTargetARN(const Aws::String& value) { SetNotificationTargetARN(value); return *this;}

    /**
     * <p>The ARN of the target that Amazon EC2 Auto Scaling sends notifications to
     * when an instance is in the transition state for the lifecycle hook. The
     * notification target can be either an SQS queue or an SNS topic.</p>
     */
    inline LifecycleHookSpecification& WithNotificationTargetARN(Aws::String&& value) { SetNotificationTargetARN(std::move(value)); return *this;}

    /**
     * <p>The ARN of the target that Amazon EC2 Auto Scaling sends notifications to
     * when an instance is in the transition state for the lifecycle hook. The
     * notification target can be either an SQS queue or an SNS topic.</p>
     */
    inline LifecycleHookSpecification& WithNotificationTargetARN(const char* value) { SetNotificationTargetARN(value); return *this;}


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
    inline LifecycleHookSpecification& WithRoleARN(const Aws::String& value) { SetRoleARN(value); return *this;}

    /**
     * <p>The ARN of the IAM role that allows the Auto Scaling group to publish to the
     * specified notification target.</p>
     */
    inline LifecycleHookSpecification& WithRoleARN(Aws::String&& value) { SetRoleARN(std::move(value)); return *this;}

    /**
     * <p>The ARN of the IAM role that allows the Auto Scaling group to publish to the
     * specified notification target.</p>
     */
    inline LifecycleHookSpecification& WithRoleARN(const char* value) { SetRoleARN(value); return *this;}

  private:

    Aws::String m_lifecycleHookName;
    bool m_lifecycleHookNameHasBeenSet;

    Aws::String m_lifecycleTransition;
    bool m_lifecycleTransitionHasBeenSet;

    Aws::String m_notificationMetadata;
    bool m_notificationMetadataHasBeenSet;

    int m_heartbeatTimeout;
    bool m_heartbeatTimeoutHasBeenSet;

    Aws::String m_defaultResult;
    bool m_defaultResultHasBeenSet;

    Aws::String m_notificationTargetARN;
    bool m_notificationTargetARNHasBeenSet;

    Aws::String m_roleARN;
    bool m_roleARNHasBeenSet;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
