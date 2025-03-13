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
    AWS_AUTOSCALING_API NotificationConfiguration() = default;
    AWS_AUTOSCALING_API NotificationConfiguration(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_AUTOSCALING_API NotificationConfiguration& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The name of the Auto Scaling group.</p>
     */
    inline const Aws::String& GetAutoScalingGroupName() const { return m_autoScalingGroupName; }
    inline bool AutoScalingGroupNameHasBeenSet() const { return m_autoScalingGroupNameHasBeenSet; }
    template<typename AutoScalingGroupNameT = Aws::String>
    void SetAutoScalingGroupName(AutoScalingGroupNameT&& value) { m_autoScalingGroupNameHasBeenSet = true; m_autoScalingGroupName = std::forward<AutoScalingGroupNameT>(value); }
    template<typename AutoScalingGroupNameT = Aws::String>
    NotificationConfiguration& WithAutoScalingGroupName(AutoScalingGroupNameT&& value) { SetAutoScalingGroupName(std::forward<AutoScalingGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic.</p>
     */
    inline const Aws::String& GetTopicARN() const { return m_topicARN; }
    inline bool TopicARNHasBeenSet() const { return m_topicARNHasBeenSet; }
    template<typename TopicARNT = Aws::String>
    void SetTopicARN(TopicARNT&& value) { m_topicARNHasBeenSet = true; m_topicARN = std::forward<TopicARNT>(value); }
    template<typename TopicARNT = Aws::String>
    NotificationConfiguration& WithTopicARN(TopicARNT&& value) { SetTopicARN(std::forward<TopicARNT>(value)); return *this;}
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
    inline const Aws::String& GetNotificationType() const { return m_notificationType; }
    inline bool NotificationTypeHasBeenSet() const { return m_notificationTypeHasBeenSet; }
    template<typename NotificationTypeT = Aws::String>
    void SetNotificationType(NotificationTypeT&& value) { m_notificationTypeHasBeenSet = true; m_notificationType = std::forward<NotificationTypeT>(value); }
    template<typename NotificationTypeT = Aws::String>
    NotificationConfiguration& WithNotificationType(NotificationTypeT&& value) { SetNotificationType(std::forward<NotificationTypeT>(value)); return *this;}
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
