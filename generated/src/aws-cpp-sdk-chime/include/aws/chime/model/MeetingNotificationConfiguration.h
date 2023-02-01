/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
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
namespace Chime
{
namespace Model
{

  /**
   * <p> The resource target configurations for receiving Amazon Chime SDK meeting
   * and attendee event notifications. The Amazon Chime SDK supports resource targets
   * located in the US East (N. Virginia) AWS Region (<code>us-east-1</code>).
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/MeetingNotificationConfiguration">AWS
   * API Reference</a></p>
   */
  class MeetingNotificationConfiguration
  {
  public:
    AWS_CHIME_API MeetingNotificationConfiguration();
    AWS_CHIME_API MeetingNotificationConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIME_API MeetingNotificationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The SNS topic ARN.</p>
     */
    inline const Aws::String& GetSnsTopicArn() const{ return m_snsTopicArn; }

    /**
     * <p>The SNS topic ARN.</p>
     */
    inline bool SnsTopicArnHasBeenSet() const { return m_snsTopicArnHasBeenSet; }

    /**
     * <p>The SNS topic ARN.</p>
     */
    inline void SetSnsTopicArn(const Aws::String& value) { m_snsTopicArnHasBeenSet = true; m_snsTopicArn = value; }

    /**
     * <p>The SNS topic ARN.</p>
     */
    inline void SetSnsTopicArn(Aws::String&& value) { m_snsTopicArnHasBeenSet = true; m_snsTopicArn = std::move(value); }

    /**
     * <p>The SNS topic ARN.</p>
     */
    inline void SetSnsTopicArn(const char* value) { m_snsTopicArnHasBeenSet = true; m_snsTopicArn.assign(value); }

    /**
     * <p>The SNS topic ARN.</p>
     */
    inline MeetingNotificationConfiguration& WithSnsTopicArn(const Aws::String& value) { SetSnsTopicArn(value); return *this;}

    /**
     * <p>The SNS topic ARN.</p>
     */
    inline MeetingNotificationConfiguration& WithSnsTopicArn(Aws::String&& value) { SetSnsTopicArn(std::move(value)); return *this;}

    /**
     * <p>The SNS topic ARN.</p>
     */
    inline MeetingNotificationConfiguration& WithSnsTopicArn(const char* value) { SetSnsTopicArn(value); return *this;}


    /**
     * <p>The SQS queue ARN.</p>
     */
    inline const Aws::String& GetSqsQueueArn() const{ return m_sqsQueueArn; }

    /**
     * <p>The SQS queue ARN.</p>
     */
    inline bool SqsQueueArnHasBeenSet() const { return m_sqsQueueArnHasBeenSet; }

    /**
     * <p>The SQS queue ARN.</p>
     */
    inline void SetSqsQueueArn(const Aws::String& value) { m_sqsQueueArnHasBeenSet = true; m_sqsQueueArn = value; }

    /**
     * <p>The SQS queue ARN.</p>
     */
    inline void SetSqsQueueArn(Aws::String&& value) { m_sqsQueueArnHasBeenSet = true; m_sqsQueueArn = std::move(value); }

    /**
     * <p>The SQS queue ARN.</p>
     */
    inline void SetSqsQueueArn(const char* value) { m_sqsQueueArnHasBeenSet = true; m_sqsQueueArn.assign(value); }

    /**
     * <p>The SQS queue ARN.</p>
     */
    inline MeetingNotificationConfiguration& WithSqsQueueArn(const Aws::String& value) { SetSqsQueueArn(value); return *this;}

    /**
     * <p>The SQS queue ARN.</p>
     */
    inline MeetingNotificationConfiguration& WithSqsQueueArn(Aws::String&& value) { SetSqsQueueArn(std::move(value)); return *this;}

    /**
     * <p>The SQS queue ARN.</p>
     */
    inline MeetingNotificationConfiguration& WithSqsQueueArn(const char* value) { SetSqsQueueArn(value); return *this;}

  private:

    Aws::String m_snsTopicArn;
    bool m_snsTopicArnHasBeenSet = false;

    Aws::String m_sqsQueueArn;
    bool m_sqsQueueArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
