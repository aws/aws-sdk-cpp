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
#include <aws/autoscaling/AutoScalingRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AutoScaling
{
namespace Model
{

  /**
   * <p>Contains the parameters for PutLifecycleHook.</p>
   */
  class AWS_AUTOSCALING_API PutLifecycleHookRequest : public AutoScalingRequest
  {
  public:
    PutLifecycleHookRequest();
    Aws::String SerializePayload() const override;

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
    inline PutLifecycleHookRequest& WithLifecycleHookName(const Aws::String& value) { SetLifecycleHookName(value); return *this;}

    /**
     * <p>The name of the lifecycle hook.</p>
     */
    inline PutLifecycleHookRequest& WithLifecycleHookName(Aws::String&& value) { SetLifecycleHookName(value); return *this;}

    /**
     * <p>The name of the lifecycle hook.</p>
     */
    inline PutLifecycleHookRequest& WithLifecycleHookName(const char* value) { SetLifecycleHookName(value); return *this;}

    /**
     * <p>The name of the Auto Scaling group to which you want to assign the lifecycle
     * hook.</p>
     */
    inline const Aws::String& GetAutoScalingGroupName() const{ return m_autoScalingGroupName; }

    /**
     * <p>The name of the Auto Scaling group to which you want to assign the lifecycle
     * hook.</p>
     */
    inline void SetAutoScalingGroupName(const Aws::String& value) { m_autoScalingGroupNameHasBeenSet = true; m_autoScalingGroupName = value; }

    /**
     * <p>The name of the Auto Scaling group to which you want to assign the lifecycle
     * hook.</p>
     */
    inline void SetAutoScalingGroupName(Aws::String&& value) { m_autoScalingGroupNameHasBeenSet = true; m_autoScalingGroupName = value; }

    /**
     * <p>The name of the Auto Scaling group to which you want to assign the lifecycle
     * hook.</p>
     */
    inline void SetAutoScalingGroupName(const char* value) { m_autoScalingGroupNameHasBeenSet = true; m_autoScalingGroupName.assign(value); }

    /**
     * <p>The name of the Auto Scaling group to which you want to assign the lifecycle
     * hook.</p>
     */
    inline PutLifecycleHookRequest& WithAutoScalingGroupName(const Aws::String& value) { SetAutoScalingGroupName(value); return *this;}

    /**
     * <p>The name of the Auto Scaling group to which you want to assign the lifecycle
     * hook.</p>
     */
    inline PutLifecycleHookRequest& WithAutoScalingGroupName(Aws::String&& value) { SetAutoScalingGroupName(value); return *this;}

    /**
     * <p>The name of the Auto Scaling group to which you want to assign the lifecycle
     * hook.</p>
     */
    inline PutLifecycleHookRequest& WithAutoScalingGroupName(const char* value) { SetAutoScalingGroupName(value); return *this;}

    /**
     * <p>The instance state to which you want to attach the lifecycle hook. For a list
     * of lifecycle hook types, see <a>DescribeLifecycleHookTypes</a>.</p> <p>This
     * parameter is required for new lifecycle hooks, but optional when updating
     * existing hooks.</p>
     */
    inline const Aws::String& GetLifecycleTransition() const{ return m_lifecycleTransition; }

    /**
     * <p>The instance state to which you want to attach the lifecycle hook. For a list
     * of lifecycle hook types, see <a>DescribeLifecycleHookTypes</a>.</p> <p>This
     * parameter is required for new lifecycle hooks, but optional when updating
     * existing hooks.</p>
     */
    inline void SetLifecycleTransition(const Aws::String& value) { m_lifecycleTransitionHasBeenSet = true; m_lifecycleTransition = value; }

    /**
     * <p>The instance state to which you want to attach the lifecycle hook. For a list
     * of lifecycle hook types, see <a>DescribeLifecycleHookTypes</a>.</p> <p>This
     * parameter is required for new lifecycle hooks, but optional when updating
     * existing hooks.</p>
     */
    inline void SetLifecycleTransition(Aws::String&& value) { m_lifecycleTransitionHasBeenSet = true; m_lifecycleTransition = value; }

    /**
     * <p>The instance state to which you want to attach the lifecycle hook. For a list
     * of lifecycle hook types, see <a>DescribeLifecycleHookTypes</a>.</p> <p>This
     * parameter is required for new lifecycle hooks, but optional when updating
     * existing hooks.</p>
     */
    inline void SetLifecycleTransition(const char* value) { m_lifecycleTransitionHasBeenSet = true; m_lifecycleTransition.assign(value); }

    /**
     * <p>The instance state to which you want to attach the lifecycle hook. For a list
     * of lifecycle hook types, see <a>DescribeLifecycleHookTypes</a>.</p> <p>This
     * parameter is required for new lifecycle hooks, but optional when updating
     * existing hooks.</p>
     */
    inline PutLifecycleHookRequest& WithLifecycleTransition(const Aws::String& value) { SetLifecycleTransition(value); return *this;}

    /**
     * <p>The instance state to which you want to attach the lifecycle hook. For a list
     * of lifecycle hook types, see <a>DescribeLifecycleHookTypes</a>.</p> <p>This
     * parameter is required for new lifecycle hooks, but optional when updating
     * existing hooks.</p>
     */
    inline PutLifecycleHookRequest& WithLifecycleTransition(Aws::String&& value) { SetLifecycleTransition(value); return *this;}

    /**
     * <p>The instance state to which you want to attach the lifecycle hook. For a list
     * of lifecycle hook types, see <a>DescribeLifecycleHookTypes</a>.</p> <p>This
     * parameter is required for new lifecycle hooks, but optional when updating
     * existing hooks.</p>
     */
    inline PutLifecycleHookRequest& WithLifecycleTransition(const char* value) { SetLifecycleTransition(value); return *this;}

    /**
     * <p>The ARN of the IAM role that allows the Auto Scaling group to publish to the
     * specified notification target.</p> <p>This parameter is required for new
     * lifecycle hooks, but optional when updating existing hooks.</p>
     */
    inline const Aws::String& GetRoleARN() const{ return m_roleARN; }

    /**
     * <p>The ARN of the IAM role that allows the Auto Scaling group to publish to the
     * specified notification target.</p> <p>This parameter is required for new
     * lifecycle hooks, but optional when updating existing hooks.</p>
     */
    inline void SetRoleARN(const Aws::String& value) { m_roleARNHasBeenSet = true; m_roleARN = value; }

    /**
     * <p>The ARN of the IAM role that allows the Auto Scaling group to publish to the
     * specified notification target.</p> <p>This parameter is required for new
     * lifecycle hooks, but optional when updating existing hooks.</p>
     */
    inline void SetRoleARN(Aws::String&& value) { m_roleARNHasBeenSet = true; m_roleARN = value; }

    /**
     * <p>The ARN of the IAM role that allows the Auto Scaling group to publish to the
     * specified notification target.</p> <p>This parameter is required for new
     * lifecycle hooks, but optional when updating existing hooks.</p>
     */
    inline void SetRoleARN(const char* value) { m_roleARNHasBeenSet = true; m_roleARN.assign(value); }

    /**
     * <p>The ARN of the IAM role that allows the Auto Scaling group to publish to the
     * specified notification target.</p> <p>This parameter is required for new
     * lifecycle hooks, but optional when updating existing hooks.</p>
     */
    inline PutLifecycleHookRequest& WithRoleARN(const Aws::String& value) { SetRoleARN(value); return *this;}

    /**
     * <p>The ARN of the IAM role that allows the Auto Scaling group to publish to the
     * specified notification target.</p> <p>This parameter is required for new
     * lifecycle hooks, but optional when updating existing hooks.</p>
     */
    inline PutLifecycleHookRequest& WithRoleARN(Aws::String&& value) { SetRoleARN(value); return *this;}

    /**
     * <p>The ARN of the IAM role that allows the Auto Scaling group to publish to the
     * specified notification target.</p> <p>This parameter is required for new
     * lifecycle hooks, but optional when updating existing hooks.</p>
     */
    inline PutLifecycleHookRequest& WithRoleARN(const char* value) { SetRoleARN(value); return *this;}

    /**
     * <p>The ARN of the notification target that Auto Scaling will use to notify you
     * when an instance is in the transition state for the lifecycle hook. This target
     * can be either an SQS queue or an SNS topic. If you specify an empty string, this
     * overrides the current ARN.</p> <p>This operation uses the JSON format when
     * sending notifications to an Amazon SQS queue, and an email key/value pair format
     * when sending notifications to an Amazon SNS topic.</p> <p>When you specify a
     * notification target, Auto Scaling sends it a test message. Test messages
     * contains the following additional key/value pair: <code>"Event":
     * "autoscaling:TEST_NOTIFICATION"</code>.</p>
     */
    inline const Aws::String& GetNotificationTargetARN() const{ return m_notificationTargetARN; }

    /**
     * <p>The ARN of the notification target that Auto Scaling will use to notify you
     * when an instance is in the transition state for the lifecycle hook. This target
     * can be either an SQS queue or an SNS topic. If you specify an empty string, this
     * overrides the current ARN.</p> <p>This operation uses the JSON format when
     * sending notifications to an Amazon SQS queue, and an email key/value pair format
     * when sending notifications to an Amazon SNS topic.</p> <p>When you specify a
     * notification target, Auto Scaling sends it a test message. Test messages
     * contains the following additional key/value pair: <code>"Event":
     * "autoscaling:TEST_NOTIFICATION"</code>.</p>
     */
    inline void SetNotificationTargetARN(const Aws::String& value) { m_notificationTargetARNHasBeenSet = true; m_notificationTargetARN = value; }

    /**
     * <p>The ARN of the notification target that Auto Scaling will use to notify you
     * when an instance is in the transition state for the lifecycle hook. This target
     * can be either an SQS queue or an SNS topic. If you specify an empty string, this
     * overrides the current ARN.</p> <p>This operation uses the JSON format when
     * sending notifications to an Amazon SQS queue, and an email key/value pair format
     * when sending notifications to an Amazon SNS topic.</p> <p>When you specify a
     * notification target, Auto Scaling sends it a test message. Test messages
     * contains the following additional key/value pair: <code>"Event":
     * "autoscaling:TEST_NOTIFICATION"</code>.</p>
     */
    inline void SetNotificationTargetARN(Aws::String&& value) { m_notificationTargetARNHasBeenSet = true; m_notificationTargetARN = value; }

    /**
     * <p>The ARN of the notification target that Auto Scaling will use to notify you
     * when an instance is in the transition state for the lifecycle hook. This target
     * can be either an SQS queue or an SNS topic. If you specify an empty string, this
     * overrides the current ARN.</p> <p>This operation uses the JSON format when
     * sending notifications to an Amazon SQS queue, and an email key/value pair format
     * when sending notifications to an Amazon SNS topic.</p> <p>When you specify a
     * notification target, Auto Scaling sends it a test message. Test messages
     * contains the following additional key/value pair: <code>"Event":
     * "autoscaling:TEST_NOTIFICATION"</code>.</p>
     */
    inline void SetNotificationTargetARN(const char* value) { m_notificationTargetARNHasBeenSet = true; m_notificationTargetARN.assign(value); }

    /**
     * <p>The ARN of the notification target that Auto Scaling will use to notify you
     * when an instance is in the transition state for the lifecycle hook. This target
     * can be either an SQS queue or an SNS topic. If you specify an empty string, this
     * overrides the current ARN.</p> <p>This operation uses the JSON format when
     * sending notifications to an Amazon SQS queue, and an email key/value pair format
     * when sending notifications to an Amazon SNS topic.</p> <p>When you specify a
     * notification target, Auto Scaling sends it a test message. Test messages
     * contains the following additional key/value pair: <code>"Event":
     * "autoscaling:TEST_NOTIFICATION"</code>.</p>
     */
    inline PutLifecycleHookRequest& WithNotificationTargetARN(const Aws::String& value) { SetNotificationTargetARN(value); return *this;}

    /**
     * <p>The ARN of the notification target that Auto Scaling will use to notify you
     * when an instance is in the transition state for the lifecycle hook. This target
     * can be either an SQS queue or an SNS topic. If you specify an empty string, this
     * overrides the current ARN.</p> <p>This operation uses the JSON format when
     * sending notifications to an Amazon SQS queue, and an email key/value pair format
     * when sending notifications to an Amazon SNS topic.</p> <p>When you specify a
     * notification target, Auto Scaling sends it a test message. Test messages
     * contains the following additional key/value pair: <code>"Event":
     * "autoscaling:TEST_NOTIFICATION"</code>.</p>
     */
    inline PutLifecycleHookRequest& WithNotificationTargetARN(Aws::String&& value) { SetNotificationTargetARN(value); return *this;}

    /**
     * <p>The ARN of the notification target that Auto Scaling will use to notify you
     * when an instance is in the transition state for the lifecycle hook. This target
     * can be either an SQS queue or an SNS topic. If you specify an empty string, this
     * overrides the current ARN.</p> <p>This operation uses the JSON format when
     * sending notifications to an Amazon SQS queue, and an email key/value pair format
     * when sending notifications to an Amazon SNS topic.</p> <p>When you specify a
     * notification target, Auto Scaling sends it a test message. Test messages
     * contains the following additional key/value pair: <code>"Event":
     * "autoscaling:TEST_NOTIFICATION"</code>.</p>
     */
    inline PutLifecycleHookRequest& WithNotificationTargetARN(const char* value) { SetNotificationTargetARN(value); return *this;}

    /**
     * <p>Contains additional information that you want to include any time Auto
     * Scaling sends a message to the notification target.</p>
     */
    inline const Aws::String& GetNotificationMetadata() const{ return m_notificationMetadata; }

    /**
     * <p>Contains additional information that you want to include any time Auto
     * Scaling sends a message to the notification target.</p>
     */
    inline void SetNotificationMetadata(const Aws::String& value) { m_notificationMetadataHasBeenSet = true; m_notificationMetadata = value; }

    /**
     * <p>Contains additional information that you want to include any time Auto
     * Scaling sends a message to the notification target.</p>
     */
    inline void SetNotificationMetadata(Aws::String&& value) { m_notificationMetadataHasBeenSet = true; m_notificationMetadata = value; }

    /**
     * <p>Contains additional information that you want to include any time Auto
     * Scaling sends a message to the notification target.</p>
     */
    inline void SetNotificationMetadata(const char* value) { m_notificationMetadataHasBeenSet = true; m_notificationMetadata.assign(value); }

    /**
     * <p>Contains additional information that you want to include any time Auto
     * Scaling sends a message to the notification target.</p>
     */
    inline PutLifecycleHookRequest& WithNotificationMetadata(const Aws::String& value) { SetNotificationMetadata(value); return *this;}

    /**
     * <p>Contains additional information that you want to include any time Auto
     * Scaling sends a message to the notification target.</p>
     */
    inline PutLifecycleHookRequest& WithNotificationMetadata(Aws::String&& value) { SetNotificationMetadata(value); return *this;}

    /**
     * <p>Contains additional information that you want to include any time Auto
     * Scaling sends a message to the notification target.</p>
     */
    inline PutLifecycleHookRequest& WithNotificationMetadata(const char* value) { SetNotificationMetadata(value); return *this;}

    /**
     * <p>The amount of time, in seconds, that can elapse before the lifecycle hook
     * times out. When the lifecycle hook times out, Auto Scaling performs the default
     * action. You can prevent the lifecycle hook from timing out by calling
     * <a>RecordLifecycleActionHeartbeat</a>. The default is 3600 seconds (1 hour).</p>
     */
    inline int GetHeartbeatTimeout() const{ return m_heartbeatTimeout; }

    /**
     * <p>The amount of time, in seconds, that can elapse before the lifecycle hook
     * times out. When the lifecycle hook times out, Auto Scaling performs the default
     * action. You can prevent the lifecycle hook from timing out by calling
     * <a>RecordLifecycleActionHeartbeat</a>. The default is 3600 seconds (1 hour).</p>
     */
    inline void SetHeartbeatTimeout(int value) { m_heartbeatTimeoutHasBeenSet = true; m_heartbeatTimeout = value; }

    /**
     * <p>The amount of time, in seconds, that can elapse before the lifecycle hook
     * times out. When the lifecycle hook times out, Auto Scaling performs the default
     * action. You can prevent the lifecycle hook from timing out by calling
     * <a>RecordLifecycleActionHeartbeat</a>. The default is 3600 seconds (1 hour).</p>
     */
    inline PutLifecycleHookRequest& WithHeartbeatTimeout(int value) { SetHeartbeatTimeout(value); return *this;}

    /**
     * <p>Defines the action the Auto Scaling group should take when the lifecycle hook
     * timeout elapses or if an unexpected failure occurs. This parameter can be either
     * <code>CONTINUE</code> or <code>ABANDON</code>. The default value is
     * <code>ABANDON</code>.</p>
     */
    inline const Aws::String& GetDefaultResult() const{ return m_defaultResult; }

    /**
     * <p>Defines the action the Auto Scaling group should take when the lifecycle hook
     * timeout elapses or if an unexpected failure occurs. This parameter can be either
     * <code>CONTINUE</code> or <code>ABANDON</code>. The default value is
     * <code>ABANDON</code>.</p>
     */
    inline void SetDefaultResult(const Aws::String& value) { m_defaultResultHasBeenSet = true; m_defaultResult = value; }

    /**
     * <p>Defines the action the Auto Scaling group should take when the lifecycle hook
     * timeout elapses or if an unexpected failure occurs. This parameter can be either
     * <code>CONTINUE</code> or <code>ABANDON</code>. The default value is
     * <code>ABANDON</code>.</p>
     */
    inline void SetDefaultResult(Aws::String&& value) { m_defaultResultHasBeenSet = true; m_defaultResult = value; }

    /**
     * <p>Defines the action the Auto Scaling group should take when the lifecycle hook
     * timeout elapses or if an unexpected failure occurs. This parameter can be either
     * <code>CONTINUE</code> or <code>ABANDON</code>. The default value is
     * <code>ABANDON</code>.</p>
     */
    inline void SetDefaultResult(const char* value) { m_defaultResultHasBeenSet = true; m_defaultResult.assign(value); }

    /**
     * <p>Defines the action the Auto Scaling group should take when the lifecycle hook
     * timeout elapses or if an unexpected failure occurs. This parameter can be either
     * <code>CONTINUE</code> or <code>ABANDON</code>. The default value is
     * <code>ABANDON</code>.</p>
     */
    inline PutLifecycleHookRequest& WithDefaultResult(const Aws::String& value) { SetDefaultResult(value); return *this;}

    /**
     * <p>Defines the action the Auto Scaling group should take when the lifecycle hook
     * timeout elapses or if an unexpected failure occurs. This parameter can be either
     * <code>CONTINUE</code> or <code>ABANDON</code>. The default value is
     * <code>ABANDON</code>.</p>
     */
    inline PutLifecycleHookRequest& WithDefaultResult(Aws::String&& value) { SetDefaultResult(value); return *this;}

    /**
     * <p>Defines the action the Auto Scaling group should take when the lifecycle hook
     * timeout elapses or if an unexpected failure occurs. This parameter can be either
     * <code>CONTINUE</code> or <code>ABANDON</code>. The default value is
     * <code>ABANDON</code>.</p>
     */
    inline PutLifecycleHookRequest& WithDefaultResult(const char* value) { SetDefaultResult(value); return *this;}

  private:
    Aws::String m_lifecycleHookName;
    bool m_lifecycleHookNameHasBeenSet;
    Aws::String m_autoScalingGroupName;
    bool m_autoScalingGroupNameHasBeenSet;
    Aws::String m_lifecycleTransition;
    bool m_lifecycleTransitionHasBeenSet;
    Aws::String m_roleARN;
    bool m_roleARNHasBeenSet;
    Aws::String m_notificationTargetARN;
    bool m_notificationTargetARNHasBeenSet;
    Aws::String m_notificationMetadata;
    bool m_notificationMetadataHasBeenSet;
    int m_heartbeatTimeout;
    bool m_heartbeatTimeoutHasBeenSet;
    Aws::String m_defaultResult;
    bool m_defaultResultHasBeenSet;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
