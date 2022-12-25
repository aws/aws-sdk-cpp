/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SageMaker
{
namespace Model
{

  /**
   * <p>Configures Amazon SNS notifications of available or expiring work items for
   * work teams.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/NotificationConfiguration">AWS
   * API Reference</a></p>
   */
  class NotificationConfiguration
  {
  public:
    AWS_SAGEMAKER_API NotificationConfiguration();
    AWS_SAGEMAKER_API NotificationConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API NotificationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN for the Amazon SNS topic to which notifications should be
     * published.</p>
     */
    inline const Aws::String& GetNotificationTopicArn() const{ return m_notificationTopicArn; }

    /**
     * <p>The ARN for the Amazon SNS topic to which notifications should be
     * published.</p>
     */
    inline bool NotificationTopicArnHasBeenSet() const { return m_notificationTopicArnHasBeenSet; }

    /**
     * <p>The ARN for the Amazon SNS topic to which notifications should be
     * published.</p>
     */
    inline void SetNotificationTopicArn(const Aws::String& value) { m_notificationTopicArnHasBeenSet = true; m_notificationTopicArn = value; }

    /**
     * <p>The ARN for the Amazon SNS topic to which notifications should be
     * published.</p>
     */
    inline void SetNotificationTopicArn(Aws::String&& value) { m_notificationTopicArnHasBeenSet = true; m_notificationTopicArn = std::move(value); }

    /**
     * <p>The ARN for the Amazon SNS topic to which notifications should be
     * published.</p>
     */
    inline void SetNotificationTopicArn(const char* value) { m_notificationTopicArnHasBeenSet = true; m_notificationTopicArn.assign(value); }

    /**
     * <p>The ARN for the Amazon SNS topic to which notifications should be
     * published.</p>
     */
    inline NotificationConfiguration& WithNotificationTopicArn(const Aws::String& value) { SetNotificationTopicArn(value); return *this;}

    /**
     * <p>The ARN for the Amazon SNS topic to which notifications should be
     * published.</p>
     */
    inline NotificationConfiguration& WithNotificationTopicArn(Aws::String&& value) { SetNotificationTopicArn(std::move(value)); return *this;}

    /**
     * <p>The ARN for the Amazon SNS topic to which notifications should be
     * published.</p>
     */
    inline NotificationConfiguration& WithNotificationTopicArn(const char* value) { SetNotificationTopicArn(value); return *this;}

  private:

    Aws::String m_notificationTopicArn;
    bool m_notificationTopicArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
