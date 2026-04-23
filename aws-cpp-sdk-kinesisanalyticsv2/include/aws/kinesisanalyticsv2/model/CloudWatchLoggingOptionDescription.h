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
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>
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
namespace KinesisAnalyticsV2
{
namespace Model
{

  /**
   * <p>Describes the Amazon CloudWatch logging option.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/CloudWatchLoggingOptionDescription">AWS
   * API Reference</a></p>
   */
  class AWS_KINESISANALYTICSV2_API CloudWatchLoggingOptionDescription
  {
  public:
    CloudWatchLoggingOptionDescription();
    CloudWatchLoggingOptionDescription(Aws::Utils::Json::JsonView jsonValue);
    CloudWatchLoggingOptionDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the CloudWatch logging option description.</p>
     */
    inline const Aws::String& GetCloudWatchLoggingOptionId() const{ return m_cloudWatchLoggingOptionId; }

    /**
     * <p>The ID of the CloudWatch logging option description.</p>
     */
    inline bool CloudWatchLoggingOptionIdHasBeenSet() const { return m_cloudWatchLoggingOptionIdHasBeenSet; }

    /**
     * <p>The ID of the CloudWatch logging option description.</p>
     */
    inline void SetCloudWatchLoggingOptionId(const Aws::String& value) { m_cloudWatchLoggingOptionIdHasBeenSet = true; m_cloudWatchLoggingOptionId = value; }

    /**
     * <p>The ID of the CloudWatch logging option description.</p>
     */
    inline void SetCloudWatchLoggingOptionId(Aws::String&& value) { m_cloudWatchLoggingOptionIdHasBeenSet = true; m_cloudWatchLoggingOptionId = std::move(value); }

    /**
     * <p>The ID of the CloudWatch logging option description.</p>
     */
    inline void SetCloudWatchLoggingOptionId(const char* value) { m_cloudWatchLoggingOptionIdHasBeenSet = true; m_cloudWatchLoggingOptionId.assign(value); }

    /**
     * <p>The ID of the CloudWatch logging option description.</p>
     */
    inline CloudWatchLoggingOptionDescription& WithCloudWatchLoggingOptionId(const Aws::String& value) { SetCloudWatchLoggingOptionId(value); return *this;}

    /**
     * <p>The ID of the CloudWatch logging option description.</p>
     */
    inline CloudWatchLoggingOptionDescription& WithCloudWatchLoggingOptionId(Aws::String&& value) { SetCloudWatchLoggingOptionId(std::move(value)); return *this;}

    /**
     * <p>The ID of the CloudWatch logging option description.</p>
     */
    inline CloudWatchLoggingOptionDescription& WithCloudWatchLoggingOptionId(const char* value) { SetCloudWatchLoggingOptionId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the CloudWatch log to receive application
     * messages.</p>
     */
    inline const Aws::String& GetLogStreamARN() const{ return m_logStreamARN; }

    /**
     * <p>The Amazon Resource Name (ARN) of the CloudWatch log to receive application
     * messages.</p>
     */
    inline bool LogStreamARNHasBeenSet() const { return m_logStreamARNHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the CloudWatch log to receive application
     * messages.</p>
     */
    inline void SetLogStreamARN(const Aws::String& value) { m_logStreamARNHasBeenSet = true; m_logStreamARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the CloudWatch log to receive application
     * messages.</p>
     */
    inline void SetLogStreamARN(Aws::String&& value) { m_logStreamARNHasBeenSet = true; m_logStreamARN = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the CloudWatch log to receive application
     * messages.</p>
     */
    inline void SetLogStreamARN(const char* value) { m_logStreamARNHasBeenSet = true; m_logStreamARN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the CloudWatch log to receive application
     * messages.</p>
     */
    inline CloudWatchLoggingOptionDescription& WithLogStreamARN(const Aws::String& value) { SetLogStreamARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the CloudWatch log to receive application
     * messages.</p>
     */
    inline CloudWatchLoggingOptionDescription& WithLogStreamARN(Aws::String&& value) { SetLogStreamARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the CloudWatch log to receive application
     * messages.</p>
     */
    inline CloudWatchLoggingOptionDescription& WithLogStreamARN(const char* value) { SetLogStreamARN(value); return *this;}


    /**
     * <p>The IAM ARN of the role to use to send application messages. </p> <note>
     * <p>Provided for backward compatibility. Applications created with the current
     * API version have an application-level service execution role rather than a
     * resource-level role.</p> </note>
     */
    inline const Aws::String& GetRoleARN() const{ return m_roleARN; }

    /**
     * <p>The IAM ARN of the role to use to send application messages. </p> <note>
     * <p>Provided for backward compatibility. Applications created with the current
     * API version have an application-level service execution role rather than a
     * resource-level role.</p> </note>
     */
    inline bool RoleARNHasBeenSet() const { return m_roleARNHasBeenSet; }

    /**
     * <p>The IAM ARN of the role to use to send application messages. </p> <note>
     * <p>Provided for backward compatibility. Applications created with the current
     * API version have an application-level service execution role rather than a
     * resource-level role.</p> </note>
     */
    inline void SetRoleARN(const Aws::String& value) { m_roleARNHasBeenSet = true; m_roleARN = value; }

    /**
     * <p>The IAM ARN of the role to use to send application messages. </p> <note>
     * <p>Provided for backward compatibility. Applications created with the current
     * API version have an application-level service execution role rather than a
     * resource-level role.</p> </note>
     */
    inline void SetRoleARN(Aws::String&& value) { m_roleARNHasBeenSet = true; m_roleARN = std::move(value); }

    /**
     * <p>The IAM ARN of the role to use to send application messages. </p> <note>
     * <p>Provided for backward compatibility. Applications created with the current
     * API version have an application-level service execution role rather than a
     * resource-level role.</p> </note>
     */
    inline void SetRoleARN(const char* value) { m_roleARNHasBeenSet = true; m_roleARN.assign(value); }

    /**
     * <p>The IAM ARN of the role to use to send application messages. </p> <note>
     * <p>Provided for backward compatibility. Applications created with the current
     * API version have an application-level service execution role rather than a
     * resource-level role.</p> </note>
     */
    inline CloudWatchLoggingOptionDescription& WithRoleARN(const Aws::String& value) { SetRoleARN(value); return *this;}

    /**
     * <p>The IAM ARN of the role to use to send application messages. </p> <note>
     * <p>Provided for backward compatibility. Applications created with the current
     * API version have an application-level service execution role rather than a
     * resource-level role.</p> </note>
     */
    inline CloudWatchLoggingOptionDescription& WithRoleARN(Aws::String&& value) { SetRoleARN(std::move(value)); return *this;}

    /**
     * <p>The IAM ARN of the role to use to send application messages. </p> <note>
     * <p>Provided for backward compatibility. Applications created with the current
     * API version have an application-level service execution role rather than a
     * resource-level role.</p> </note>
     */
    inline CloudWatchLoggingOptionDescription& WithRoleARN(const char* value) { SetRoleARN(value); return *this;}

  private:

    Aws::String m_cloudWatchLoggingOptionId;
    bool m_cloudWatchLoggingOptionIdHasBeenSet;

    Aws::String m_logStreamARN;
    bool m_logStreamARNHasBeenSet;

    Aws::String m_roleARN;
    bool m_roleARNHasBeenSet;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
