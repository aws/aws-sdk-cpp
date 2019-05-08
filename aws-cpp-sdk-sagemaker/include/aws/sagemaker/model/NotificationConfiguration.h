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
   * <p>Configures SNS notifications of available or expiring work items for work
   * teams.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/NotificationConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_SAGEMAKER_API NotificationConfiguration
  {
  public:
    NotificationConfiguration();
    NotificationConfiguration(Aws::Utils::Json::JsonView jsonValue);
    NotificationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN for the SNS topic to which notifications should be published.</p>
     */
    inline const Aws::String& GetNotificationTopicArn() const{ return m_notificationTopicArn; }

    /**
     * <p>The ARN for the SNS topic to which notifications should be published.</p>
     */
    inline bool NotificationTopicArnHasBeenSet() const { return m_notificationTopicArnHasBeenSet; }

    /**
     * <p>The ARN for the SNS topic to which notifications should be published.</p>
     */
    inline void SetNotificationTopicArn(const Aws::String& value) { m_notificationTopicArnHasBeenSet = true; m_notificationTopicArn = value; }

    /**
     * <p>The ARN for the SNS topic to which notifications should be published.</p>
     */
    inline void SetNotificationTopicArn(Aws::String&& value) { m_notificationTopicArnHasBeenSet = true; m_notificationTopicArn = std::move(value); }

    /**
     * <p>The ARN for the SNS topic to which notifications should be published.</p>
     */
    inline void SetNotificationTopicArn(const char* value) { m_notificationTopicArnHasBeenSet = true; m_notificationTopicArn.assign(value); }

    /**
     * <p>The ARN for the SNS topic to which notifications should be published.</p>
     */
    inline NotificationConfiguration& WithNotificationTopicArn(const Aws::String& value) { SetNotificationTopicArn(value); return *this;}

    /**
     * <p>The ARN for the SNS topic to which notifications should be published.</p>
     */
    inline NotificationConfiguration& WithNotificationTopicArn(Aws::String&& value) { SetNotificationTopicArn(std::move(value)); return *this;}

    /**
     * <p>The ARN for the SNS topic to which notifications should be published.</p>
     */
    inline NotificationConfiguration& WithNotificationTopicArn(const char* value) { SetNotificationTopicArn(value); return *this;}

  private:

    Aws::String m_notificationTopicArn;
    bool m_notificationTopicArnHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
