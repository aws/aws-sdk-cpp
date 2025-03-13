/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/autoscaling/AutoScalingRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace AutoScaling
{
namespace Model
{

  /**
   */
  class PutNotificationConfigurationRequest : public AutoScalingRequest
  {
  public:
    AWS_AUTOSCALING_API PutNotificationConfigurationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutNotificationConfiguration"; }

    AWS_AUTOSCALING_API Aws::String SerializePayload() const override;

  protected:
    AWS_AUTOSCALING_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The name of the Auto Scaling group.</p>
     */
    inline const Aws::String& GetAutoScalingGroupName() const { return m_autoScalingGroupName; }
    inline bool AutoScalingGroupNameHasBeenSet() const { return m_autoScalingGroupNameHasBeenSet; }
    template<typename AutoScalingGroupNameT = Aws::String>
    void SetAutoScalingGroupName(AutoScalingGroupNameT&& value) { m_autoScalingGroupNameHasBeenSet = true; m_autoScalingGroupName = std::forward<AutoScalingGroupNameT>(value); }
    template<typename AutoScalingGroupNameT = Aws::String>
    PutNotificationConfigurationRequest& WithAutoScalingGroupName(AutoScalingGroupNameT&& value) { SetAutoScalingGroupName(std::forward<AutoScalingGroupNameT>(value)); return *this;}
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
    PutNotificationConfigurationRequest& WithTopicARN(TopicARNT&& value) { SetTopicARN(std::forward<TopicARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of event that causes the notification to be sent. To query the
     * notification types supported by Amazon EC2 Auto Scaling, call the <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/APIReference/API_DescribeAutoScalingNotificationTypes.html">DescribeAutoScalingNotificationTypes</a>
     * API.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNotificationTypes() const { return m_notificationTypes; }
    inline bool NotificationTypesHasBeenSet() const { return m_notificationTypesHasBeenSet; }
    template<typename NotificationTypesT = Aws::Vector<Aws::String>>
    void SetNotificationTypes(NotificationTypesT&& value) { m_notificationTypesHasBeenSet = true; m_notificationTypes = std::forward<NotificationTypesT>(value); }
    template<typename NotificationTypesT = Aws::Vector<Aws::String>>
    PutNotificationConfigurationRequest& WithNotificationTypes(NotificationTypesT&& value) { SetNotificationTypes(std::forward<NotificationTypesT>(value)); return *this;}
    template<typename NotificationTypesT = Aws::String>
    PutNotificationConfigurationRequest& AddNotificationTypes(NotificationTypesT&& value) { m_notificationTypesHasBeenSet = true; m_notificationTypes.emplace_back(std::forward<NotificationTypesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_autoScalingGroupName;
    bool m_autoScalingGroupNameHasBeenSet = false;

    Aws::String m_topicARN;
    bool m_topicARNHasBeenSet = false;

    Aws::Vector<Aws::String> m_notificationTypes;
    bool m_notificationTypesHasBeenSet = false;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
