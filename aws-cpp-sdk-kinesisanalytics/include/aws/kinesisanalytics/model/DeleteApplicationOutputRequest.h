/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

namespace Aws
{
namespace KinesisAnalytics
{
namespace Model
{

  /**
   * <p/>
   */
  class AWS_KINESISANALYTICS_API DeleteApplicationOutputRequest : public KinesisAnalyticsRequest
  {
  public:
    DeleteApplicationOutputRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>Amazon Kinesis Analytics application name.</p>
     */
    inline const Aws::String& GetApplicationName() const{ return m_applicationName; }

    /**
     * <p>Amazon Kinesis Analytics application name.</p>
     */
    inline void SetApplicationName(const Aws::String& value) { m_applicationNameHasBeenSet = true; m_applicationName = value; }

    /**
     * <p>Amazon Kinesis Analytics application name.</p>
     */
    inline void SetApplicationName(Aws::String&& value) { m_applicationNameHasBeenSet = true; m_applicationName = value; }

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
    inline DeleteApplicationOutputRequest& WithApplicationName(Aws::String&& value) { SetApplicationName(value); return *this;}

    /**
     * <p>Amazon Kinesis Analytics application name.</p>
     */
    inline DeleteApplicationOutputRequest& WithApplicationName(const char* value) { SetApplicationName(value); return *this;}

    /**
     * <p>Amazon Kinesis Analytics application version. You can use the
     * <a>DescribeApplication</a> operation to get the current application version. If
     * the version specified is not the current version, the
     * <code>ConcurrentModificationException</code> is returned. </p>
     */
    inline long long GetCurrentApplicationVersionId() const{ return m_currentApplicationVersionId; }

    /**
     * <p>Amazon Kinesis Analytics application version. You can use the
     * <a>DescribeApplication</a> operation to get the current application version. If
     * the version specified is not the current version, the
     * <code>ConcurrentModificationException</code> is returned. </p>
     */
    inline void SetCurrentApplicationVersionId(long long value) { m_currentApplicationVersionIdHasBeenSet = true; m_currentApplicationVersionId = value; }

    /**
     * <p>Amazon Kinesis Analytics application version. You can use the
     * <a>DescribeApplication</a> operation to get the current application version. If
     * the version specified is not the current version, the
     * <code>ConcurrentModificationException</code> is returned. </p>
     */
    inline DeleteApplicationOutputRequest& WithCurrentApplicationVersionId(long long value) { SetCurrentApplicationVersionId(value); return *this;}

    /**
     * <p>The ID of the configuration to delete. Each output configuration that is
     * added to the application, either when the application is created or later using
     * the <a>AddApplicationOutput</a> operation, has a unique ID. You need to provide
     * the ID to uniquely identify the output configuration that you want to delete
     * from the application configuration. You can use the <a>DescribeApplication</a>
     * operation to get the specific <code>OutputId</code>. </p>
     */
    inline const Aws::String& GetOutputId() const{ return m_outputId; }

    /**
     * <p>The ID of the configuration to delete. Each output configuration that is
     * added to the application, either when the application is created or later using
     * the <a>AddApplicationOutput</a> operation, has a unique ID. You need to provide
     * the ID to uniquely identify the output configuration that you want to delete
     * from the application configuration. You can use the <a>DescribeApplication</a>
     * operation to get the specific <code>OutputId</code>. </p>
     */
    inline void SetOutputId(const Aws::String& value) { m_outputIdHasBeenSet = true; m_outputId = value; }

    /**
     * <p>The ID of the configuration to delete. Each output configuration that is
     * added to the application, either when the application is created or later using
     * the <a>AddApplicationOutput</a> operation, has a unique ID. You need to provide
     * the ID to uniquely identify the output configuration that you want to delete
     * from the application configuration. You can use the <a>DescribeApplication</a>
     * operation to get the specific <code>OutputId</code>. </p>
     */
    inline void SetOutputId(Aws::String&& value) { m_outputIdHasBeenSet = true; m_outputId = value; }

    /**
     * <p>The ID of the configuration to delete. Each output configuration that is
     * added to the application, either when the application is created or later using
     * the <a>AddApplicationOutput</a> operation, has a unique ID. You need to provide
     * the ID to uniquely identify the output configuration that you want to delete
     * from the application configuration. You can use the <a>DescribeApplication</a>
     * operation to get the specific <code>OutputId</code>. </p>
     */
    inline void SetOutputId(const char* value) { m_outputIdHasBeenSet = true; m_outputId.assign(value); }

    /**
     * <p>The ID of the configuration to delete. Each output configuration that is
     * added to the application, either when the application is created or later using
     * the <a>AddApplicationOutput</a> operation, has a unique ID. You need to provide
     * the ID to uniquely identify the output configuration that you want to delete
     * from the application configuration. You can use the <a>DescribeApplication</a>
     * operation to get the specific <code>OutputId</code>. </p>
     */
    inline DeleteApplicationOutputRequest& WithOutputId(const Aws::String& value) { SetOutputId(value); return *this;}

    /**
     * <p>The ID of the configuration to delete. Each output configuration that is
     * added to the application, either when the application is created or later using
     * the <a>AddApplicationOutput</a> operation, has a unique ID. You need to provide
     * the ID to uniquely identify the output configuration that you want to delete
     * from the application configuration. You can use the <a>DescribeApplication</a>
     * operation to get the specific <code>OutputId</code>. </p>
     */
    inline DeleteApplicationOutputRequest& WithOutputId(Aws::String&& value) { SetOutputId(value); return *this;}

    /**
     * <p>The ID of the configuration to delete. Each output configuration that is
     * added to the application, either when the application is created or later using
     * the <a>AddApplicationOutput</a> operation, has a unique ID. You need to provide
     * the ID to uniquely identify the output configuration that you want to delete
     * from the application configuration. You can use the <a>DescribeApplication</a>
     * operation to get the specific <code>OutputId</code>. </p>
     */
    inline DeleteApplicationOutputRequest& WithOutputId(const char* value) { SetOutputId(value); return *this;}

  private:
    Aws::String m_applicationName;
    bool m_applicationNameHasBeenSet;
    long long m_currentApplicationVersionId;
    bool m_currentApplicationVersionIdHasBeenSet;
    Aws::String m_outputId;
    bool m_outputIdHasBeenSet;
  };

} // namespace Model
} // namespace KinesisAnalytics
} // namespace Aws
