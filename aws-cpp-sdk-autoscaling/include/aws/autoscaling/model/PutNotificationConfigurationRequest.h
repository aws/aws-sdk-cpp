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
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws
{
namespace AutoScaling
{
namespace Model
{

  /**
   * <p>Contains the parameters for PutNotificationConfiguration.</p>
   */
  class AWS_AUTOSCALING_API PutNotificationConfigurationRequest : public AutoScalingRequest
  {
  public:
    PutNotificationConfigurationRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The name of the Auto Scaling group.</p>
     */
    inline const Aws::String& GetAutoScalingGroupName() const{ return m_autoScalingGroupName; }

    /**
     * <p>The name of the Auto Scaling group.</p>
     */
    inline void SetAutoScalingGroupName(const Aws::String& value) { m_autoScalingGroupNameHasBeenSet = true; m_autoScalingGroupName = value; }

    /**
     * <p>The name of the Auto Scaling group.</p>
     */
    inline void SetAutoScalingGroupName(Aws::String&& value) { m_autoScalingGroupNameHasBeenSet = true; m_autoScalingGroupName = value; }

    /**
     * <p>The name of the Auto Scaling group.</p>
     */
    inline void SetAutoScalingGroupName(const char* value) { m_autoScalingGroupNameHasBeenSet = true; m_autoScalingGroupName.assign(value); }

    /**
     * <p>The name of the Auto Scaling group.</p>
     */
    inline PutNotificationConfigurationRequest& WithAutoScalingGroupName(const Aws::String& value) { SetAutoScalingGroupName(value); return *this;}

    /**
     * <p>The name of the Auto Scaling group.</p>
     */
    inline PutNotificationConfigurationRequest& WithAutoScalingGroupName(Aws::String&& value) { SetAutoScalingGroupName(value); return *this;}

    /**
     * <p>The name of the Auto Scaling group.</p>
     */
    inline PutNotificationConfigurationRequest& WithAutoScalingGroupName(const char* value) { SetAutoScalingGroupName(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Simple Notification Service
     * (SNS) topic.</p>
     */
    inline const Aws::String& GetTopicARN() const{ return m_topicARN; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Simple Notification Service
     * (SNS) topic.</p>
     */
    inline void SetTopicARN(const Aws::String& value) { m_topicARNHasBeenSet = true; m_topicARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Simple Notification Service
     * (SNS) topic.</p>
     */
    inline void SetTopicARN(Aws::String&& value) { m_topicARNHasBeenSet = true; m_topicARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Simple Notification Service
     * (SNS) topic.</p>
     */
    inline void SetTopicARN(const char* value) { m_topicARNHasBeenSet = true; m_topicARN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Simple Notification Service
     * (SNS) topic.</p>
     */
    inline PutNotificationConfigurationRequest& WithTopicARN(const Aws::String& value) { SetTopicARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Simple Notification Service
     * (SNS) topic.</p>
     */
    inline PutNotificationConfigurationRequest& WithTopicARN(Aws::String&& value) { SetTopicARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Simple Notification Service
     * (SNS) topic.</p>
     */
    inline PutNotificationConfigurationRequest& WithTopicARN(const char* value) { SetTopicARN(value); return *this;}

    /**
     * <p>The type of event that will cause the notification to be sent. For details
     * about notification types supported by Auto Scaling, see
     * <a>DescribeAutoScalingNotificationTypes</a>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNotificationTypes() const{ return m_notificationTypes; }

    /**
     * <p>The type of event that will cause the notification to be sent. For details
     * about notification types supported by Auto Scaling, see
     * <a>DescribeAutoScalingNotificationTypes</a>.</p>
     */
    inline void SetNotificationTypes(const Aws::Vector<Aws::String>& value) { m_notificationTypesHasBeenSet = true; m_notificationTypes = value; }

    /**
     * <p>The type of event that will cause the notification to be sent. For details
     * about notification types supported by Auto Scaling, see
     * <a>DescribeAutoScalingNotificationTypes</a>.</p>
     */
    inline void SetNotificationTypes(Aws::Vector<Aws::String>&& value) { m_notificationTypesHasBeenSet = true; m_notificationTypes = value; }

    /**
     * <p>The type of event that will cause the notification to be sent. For details
     * about notification types supported by Auto Scaling, see
     * <a>DescribeAutoScalingNotificationTypes</a>.</p>
     */
    inline PutNotificationConfigurationRequest& WithNotificationTypes(const Aws::Vector<Aws::String>& value) { SetNotificationTypes(value); return *this;}

    /**
     * <p>The type of event that will cause the notification to be sent. For details
     * about notification types supported by Auto Scaling, see
     * <a>DescribeAutoScalingNotificationTypes</a>.</p>
     */
    inline PutNotificationConfigurationRequest& WithNotificationTypes(Aws::Vector<Aws::String>&& value) { SetNotificationTypes(value); return *this;}

    /**
     * <p>The type of event that will cause the notification to be sent. For details
     * about notification types supported by Auto Scaling, see
     * <a>DescribeAutoScalingNotificationTypes</a>.</p>
     */
    inline PutNotificationConfigurationRequest& AddNotificationTypes(const Aws::String& value) { m_notificationTypesHasBeenSet = true; m_notificationTypes.push_back(value); return *this; }

    /**
     * <p>The type of event that will cause the notification to be sent. For details
     * about notification types supported by Auto Scaling, see
     * <a>DescribeAutoScalingNotificationTypes</a>.</p>
     */
    inline PutNotificationConfigurationRequest& AddNotificationTypes(Aws::String&& value) { m_notificationTypesHasBeenSet = true; m_notificationTypes.push_back(value); return *this; }

    /**
     * <p>The type of event that will cause the notification to be sent. For details
     * about notification types supported by Auto Scaling, see
     * <a>DescribeAutoScalingNotificationTypes</a>.</p>
     */
    inline PutNotificationConfigurationRequest& AddNotificationTypes(const char* value) { m_notificationTypesHasBeenSet = true; m_notificationTypes.push_back(value); return *this; }

  private:
    Aws::String m_autoScalingGroupName;
    bool m_autoScalingGroupNameHasBeenSet;
    Aws::String m_topicARN;
    bool m_topicARNHasBeenSet;
    Aws::Vector<Aws::String> m_notificationTypes;
    bool m_notificationTypesHasBeenSet;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
