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
#include <aws/kinesisanalytics/model/Output.h>

namespace Aws
{
namespace KinesisAnalytics
{
namespace Model
{

  /**
   * <p/>
   */
  class AWS_KINESISANALYTICS_API AddApplicationOutputRequest : public KinesisAnalyticsRequest
  {
  public:
    AddApplicationOutputRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>Name of the application to which you want to add the output
     * configuration.</p>
     */
    inline const Aws::String& GetApplicationName() const{ return m_applicationName; }

    /**
     * <p>Name of the application to which you want to add the output
     * configuration.</p>
     */
    inline void SetApplicationName(const Aws::String& value) { m_applicationNameHasBeenSet = true; m_applicationName = value; }

    /**
     * <p>Name of the application to which you want to add the output
     * configuration.</p>
     */
    inline void SetApplicationName(Aws::String&& value) { m_applicationNameHasBeenSet = true; m_applicationName = value; }

    /**
     * <p>Name of the application to which you want to add the output
     * configuration.</p>
     */
    inline void SetApplicationName(const char* value) { m_applicationNameHasBeenSet = true; m_applicationName.assign(value); }

    /**
     * <p>Name of the application to which you want to add the output
     * configuration.</p>
     */
    inline AddApplicationOutputRequest& WithApplicationName(const Aws::String& value) { SetApplicationName(value); return *this;}

    /**
     * <p>Name of the application to which you want to add the output
     * configuration.</p>
     */
    inline AddApplicationOutputRequest& WithApplicationName(Aws::String&& value) { SetApplicationName(value); return *this;}

    /**
     * <p>Name of the application to which you want to add the output
     * configuration.</p>
     */
    inline AddApplicationOutputRequest& WithApplicationName(const char* value) { SetApplicationName(value); return *this;}

    /**
     * <p>Version of the application to which you want add the output configuration.
     * You can use the <a>DescribeApplication</a> operation to get the current
     * application version. If the version specified is not the current version, the
     * <code>ConcurrentModificationException</code> is returned. </p>
     */
    inline long long GetCurrentApplicationVersionId() const{ return m_currentApplicationVersionId; }

    /**
     * <p>Version of the application to which you want add the output configuration.
     * You can use the <a>DescribeApplication</a> operation to get the current
     * application version. If the version specified is not the current version, the
     * <code>ConcurrentModificationException</code> is returned. </p>
     */
    inline void SetCurrentApplicationVersionId(long long value) { m_currentApplicationVersionIdHasBeenSet = true; m_currentApplicationVersionId = value; }

    /**
     * <p>Version of the application to which you want add the output configuration.
     * You can use the <a>DescribeApplication</a> operation to get the current
     * application version. If the version specified is not the current version, the
     * <code>ConcurrentModificationException</code> is returned. </p>
     */
    inline AddApplicationOutputRequest& WithCurrentApplicationVersionId(long long value) { SetCurrentApplicationVersionId(value); return *this;}

    /**
     * <p>An array of objects, each describing one output configuration. In the output
     * configuration, you specify the name of an in-application stream, a destination
     * (that is, an Amazon Kinesis stream or an Amazon Kinesis Firehose delivery
     * stream), and record the formation to use when writing to the destination.</p>
     */
    inline const Output& GetOutput() const{ return m_output; }

    /**
     * <p>An array of objects, each describing one output configuration. In the output
     * configuration, you specify the name of an in-application stream, a destination
     * (that is, an Amazon Kinesis stream or an Amazon Kinesis Firehose delivery
     * stream), and record the formation to use when writing to the destination.</p>
     */
    inline void SetOutput(const Output& value) { m_outputHasBeenSet = true; m_output = value; }

    /**
     * <p>An array of objects, each describing one output configuration. In the output
     * configuration, you specify the name of an in-application stream, a destination
     * (that is, an Amazon Kinesis stream or an Amazon Kinesis Firehose delivery
     * stream), and record the formation to use when writing to the destination.</p>
     */
    inline void SetOutput(Output&& value) { m_outputHasBeenSet = true; m_output = value; }

    /**
     * <p>An array of objects, each describing one output configuration. In the output
     * configuration, you specify the name of an in-application stream, a destination
     * (that is, an Amazon Kinesis stream or an Amazon Kinesis Firehose delivery
     * stream), and record the formation to use when writing to the destination.</p>
     */
    inline AddApplicationOutputRequest& WithOutput(const Output& value) { SetOutput(value); return *this;}

    /**
     * <p>An array of objects, each describing one output configuration. In the output
     * configuration, you specify the name of an in-application stream, a destination
     * (that is, an Amazon Kinesis stream or an Amazon Kinesis Firehose delivery
     * stream), and record the formation to use when writing to the destination.</p>
     */
    inline AddApplicationOutputRequest& WithOutput(Output&& value) { SetOutput(value); return *this;}

  private:
    Aws::String m_applicationName;
    bool m_applicationNameHasBeenSet;
    long long m_currentApplicationVersionId;
    bool m_currentApplicationVersionIdHasBeenSet;
    Output m_output;
    bool m_outputHasBeenSet;
  };

} // namespace Model
} // namespace KinesisAnalytics
} // namespace Aws
