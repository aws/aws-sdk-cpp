/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-meetings/ChimeSDKMeetings_EXPORTS.h>
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
namespace ChimeSDKMeetings
{
namespace Model
{

  /**
   * <p>The configuration for resource targets to receive notifications when meeting
   * and attendee events occur.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-meetings-2021-07-15/NotificationsConfiguration">AWS
   * API Reference</a></p>
   */
  class NotificationsConfiguration
  {
  public:
    AWS_CHIMESDKMEETINGS_API NotificationsConfiguration();
    AWS_CHIMESDKMEETINGS_API NotificationsConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEETINGS_API NotificationsConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEETINGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of the AWS Lambda function in the notifications configuration.</p>
     */
    inline const Aws::String& GetLambdaFunctionArn() const{ return m_lambdaFunctionArn; }

    /**
     * <p>The ARN of the AWS Lambda function in the notifications configuration.</p>
     */
    inline bool LambdaFunctionArnHasBeenSet() const { return m_lambdaFunctionArnHasBeenSet; }

    /**
     * <p>The ARN of the AWS Lambda function in the notifications configuration.</p>
     */
    inline void SetLambdaFunctionArn(const Aws::String& value) { m_lambdaFunctionArnHasBeenSet = true; m_lambdaFunctionArn = value; }

    /**
     * <p>The ARN of the AWS Lambda function in the notifications configuration.</p>
     */
    inline void SetLambdaFunctionArn(Aws::String&& value) { m_lambdaFunctionArnHasBeenSet = true; m_lambdaFunctionArn = std::move(value); }

    /**
     * <p>The ARN of the AWS Lambda function in the notifications configuration.</p>
     */
    inline void SetLambdaFunctionArn(const char* value) { m_lambdaFunctionArnHasBeenSet = true; m_lambdaFunctionArn.assign(value); }

    /**
     * <p>The ARN of the AWS Lambda function in the notifications configuration.</p>
     */
    inline NotificationsConfiguration& WithLambdaFunctionArn(const Aws::String& value) { SetLambdaFunctionArn(value); return *this;}

    /**
     * <p>The ARN of the AWS Lambda function in the notifications configuration.</p>
     */
    inline NotificationsConfiguration& WithLambdaFunctionArn(Aws::String&& value) { SetLambdaFunctionArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the AWS Lambda function in the notifications configuration.</p>
     */
    inline NotificationsConfiguration& WithLambdaFunctionArn(const char* value) { SetLambdaFunctionArn(value); return *this;}


    /**
     * <p>The ARN of the SNS topic.</p>
     */
    inline const Aws::String& GetSnsTopicArn() const{ return m_snsTopicArn; }

    /**
     * <p>The ARN of the SNS topic.</p>
     */
    inline bool SnsTopicArnHasBeenSet() const { return m_snsTopicArnHasBeenSet; }

    /**
     * <p>The ARN of the SNS topic.</p>
     */
    inline void SetSnsTopicArn(const Aws::String& value) { m_snsTopicArnHasBeenSet = true; m_snsTopicArn = value; }

    /**
     * <p>The ARN of the SNS topic.</p>
     */
    inline void SetSnsTopicArn(Aws::String&& value) { m_snsTopicArnHasBeenSet = true; m_snsTopicArn = std::move(value); }

    /**
     * <p>The ARN of the SNS topic.</p>
     */
    inline void SetSnsTopicArn(const char* value) { m_snsTopicArnHasBeenSet = true; m_snsTopicArn.assign(value); }

    /**
     * <p>The ARN of the SNS topic.</p>
     */
    inline NotificationsConfiguration& WithSnsTopicArn(const Aws::String& value) { SetSnsTopicArn(value); return *this;}

    /**
     * <p>The ARN of the SNS topic.</p>
     */
    inline NotificationsConfiguration& WithSnsTopicArn(Aws::String&& value) { SetSnsTopicArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the SNS topic.</p>
     */
    inline NotificationsConfiguration& WithSnsTopicArn(const char* value) { SetSnsTopicArn(value); return *this;}


    /**
     * <p>The ARN of the SQS queue.</p>
     */
    inline const Aws::String& GetSqsQueueArn() const{ return m_sqsQueueArn; }

    /**
     * <p>The ARN of the SQS queue.</p>
     */
    inline bool SqsQueueArnHasBeenSet() const { return m_sqsQueueArnHasBeenSet; }

    /**
     * <p>The ARN of the SQS queue.</p>
     */
    inline void SetSqsQueueArn(const Aws::String& value) { m_sqsQueueArnHasBeenSet = true; m_sqsQueueArn = value; }

    /**
     * <p>The ARN of the SQS queue.</p>
     */
    inline void SetSqsQueueArn(Aws::String&& value) { m_sqsQueueArnHasBeenSet = true; m_sqsQueueArn = std::move(value); }

    /**
     * <p>The ARN of the SQS queue.</p>
     */
    inline void SetSqsQueueArn(const char* value) { m_sqsQueueArnHasBeenSet = true; m_sqsQueueArn.assign(value); }

    /**
     * <p>The ARN of the SQS queue.</p>
     */
    inline NotificationsConfiguration& WithSqsQueueArn(const Aws::String& value) { SetSqsQueueArn(value); return *this;}

    /**
     * <p>The ARN of the SQS queue.</p>
     */
    inline NotificationsConfiguration& WithSqsQueueArn(Aws::String&& value) { SetSqsQueueArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the SQS queue.</p>
     */
    inline NotificationsConfiguration& WithSqsQueueArn(const char* value) { SetSqsQueueArn(value); return *this;}

  private:

    Aws::String m_lambdaFunctionArn;
    bool m_lambdaFunctionArnHasBeenSet = false;

    Aws::String m_snsTopicArn;
    bool m_snsTopicArnHasBeenSet = false;

    Aws::String m_sqsQueueArn;
    bool m_sqsQueueArnHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMeetings
} // namespace Aws
