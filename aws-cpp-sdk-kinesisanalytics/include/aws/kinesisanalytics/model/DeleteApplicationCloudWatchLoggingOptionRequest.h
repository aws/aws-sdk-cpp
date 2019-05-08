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
#include <aws/kinesisanalytics/KinesisAnalyticsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace KinesisAnalytics
{
namespace Model
{

  /**
   */
  class AWS_KINESISANALYTICS_API DeleteApplicationCloudWatchLoggingOptionRequest : public KinesisAnalyticsRequest
  {
  public:
    DeleteApplicationCloudWatchLoggingOptionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteApplicationCloudWatchLoggingOption"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Kinesis Analytics application name.</p>
     */
    inline const Aws::String& GetApplicationName() const{ return m_applicationName; }

    /**
     * <p>The Kinesis Analytics application name.</p>
     */
    inline bool ApplicationNameHasBeenSet() const { return m_applicationNameHasBeenSet; }

    /**
     * <p>The Kinesis Analytics application name.</p>
     */
    inline void SetApplicationName(const Aws::String& value) { m_applicationNameHasBeenSet = true; m_applicationName = value; }

    /**
     * <p>The Kinesis Analytics application name.</p>
     */
    inline void SetApplicationName(Aws::String&& value) { m_applicationNameHasBeenSet = true; m_applicationName = std::move(value); }

    /**
     * <p>The Kinesis Analytics application name.</p>
     */
    inline void SetApplicationName(const char* value) { m_applicationNameHasBeenSet = true; m_applicationName.assign(value); }

    /**
     * <p>The Kinesis Analytics application name.</p>
     */
    inline DeleteApplicationCloudWatchLoggingOptionRequest& WithApplicationName(const Aws::String& value) { SetApplicationName(value); return *this;}

    /**
     * <p>The Kinesis Analytics application name.</p>
     */
    inline DeleteApplicationCloudWatchLoggingOptionRequest& WithApplicationName(Aws::String&& value) { SetApplicationName(std::move(value)); return *this;}

    /**
     * <p>The Kinesis Analytics application name.</p>
     */
    inline DeleteApplicationCloudWatchLoggingOptionRequest& WithApplicationName(const char* value) { SetApplicationName(value); return *this;}


    /**
     * <p>The version ID of the Kinesis Analytics application.</p>
     */
    inline long long GetCurrentApplicationVersionId() const{ return m_currentApplicationVersionId; }

    /**
     * <p>The version ID of the Kinesis Analytics application.</p>
     */
    inline bool CurrentApplicationVersionIdHasBeenSet() const { return m_currentApplicationVersionIdHasBeenSet; }

    /**
     * <p>The version ID of the Kinesis Analytics application.</p>
     */
    inline void SetCurrentApplicationVersionId(long long value) { m_currentApplicationVersionIdHasBeenSet = true; m_currentApplicationVersionId = value; }

    /**
     * <p>The version ID of the Kinesis Analytics application.</p>
     */
    inline DeleteApplicationCloudWatchLoggingOptionRequest& WithCurrentApplicationVersionId(long long value) { SetCurrentApplicationVersionId(value); return *this;}


    /**
     * <p>The <code>CloudWatchLoggingOptionId</code> of the CloudWatch logging option
     * to delete. You can get the <code>CloudWatchLoggingOptionId</code> by using the
     * <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_DescribeApplication.html">DescribeApplication</a>
     * operation. </p>
     */
    inline const Aws::String& GetCloudWatchLoggingOptionId() const{ return m_cloudWatchLoggingOptionId; }

    /**
     * <p>The <code>CloudWatchLoggingOptionId</code> of the CloudWatch logging option
     * to delete. You can get the <code>CloudWatchLoggingOptionId</code> by using the
     * <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_DescribeApplication.html">DescribeApplication</a>
     * operation. </p>
     */
    inline bool CloudWatchLoggingOptionIdHasBeenSet() const { return m_cloudWatchLoggingOptionIdHasBeenSet; }

    /**
     * <p>The <code>CloudWatchLoggingOptionId</code> of the CloudWatch logging option
     * to delete. You can get the <code>CloudWatchLoggingOptionId</code> by using the
     * <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_DescribeApplication.html">DescribeApplication</a>
     * operation. </p>
     */
    inline void SetCloudWatchLoggingOptionId(const Aws::String& value) { m_cloudWatchLoggingOptionIdHasBeenSet = true; m_cloudWatchLoggingOptionId = value; }

    /**
     * <p>The <code>CloudWatchLoggingOptionId</code> of the CloudWatch logging option
     * to delete. You can get the <code>CloudWatchLoggingOptionId</code> by using the
     * <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_DescribeApplication.html">DescribeApplication</a>
     * operation. </p>
     */
    inline void SetCloudWatchLoggingOptionId(Aws::String&& value) { m_cloudWatchLoggingOptionIdHasBeenSet = true; m_cloudWatchLoggingOptionId = std::move(value); }

    /**
     * <p>The <code>CloudWatchLoggingOptionId</code> of the CloudWatch logging option
     * to delete. You can get the <code>CloudWatchLoggingOptionId</code> by using the
     * <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_DescribeApplication.html">DescribeApplication</a>
     * operation. </p>
     */
    inline void SetCloudWatchLoggingOptionId(const char* value) { m_cloudWatchLoggingOptionIdHasBeenSet = true; m_cloudWatchLoggingOptionId.assign(value); }

    /**
     * <p>The <code>CloudWatchLoggingOptionId</code> of the CloudWatch logging option
     * to delete. You can get the <code>CloudWatchLoggingOptionId</code> by using the
     * <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_DescribeApplication.html">DescribeApplication</a>
     * operation. </p>
     */
    inline DeleteApplicationCloudWatchLoggingOptionRequest& WithCloudWatchLoggingOptionId(const Aws::String& value) { SetCloudWatchLoggingOptionId(value); return *this;}

    /**
     * <p>The <code>CloudWatchLoggingOptionId</code> of the CloudWatch logging option
     * to delete. You can get the <code>CloudWatchLoggingOptionId</code> by using the
     * <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_DescribeApplication.html">DescribeApplication</a>
     * operation. </p>
     */
    inline DeleteApplicationCloudWatchLoggingOptionRequest& WithCloudWatchLoggingOptionId(Aws::String&& value) { SetCloudWatchLoggingOptionId(std::move(value)); return *this;}

    /**
     * <p>The <code>CloudWatchLoggingOptionId</code> of the CloudWatch logging option
     * to delete. You can get the <code>CloudWatchLoggingOptionId</code> by using the
     * <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_DescribeApplication.html">DescribeApplication</a>
     * operation. </p>
     */
    inline DeleteApplicationCloudWatchLoggingOptionRequest& WithCloudWatchLoggingOptionId(const char* value) { SetCloudWatchLoggingOptionId(value); return *this;}

  private:

    Aws::String m_applicationName;
    bool m_applicationNameHasBeenSet;

    long long m_currentApplicationVersionId;
    bool m_currentApplicationVersionIdHasBeenSet;

    Aws::String m_cloudWatchLoggingOptionId;
    bool m_cloudWatchLoggingOptionIdHasBeenSet;
  };

} // namespace Model
} // namespace KinesisAnalytics
} // namespace Aws
