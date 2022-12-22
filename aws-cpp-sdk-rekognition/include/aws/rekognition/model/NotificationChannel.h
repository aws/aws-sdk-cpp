/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * information, see <a
   * href="https://docs.aws.amazon.com/rekognition/latest/dg/api-video.html">Calling
   * Amazon Rekognition Video operations</a>. Note that the Amazon SNS topic must
   * have a topic name that begins with <i>AmazonRekognition</i> if you are using the
   * AmazonRekognitionServiceRole permissions policy to access the topic. For more
   * information, see <a
   * href="https://docs.aws.amazon.com/rekognition/latest/dg/api-video-roles.html#api-video-roles-all-topics">Giving
   * access to multiple Amazon SNS topics</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/NotificationChannel">AWS
   * API Reference</a></p>
   */
  class NotificationChannel
  {
  public:
    AWS_REKOGNITION_API NotificationChannel();
    AWS_REKOGNITION_API NotificationChannel(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API NotificationChannel& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon SNS topic to which Amazon Rekognition posts the completion
     * status.</p>
     */
    inline const Aws::String& GetSNSTopicArn() const{ return m_sNSTopicArn; }

    /**
     * <p>The Amazon SNS topic to which Amazon Rekognition posts the completion
     * status.</p>
     */
    inline bool SNSTopicArnHasBeenSet() const { return m_sNSTopicArnHasBeenSet; }

    /**
     * <p>The Amazon SNS topic to which Amazon Rekognition posts the completion
     * status.</p>
     */
    inline void SetSNSTopicArn(const Aws::String& value) { m_sNSTopicArnHasBeenSet = true; m_sNSTopicArn = value; }

    /**
     * <p>The Amazon SNS topic to which Amazon Rekognition posts the completion
     * status.</p>
     */
    inline void SetSNSTopicArn(Aws::String&& value) { m_sNSTopicArnHasBeenSet = true; m_sNSTopicArn = std::move(value); }

    /**
     * <p>The Amazon SNS topic to which Amazon Rekognition posts the completion
     * status.</p>
     */
    inline void SetSNSTopicArn(const char* value) { m_sNSTopicArnHasBeenSet = true; m_sNSTopicArn.assign(value); }

    /**
     * <p>The Amazon SNS topic to which Amazon Rekognition posts the completion
     * status.</p>
     */
    inline NotificationChannel& WithSNSTopicArn(const Aws::String& value) { SetSNSTopicArn(value); return *this;}

    /**
     * <p>The Amazon SNS topic to which Amazon Rekognition posts the completion
     * status.</p>
     */
    inline NotificationChannel& WithSNSTopicArn(Aws::String&& value) { SetSNSTopicArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon SNS topic to which Amazon Rekognition posts the completion
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
    bool m_sNSTopicArnHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
