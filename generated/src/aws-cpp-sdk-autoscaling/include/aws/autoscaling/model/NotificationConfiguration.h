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
   * <p>Describes a notification.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/NotificationConfiguration">AWS
   * API Reference</a></p>
   */
  class NotificationConfiguration
  {
  public:
    AWS_AUTOSCALING_API NotificationConfiguration();
    AWS_AUTOSCALING_API NotificationConfiguration(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_AUTOSCALING_API NotificationConfiguration& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The name of the Auto Scaling group.</p>
     */
    inline const Aws::String& GetAutoScalingGroupName() const{ return m_autoScalingGroupName; }
    inline bool AutoScalingGroupNameHasBeenSet() const { return m_autoScalingGroupNameHasBeenSet; }
    inline void SetAutoScalingGroupName(const Aws::String& value) { m_autoScalingGroupNameHasBeenSet = true; m_autoScalingGroupName = value; }
    inline void SetAutoScalingGroupName(Aws::String&& value) { m_autoScalingGroupNameHasBeenSet = true; m_autoScalingGroupName = std::move(value); }
    inline void SetAutoScalingGroupName(const char* value) { m_autoScalingGroupNameHasBeenSet = true; m_autoScalingGroupName.assign(value); }
    inline NotificationConfiguration& WithAutoScalingGroupName(const Aws::String& value) { SetAutoScalingGroupName(value); return *this;}
    inline NotificationConfiguration& WithAutoScalingGroupName(Aws::String&& value) { SetAutoScalingGroupName(std::move(value)); return *this;}
    inline NotificationConfiguration& WithAutoScalingGroupName(const char* value) { SetAutoScalingGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic.</p>
     */
    inline const Aws::String& GetTopicARN() const{ return m_topicARN; }
    inline bool TopicARNHasBeenSet() const { return m_topicARNHasBeenSet; }
    inline void SetTopicARN(const Aws::String& value) { m_topicARNHasBeenSet = true; m_topicARN = value; }
    inline void SetTopicARN(Aws::String&& value) { m_topicARNHasBeenSet = true; m_topicARN = std::move(value); }
    inline void SetTopicARN(const char* value) { m_topicARNHasBeenSet = true; m_topicARN.assign(value); }
    inline NotificationConfiguration& WithTopicARN(const Aws::String& value) { SetTopicARN(value); return *this;}
    inline NotificationConfiguration& WithTopicARN(Aws::String&& value) { SetTopicARN(std::move(value)); return *this;}
    inline NotificationConfiguration& WithTopicARN(const char* value) { SetTopicARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>One of the following event notification types:</p> <ul> <li> <p>
     * <code>autoscaling:EC2_INSTANCE_LAUNCH</code> </p> </li> <li> <p>
     * <code>autoscaling:EC2_INSTANCE_LAUNCH_ERROR</code> </p> </li> <li> <p>
     * <code>autoscaling:EC2_INSTANCE_TERMINATE</code> </p> </li> <li> <p>
     * <code>autoscaling:EC2_INSTANCE_TERMINATE_ERROR</code> </p> </li> <li> <p>
     * <code>autoscaling:TEST_NOTIFICATION</code> </p> </li> </ul>
     */
    inline const Aws::String& GetNotificationType() const{ return m_notificationType; }
    inline bool NotificationTypeHasBeenSet() const { return m_notificationTypeHasBeenSet; }
    inline void SetNotificationType(const Aws::String& value) { m_notificationTypeHasBeenSet = true; m_notificationType = value; }
    inline void SetNotificationType(Aws::String&& value) { m_notificationTypeHasBeenSet = true; m_notificationType = std::move(value); }
    inline void SetNotificationType(const char* value) { m_notificationTypeHasBeenSet = true; m_notificationType.assign(value); }
    inline NotificationConfiguration& WithNotificationType(const Aws::String& value) { SetNotificationType(value); return *this;}
    inline NotificationConfiguration& WithNotificationType(Aws::String&& value) { SetNotificationType(std::move(value)); return *this;}
    inline NotificationConfiguration& WithNotificationType(const char* value) { SetNotificationType(value); return *this;}
    ///@}
  private:

    Aws::String m_autoScalingGroupName;
    bool m_autoScalingGroupNameHasBeenSet = false;

    Aws::String m_topicARN;
    bool m_topicARNHasBeenSet = false;

    Aws::String m_notificationType;
    bool m_notificationTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
