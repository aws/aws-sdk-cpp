/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class DeleteApplicationCloudWatchLoggingOptionRequest : public KinesisAnalyticsRequest
  {
  public:
    AWS_KINESISANALYTICS_API DeleteApplicationCloudWatchLoggingOptionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteApplicationCloudWatchLoggingOption"; }

    AWS_KINESISANALYTICS_API Aws::String SerializePayload() const override;

    AWS_KINESISANALYTICS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Kinesis Analytics application name.</p>
     */
    inline const Aws::String& GetApplicationName() const{ return m_applicationName; }
    inline bool ApplicationNameHasBeenSet() const { return m_applicationNameHasBeenSet; }
    inline void SetApplicationName(const Aws::String& value) { m_applicationNameHasBeenSet = true; m_applicationName = value; }
    inline void SetApplicationName(Aws::String&& value) { m_applicationNameHasBeenSet = true; m_applicationName = std::move(value); }
    inline void SetApplicationName(const char* value) { m_applicationNameHasBeenSet = true; m_applicationName.assign(value); }
    inline DeleteApplicationCloudWatchLoggingOptionRequest& WithApplicationName(const Aws::String& value) { SetApplicationName(value); return *this;}
    inline DeleteApplicationCloudWatchLoggingOptionRequest& WithApplicationName(Aws::String&& value) { SetApplicationName(std::move(value)); return *this;}
    inline DeleteApplicationCloudWatchLoggingOptionRequest& WithApplicationName(const char* value) { SetApplicationName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version ID of the Kinesis Analytics application.</p>
     */
    inline long long GetCurrentApplicationVersionId() const{ return m_currentApplicationVersionId; }
    inline bool CurrentApplicationVersionIdHasBeenSet() const { return m_currentApplicationVersionIdHasBeenSet; }
    inline void SetCurrentApplicationVersionId(long long value) { m_currentApplicationVersionIdHasBeenSet = true; m_currentApplicationVersionId = value; }
    inline DeleteApplicationCloudWatchLoggingOptionRequest& WithCurrentApplicationVersionId(long long value) { SetCurrentApplicationVersionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>CloudWatchLoggingOptionId</code> of the CloudWatch logging option
     * to delete. You can get the <code>CloudWatchLoggingOptionId</code> by using the
     * <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_DescribeApplication.html">DescribeApplication</a>
     * operation. </p>
     */
    inline const Aws::String& GetCloudWatchLoggingOptionId() const{ return m_cloudWatchLoggingOptionId; }
    inline bool CloudWatchLoggingOptionIdHasBeenSet() const { return m_cloudWatchLoggingOptionIdHasBeenSet; }
    inline void SetCloudWatchLoggingOptionId(const Aws::String& value) { m_cloudWatchLoggingOptionIdHasBeenSet = true; m_cloudWatchLoggingOptionId = value; }
    inline void SetCloudWatchLoggingOptionId(Aws::String&& value) { m_cloudWatchLoggingOptionIdHasBeenSet = true; m_cloudWatchLoggingOptionId = std::move(value); }
    inline void SetCloudWatchLoggingOptionId(const char* value) { m_cloudWatchLoggingOptionIdHasBeenSet = true; m_cloudWatchLoggingOptionId.assign(value); }
    inline DeleteApplicationCloudWatchLoggingOptionRequest& WithCloudWatchLoggingOptionId(const Aws::String& value) { SetCloudWatchLoggingOptionId(value); return *this;}
    inline DeleteApplicationCloudWatchLoggingOptionRequest& WithCloudWatchLoggingOptionId(Aws::String&& value) { SetCloudWatchLoggingOptionId(std::move(value)); return *this;}
    inline DeleteApplicationCloudWatchLoggingOptionRequest& WithCloudWatchLoggingOptionId(const char* value) { SetCloudWatchLoggingOptionId(value); return *this;}
    ///@}
  private:

    Aws::String m_applicationName;
    bool m_applicationNameHasBeenSet = false;

    long long m_currentApplicationVersionId;
    bool m_currentApplicationVersionIdHasBeenSet = false;

    Aws::String m_cloudWatchLoggingOptionId;
    bool m_cloudWatchLoggingOptionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalytics
} // namespace Aws
