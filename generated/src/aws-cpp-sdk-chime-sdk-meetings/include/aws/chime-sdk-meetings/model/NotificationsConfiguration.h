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
    AWS_CHIMESDKMEETINGS_API NotificationsConfiguration() = default;
    AWS_CHIMESDKMEETINGS_API NotificationsConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEETINGS_API NotificationsConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEETINGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the Amazon Web Services Lambda function in the notifications
     * configuration.</p>
     */
    inline const Aws::String& GetLambdaFunctionArn() const { return m_lambdaFunctionArn; }
    inline bool LambdaFunctionArnHasBeenSet() const { return m_lambdaFunctionArnHasBeenSet; }
    template<typename LambdaFunctionArnT = Aws::String>
    void SetLambdaFunctionArn(LambdaFunctionArnT&& value) { m_lambdaFunctionArnHasBeenSet = true; m_lambdaFunctionArn = std::forward<LambdaFunctionArnT>(value); }
    template<typename LambdaFunctionArnT = Aws::String>
    NotificationsConfiguration& WithLambdaFunctionArn(LambdaFunctionArnT&& value) { SetLambdaFunctionArn(std::forward<LambdaFunctionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the SNS topic.</p>
     */
    inline const Aws::String& GetSnsTopicArn() const { return m_snsTopicArn; }
    inline bool SnsTopicArnHasBeenSet() const { return m_snsTopicArnHasBeenSet; }
    template<typename SnsTopicArnT = Aws::String>
    void SetSnsTopicArn(SnsTopicArnT&& value) { m_snsTopicArnHasBeenSet = true; m_snsTopicArn = std::forward<SnsTopicArnT>(value); }
    template<typename SnsTopicArnT = Aws::String>
    NotificationsConfiguration& WithSnsTopicArn(SnsTopicArnT&& value) { SetSnsTopicArn(std::forward<SnsTopicArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the SQS queue.</p>
     */
    inline const Aws::String& GetSqsQueueArn() const { return m_sqsQueueArn; }
    inline bool SqsQueueArnHasBeenSet() const { return m_sqsQueueArnHasBeenSet; }
    template<typename SqsQueueArnT = Aws::String>
    void SetSqsQueueArn(SqsQueueArnT&& value) { m_sqsQueueArnHasBeenSet = true; m_sqsQueueArn = std::forward<SqsQueueArnT>(value); }
    template<typename SqsQueueArnT = Aws::String>
    NotificationsConfiguration& WithSqsQueueArn(SqsQueueArnT&& value) { SetSqsQueueArn(std::forward<SqsQueueArnT>(value)); return *this;}
    ///@}
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
