/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalytics/KinesisAnalytics_EXPORTS.h>
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
namespace KinesisAnalytics
{
namespace Model
{

  /**
   * <p>Description of the CloudWatch logging option.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalytics-2015-08-14/CloudWatchLoggingOptionDescription">AWS
   * API Reference</a></p>
   */
  class CloudWatchLoggingOptionDescription
  {
  public:
    AWS_KINESISANALYTICS_API CloudWatchLoggingOptionDescription();
    AWS_KINESISANALYTICS_API CloudWatchLoggingOptionDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICS_API CloudWatchLoggingOptionDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>ID of the CloudWatch logging option description.</p>
     */
    inline const Aws::String& GetCloudWatchLoggingOptionId() const{ return m_cloudWatchLoggingOptionId; }

    /**
     * <p>ID of the CloudWatch logging option description.</p>
     */
    inline bool CloudWatchLoggingOptionIdHasBeenSet() const { return m_cloudWatchLoggingOptionIdHasBeenSet; }

    /**
     * <p>ID of the CloudWatch logging option description.</p>
     */
    inline void SetCloudWatchLoggingOptionId(const Aws::String& value) { m_cloudWatchLoggingOptionIdHasBeenSet = true; m_cloudWatchLoggingOptionId = value; }

    /**
     * <p>ID of the CloudWatch logging option description.</p>
     */
    inline void SetCloudWatchLoggingOptionId(Aws::String&& value) { m_cloudWatchLoggingOptionIdHasBeenSet = true; m_cloudWatchLoggingOptionId = std::move(value); }

    /**
     * <p>ID of the CloudWatch logging option description.</p>
     */
    inline void SetCloudWatchLoggingOptionId(const char* value) { m_cloudWatchLoggingOptionIdHasBeenSet = true; m_cloudWatchLoggingOptionId.assign(value); }

    /**
     * <p>ID of the CloudWatch logging option description.</p>
     */
    inline CloudWatchLoggingOptionDescription& WithCloudWatchLoggingOptionId(const Aws::String& value) { SetCloudWatchLoggingOptionId(value); return *this;}

    /**
     * <p>ID of the CloudWatch logging option description.</p>
     */
    inline CloudWatchLoggingOptionDescription& WithCloudWatchLoggingOptionId(Aws::String&& value) { SetCloudWatchLoggingOptionId(std::move(value)); return *this;}

    /**
     * <p>ID of the CloudWatch logging option description.</p>
     */
    inline CloudWatchLoggingOptionDescription& WithCloudWatchLoggingOptionId(const char* value) { SetCloudWatchLoggingOptionId(value); return *this;}


    /**
     * <p>ARN of the CloudWatch log to receive application messages.</p>
     */
    inline const Aws::String& GetLogStreamARN() const{ return m_logStreamARN; }

    /**
     * <p>ARN of the CloudWatch log to receive application messages.</p>
     */
    inline bool LogStreamARNHasBeenSet() const { return m_logStreamARNHasBeenSet; }

    /**
     * <p>ARN of the CloudWatch log to receive application messages.</p>
     */
    inline void SetLogStreamARN(const Aws::String& value) { m_logStreamARNHasBeenSet = true; m_logStreamARN = value; }

    /**
     * <p>ARN of the CloudWatch log to receive application messages.</p>
     */
    inline void SetLogStreamARN(Aws::String&& value) { m_logStreamARNHasBeenSet = true; m_logStreamARN = std::move(value); }

    /**
     * <p>ARN of the CloudWatch log to receive application messages.</p>
     */
    inline void SetLogStreamARN(const char* value) { m_logStreamARNHasBeenSet = true; m_logStreamARN.assign(value); }

    /**
     * <p>ARN of the CloudWatch log to receive application messages.</p>
     */
    inline CloudWatchLoggingOptionDescription& WithLogStreamARN(const Aws::String& value) { SetLogStreamARN(value); return *this;}

    /**
     * <p>ARN of the CloudWatch log to receive application messages.</p>
     */
    inline CloudWatchLoggingOptionDescription& WithLogStreamARN(Aws::String&& value) { SetLogStreamARN(std::move(value)); return *this;}

    /**
     * <p>ARN of the CloudWatch log to receive application messages.</p>
     */
    inline CloudWatchLoggingOptionDescription& WithLogStreamARN(const char* value) { SetLogStreamARN(value); return *this;}


    /**
     * <p>IAM ARN of the role to use to send application messages. Note: To write
     * application messages to CloudWatch, the IAM role used must have the
     * <code>PutLogEvents</code> policy action enabled.</p>
     */
    inline const Aws::String& GetRoleARN() const{ return m_roleARN; }

    /**
     * <p>IAM ARN of the role to use to send application messages. Note: To write
     * application messages to CloudWatch, the IAM role used must have the
     * <code>PutLogEvents</code> policy action enabled.</p>
     */
    inline bool RoleARNHasBeenSet() const { return m_roleARNHasBeenSet; }

    /**
     * <p>IAM ARN of the role to use to send application messages. Note: To write
     * application messages to CloudWatch, the IAM role used must have the
     * <code>PutLogEvents</code> policy action enabled.</p>
     */
    inline void SetRoleARN(const Aws::String& value) { m_roleARNHasBeenSet = true; m_roleARN = value; }

    /**
     * <p>IAM ARN of the role to use to send application messages. Note: To write
     * application messages to CloudWatch, the IAM role used must have the
     * <code>PutLogEvents</code> policy action enabled.</p>
     */
    inline void SetRoleARN(Aws::String&& value) { m_roleARNHasBeenSet = true; m_roleARN = std::move(value); }

    /**
     * <p>IAM ARN of the role to use to send application messages. Note: To write
     * application messages to CloudWatch, the IAM role used must have the
     * <code>PutLogEvents</code> policy action enabled.</p>
     */
    inline void SetRoleARN(const char* value) { m_roleARNHasBeenSet = true; m_roleARN.assign(value); }

    /**
     * <p>IAM ARN of the role to use to send application messages. Note: To write
     * application messages to CloudWatch, the IAM role used must have the
     * <code>PutLogEvents</code> policy action enabled.</p>
     */
    inline CloudWatchLoggingOptionDescription& WithRoleARN(const Aws::String& value) { SetRoleARN(value); return *this;}

    /**
     * <p>IAM ARN of the role to use to send application messages. Note: To write
     * application messages to CloudWatch, the IAM role used must have the
     * <code>PutLogEvents</code> policy action enabled.</p>
     */
    inline CloudWatchLoggingOptionDescription& WithRoleARN(Aws::String&& value) { SetRoleARN(std::move(value)); return *this;}

    /**
     * <p>IAM ARN of the role to use to send application messages. Note: To write
     * application messages to CloudWatch, the IAM role used must have the
     * <code>PutLogEvents</code> policy action enabled.</p>
     */
    inline CloudWatchLoggingOptionDescription& WithRoleARN(const char* value) { SetRoleARN(value); return *this;}

  private:

    Aws::String m_cloudWatchLoggingOptionId;
    bool m_cloudWatchLoggingOptionIdHasBeenSet = false;

    Aws::String m_logStreamARN;
    bool m_logStreamARNHasBeenSet = false;

    Aws::String m_roleARN;
    bool m_roleARNHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalytics
} // namespace Aws
