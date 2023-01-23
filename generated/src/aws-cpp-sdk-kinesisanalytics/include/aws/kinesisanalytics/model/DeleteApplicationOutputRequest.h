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
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalytics-2015-08-14/DeleteApplicationOutputRequest">AWS
   * API Reference</a></p>
   */
  class DeleteApplicationOutputRequest : public KinesisAnalyticsRequest
  {
  public:
    AWS_KINESISANALYTICS_API DeleteApplicationOutputRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteApplicationOutput"; }

    AWS_KINESISANALYTICS_API Aws::String SerializePayload() const override;

    AWS_KINESISANALYTICS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Amazon Kinesis Analytics application name.</p>
     */
    inline const Aws::String& GetApplicationName() const{ return m_applicationName; }

    /**
     * <p>Amazon Kinesis Analytics application name.</p>
     */
    inline bool ApplicationNameHasBeenSet() const { return m_applicationNameHasBeenSet; }

    /**
     * <p>Amazon Kinesis Analytics application name.</p>
     */
    inline void SetApplicationName(const Aws::String& value) { m_applicationNameHasBeenSet = true; m_applicationName = value; }

    /**
     * <p>Amazon Kinesis Analytics application name.</p>
     */
    inline void SetApplicationName(Aws::String&& value) { m_applicationNameHasBeenSet = true; m_applicationName = std::move(value); }

    /**
     * <p>Amazon Kinesis Analytics application name.</p>
     */
    inline void SetApplicationName(const char* value) { m_applicationNameHasBeenSet = true; m_applicationName.assign(value); }

    /**
     * <p>Amazon Kinesis Analytics application name.</p>
     */
    inline DeleteApplicationOutputRequest& WithApplicationName(const Aws::String& value) { SetApplicationName(value); return *this;}

    /**
     * <p>Amazon Kinesis Analytics application name.</p>
     */
    inline DeleteApplicationOutputRequest& WithApplicationName(Aws::String&& value) { SetApplicationName(std::move(value)); return *this;}

    /**
     * <p>Amazon Kinesis Analytics application name.</p>
     */
    inline DeleteApplicationOutputRequest& WithApplicationName(const char* value) { SetApplicationName(value); return *this;}


    /**
     * <p>Amazon Kinesis Analytics application version. You can use the <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_DescribeApplication.html">DescribeApplication</a>
     * operation to get the current application version. If the version specified is
     * not the current version, the <code>ConcurrentModificationException</code> is
     * returned. </p>
     */
    inline long long GetCurrentApplicationVersionId() const{ return m_currentApplicationVersionId; }

    /**
     * <p>Amazon Kinesis Analytics application version. You can use the <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_DescribeApplication.html">DescribeApplication</a>
     * operation to get the current application version. If the version specified is
     * not the current version, the <code>ConcurrentModificationException</code> is
     * returned. </p>
     */
    inline bool CurrentApplicationVersionIdHasBeenSet() const { return m_currentApplicationVersionIdHasBeenSet; }

    /**
     * <p>Amazon Kinesis Analytics application version. You can use the <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_DescribeApplication.html">DescribeApplication</a>
     * operation to get the current application version. If the version specified is
     * not the current version, the <code>ConcurrentModificationException</code> is
     * returned. </p>
     */
    inline void SetCurrentApplicationVersionId(long long value) { m_currentApplicationVersionIdHasBeenSet = true; m_currentApplicationVersionId = value; }

    /**
     * <p>Amazon Kinesis Analytics application version. You can use the <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_DescribeApplication.html">DescribeApplication</a>
     * operation to get the current application version. If the version specified is
     * not the current version, the <code>ConcurrentModificationException</code> is
     * returned. </p>
     */
    inline DeleteApplicationOutputRequest& WithCurrentApplicationVersionId(long long value) { SetCurrentApplicationVersionId(value); return *this;}


    /**
     * <p>The ID of the configuration to delete. Each output configuration that is
     * added to the application, either when the application is created or later using
     * the <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_AddApplicationOutput.html">AddApplicationOutput</a>
     * operation, has a unique ID. You need to provide the ID to uniquely identify the
     * output configuration that you want to delete from the application configuration.
     * You can use the <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_DescribeApplication.html">DescribeApplication</a>
     * operation to get the specific <code>OutputId</code>. </p>
     */
    inline const Aws::String& GetOutputId() const{ return m_outputId; }

    /**
     * <p>The ID of the configuration to delete. Each output configuration that is
     * added to the application, either when the application is created or later using
     * the <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_AddApplicationOutput.html">AddApplicationOutput</a>
     * operation, has a unique ID. You need to provide the ID to uniquely identify the
     * output configuration that you want to delete from the application configuration.
     * You can use the <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_DescribeApplication.html">DescribeApplication</a>
     * operation to get the specific <code>OutputId</code>. </p>
     */
    inline bool OutputIdHasBeenSet() const { return m_outputIdHasBeenSet; }

    /**
     * <p>The ID of the configuration to delete. Each output configuration that is
     * added to the application, either when the application is created or later using
     * the <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_AddApplicationOutput.html">AddApplicationOutput</a>
     * operation, has a unique ID. You need to provide the ID to uniquely identify the
     * output configuration that you want to delete from the application configuration.
     * You can use the <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_DescribeApplication.html">DescribeApplication</a>
     * operation to get the specific <code>OutputId</code>. </p>
     */
    inline void SetOutputId(const Aws::String& value) { m_outputIdHasBeenSet = true; m_outputId = value; }

    /**
     * <p>The ID of the configuration to delete. Each output configuration that is
     * added to the application, either when the application is created or later using
     * the <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_AddApplicationOutput.html">AddApplicationOutput</a>
     * operation, has a unique ID. You need to provide the ID to uniquely identify the
     * output configuration that you want to delete from the application configuration.
     * You can use the <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_DescribeApplication.html">DescribeApplication</a>
     * operation to get the specific <code>OutputId</code>. </p>
     */
    inline void SetOutputId(Aws::String&& value) { m_outputIdHasBeenSet = true; m_outputId = std::move(value); }

    /**
     * <p>The ID of the configuration to delete. Each output configuration that is
     * added to the application, either when the application is created or later using
     * the <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_AddApplicationOutput.html">AddApplicationOutput</a>
     * operation, has a unique ID. You need to provide the ID to uniquely identify the
     * output configuration that you want to delete from the application configuration.
     * You can use the <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_DescribeApplication.html">DescribeApplication</a>
     * operation to get the specific <code>OutputId</code>. </p>
     */
    inline void SetOutputId(const char* value) { m_outputIdHasBeenSet = true; m_outputId.assign(value); }

    /**
     * <p>The ID of the configuration to delete. Each output configuration that is
     * added to the application, either when the application is created or later using
     * the <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_AddApplicationOutput.html">AddApplicationOutput</a>
     * operation, has a unique ID. You need to provide the ID to uniquely identify the
     * output configuration that you want to delete from the application configuration.
     * You can use the <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_DescribeApplication.html">DescribeApplication</a>
     * operation to get the specific <code>OutputId</code>. </p>
     */
    inline DeleteApplicationOutputRequest& WithOutputId(const Aws::String& value) { SetOutputId(value); return *this;}

    /**
     * <p>The ID of the configuration to delete. Each output configuration that is
     * added to the application, either when the application is created or later using
     * the <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_AddApplicationOutput.html">AddApplicationOutput</a>
     * operation, has a unique ID. You need to provide the ID to uniquely identify the
     * output configuration that you want to delete from the application configuration.
     * You can use the <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_DescribeApplication.html">DescribeApplication</a>
     * operation to get the specific <code>OutputId</code>. </p>
     */
    inline DeleteApplicationOutputRequest& WithOutputId(Aws::String&& value) { SetOutputId(std::move(value)); return *this;}

    /**
     * <p>The ID of the configuration to delete. Each output configuration that is
     * added to the application, either when the application is created or later using
     * the <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_AddApplicationOutput.html">AddApplicationOutput</a>
     * operation, has a unique ID. You need to provide the ID to uniquely identify the
     * output configuration that you want to delete from the application configuration.
     * You can use the <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_DescribeApplication.html">DescribeApplication</a>
     * operation to get the specific <code>OutputId</code>. </p>
     */
    inline DeleteApplicationOutputRequest& WithOutputId(const char* value) { SetOutputId(value); return *this;}

  private:

    Aws::String m_applicationName;
    bool m_applicationNameHasBeenSet = false;

    long long m_currentApplicationVersionId;
    bool m_currentApplicationVersionIdHasBeenSet = false;

    Aws::String m_outputId;
    bool m_outputIdHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalytics
} // namespace Aws
