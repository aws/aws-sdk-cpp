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
   * <p>Describes a notification.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/NotificationConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_AUTOSCALING_API NotificationConfiguration
  {
  public:
    NotificationConfiguration();
    NotificationConfiguration(const Aws::Utils::Xml::XmlNode& xmlNode);
    NotificationConfiguration& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


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
    inline NotificationConfiguration& WithAutoScalingGroupName(const Aws::String& value) { SetAutoScalingGroupName(value); return *this;}

    /**
     * <p>The name of the Auto Scaling group.</p>
     */
    inline NotificationConfiguration& WithAutoScalingGroupName(Aws::String&& value) { SetAutoScalingGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the Auto Scaling group.</p>
     */
    inline NotificationConfiguration& WithAutoScalingGroupName(const char* value) { SetAutoScalingGroupName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Simple Notification Service
     * (Amazon SNS) topic.</p>
     */
    inline const Aws::String& GetTopicARN() const{ return m_topicARN; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Simple Notification Service
     * (Amazon SNS) topic.</p>
     */
    inline bool TopicARNHasBeenSet() const { return m_topicARNHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Simple Notification Service
     * (Amazon SNS) topic.</p>
     */
    inline void SetTopicARN(const Aws::String& value) { m_topicARNHasBeenSet = true; m_topicARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Simple Notification Service
     * (Amazon SNS) topic.</p>
     */
    inline void SetTopicARN(Aws::String&& value) { m_topicARNHasBeenSet = true; m_topicARN = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Simple Notification Service
     * (Amazon SNS) topic.</p>
     */
    inline void SetTopicARN(const char* value) { m_topicARNHasBeenSet = true; m_topicARN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Simple Notification Service
     * (Amazon SNS) topic.</p>
     */
    inline NotificationConfiguration& WithTopicARN(const Aws::String& value) { SetTopicARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Simple Notification Service
     * (Amazon SNS) topic.</p>
     */
    inline NotificationConfiguration& WithTopicARN(Aws::String&& value) { SetTopicARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Simple Notification Service
     * (Amazon SNS) topic.</p>
     */
    inline NotificationConfiguration& WithTopicARN(const char* value) { SetTopicARN(value); return *this;}


    /**
     * <p>One of the following event notification types:</p> <ul> <li> <p>
     * <code>autoscaling:EC2_INSTANCE_LAUNCH</code> </p> </li> <li> <p>
     * <code>autoscaling:EC2_INSTANCE_LAUNCH_ERROR</code> </p> </li> <li> <p>
     * <code>autoscaling:EC2_INSTANCE_TERMINATE</code> </p> </li> <li> <p>
     * <code>autoscaling:EC2_INSTANCE_TERMINATE_ERROR</code> </p> </li> <li> <p>
     * <code>autoscaling:TEST_NOTIFICATION</code> </p> </li> </ul>
     */
    inline const Aws::String& GetNotificationType() const{ return m_notificationType; }

    /**
     * <p>One of the following event notification types:</p> <ul> <li> <p>
     * <code>autoscaling:EC2_INSTANCE_LAUNCH</code> </p> </li> <li> <p>
     * <code>autoscaling:EC2_INSTANCE_LAUNCH_ERROR</code> </p> </li> <li> <p>
     * <code>autoscaling:EC2_INSTANCE_TERMINATE</code> </p> </li> <li> <p>
     * <code>autoscaling:EC2_INSTANCE_TERMINATE_ERROR</code> </p> </li> <li> <p>
     * <code>autoscaling:TEST_NOTIFICATION</code> </p> </li> </ul>
     */
    inline bool NotificationTypeHasBeenSet() const { return m_notificationTypeHasBeenSet; }

    /**
     * <p>One of the following event notification types:</p> <ul> <li> <p>
     * <code>autoscaling:EC2_INSTANCE_LAUNCH</code> </p> </li> <li> <p>
     * <code>autoscaling:EC2_INSTANCE_LAUNCH_ERROR</code> </p> </li> <li> <p>
     * <code>autoscaling:EC2_INSTANCE_TERMINATE</code> </p> </li> <li> <p>
     * <code>autoscaling:EC2_INSTANCE_TERMINATE_ERROR</code> </p> </li> <li> <p>
     * <code>autoscaling:TEST_NOTIFICATION</code> </p> </li> </ul>
     */
    inline void SetNotificationType(const Aws::String& value) { m_notificationTypeHasBeenSet = true; m_notificationType = value; }

    /**
     * <p>One of the following event notification types:</p> <ul> <li> <p>
     * <code>autoscaling:EC2_INSTANCE_LAUNCH</code> </p> </li> <li> <p>
     * <code>autoscaling:EC2_INSTANCE_LAUNCH_ERROR</code> </p> </li> <li> <p>
     * <code>autoscaling:EC2_INSTANCE_TERMINATE</code> </p> </li> <li> <p>
     * <code>autoscaling:EC2_INSTANCE_TERMINATE_ERROR</code> </p> </li> <li> <p>
     * <code>autoscaling:TEST_NOTIFICATION</code> </p> </li> </ul>
     */
    inline void SetNotificationType(Aws::String&& value) { m_notificationTypeHasBeenSet = true; m_notificationType = std::move(value); }

    /**
     * <p>One of the following event notification types:</p> <ul> <li> <p>
     * <code>autoscaling:EC2_INSTANCE_LAUNCH</code> </p> </li> <li> <p>
     * <code>autoscaling:EC2_INSTANCE_LAUNCH_ERROR</code> </p> </li> <li> <p>
     * <code>autoscaling:EC2_INSTANCE_TERMINATE</code> </p> </li> <li> <p>
     * <code>autoscaling:EC2_INSTANCE_TERMINATE_ERROR</code> </p> </li> <li> <p>
     * <code>autoscaling:TEST_NOTIFICATION</code> </p> </li> </ul>
     */
    inline void SetNotificationType(const char* value) { m_notificationTypeHasBeenSet = true; m_notificationType.assign(value); }

    /**
     * <p>One of the following event notification types:</p> <ul> <li> <p>
     * <code>autoscaling:EC2_INSTANCE_LAUNCH</code> </p> </li> <li> <p>
     * <code>autoscaling:EC2_INSTANCE_LAUNCH_ERROR</code> </p> </li> <li> <p>
     * <code>autoscaling:EC2_INSTANCE_TERMINATE</code> </p> </li> <li> <p>
     * <code>autoscaling:EC2_INSTANCE_TERMINATE_ERROR</code> </p> </li> <li> <p>
     * <code>autoscaling:TEST_NOTIFICATION</code> </p> </li> </ul>
     */
    inline NotificationConfiguration& WithNotificationType(const Aws::String& value) { SetNotificationType(value); return *this;}

    /**
     * <p>One of the following event notification types:</p> <ul> <li> <p>
     * <code>autoscaling:EC2_INSTANCE_LAUNCH</code> </p> </li> <li> <p>
     * <code>autoscaling:EC2_INSTANCE_LAUNCH_ERROR</code> </p> </li> <li> <p>
     * <code>autoscaling:EC2_INSTANCE_TERMINATE</code> </p> </li> <li> <p>
     * <code>autoscaling:EC2_INSTANCE_TERMINATE_ERROR</code> </p> </li> <li> <p>
     * <code>autoscaling:TEST_NOTIFICATION</code> </p> </li> </ul>
     */
    inline NotificationConfiguration& WithNotificationType(Aws::String&& value) { SetNotificationType(std::move(value)); return *this;}

    /**
     * <p>One of the following event notification types:</p> <ul> <li> <p>
     * <code>autoscaling:EC2_INSTANCE_LAUNCH</code> </p> </li> <li> <p>
     * <code>autoscaling:EC2_INSTANCE_LAUNCH_ERROR</code> </p> </li> <li> <p>
     * <code>autoscaling:EC2_INSTANCE_TERMINATE</code> </p> </li> <li> <p>
     * <code>autoscaling:EC2_INSTANCE_TERMINATE_ERROR</code> </p> </li> <li> <p>
     * <code>autoscaling:TEST_NOTIFICATION</code> </p> </li> </ul>
     */
    inline NotificationConfiguration& WithNotificationType(const char* value) { SetNotificationType(value); return *this;}

  private:

    Aws::String m_autoScalingGroupName;
    bool m_autoScalingGroupNameHasBeenSet;

    Aws::String m_topicARN;
    bool m_topicARNHasBeenSet;

    Aws::String m_notificationType;
    bool m_notificationTypeHasBeenSet;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
