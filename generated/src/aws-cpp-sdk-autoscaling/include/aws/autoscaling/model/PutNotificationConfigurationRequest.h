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
    AWS_AUTOSCALING_API PutNotificationConfigurationRequest();

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
    inline const Aws::String& GetAutoScalingGroupName() const{ return m_autoScalingGroupName; }
    inline bool AutoScalingGroupNameHasBeenSet() const { return m_autoScalingGroupNameHasBeenSet; }
    inline void SetAutoScalingGroupName(const Aws::String& value) { m_autoScalingGroupNameHasBeenSet = true; m_autoScalingGroupName = value; }
    inline void SetAutoScalingGroupName(Aws::String&& value) { m_autoScalingGroupNameHasBeenSet = true; m_autoScalingGroupName = std::move(value); }
    inline void SetAutoScalingGroupName(const char* value) { m_autoScalingGroupNameHasBeenSet = true; m_autoScalingGroupName.assign(value); }
    inline PutNotificationConfigurationRequest& WithAutoScalingGroupName(const Aws::String& value) { SetAutoScalingGroupName(value); return *this;}
    inline PutNotificationConfigurationRequest& WithAutoScalingGroupName(Aws::String&& value) { SetAutoScalingGroupName(std::move(value)); return *this;}
    inline PutNotificationConfigurationRequest& WithAutoScalingGroupName(const char* value) { SetAutoScalingGroupName(value); return *this;}
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
    inline PutNotificationConfigurationRequest& WithTopicARN(const Aws::String& value) { SetTopicARN(value); return *this;}
    inline PutNotificationConfigurationRequest& WithTopicARN(Aws::String&& value) { SetTopicARN(std::move(value)); return *this;}
    inline PutNotificationConfigurationRequest& WithTopicARN(const char* value) { SetTopicARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of event that causes the notification to be sent. To query the
     * notification types supported by Amazon EC2 Auto Scaling, call the <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/APIReference/API_DescribeAutoScalingNotificationTypes.html">DescribeAutoScalingNotificationTypes</a>
     * API.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNotificationTypes() const{ return m_notificationTypes; }
    inline bool NotificationTypesHasBeenSet() const { return m_notificationTypesHasBeenSet; }
    inline void SetNotificationTypes(const Aws::Vector<Aws::String>& value) { m_notificationTypesHasBeenSet = true; m_notificationTypes = value; }
    inline void SetNotificationTypes(Aws::Vector<Aws::String>&& value) { m_notificationTypesHasBeenSet = true; m_notificationTypes = std::move(value); }
    inline PutNotificationConfigurationRequest& WithNotificationTypes(const Aws::Vector<Aws::String>& value) { SetNotificationTypes(value); return *this;}
    inline PutNotificationConfigurationRequest& WithNotificationTypes(Aws::Vector<Aws::String>&& value) { SetNotificationTypes(std::move(value)); return *this;}
    inline PutNotificationConfigurationRequest& AddNotificationTypes(const Aws::String& value) { m_notificationTypesHasBeenSet = true; m_notificationTypes.push_back(value); return *this; }
    inline PutNotificationConfigurationRequest& AddNotificationTypes(Aws::String&& value) { m_notificationTypesHasBeenSet = true; m_notificationTypes.push_back(std::move(value)); return *this; }
    inline PutNotificationConfigurationRequest& AddNotificationTypes(const char* value) { m_notificationTypesHasBeenSet = true; m_notificationTypes.push_back(value); return *this; }
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
