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
#include <aws/kinesisanalytics/model/Output.h>
#include <utility>

namespace Aws
{
namespace KinesisAnalytics
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalytics-2015-08-14/AddApplicationOutputRequest">AWS
   * API Reference</a></p>
   */
  class AWS_KINESISANALYTICS_API AddApplicationOutputRequest : public KinesisAnalyticsRequest
  {
  public:
    AddApplicationOutputRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AddApplicationOutput"; }

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
    inline bool ApplicationNameHasBeenSet() const { return m_applicationNameHasBeenSet; }

    /**
     * <p>Name of the application to which you want to add the output
     * configuration.</p>
     */
    inline void SetApplicationName(const Aws::String& value) { m_applicationNameHasBeenSet = true; m_applicationName = value; }

    /**
     * <p>Name of the application to which you want to add the output
     * configuration.</p>
     */
    inline void SetApplicationName(Aws::String&& value) { m_applicationNameHasBeenSet = true; m_applicationName = std::move(value); }

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
    inline AddApplicationOutputRequest& WithApplicationName(Aws::String&& value) { SetApplicationName(std::move(value)); return *this;}

    /**
     * <p>Name of the application to which you want to add the output
     * configuration.</p>
     */
    inline AddApplicationOutputRequest& WithApplicationName(const char* value) { SetApplicationName(value); return *this;}


    /**
     * <p>Version of the application to which you want to add the output configuration.
     * You can use the <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_DescribeApplication.html">DescribeApplication</a>
     * operation to get the current application version. If the version specified is
     * not the current version, the <code>ConcurrentModificationException</code> is
     * returned. </p>
     */
    inline long long GetCurrentApplicationVersionId() const{ return m_currentApplicationVersionId; }

    /**
     * <p>Version of the application to which you want to add the output configuration.
     * You can use the <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_DescribeApplication.html">DescribeApplication</a>
     * operation to get the current application version. If the version specified is
     * not the current version, the <code>ConcurrentModificationException</code> is
     * returned. </p>
     */
    inline bool CurrentApplicationVersionIdHasBeenSet() const { return m_currentApplicationVersionIdHasBeenSet; }

    /**
     * <p>Version of the application to which you want to add the output configuration.
     * You can use the <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_DescribeApplication.html">DescribeApplication</a>
     * operation to get the current application version. If the version specified is
     * not the current version, the <code>ConcurrentModificationException</code> is
     * returned. </p>
     */
    inline void SetCurrentApplicationVersionId(long long value) { m_currentApplicationVersionIdHasBeenSet = true; m_currentApplicationVersionId = value; }

    /**
     * <p>Version of the application to which you want to add the output configuration.
     * You can use the <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_DescribeApplication.html">DescribeApplication</a>
     * operation to get the current application version. If the version specified is
     * not the current version, the <code>ConcurrentModificationException</code> is
     * returned. </p>
     */
    inline AddApplicationOutputRequest& WithCurrentApplicationVersionId(long long value) { SetCurrentApplicationVersionId(value); return *this;}


    /**
     * <p>An array of objects, each describing one output configuration. In the output
     * configuration, you specify the name of an in-application stream, a destination
     * (that is, an Amazon Kinesis stream, an Amazon Kinesis Firehose delivery stream,
     * or an AWS Lambda function), and record the formation to use when writing to the
     * destination.</p>
     */
    inline const Output& GetOutput() const{ return m_output; }

    /**
     * <p>An array of objects, each describing one output configuration. In the output
     * configuration, you specify the name of an in-application stream, a destination
     * (that is, an Amazon Kinesis stream, an Amazon Kinesis Firehose delivery stream,
     * or an AWS Lambda function), and record the formation to use when writing to the
     * destination.</p>
     */
    inline bool OutputHasBeenSet() const { return m_outputHasBeenSet; }

    /**
     * <p>An array of objects, each describing one output configuration. In the output
     * configuration, you specify the name of an in-application stream, a destination
     * (that is, an Amazon Kinesis stream, an Amazon Kinesis Firehose delivery stream,
     * or an AWS Lambda function), and record the formation to use when writing to the
     * destination.</p>
     */
    inline void SetOutput(const Output& value) { m_outputHasBeenSet = true; m_output = value; }

    /**
     * <p>An array of objects, each describing one output configuration. In the output
     * configuration, you specify the name of an in-application stream, a destination
     * (that is, an Amazon Kinesis stream, an Amazon Kinesis Firehose delivery stream,
     * or an AWS Lambda function), and record the formation to use when writing to the
     * destination.</p>
     */
    inline void SetOutput(Output&& value) { m_outputHasBeenSet = true; m_output = std::move(value); }

    /**
     * <p>An array of objects, each describing one output configuration. In the output
     * configuration, you specify the name of an in-application stream, a destination
     * (that is, an Amazon Kinesis stream, an Amazon Kinesis Firehose delivery stream,
     * or an AWS Lambda function), and record the formation to use when writing to the
     * destination.</p>
     */
    inline AddApplicationOutputRequest& WithOutput(const Output& value) { SetOutput(value); return *this;}

    /**
     * <p>An array of objects, each describing one output configuration. In the output
     * configuration, you specify the name of an in-application stream, a destination
     * (that is, an Amazon Kinesis stream, an Amazon Kinesis Firehose delivery stream,
     * or an AWS Lambda function), and record the formation to use when writing to the
     * destination.</p>
     */
    inline AddApplicationOutputRequest& WithOutput(Output&& value) { SetOutput(std::move(value)); return *this;}

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
