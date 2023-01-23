/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace KinesisAnalyticsV2
{
namespace Model
{

  /**
   */
  class DeleteApplicationCloudWatchLoggingOptionRequest : public KinesisAnalyticsV2Request
  {
  public:
    AWS_KINESISANALYTICSV2_API DeleteApplicationCloudWatchLoggingOptionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteApplicationCloudWatchLoggingOption"; }

    AWS_KINESISANALYTICSV2_API Aws::String SerializePayload() const override;

    AWS_KINESISANALYTICSV2_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The application name.</p>
     */
    inline const Aws::String& GetApplicationName() const{ return m_applicationName; }

    /**
     * <p>The application name.</p>
     */
    inline bool ApplicationNameHasBeenSet() const { return m_applicationNameHasBeenSet; }

    /**
     * <p>The application name.</p>
     */
    inline void SetApplicationName(const Aws::String& value) { m_applicationNameHasBeenSet = true; m_applicationName = value; }

    /**
     * <p>The application name.</p>
     */
    inline void SetApplicationName(Aws::String&& value) { m_applicationNameHasBeenSet = true; m_applicationName = std::move(value); }

    /**
     * <p>The application name.</p>
     */
    inline void SetApplicationName(const char* value) { m_applicationNameHasBeenSet = true; m_applicationName.assign(value); }

    /**
     * <p>The application name.</p>
     */
    inline DeleteApplicationCloudWatchLoggingOptionRequest& WithApplicationName(const Aws::String& value) { SetApplicationName(value); return *this;}

    /**
     * <p>The application name.</p>
     */
    inline DeleteApplicationCloudWatchLoggingOptionRequest& WithApplicationName(Aws::String&& value) { SetApplicationName(std::move(value)); return *this;}

    /**
     * <p>The application name.</p>
     */
    inline DeleteApplicationCloudWatchLoggingOptionRequest& WithApplicationName(const char* value) { SetApplicationName(value); return *this;}


    /**
     * <p>The version ID of the application. You must provide the
     * <code>CurrentApplicationVersionId</code> or the <code>ConditionalToken</code>.
     * You can retrieve the application version ID using <a>DescribeApplication</a>.
     * For better concurrency support, use the <code>ConditionalToken</code> parameter
     * instead of <code>CurrentApplicationVersionId</code>.</p>
     */
    inline long long GetCurrentApplicationVersionId() const{ return m_currentApplicationVersionId; }

    /**
     * <p>The version ID of the application. You must provide the
     * <code>CurrentApplicationVersionId</code> or the <code>ConditionalToken</code>.
     * You can retrieve the application version ID using <a>DescribeApplication</a>.
     * For better concurrency support, use the <code>ConditionalToken</code> parameter
     * instead of <code>CurrentApplicationVersionId</code>.</p>
     */
    inline bool CurrentApplicationVersionIdHasBeenSet() const { return m_currentApplicationVersionIdHasBeenSet; }

    /**
     * <p>The version ID of the application. You must provide the
     * <code>CurrentApplicationVersionId</code> or the <code>ConditionalToken</code>.
     * You can retrieve the application version ID using <a>DescribeApplication</a>.
     * For better concurrency support, use the <code>ConditionalToken</code> parameter
     * instead of <code>CurrentApplicationVersionId</code>.</p>
     */
    inline void SetCurrentApplicationVersionId(long long value) { m_currentApplicationVersionIdHasBeenSet = true; m_currentApplicationVersionId = value; }

    /**
     * <p>The version ID of the application. You must provide the
     * <code>CurrentApplicationVersionId</code> or the <code>ConditionalToken</code>.
     * You can retrieve the application version ID using <a>DescribeApplication</a>.
     * For better concurrency support, use the <code>ConditionalToken</code> parameter
     * instead of <code>CurrentApplicationVersionId</code>.</p>
     */
    inline DeleteApplicationCloudWatchLoggingOptionRequest& WithCurrentApplicationVersionId(long long value) { SetCurrentApplicationVersionId(value); return *this;}


    /**
     * <p>The <code>CloudWatchLoggingOptionId</code> of the Amazon CloudWatch logging
     * option to delete. You can get the <code>CloudWatchLoggingOptionId</code> by
     * using the <a>DescribeApplication</a> operation. </p>
     */
    inline const Aws::String& GetCloudWatchLoggingOptionId() const{ return m_cloudWatchLoggingOptionId; }

    /**
     * <p>The <code>CloudWatchLoggingOptionId</code> of the Amazon CloudWatch logging
     * option to delete. You can get the <code>CloudWatchLoggingOptionId</code> by
     * using the <a>DescribeApplication</a> operation. </p>
     */
    inline bool CloudWatchLoggingOptionIdHasBeenSet() const { return m_cloudWatchLoggingOptionIdHasBeenSet; }

    /**
     * <p>The <code>CloudWatchLoggingOptionId</code> of the Amazon CloudWatch logging
     * option to delete. You can get the <code>CloudWatchLoggingOptionId</code> by
     * using the <a>DescribeApplication</a> operation. </p>
     */
    inline void SetCloudWatchLoggingOptionId(const Aws::String& value) { m_cloudWatchLoggingOptionIdHasBeenSet = true; m_cloudWatchLoggingOptionId = value; }

    /**
     * <p>The <code>CloudWatchLoggingOptionId</code> of the Amazon CloudWatch logging
     * option to delete. You can get the <code>CloudWatchLoggingOptionId</code> by
     * using the <a>DescribeApplication</a> operation. </p>
     */
    inline void SetCloudWatchLoggingOptionId(Aws::String&& value) { m_cloudWatchLoggingOptionIdHasBeenSet = true; m_cloudWatchLoggingOptionId = std::move(value); }

    /**
     * <p>The <code>CloudWatchLoggingOptionId</code> of the Amazon CloudWatch logging
     * option to delete. You can get the <code>CloudWatchLoggingOptionId</code> by
     * using the <a>DescribeApplication</a> operation. </p>
     */
    inline void SetCloudWatchLoggingOptionId(const char* value) { m_cloudWatchLoggingOptionIdHasBeenSet = true; m_cloudWatchLoggingOptionId.assign(value); }

    /**
     * <p>The <code>CloudWatchLoggingOptionId</code> of the Amazon CloudWatch logging
     * option to delete. You can get the <code>CloudWatchLoggingOptionId</code> by
     * using the <a>DescribeApplication</a> operation. </p>
     */
    inline DeleteApplicationCloudWatchLoggingOptionRequest& WithCloudWatchLoggingOptionId(const Aws::String& value) { SetCloudWatchLoggingOptionId(value); return *this;}

    /**
     * <p>The <code>CloudWatchLoggingOptionId</code> of the Amazon CloudWatch logging
     * option to delete. You can get the <code>CloudWatchLoggingOptionId</code> by
     * using the <a>DescribeApplication</a> operation. </p>
     */
    inline DeleteApplicationCloudWatchLoggingOptionRequest& WithCloudWatchLoggingOptionId(Aws::String&& value) { SetCloudWatchLoggingOptionId(std::move(value)); return *this;}

    /**
     * <p>The <code>CloudWatchLoggingOptionId</code> of the Amazon CloudWatch logging
     * option to delete. You can get the <code>CloudWatchLoggingOptionId</code> by
     * using the <a>DescribeApplication</a> operation. </p>
     */
    inline DeleteApplicationCloudWatchLoggingOptionRequest& WithCloudWatchLoggingOptionId(const char* value) { SetCloudWatchLoggingOptionId(value); return *this;}


    /**
     * <p>A value you use to implement strong concurrency for application updates. You
     * must provide the <code>CurrentApplicationVersionId</code> or the
     * <code>ConditionalToken</code>. You get the application's current
     * <code>ConditionalToken</code> using <a>DescribeApplication</a>. For better
     * concurrency support, use the <code>ConditionalToken</code> parameter instead of
     * <code>CurrentApplicationVersionId</code>.</p>
     */
    inline const Aws::String& GetConditionalToken() const{ return m_conditionalToken; }

    /**
     * <p>A value you use to implement strong concurrency for application updates. You
     * must provide the <code>CurrentApplicationVersionId</code> or the
     * <code>ConditionalToken</code>. You get the application's current
     * <code>ConditionalToken</code> using <a>DescribeApplication</a>. For better
     * concurrency support, use the <code>ConditionalToken</code> parameter instead of
     * <code>CurrentApplicationVersionId</code>.</p>
     */
    inline bool ConditionalTokenHasBeenSet() const { return m_conditionalTokenHasBeenSet; }

    /**
     * <p>A value you use to implement strong concurrency for application updates. You
     * must provide the <code>CurrentApplicationVersionId</code> or the
     * <code>ConditionalToken</code>. You get the application's current
     * <code>ConditionalToken</code> using <a>DescribeApplication</a>. For better
     * concurrency support, use the <code>ConditionalToken</code> parameter instead of
     * <code>CurrentApplicationVersionId</code>.</p>
     */
    inline void SetConditionalToken(const Aws::String& value) { m_conditionalTokenHasBeenSet = true; m_conditionalToken = value; }

    /**
     * <p>A value you use to implement strong concurrency for application updates. You
     * must provide the <code>CurrentApplicationVersionId</code> or the
     * <code>ConditionalToken</code>. You get the application's current
     * <code>ConditionalToken</code> using <a>DescribeApplication</a>. For better
     * concurrency support, use the <code>ConditionalToken</code> parameter instead of
     * <code>CurrentApplicationVersionId</code>.</p>
     */
    inline void SetConditionalToken(Aws::String&& value) { m_conditionalTokenHasBeenSet = true; m_conditionalToken = std::move(value); }

    /**
     * <p>A value you use to implement strong concurrency for application updates. You
     * must provide the <code>CurrentApplicationVersionId</code> or the
     * <code>ConditionalToken</code>. You get the application's current
     * <code>ConditionalToken</code> using <a>DescribeApplication</a>. For better
     * concurrency support, use the <code>ConditionalToken</code> parameter instead of
     * <code>CurrentApplicationVersionId</code>.</p>
     */
    inline void SetConditionalToken(const char* value) { m_conditionalTokenHasBeenSet = true; m_conditionalToken.assign(value); }

    /**
     * <p>A value you use to implement strong concurrency for application updates. You
     * must provide the <code>CurrentApplicationVersionId</code> or the
     * <code>ConditionalToken</code>. You get the application's current
     * <code>ConditionalToken</code> using <a>DescribeApplication</a>. For better
     * concurrency support, use the <code>ConditionalToken</code> parameter instead of
     * <code>CurrentApplicationVersionId</code>.</p>
     */
    inline DeleteApplicationCloudWatchLoggingOptionRequest& WithConditionalToken(const Aws::String& value) { SetConditionalToken(value); return *this;}

    /**
     * <p>A value you use to implement strong concurrency for application updates. You
     * must provide the <code>CurrentApplicationVersionId</code> or the
     * <code>ConditionalToken</code>. You get the application's current
     * <code>ConditionalToken</code> using <a>DescribeApplication</a>. For better
     * concurrency support, use the <code>ConditionalToken</code> parameter instead of
     * <code>CurrentApplicationVersionId</code>.</p>
     */
    inline DeleteApplicationCloudWatchLoggingOptionRequest& WithConditionalToken(Aws::String&& value) { SetConditionalToken(std::move(value)); return *this;}

    /**
     * <p>A value you use to implement strong concurrency for application updates. You
     * must provide the <code>CurrentApplicationVersionId</code> or the
     * <code>ConditionalToken</code>. You get the application's current
     * <code>ConditionalToken</code> using <a>DescribeApplication</a>. For better
     * concurrency support, use the <code>ConditionalToken</code> parameter instead of
     * <code>CurrentApplicationVersionId</code>.</p>
     */
    inline DeleteApplicationCloudWatchLoggingOptionRequest& WithConditionalToken(const char* value) { SetConditionalToken(value); return *this;}

  private:

    Aws::String m_applicationName;
    bool m_applicationNameHasBeenSet = false;

    long long m_currentApplicationVersionId;
    bool m_currentApplicationVersionIdHasBeenSet = false;

    Aws::String m_cloudWatchLoggingOptionId;
    bool m_cloudWatchLoggingOptionIdHasBeenSet = false;

    Aws::String m_conditionalToken;
    bool m_conditionalTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
