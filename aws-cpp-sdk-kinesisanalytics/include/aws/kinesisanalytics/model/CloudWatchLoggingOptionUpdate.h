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
   * <p>Describes CloudWatch logging option updates.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalytics-2015-08-14/CloudWatchLoggingOptionUpdate">AWS
   * API Reference</a></p>
   */
  class AWS_KINESISANALYTICS_API CloudWatchLoggingOptionUpdate
  {
  public:
    CloudWatchLoggingOptionUpdate();
    CloudWatchLoggingOptionUpdate(Aws::Utils::Json::JsonView jsonValue);
    CloudWatchLoggingOptionUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>ID of the CloudWatch logging option to update</p>
     */
    inline const Aws::String& GetCloudWatchLoggingOptionId() const{ return m_cloudWatchLoggingOptionId; }

    /**
     * <p>ID of the CloudWatch logging option to update</p>
     */
    inline bool CloudWatchLoggingOptionIdHasBeenSet() const { return m_cloudWatchLoggingOptionIdHasBeenSet; }

    /**
     * <p>ID of the CloudWatch logging option to update</p>
     */
    inline void SetCloudWatchLoggingOptionId(const Aws::String& value) { m_cloudWatchLoggingOptionIdHasBeenSet = true; m_cloudWatchLoggingOptionId = value; }

    /**
     * <p>ID of the CloudWatch logging option to update</p>
     */
    inline void SetCloudWatchLoggingOptionId(Aws::String&& value) { m_cloudWatchLoggingOptionIdHasBeenSet = true; m_cloudWatchLoggingOptionId = std::move(value); }

    /**
     * <p>ID of the CloudWatch logging option to update</p>
     */
    inline void SetCloudWatchLoggingOptionId(const char* value) { m_cloudWatchLoggingOptionIdHasBeenSet = true; m_cloudWatchLoggingOptionId.assign(value); }

    /**
     * <p>ID of the CloudWatch logging option to update</p>
     */
    inline CloudWatchLoggingOptionUpdate& WithCloudWatchLoggingOptionId(const Aws::String& value) { SetCloudWatchLoggingOptionId(value); return *this;}

    /**
     * <p>ID of the CloudWatch logging option to update</p>
     */
    inline CloudWatchLoggingOptionUpdate& WithCloudWatchLoggingOptionId(Aws::String&& value) { SetCloudWatchLoggingOptionId(std::move(value)); return *this;}

    /**
     * <p>ID of the CloudWatch logging option to update</p>
     */
    inline CloudWatchLoggingOptionUpdate& WithCloudWatchLoggingOptionId(const char* value) { SetCloudWatchLoggingOptionId(value); return *this;}


    /**
     * <p>ARN of the CloudWatch log to receive application messages.</p>
     */
    inline const Aws::String& GetLogStreamARNUpdate() const{ return m_logStreamARNUpdate; }

    /**
     * <p>ARN of the CloudWatch log to receive application messages.</p>
     */
    inline bool LogStreamARNUpdateHasBeenSet() const { return m_logStreamARNUpdateHasBeenSet; }

    /**
     * <p>ARN of the CloudWatch log to receive application messages.</p>
     */
    inline void SetLogStreamARNUpdate(const Aws::String& value) { m_logStreamARNUpdateHasBeenSet = true; m_logStreamARNUpdate = value; }

    /**
     * <p>ARN of the CloudWatch log to receive application messages.</p>
     */
    inline void SetLogStreamARNUpdate(Aws::String&& value) { m_logStreamARNUpdateHasBeenSet = true; m_logStreamARNUpdate = std::move(value); }

    /**
     * <p>ARN of the CloudWatch log to receive application messages.</p>
     */
    inline void SetLogStreamARNUpdate(const char* value) { m_logStreamARNUpdateHasBeenSet = true; m_logStreamARNUpdate.assign(value); }

    /**
     * <p>ARN of the CloudWatch log to receive application messages.</p>
     */
    inline CloudWatchLoggingOptionUpdate& WithLogStreamARNUpdate(const Aws::String& value) { SetLogStreamARNUpdate(value); return *this;}

    /**
     * <p>ARN of the CloudWatch log to receive application messages.</p>
     */
    inline CloudWatchLoggingOptionUpdate& WithLogStreamARNUpdate(Aws::String&& value) { SetLogStreamARNUpdate(std::move(value)); return *this;}

    /**
     * <p>ARN of the CloudWatch log to receive application messages.</p>
     */
    inline CloudWatchLoggingOptionUpdate& WithLogStreamARNUpdate(const char* value) { SetLogStreamARNUpdate(value); return *this;}


    /**
     * <p>IAM ARN of the role to use to send application messages. Note: To write
     * application messages to CloudWatch, the IAM role used must have the
     * <code>PutLogEvents</code> policy action enabled.</p>
     */
    inline const Aws::String& GetRoleARNUpdate() const{ return m_roleARNUpdate; }

    /**
     * <p>IAM ARN of the role to use to send application messages. Note: To write
     * application messages to CloudWatch, the IAM role used must have the
     * <code>PutLogEvents</code> policy action enabled.</p>
     */
    inline bool RoleARNUpdateHasBeenSet() const { return m_roleARNUpdateHasBeenSet; }

    /**
     * <p>IAM ARN of the role to use to send application messages. Note: To write
     * application messages to CloudWatch, the IAM role used must have the
     * <code>PutLogEvents</code> policy action enabled.</p>
     */
    inline void SetRoleARNUpdate(const Aws::String& value) { m_roleARNUpdateHasBeenSet = true; m_roleARNUpdate = value; }

    /**
     * <p>IAM ARN of the role to use to send application messages. Note: To write
     * application messages to CloudWatch, the IAM role used must have the
     * <code>PutLogEvents</code> policy action enabled.</p>
     */
    inline void SetRoleARNUpdate(Aws::String&& value) { m_roleARNUpdateHasBeenSet = true; m_roleARNUpdate = std::move(value); }

    /**
     * <p>IAM ARN of the role to use to send application messages. Note: To write
     * application messages to CloudWatch, the IAM role used must have the
     * <code>PutLogEvents</code> policy action enabled.</p>
     */
    inline void SetRoleARNUpdate(const char* value) { m_roleARNUpdateHasBeenSet = true; m_roleARNUpdate.assign(value); }

    /**
     * <p>IAM ARN of the role to use to send application messages. Note: To write
     * application messages to CloudWatch, the IAM role used must have the
     * <code>PutLogEvents</code> policy action enabled.</p>
     */
    inline CloudWatchLoggingOptionUpdate& WithRoleARNUpdate(const Aws::String& value) { SetRoleARNUpdate(value); return *this;}

    /**
     * <p>IAM ARN of the role to use to send application messages. Note: To write
     * application messages to CloudWatch, the IAM role used must have the
     * <code>PutLogEvents</code> policy action enabled.</p>
     */
    inline CloudWatchLoggingOptionUpdate& WithRoleARNUpdate(Aws::String&& value) { SetRoleARNUpdate(std::move(value)); return *this;}

    /**
     * <p>IAM ARN of the role to use to send application messages. Note: To write
     * application messages to CloudWatch, the IAM role used must have the
     * <code>PutLogEvents</code> policy action enabled.</p>
     */
    inline CloudWatchLoggingOptionUpdate& WithRoleARNUpdate(const char* value) { SetRoleARNUpdate(value); return *this;}

  private:

    Aws::String m_cloudWatchLoggingOptionId;
    bool m_cloudWatchLoggingOptionIdHasBeenSet;

    Aws::String m_logStreamARNUpdate;
    bool m_logStreamARNUpdateHasBeenSet;

    Aws::String m_roleARNUpdate;
    bool m_roleARNUpdateHasBeenSet;
  };

} // namespace Model
} // namespace KinesisAnalytics
} // namespace Aws
