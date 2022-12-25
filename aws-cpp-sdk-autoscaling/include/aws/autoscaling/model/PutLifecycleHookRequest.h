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
    AWS_AUTOSCALING_API PutLifecycleHookRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutLifecycleHook"; }

    AWS_AUTOSCALING_API Aws::String SerializePayload() const override;

  protected:
    AWS_AUTOSCALING_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

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
    inline PutLifecycleHookRequest& WithLifecycleHookName(const Aws::String& value) { SetLifecycleHookName(value); return *this;}

    /**
     * <p>The name of the lifecycle hook.</p>
     */
    inline PutLifecycleHookRequest& WithLifecycleHookName(Aws::String&& value) { SetLifecycleHookName(std::move(value)); return *this;}

    /**
     * <p>The name of the lifecycle hook.</p>
     */
    inline PutLifecycleHookRequest& WithLifecycleHookName(const char* value) { SetLifecycleHookName(value); return *this;}


    /**
     * <p>The name of the Auto Scaling group.</p>
     */
    inline const Aws::String& GetAutoScalingGroupName() const{ return m_autoScalingGroupName; }

    /**
     * <p>The name of the Auto Scaling group.</p>
     */
    inline bool AutoScalingGroupNameHasBeenSet() const { return m_autoScalingGroupNameHasBeenSet; }

    /**
     * <p>The name of the Auto Scaling group.</p>
     */
    inline void SetAutoScalingGroupName(const Aws::String& value) { m_autoScalingGroupNameHasBeenSet = true; m_autoScalingGroupName = value; }

    /**
     * <p>The name of the Auto Scaling group.</p>
     */
    inline void SetAutoScalingGroupName(Aws::String&& value) { m_autoScalingGroupNameHasBeenSet = true; m_autoScalingGroupName = std::move(value); }

    /**
     * <p>The name of the Auto Scaling group.</p>
     */
    inline void SetAutoScalingGroupName(const char* value) { m_autoScalingGroupNameHasBeenSet = true; m_autoScalingGroupName.assign(value); }

    /**
     * <p>The name of the Auto Scaling group.</p>
     */
    inline PutLifecycleHookRequest& WithAutoScalingGroupName(const Aws::String& value) { SetAutoScalingGroupName(value); return *this;}

    /**
     * <p>The name of the Auto Scaling group.</p>
     */
    inline PutLifecycleHookRequest& WithAutoScalingGroupName(Aws::String&& value) { SetAutoScalingGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the Auto Scaling group.</p>
     */
    inline PutLifecycleHookRequest& WithAutoScalingGroupName(const char* value) { SetAutoScalingGroupName(value); return *this;}


    /**
     * <p>The lifecycle transition. For Auto Scaling groups, there are two major
     * lifecycle transitions.</p> <ul> <li> <p>To create a lifecycle hook for scale-out
     * events, specify <code>autoscaling:EC2_INSTANCE_LAUNCHING</code>.</p> </li> <li>
     * <p>To create a lifecycle hook for scale-in events, specify
     * <code>autoscaling:EC2_INSTANCE_TERMINATING</code>.</p> </li> </ul> <p>Required
     * for new lifecycle hooks, but optional when updating existing hooks.</p>
     */
    inline const Aws::String& GetLifecycleTransition() const{ return m_lifecycleTransition; }

    /**
     * <p>The lifecycle transition. For Auto Scaling groups, there are two major
     * lifecycle transitions.</p> <ul> <li> <p>To create a lifecycle hook for scale-out
     * events, specify <code>autoscaling:EC2_INSTANCE_LAUNCHING</code>.</p> </li> <li>
     * <p>To create a lifecycle hook for scale-in events, specify
     * <code>autoscaling:EC2_INSTANCE_TERMINATING</code>.</p> </li> </ul> <p>Required
     * for new lifecycle hooks, but optional when updating existing hooks.</p>
     */
    inline bool LifecycleTransitionHasBeenSet() const { return m_lifecycleTransitionHasBeenSet; }

    /**
     * <p>The lifecycle transition. For Auto Scaling groups, there are two major
     * lifecycle transitions.</p> <ul> <li> <p>To create a lifecycle hook for scale-out
     * events, specify <code>autoscaling:EC2_INSTANCE_LAUNCHING</code>.</p> </li> <li>
     * <p>To create a lifecycle hook for scale-in events, specify
     * <code>autoscaling:EC2_INSTANCE_TERMINATING</code>.</p> </li> </ul> <p>Required
     * for new lifecycle hooks, but optional when updating existing hooks.</p>
     */
    inline void SetLifecycleTransition(const Aws::String& value) { m_lifecycleTransitionHasBeenSet = true; m_lifecycleTransition = value; }

    /**
     * <p>The lifecycle transition. For Auto Scaling groups, there are two major
     * lifecycle transitions.</p> <ul> <li> <p>To create a lifecycle hook for scale-out
     * events, specify <code>autoscaling:EC2_INSTANCE_LAUNCHING</code>.</p> </li> <li>
     * <p>To create a lifecycle hook for scale-in events, specify
     * <code>autoscaling:EC2_INSTANCE_TERMINATING</code>.</p> </li> </ul> <p>Required
     * for new lifecycle hooks, but optional when updating existing hooks.</p>
     */
    inline void SetLifecycleTransition(Aws::String&& value) { m_lifecycleTransitionHasBeenSet = true; m_lifecycleTransition = std::move(value); }

    /**
     * <p>The lifecycle transition. For Auto Scaling groups, there are two major
     * lifecycle transitions.</p> <ul> <li> <p>To create a lifecycle hook for scale-out
     * events, specify <code>autoscaling:EC2_INSTANCE_LAUNCHING</code>.</p> </li> <li>
     * <p>To create a lifecycle hook for scale-in events, specify
     * <code>autoscaling:EC2_INSTANCE_TERMINATING</code>.</p> </li> </ul> <p>Required
     * for new lifecycle hooks, but optional when updating existing hooks.</p>
     */
    inline void SetLifecycleTransition(const char* value) { m_lifecycleTransitionHasBeenSet = true; m_lifecycleTransition.assign(value); }

    /**
     * <p>The lifecycle transition. For Auto Scaling groups, there are two major
     * lifecycle transitions.</p> <ul> <li> <p>To create a lifecycle hook for scale-out
     * events, specify <code>autoscaling:EC2_INSTANCE_LAUNCHING</code>.</p> </li> <li>
     * <p>To create a lifecycle hook for scale-in events, specify
     * <code>autoscaling:EC2_INSTANCE_TERMINATING</code>.</p> </li> </ul> <p>Required
     * for new lifecycle hooks, but optional when updating existing hooks.</p>
     */
    inline PutLifecycleHookRequest& WithLifecycleTransition(const Aws::String& value) { SetLifecycleTransition(value); return *this;}

    /**
     * <p>The lifecycle transition. For Auto Scaling groups, there are two major
     * lifecycle transitions.</p> <ul> <li> <p>To create a lifecycle hook for scale-out
     * events, specify <code>autoscaling:EC2_INSTANCE_LAUNCHING</code>.</p> </li> <li>
     * <p>To create a lifecycle hook for scale-in events, specify
     * <code>autoscaling:EC2_INSTANCE_TERMINATING</code>.</p> </li> </ul> <p>Required
     * for new lifecycle hooks, but optional when updating existing hooks.</p>
     */
    inline PutLifecycleHookRequest& WithLifecycleTransition(Aws::String&& value) { SetLifecycleTransition(std::move(value)); return *this;}

    /**
     * <p>The lifecycle transition. For Auto Scaling groups, there are two major
     * lifecycle transitions.</p> <ul> <li> <p>To create a lifecycle hook for scale-out
     * events, specify <code>autoscaling:EC2_INSTANCE_LAUNCHING</code>.</p> </li> <li>
     * <p>To create a lifecycle hook for scale-in events, specify
     * <code>autoscaling:EC2_INSTANCE_TERMINATING</code>.</p> </li> </ul> <p>Required
     * for new lifecycle hooks, but optional when updating existing hooks.</p>
     */
    inline PutLifecycleHookRequest& WithLifecycleTransition(const char* value) { SetLifecycleTransition(value); return *this;}


    /**
     * <p>The ARN of the IAM role that allows the Auto Scaling group to publish to the
     * specified notification target.</p> <p>Valid only if the notification target is
     * an Amazon SNS topic or an Amazon SQS queue. Required for new lifecycle hooks,
     * but optional when updating existing hooks.</p>
     */
    inline const Aws::String& GetRoleARN() const{ return m_roleARN; }

    /**
     * <p>The ARN of the IAM role that allows the Auto Scaling group to publish to the
     * specified notification target.</p> <p>Valid only if the notification target is
     * an Amazon SNS topic or an Amazon SQS queue. Required for new lifecycle hooks,
     * but optional when updating existing hooks.</p>
     */
    inline bool RoleARNHasBeenSet() const { return m_roleARNHasBeenSet; }

    /**
     * <p>The ARN of the IAM role that allows the Auto Scaling group to publish to the
     * specified notification target.</p> <p>Valid only if the notification target is
     * an Amazon SNS topic or an Amazon SQS queue. Required for new lifecycle hooks,
     * but optional when updating existing hooks.</p>
     */
    inline void SetRoleARN(const Aws::String& value) { m_roleARNHasBeenSet = true; m_roleARN = value; }

    /**
     * <p>The ARN of the IAM role that allows the Auto Scaling group to publish to the
     * specified notification target.</p> <p>Valid only if the notification target is
     * an Amazon SNS topic or an Amazon SQS queue. Required for new lifecycle hooks,
     * but optional when updating existing hooks.</p>
     */
    inline void SetRoleARN(Aws::String&& value) { m_roleARNHasBeenSet = true; m_roleARN = std::move(value); }

    /**
     * <p>The ARN of the IAM role that allows the Auto Scaling group to publish to the
     * specified notification target.</p> <p>Valid only if the notification target is
     * an Amazon SNS topic or an Amazon SQS queue. Required for new lifecycle hooks,
     * but optional when updating existing hooks.</p>
     */
    inline void SetRoleARN(const char* value) { m_roleARNHasBeenSet = true; m_roleARN.assign(value); }

    /**
     * <p>The ARN of the IAM role that allows the Auto Scaling group to publish to the
     * specified notification target.</p> <p>Valid only if the notification target is
     * an Amazon SNS topic or an Amazon SQS queue. Required for new lifecycle hooks,
     * but optional when updating existing hooks.</p>
     */
    inline PutLifecycleHookRequest& WithRoleARN(const Aws::String& value) { SetRoleARN(value); return *this;}

    /**
     * <p>The ARN of the IAM role that allows the Auto Scaling group to publish to the
     * specified notification target.</p> <p>Valid only if the notification target is
     * an Amazon SNS topic or an Amazon SQS queue. Required for new lifecycle hooks,
     * but optional when updating existing hooks.</p>
     */
    inline PutLifecycleHookRequest& WithRoleARN(Aws::String&& value) { SetRoleARN(std::move(value)); return *this;}

    /**
     * <p>The ARN of the IAM role that allows the Auto Scaling group to publish to the
     * specified notification target.</p> <p>Valid only if the notification target is
     * an Amazon SNS topic or an Amazon SQS queue. Required for new lifecycle hooks,
     * but optional when updating existing hooks.</p>
     */
    inline PutLifecycleHookRequest& WithRoleARN(const char* value) { SetRoleARN(value); return *this;}


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
    inline const Aws::String& GetNotificationTargetARN() const{ return m_notificationTargetARN; }

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
    inline bool NotificationTargetARNHasBeenSet() const { return m_notificationTargetARNHasBeenSet; }

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
    inline void SetNotificationTargetARN(const Aws::String& value) { m_notificationTargetARNHasBeenSet = true; m_notificationTargetARN = value; }

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
    inline void SetNotificationTargetARN(Aws::String&& value) { m_notificationTargetARNHasBeenSet = true; m_notificationTargetARN = std::move(value); }

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
    inline void SetNotificationTargetARN(const char* value) { m_notificationTargetARNHasBeenSet = true; m_notificationTargetARN.assign(value); }

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
    inline PutLifecycleHookRequest& WithNotificationTargetARN(const Aws::String& value) { SetNotificationTargetARN(value); return *this;}

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
    inline PutLifecycleHookRequest& WithNotificationTargetARN(Aws::String&& value) { SetNotificationTargetARN(std::move(value)); return *this;}

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
    inline PutLifecycleHookRequest& WithNotificationTargetARN(const char* value) { SetNotificationTargetARN(value); return *this;}


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
    inline PutLifecycleHookRequest& WithNotificationMetadata(const Aws::String& value) { SetNotificationMetadata(value); return *this;}

    /**
     * <p>Additional information that you want to include any time Amazon EC2 Auto
     * Scaling sends a message to the notification target.</p>
     */
    inline PutLifecycleHookRequest& WithNotificationMetadata(Aws::String&& value) { SetNotificationMetadata(std::move(value)); return *this;}

    /**
     * <p>Additional information that you want to include any time Amazon EC2 Auto
     * Scaling sends a message to the notification target.</p>
     */
    inline PutLifecycleHookRequest& WithNotificationMetadata(const char* value) { SetNotificationMetadata(value); return *this;}


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
    inline PutLifecycleHookRequest& WithHeartbeatTimeout(int value) { SetHeartbeatTimeout(value); return *this;}


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
    inline PutLifecycleHookRequest& WithDefaultResult(const Aws::String& value) { SetDefaultResult(value); return *this;}

    /**
     * <p>The action the Auto Scaling group takes when the lifecycle hook timeout
     * elapses or if an unexpected failure occurs. The default value is
     * <code>ABANDON</code>.</p> <p>Valid values: <code>CONTINUE</code> |
     * <code>ABANDON</code> </p>
     */
    inline PutLifecycleHookRequest& WithDefaultResult(Aws::String&& value) { SetDefaultResult(std::move(value)); return *this;}

    /**
     * <p>The action the Auto Scaling group takes when the lifecycle hook timeout
     * elapses or if an unexpected failure occurs. The default value is
     * <code>ABANDON</code>.</p> <p>Valid values: <code>CONTINUE</code> |
     * <code>ABANDON</code> </p>
     */
    inline PutLifecycleHookRequest& WithDefaultResult(const char* value) { SetDefaultResult(value); return *this;}

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

    int m_heartbeatTimeout;
    bool m_heartbeatTimeoutHasBeenSet = false;

    Aws::String m_defaultResult;
    bool m_defaultResultHasBeenSet = false;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
