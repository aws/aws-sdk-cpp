/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalytics/KinesisAnalytics_EXPORTS.h>
#include <aws/kinesisanalytics/KinesisAnalyticsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kinesisanalytics/model/CloudWatchLoggingOption.h>
#include <utility>

namespace Aws
{
namespace KinesisAnalytics
{
namespace Model
{

  /**
   */
  class AddApplicationCloudWatchLoggingOptionRequest : public KinesisAnalyticsRequest
  {
  public:
    AWS_KINESISANALYTICS_API AddApplicationCloudWatchLoggingOptionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AddApplicationCloudWatchLoggingOption"; }

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
    inline AddApplicationCloudWatchLoggingOptionRequest& WithApplicationName(const Aws::String& value) { SetApplicationName(value); return *this;}
    inline AddApplicationCloudWatchLoggingOptionRequest& WithApplicationName(Aws::String&& value) { SetApplicationName(std::move(value)); return *this;}
    inline AddApplicationCloudWatchLoggingOptionRequest& WithApplicationName(const char* value) { SetApplicationName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version ID of the Kinesis Analytics application.</p>
     */
    inline long long GetCurrentApplicationVersionId() const{ return m_currentApplicationVersionId; }
    inline bool CurrentApplicationVersionIdHasBeenSet() const { return m_currentApplicationVersionIdHasBeenSet; }
    inline void SetCurrentApplicationVersionId(long long value) { m_currentApplicationVersionIdHasBeenSet = true; m_currentApplicationVersionId = value; }
    inline AddApplicationCloudWatchLoggingOptionRequest& WithCurrentApplicationVersionId(long long value) { SetCurrentApplicationVersionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the CloudWatch log stream Amazon Resource Name (ARN) and the IAM
     * role ARN. Note: To write application messages to CloudWatch, the IAM role that
     * is used must have the <code>PutLogEvents</code> policy action enabled.</p>
     */
    inline const CloudWatchLoggingOption& GetCloudWatchLoggingOption() const{ return m_cloudWatchLoggingOption; }
    inline bool CloudWatchLoggingOptionHasBeenSet() const { return m_cloudWatchLoggingOptionHasBeenSet; }
    inline void SetCloudWatchLoggingOption(const CloudWatchLoggingOption& value) { m_cloudWatchLoggingOptionHasBeenSet = true; m_cloudWatchLoggingOption = value; }
    inline void SetCloudWatchLoggingOption(CloudWatchLoggingOption&& value) { m_cloudWatchLoggingOptionHasBeenSet = true; m_cloudWatchLoggingOption = std::move(value); }
    inline AddApplicationCloudWatchLoggingOptionRequest& WithCloudWatchLoggingOption(const CloudWatchLoggingOption& value) { SetCloudWatchLoggingOption(value); return *this;}
    inline AddApplicationCloudWatchLoggingOptionRequest& WithCloudWatchLoggingOption(CloudWatchLoggingOption&& value) { SetCloudWatchLoggingOption(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_applicationName;
    bool m_applicationNameHasBeenSet = false;

    long long m_currentApplicationVersionId;
    bool m_currentApplicationVersionIdHasBeenSet = false;

    CloudWatchLoggingOption m_cloudWatchLoggingOption;
    bool m_cloudWatchLoggingOptionHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalytics
} // namespace Aws
