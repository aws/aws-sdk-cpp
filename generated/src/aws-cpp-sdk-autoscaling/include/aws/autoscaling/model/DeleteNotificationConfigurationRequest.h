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
  class DeleteNotificationConfigurationRequest : public AutoScalingRequest
  {
  public:
    AWS_AUTOSCALING_API DeleteNotificationConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteNotificationConfiguration"; }

    AWS_AUTOSCALING_API Aws::String SerializePayload() const override;

  protected:
    AWS_AUTOSCALING_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

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
    inline DeleteNotificationConfigurationRequest& WithAutoScalingGroupName(const Aws::String& value) { SetAutoScalingGroupName(value); return *this;}

    /**
     * <p>The name of the Auto Scaling group.</p>
     */
    inline DeleteNotificationConfigurationRequest& WithAutoScalingGroupName(Aws::String&& value) { SetAutoScalingGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the Auto Scaling group.</p>
     */
    inline DeleteNotificationConfigurationRequest& WithAutoScalingGroupName(const char* value) { SetAutoScalingGroupName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic.</p>
     */
    inline const Aws::String& GetTopicARN() const{ return m_topicARN; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic.</p>
     */
    inline bool TopicARNHasBeenSet() const { return m_topicARNHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic.</p>
     */
    inline void SetTopicARN(const Aws::String& value) { m_topicARNHasBeenSet = true; m_topicARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic.</p>
     */
    inline void SetTopicARN(Aws::String&& value) { m_topicARNHasBeenSet = true; m_topicARN = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic.</p>
     */
    inline void SetTopicARN(const char* value) { m_topicARNHasBeenSet = true; m_topicARN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic.</p>
     */
    inline DeleteNotificationConfigurationRequest& WithTopicARN(const Aws::String& value) { SetTopicARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic.</p>
     */
    inline DeleteNotificationConfigurationRequest& WithTopicARN(Aws::String&& value) { SetTopicARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic.</p>
     */
    inline DeleteNotificationConfigurationRequest& WithTopicARN(const char* value) { SetTopicARN(value); return *this;}

  private:

    Aws::String m_autoScalingGroupName;
    bool m_autoScalingGroupNameHasBeenSet = false;

    Aws::String m_topicARN;
    bool m_topicARNHasBeenSet = false;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
