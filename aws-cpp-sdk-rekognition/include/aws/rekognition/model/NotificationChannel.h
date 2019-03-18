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
#include <aws/rekognition/Rekognition_EXPORTS.h>
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
namespace Rekognition
{
namespace Model
{

  /**
   * <p>The Amazon Simple Notification Service topic to which Amazon Rekognition
   * publishes the completion status of a video analysis operation. For more
   * information, see <a>api-video</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/NotificationChannel">AWS
   * API Reference</a></p>
   */
  class AWS_REKOGNITION_API NotificationChannel
  {
  public:
    NotificationChannel();
    NotificationChannel(Aws::Utils::Json::JsonView jsonValue);
    NotificationChannel& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon SNS topic to which Amazon Rekognition to posts the completion
     * status.</p>
     */
    inline const Aws::String& GetSNSTopicArn() const{ return m_sNSTopicArn; }

    /**
     * <p>The Amazon SNS topic to which Amazon Rekognition to posts the completion
     * status.</p>
     */
    inline bool SNSTopicArnHasBeenSet() const { return m_sNSTopicArnHasBeenSet; }

    /**
     * <p>The Amazon SNS topic to which Amazon Rekognition to posts the completion
     * status.</p>
     */
    inline void SetSNSTopicArn(const Aws::String& value) { m_sNSTopicArnHasBeenSet = true; m_sNSTopicArn = value; }

    /**
     * <p>The Amazon SNS topic to which Amazon Rekognition to posts the completion
     * status.</p>
     */
    inline void SetSNSTopicArn(Aws::String&& value) { m_sNSTopicArnHasBeenSet = true; m_sNSTopicArn = std::move(value); }

    /**
     * <p>The Amazon SNS topic to which Amazon Rekognition to posts the completion
     * status.</p>
     */
    inline void SetSNSTopicArn(const char* value) { m_sNSTopicArnHasBeenSet = true; m_sNSTopicArn.assign(value); }

    /**
     * <p>The Amazon SNS topic to which Amazon Rekognition to posts the completion
     * status.</p>
     */
    inline NotificationChannel& WithSNSTopicArn(const Aws::String& value) { SetSNSTopicArn(value); return *this;}

    /**
     * <p>The Amazon SNS topic to which Amazon Rekognition to posts the completion
     * status.</p>
     */
    inline NotificationChannel& WithSNSTopicArn(Aws::String&& value) { SetSNSTopicArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon SNS topic to which Amazon Rekognition to posts the completion
     * status.</p>
     */
    inline NotificationChannel& WithSNSTopicArn(const char* value) { SetSNSTopicArn(value); return *this;}


    /**
     * <p>The ARN of an IAM role that gives Amazon Rekognition publishing permissions
     * to the Amazon SNS topic. </p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The ARN of an IAM role that gives Amazon Rekognition publishing permissions
     * to the Amazon SNS topic. </p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The ARN of an IAM role that gives Amazon Rekognition publishing permissions
     * to the Amazon SNS topic. </p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The ARN of an IAM role that gives Amazon Rekognition publishing permissions
     * to the Amazon SNS topic. </p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The ARN of an IAM role that gives Amazon Rekognition publishing permissions
     * to the Amazon SNS topic. </p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The ARN of an IAM role that gives Amazon Rekognition publishing permissions
     * to the Amazon SNS topic. </p>
     */
    inline NotificationChannel& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The ARN of an IAM role that gives Amazon Rekognition publishing permissions
     * to the Amazon SNS topic. </p>
     */
    inline NotificationChannel& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of an IAM role that gives Amazon Rekognition publishing permissions
     * to the Amazon SNS topic. </p>
     */
    inline NotificationChannel& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}

  private:

    Aws::String m_sNSTopicArn;
    bool m_sNSTopicArnHasBeenSet;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
