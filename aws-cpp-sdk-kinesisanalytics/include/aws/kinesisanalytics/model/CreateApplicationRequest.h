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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kinesisanalytics/model/Input.h>
#include <aws/kinesisanalytics/model/Output.h>
#include <aws/kinesisanalytics/model/CloudWatchLoggingOption.h>
#include <aws/kinesisanalytics/model/Tag.h>
#include <utility>

namespace Aws
{
namespace KinesisAnalytics
{
namespace Model
{

  /**
   * <p>TBD</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalytics-2015-08-14/CreateApplicationRequest">AWS
   * API Reference</a></p>
   */
  class AWS_KINESISANALYTICS_API CreateApplicationRequest : public KinesisAnalyticsRequest
  {
  public:
    CreateApplicationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateApplication"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Name of your Amazon Kinesis Analytics application (for example,
     * <code>sample-app</code>).</p>
     */
    inline const Aws::String& GetApplicationName() const{ return m_applicationName; }

    /**
     * <p>Name of your Amazon Kinesis Analytics application (for example,
     * <code>sample-app</code>).</p>
     */
    inline bool ApplicationNameHasBeenSet() const { return m_applicationNameHasBeenSet; }

    /**
     * <p>Name of your Amazon Kinesis Analytics application (for example,
     * <code>sample-app</code>).</p>
     */
    inline void SetApplicationName(const Aws::String& value) { m_applicationNameHasBeenSet = true; m_applicationName = value; }

    /**
     * <p>Name of your Amazon Kinesis Analytics application (for example,
     * <code>sample-app</code>).</p>
     */
    inline void SetApplicationName(Aws::String&& value) { m_applicationNameHasBeenSet = true; m_applicationName = std::move(value); }

    /**
     * <p>Name of your Amazon Kinesis Analytics application (for example,
     * <code>sample-app</code>).</p>
     */
    inline void SetApplicationName(const char* value) { m_applicationNameHasBeenSet = true; m_applicationName.assign(value); }

    /**
     * <p>Name of your Amazon Kinesis Analytics application (for example,
     * <code>sample-app</code>).</p>
     */
    inline CreateApplicationRequest& WithApplicationName(const Aws::String& value) { SetApplicationName(value); return *this;}

    /**
     * <p>Name of your Amazon Kinesis Analytics application (for example,
     * <code>sample-app</code>).</p>
     */
    inline CreateApplicationRequest& WithApplicationName(Aws::String&& value) { SetApplicationName(std::move(value)); return *this;}

    /**
     * <p>Name of your Amazon Kinesis Analytics application (for example,
     * <code>sample-app</code>).</p>
     */
    inline CreateApplicationRequest& WithApplicationName(const char* value) { SetApplicationName(value); return *this;}


    /**
     * <p>Summary description of the application.</p>
     */
    inline const Aws::String& GetApplicationDescription() const{ return m_applicationDescription; }

    /**
     * <p>Summary description of the application.</p>
     */
    inline bool ApplicationDescriptionHasBeenSet() const { return m_applicationDescriptionHasBeenSet; }

    /**
     * <p>Summary description of the application.</p>
     */
    inline void SetApplicationDescription(const Aws::String& value) { m_applicationDescriptionHasBeenSet = true; m_applicationDescription = value; }

    /**
     * <p>Summary description of the application.</p>
     */
    inline void SetApplicationDescription(Aws::String&& value) { m_applicationDescriptionHasBeenSet = true; m_applicationDescription = std::move(value); }

    /**
     * <p>Summary description of the application.</p>
     */
    inline void SetApplicationDescription(const char* value) { m_applicationDescriptionHasBeenSet = true; m_applicationDescription.assign(value); }

    /**
     * <p>Summary description of the application.</p>
     */
    inline CreateApplicationRequest& WithApplicationDescription(const Aws::String& value) { SetApplicationDescription(value); return *this;}

    /**
     * <p>Summary description of the application.</p>
     */
    inline CreateApplicationRequest& WithApplicationDescription(Aws::String&& value) { SetApplicationDescription(std::move(value)); return *this;}

    /**
     * <p>Summary description of the application.</p>
     */
    inline CreateApplicationRequest& WithApplicationDescription(const char* value) { SetApplicationDescription(value); return *this;}


    /**
     * <p>Use this parameter to configure the application input.</p> <p>You can
     * configure your application to receive input from a single streaming source. In
     * this configuration, you map this streaming source to an in-application stream
     * that is created. Your application code can then query the in-application stream
     * like a table (you can think of it as a constantly updating table).</p> <p>For
     * the streaming source, you provide its Amazon Resource Name (ARN) and format of
     * data on the stream (for example, JSON, CSV, etc.). You also must provide an IAM
     * role that Amazon Kinesis Analytics can assume to read this stream on your
     * behalf.</p> <p>To create the in-application stream, you need to specify a schema
     * to transform your data into a schematized version used in SQL. In the schema,
     * you provide the necessary mapping of the data elements in the streaming source
     * to record columns in the in-app stream.</p>
     */
    inline const Aws::Vector<Input>& GetInputs() const{ return m_inputs; }

    /**
     * <p>Use this parameter to configure the application input.</p> <p>You can
     * configure your application to receive input from a single streaming source. In
     * this configuration, you map this streaming source to an in-application stream
     * that is created. Your application code can then query the in-application stream
     * like a table (you can think of it as a constantly updating table).</p> <p>For
     * the streaming source, you provide its Amazon Resource Name (ARN) and format of
     * data on the stream (for example, JSON, CSV, etc.). You also must provide an IAM
     * role that Amazon Kinesis Analytics can assume to read this stream on your
     * behalf.</p> <p>To create the in-application stream, you need to specify a schema
     * to transform your data into a schematized version used in SQL. In the schema,
     * you provide the necessary mapping of the data elements in the streaming source
     * to record columns in the in-app stream.</p>
     */
    inline bool InputsHasBeenSet() const { return m_inputsHasBeenSet; }

    /**
     * <p>Use this parameter to configure the application input.</p> <p>You can
     * configure your application to receive input from a single streaming source. In
     * this configuration, you map this streaming source to an in-application stream
     * that is created. Your application code can then query the in-application stream
     * like a table (you can think of it as a constantly updating table).</p> <p>For
     * the streaming source, you provide its Amazon Resource Name (ARN) and format of
     * data on the stream (for example, JSON, CSV, etc.). You also must provide an IAM
     * role that Amazon Kinesis Analytics can assume to read this stream on your
     * behalf.</p> <p>To create the in-application stream, you need to specify a schema
     * to transform your data into a schematized version used in SQL. In the schema,
     * you provide the necessary mapping of the data elements in the streaming source
     * to record columns in the in-app stream.</p>
     */
    inline void SetInputs(const Aws::Vector<Input>& value) { m_inputsHasBeenSet = true; m_inputs = value; }

    /**
     * <p>Use this parameter to configure the application input.</p> <p>You can
     * configure your application to receive input from a single streaming source. In
     * this configuration, you map this streaming source to an in-application stream
     * that is created. Your application code can then query the in-application stream
     * like a table (you can think of it as a constantly updating table).</p> <p>For
     * the streaming source, you provide its Amazon Resource Name (ARN) and format of
     * data on the stream (for example, JSON, CSV, etc.). You also must provide an IAM
     * role that Amazon Kinesis Analytics can assume to read this stream on your
     * behalf.</p> <p>To create the in-application stream, you need to specify a schema
     * to transform your data into a schematized version used in SQL. In the schema,
     * you provide the necessary mapping of the data elements in the streaming source
     * to record columns in the in-app stream.</p>
     */
    inline void SetInputs(Aws::Vector<Input>&& value) { m_inputsHasBeenSet = true; m_inputs = std::move(value); }

    /**
     * <p>Use this parameter to configure the application input.</p> <p>You can
     * configure your application to receive input from a single streaming source. In
     * this configuration, you map this streaming source to an in-application stream
     * that is created. Your application code can then query the in-application stream
     * like a table (you can think of it as a constantly updating table).</p> <p>For
     * the streaming source, you provide its Amazon Resource Name (ARN) and format of
     * data on the stream (for example, JSON, CSV, etc.). You also must provide an IAM
     * role that Amazon Kinesis Analytics can assume to read this stream on your
     * behalf.</p> <p>To create the in-application stream, you need to specify a schema
     * to transform your data into a schematized version used in SQL. In the schema,
     * you provide the necessary mapping of the data elements in the streaming source
     * to record columns in the in-app stream.</p>
     */
    inline CreateApplicationRequest& WithInputs(const Aws::Vector<Input>& value) { SetInputs(value); return *this;}

    /**
     * <p>Use this parameter to configure the application input.</p> <p>You can
     * configure your application to receive input from a single streaming source. In
     * this configuration, you map this streaming source to an in-application stream
     * that is created. Your application code can then query the in-application stream
     * like a table (you can think of it as a constantly updating table).</p> <p>For
     * the streaming source, you provide its Amazon Resource Name (ARN) and format of
     * data on the stream (for example, JSON, CSV, etc.). You also must provide an IAM
     * role that Amazon Kinesis Analytics can assume to read this stream on your
     * behalf.</p> <p>To create the in-application stream, you need to specify a schema
     * to transform your data into a schematized version used in SQL. In the schema,
     * you provide the necessary mapping of the data elements in the streaming source
     * to record columns in the in-app stream.</p>
     */
    inline CreateApplicationRequest& WithInputs(Aws::Vector<Input>&& value) { SetInputs(std::move(value)); return *this;}

    /**
     * <p>Use this parameter to configure the application input.</p> <p>You can
     * configure your application to receive input from a single streaming source. In
     * this configuration, you map this streaming source to an in-application stream
     * that is created. Your application code can then query the in-application stream
     * like a table (you can think of it as a constantly updating table).</p> <p>For
     * the streaming source, you provide its Amazon Resource Name (ARN) and format of
     * data on the stream (for example, JSON, CSV, etc.). You also must provide an IAM
     * role that Amazon Kinesis Analytics can assume to read this stream on your
     * behalf.</p> <p>To create the in-application stream, you need to specify a schema
     * to transform your data into a schematized version used in SQL. In the schema,
     * you provide the necessary mapping of the data elements in the streaming source
     * to record columns in the in-app stream.</p>
     */
    inline CreateApplicationRequest& AddInputs(const Input& value) { m_inputsHasBeenSet = true; m_inputs.push_back(value); return *this; }

    /**
     * <p>Use this parameter to configure the application input.</p> <p>You can
     * configure your application to receive input from a single streaming source. In
     * this configuration, you map this streaming source to an in-application stream
     * that is created. Your application code can then query the in-application stream
     * like a table (you can think of it as a constantly updating table).</p> <p>For
     * the streaming source, you provide its Amazon Resource Name (ARN) and format of
     * data on the stream (for example, JSON, CSV, etc.). You also must provide an IAM
     * role that Amazon Kinesis Analytics can assume to read this stream on your
     * behalf.</p> <p>To create the in-application stream, you need to specify a schema
     * to transform your data into a schematized version used in SQL. In the schema,
     * you provide the necessary mapping of the data elements in the streaming source
     * to record columns in the in-app stream.</p>
     */
    inline CreateApplicationRequest& AddInputs(Input&& value) { m_inputsHasBeenSet = true; m_inputs.push_back(std::move(value)); return *this; }


    /**
     * <p>You can configure application output to write data from any of the
     * in-application streams to up to three destinations.</p> <p>These destinations
     * can be Amazon Kinesis streams, Amazon Kinesis Firehose delivery streams, AWS
     * Lambda destinations, or any combination of the three.</p> <p>In the
     * configuration, you specify the in-application stream name, the destination
     * stream or Lambda function Amazon Resource Name (ARN), and the format to use when
     * writing data. You must also provide an IAM role that Amazon Kinesis Analytics
     * can assume to write to the destination stream or Lambda function on your
     * behalf.</p> <p>In the output configuration, you also provide the output stream
     * or Lambda function ARN. For stream destinations, you provide the format of data
     * in the stream (for example, JSON, CSV). You also must provide an IAM role that
     * Amazon Kinesis Analytics can assume to write to the stream or Lambda function on
     * your behalf.</p>
     */
    inline const Aws::Vector<Output>& GetOutputs() const{ return m_outputs; }

    /**
     * <p>You can configure application output to write data from any of the
     * in-application streams to up to three destinations.</p> <p>These destinations
     * can be Amazon Kinesis streams, Amazon Kinesis Firehose delivery streams, AWS
     * Lambda destinations, or any combination of the three.</p> <p>In the
     * configuration, you specify the in-application stream name, the destination
     * stream or Lambda function Amazon Resource Name (ARN), and the format to use when
     * writing data. You must also provide an IAM role that Amazon Kinesis Analytics
     * can assume to write to the destination stream or Lambda function on your
     * behalf.</p> <p>In the output configuration, you also provide the output stream
     * or Lambda function ARN. For stream destinations, you provide the format of data
     * in the stream (for example, JSON, CSV). You also must provide an IAM role that
     * Amazon Kinesis Analytics can assume to write to the stream or Lambda function on
     * your behalf.</p>
     */
    inline bool OutputsHasBeenSet() const { return m_outputsHasBeenSet; }

    /**
     * <p>You can configure application output to write data from any of the
     * in-application streams to up to three destinations.</p> <p>These destinations
     * can be Amazon Kinesis streams, Amazon Kinesis Firehose delivery streams, AWS
     * Lambda destinations, or any combination of the three.</p> <p>In the
     * configuration, you specify the in-application stream name, the destination
     * stream or Lambda function Amazon Resource Name (ARN), and the format to use when
     * writing data. You must also provide an IAM role that Amazon Kinesis Analytics
     * can assume to write to the destination stream or Lambda function on your
     * behalf.</p> <p>In the output configuration, you also provide the output stream
     * or Lambda function ARN. For stream destinations, you provide the format of data
     * in the stream (for example, JSON, CSV). You also must provide an IAM role that
     * Amazon Kinesis Analytics can assume to write to the stream or Lambda function on
     * your behalf.</p>
     */
    inline void SetOutputs(const Aws::Vector<Output>& value) { m_outputsHasBeenSet = true; m_outputs = value; }

    /**
     * <p>You can configure application output to write data from any of the
     * in-application streams to up to three destinations.</p> <p>These destinations
     * can be Amazon Kinesis streams, Amazon Kinesis Firehose delivery streams, AWS
     * Lambda destinations, or any combination of the three.</p> <p>In the
     * configuration, you specify the in-application stream name, the destination
     * stream or Lambda function Amazon Resource Name (ARN), and the format to use when
     * writing data. You must also provide an IAM role that Amazon Kinesis Analytics
     * can assume to write to the destination stream or Lambda function on your
     * behalf.</p> <p>In the output configuration, you also provide the output stream
     * or Lambda function ARN. For stream destinations, you provide the format of data
     * in the stream (for example, JSON, CSV). You also must provide an IAM role that
     * Amazon Kinesis Analytics can assume to write to the stream or Lambda function on
     * your behalf.</p>
     */
    inline void SetOutputs(Aws::Vector<Output>&& value) { m_outputsHasBeenSet = true; m_outputs = std::move(value); }

    /**
     * <p>You can configure application output to write data from any of the
     * in-application streams to up to three destinations.</p> <p>These destinations
     * can be Amazon Kinesis streams, Amazon Kinesis Firehose delivery streams, AWS
     * Lambda destinations, or any combination of the three.</p> <p>In the
     * configuration, you specify the in-application stream name, the destination
     * stream or Lambda function Amazon Resource Name (ARN), and the format to use when
     * writing data. You must also provide an IAM role that Amazon Kinesis Analytics
     * can assume to write to the destination stream or Lambda function on your
     * behalf.</p> <p>In the output configuration, you also provide the output stream
     * or Lambda function ARN. For stream destinations, you provide the format of data
     * in the stream (for example, JSON, CSV). You also must provide an IAM role that
     * Amazon Kinesis Analytics can assume to write to the stream or Lambda function on
     * your behalf.</p>
     */
    inline CreateApplicationRequest& WithOutputs(const Aws::Vector<Output>& value) { SetOutputs(value); return *this;}

    /**
     * <p>You can configure application output to write data from any of the
     * in-application streams to up to three destinations.</p> <p>These destinations
     * can be Amazon Kinesis streams, Amazon Kinesis Firehose delivery streams, AWS
     * Lambda destinations, or any combination of the three.</p> <p>In the
     * configuration, you specify the in-application stream name, the destination
     * stream or Lambda function Amazon Resource Name (ARN), and the format to use when
     * writing data. You must also provide an IAM role that Amazon Kinesis Analytics
     * can assume to write to the destination stream or Lambda function on your
     * behalf.</p> <p>In the output configuration, you also provide the output stream
     * or Lambda function ARN. For stream destinations, you provide the format of data
     * in the stream (for example, JSON, CSV). You also must provide an IAM role that
     * Amazon Kinesis Analytics can assume to write to the stream or Lambda function on
     * your behalf.</p>
     */
    inline CreateApplicationRequest& WithOutputs(Aws::Vector<Output>&& value) { SetOutputs(std::move(value)); return *this;}

    /**
     * <p>You can configure application output to write data from any of the
     * in-application streams to up to three destinations.</p> <p>These destinations
     * can be Amazon Kinesis streams, Amazon Kinesis Firehose delivery streams, AWS
     * Lambda destinations, or any combination of the three.</p> <p>In the
     * configuration, you specify the in-application stream name, the destination
     * stream or Lambda function Amazon Resource Name (ARN), and the format to use when
     * writing data. You must also provide an IAM role that Amazon Kinesis Analytics
     * can assume to write to the destination stream or Lambda function on your
     * behalf.</p> <p>In the output configuration, you also provide the output stream
     * or Lambda function ARN. For stream destinations, you provide the format of data
     * in the stream (for example, JSON, CSV). You also must provide an IAM role that
     * Amazon Kinesis Analytics can assume to write to the stream or Lambda function on
     * your behalf.</p>
     */
    inline CreateApplicationRequest& AddOutputs(const Output& value) { m_outputsHasBeenSet = true; m_outputs.push_back(value); return *this; }

    /**
     * <p>You can configure application output to write data from any of the
     * in-application streams to up to three destinations.</p> <p>These destinations
     * can be Amazon Kinesis streams, Amazon Kinesis Firehose delivery streams, AWS
     * Lambda destinations, or any combination of the three.</p> <p>In the
     * configuration, you specify the in-application stream name, the destination
     * stream or Lambda function Amazon Resource Name (ARN), and the format to use when
     * writing data. You must also provide an IAM role that Amazon Kinesis Analytics
     * can assume to write to the destination stream or Lambda function on your
     * behalf.</p> <p>In the output configuration, you also provide the output stream
     * or Lambda function ARN. For stream destinations, you provide the format of data
     * in the stream (for example, JSON, CSV). You also must provide an IAM role that
     * Amazon Kinesis Analytics can assume to write to the stream or Lambda function on
     * your behalf.</p>
     */
    inline CreateApplicationRequest& AddOutputs(Output&& value) { m_outputsHasBeenSet = true; m_outputs.push_back(std::move(value)); return *this; }


    /**
     * <p>Use this parameter to configure a CloudWatch log stream to monitor
     * application configuration errors. For more information, see <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/cloudwatch-logs.html">Working
     * with Amazon CloudWatch Logs</a>.</p>
     */
    inline const Aws::Vector<CloudWatchLoggingOption>& GetCloudWatchLoggingOptions() const{ return m_cloudWatchLoggingOptions; }

    /**
     * <p>Use this parameter to configure a CloudWatch log stream to monitor
     * application configuration errors. For more information, see <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/cloudwatch-logs.html">Working
     * with Amazon CloudWatch Logs</a>.</p>
     */
    inline bool CloudWatchLoggingOptionsHasBeenSet() const { return m_cloudWatchLoggingOptionsHasBeenSet; }

    /**
     * <p>Use this parameter to configure a CloudWatch log stream to monitor
     * application configuration errors. For more information, see <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/cloudwatch-logs.html">Working
     * with Amazon CloudWatch Logs</a>.</p>
     */
    inline void SetCloudWatchLoggingOptions(const Aws::Vector<CloudWatchLoggingOption>& value) { m_cloudWatchLoggingOptionsHasBeenSet = true; m_cloudWatchLoggingOptions = value; }

    /**
     * <p>Use this parameter to configure a CloudWatch log stream to monitor
     * application configuration errors. For more information, see <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/cloudwatch-logs.html">Working
     * with Amazon CloudWatch Logs</a>.</p>
     */
    inline void SetCloudWatchLoggingOptions(Aws::Vector<CloudWatchLoggingOption>&& value) { m_cloudWatchLoggingOptionsHasBeenSet = true; m_cloudWatchLoggingOptions = std::move(value); }

    /**
     * <p>Use this parameter to configure a CloudWatch log stream to monitor
     * application configuration errors. For more information, see <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/cloudwatch-logs.html">Working
     * with Amazon CloudWatch Logs</a>.</p>
     */
    inline CreateApplicationRequest& WithCloudWatchLoggingOptions(const Aws::Vector<CloudWatchLoggingOption>& value) { SetCloudWatchLoggingOptions(value); return *this;}

    /**
     * <p>Use this parameter to configure a CloudWatch log stream to monitor
     * application configuration errors. For more information, see <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/cloudwatch-logs.html">Working
     * with Amazon CloudWatch Logs</a>.</p>
     */
    inline CreateApplicationRequest& WithCloudWatchLoggingOptions(Aws::Vector<CloudWatchLoggingOption>&& value) { SetCloudWatchLoggingOptions(std::move(value)); return *this;}

    /**
     * <p>Use this parameter to configure a CloudWatch log stream to monitor
     * application configuration errors. For more information, see <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/cloudwatch-logs.html">Working
     * with Amazon CloudWatch Logs</a>.</p>
     */
    inline CreateApplicationRequest& AddCloudWatchLoggingOptions(const CloudWatchLoggingOption& value) { m_cloudWatchLoggingOptionsHasBeenSet = true; m_cloudWatchLoggingOptions.push_back(value); return *this; }

    /**
     * <p>Use this parameter to configure a CloudWatch log stream to monitor
     * application configuration errors. For more information, see <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/cloudwatch-logs.html">Working
     * with Amazon CloudWatch Logs</a>.</p>
     */
    inline CreateApplicationRequest& AddCloudWatchLoggingOptions(CloudWatchLoggingOption&& value) { m_cloudWatchLoggingOptionsHasBeenSet = true; m_cloudWatchLoggingOptions.push_back(std::move(value)); return *this; }


    /**
     * <p>One or more SQL statements that read input data, transform it, and generate
     * output. For example, you can write a SQL statement that reads data from one
     * in-application stream, generates a running average of the number of
     * advertisement clicks by vendor, and insert resulting rows in another
     * in-application stream using pumps. For more information about the typical
     * pattern, see <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/how-it-works-app-code.html">Application
     * Code</a>. </p> <p>You can provide such series of SQL statements, where output of
     * one statement can be used as the input for the next statement. You store
     * intermediate results by creating in-application streams and pumps.</p> <p>Note
     * that the application code must create the streams with names specified in the
     * <code>Outputs</code>. For example, if your <code>Outputs</code> defines output
     * streams named <code>ExampleOutputStream1</code> and
     * <code>ExampleOutputStream2</code>, then your application code must create these
     * streams. </p>
     */
    inline const Aws::String& GetApplicationCode() const{ return m_applicationCode; }

    /**
     * <p>One or more SQL statements that read input data, transform it, and generate
     * output. For example, you can write a SQL statement that reads data from one
     * in-application stream, generates a running average of the number of
     * advertisement clicks by vendor, and insert resulting rows in another
     * in-application stream using pumps. For more information about the typical
     * pattern, see <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/how-it-works-app-code.html">Application
     * Code</a>. </p> <p>You can provide such series of SQL statements, where output of
     * one statement can be used as the input for the next statement. You store
     * intermediate results by creating in-application streams and pumps.</p> <p>Note
     * that the application code must create the streams with names specified in the
     * <code>Outputs</code>. For example, if your <code>Outputs</code> defines output
     * streams named <code>ExampleOutputStream1</code> and
     * <code>ExampleOutputStream2</code>, then your application code must create these
     * streams. </p>
     */
    inline bool ApplicationCodeHasBeenSet() const { return m_applicationCodeHasBeenSet; }

    /**
     * <p>One or more SQL statements that read input data, transform it, and generate
     * output. For example, you can write a SQL statement that reads data from one
     * in-application stream, generates a running average of the number of
     * advertisement clicks by vendor, and insert resulting rows in another
     * in-application stream using pumps. For more information about the typical
     * pattern, see <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/how-it-works-app-code.html">Application
     * Code</a>. </p> <p>You can provide such series of SQL statements, where output of
     * one statement can be used as the input for the next statement. You store
     * intermediate results by creating in-application streams and pumps.</p> <p>Note
     * that the application code must create the streams with names specified in the
     * <code>Outputs</code>. For example, if your <code>Outputs</code> defines output
     * streams named <code>ExampleOutputStream1</code> and
     * <code>ExampleOutputStream2</code>, then your application code must create these
     * streams. </p>
     */
    inline void SetApplicationCode(const Aws::String& value) { m_applicationCodeHasBeenSet = true; m_applicationCode = value; }

    /**
     * <p>One or more SQL statements that read input data, transform it, and generate
     * output. For example, you can write a SQL statement that reads data from one
     * in-application stream, generates a running average of the number of
     * advertisement clicks by vendor, and insert resulting rows in another
     * in-application stream using pumps. For more information about the typical
     * pattern, see <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/how-it-works-app-code.html">Application
     * Code</a>. </p> <p>You can provide such series of SQL statements, where output of
     * one statement can be used as the input for the next statement. You store
     * intermediate results by creating in-application streams and pumps.</p> <p>Note
     * that the application code must create the streams with names specified in the
     * <code>Outputs</code>. For example, if your <code>Outputs</code> defines output
     * streams named <code>ExampleOutputStream1</code> and
     * <code>ExampleOutputStream2</code>, then your application code must create these
     * streams. </p>
     */
    inline void SetApplicationCode(Aws::String&& value) { m_applicationCodeHasBeenSet = true; m_applicationCode = std::move(value); }

    /**
     * <p>One or more SQL statements that read input data, transform it, and generate
     * output. For example, you can write a SQL statement that reads data from one
     * in-application stream, generates a running average of the number of
     * advertisement clicks by vendor, and insert resulting rows in another
     * in-application stream using pumps. For more information about the typical
     * pattern, see <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/how-it-works-app-code.html">Application
     * Code</a>. </p> <p>You can provide such series of SQL statements, where output of
     * one statement can be used as the input for the next statement. You store
     * intermediate results by creating in-application streams and pumps.</p> <p>Note
     * that the application code must create the streams with names specified in the
     * <code>Outputs</code>. For example, if your <code>Outputs</code> defines output
     * streams named <code>ExampleOutputStream1</code> and
     * <code>ExampleOutputStream2</code>, then your application code must create these
     * streams. </p>
     */
    inline void SetApplicationCode(const char* value) { m_applicationCodeHasBeenSet = true; m_applicationCode.assign(value); }

    /**
     * <p>One or more SQL statements that read input data, transform it, and generate
     * output. For example, you can write a SQL statement that reads data from one
     * in-application stream, generates a running average of the number of
     * advertisement clicks by vendor, and insert resulting rows in another
     * in-application stream using pumps. For more information about the typical
     * pattern, see <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/how-it-works-app-code.html">Application
     * Code</a>. </p> <p>You can provide such series of SQL statements, where output of
     * one statement can be used as the input for the next statement. You store
     * intermediate results by creating in-application streams and pumps.</p> <p>Note
     * that the application code must create the streams with names specified in the
     * <code>Outputs</code>. For example, if your <code>Outputs</code> defines output
     * streams named <code>ExampleOutputStream1</code> and
     * <code>ExampleOutputStream2</code>, then your application code must create these
     * streams. </p>
     */
    inline CreateApplicationRequest& WithApplicationCode(const Aws::String& value) { SetApplicationCode(value); return *this;}

    /**
     * <p>One or more SQL statements that read input data, transform it, and generate
     * output. For example, you can write a SQL statement that reads data from one
     * in-application stream, generates a running average of the number of
     * advertisement clicks by vendor, and insert resulting rows in another
     * in-application stream using pumps. For more information about the typical
     * pattern, see <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/how-it-works-app-code.html">Application
     * Code</a>. </p> <p>You can provide such series of SQL statements, where output of
     * one statement can be used as the input for the next statement. You store
     * intermediate results by creating in-application streams and pumps.</p> <p>Note
     * that the application code must create the streams with names specified in the
     * <code>Outputs</code>. For example, if your <code>Outputs</code> defines output
     * streams named <code>ExampleOutputStream1</code> and
     * <code>ExampleOutputStream2</code>, then your application code must create these
     * streams. </p>
     */
    inline CreateApplicationRequest& WithApplicationCode(Aws::String&& value) { SetApplicationCode(std::move(value)); return *this;}

    /**
     * <p>One or more SQL statements that read input data, transform it, and generate
     * output. For example, you can write a SQL statement that reads data from one
     * in-application stream, generates a running average of the number of
     * advertisement clicks by vendor, and insert resulting rows in another
     * in-application stream using pumps. For more information about the typical
     * pattern, see <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/how-it-works-app-code.html">Application
     * Code</a>. </p> <p>You can provide such series of SQL statements, where output of
     * one statement can be used as the input for the next statement. You store
     * intermediate results by creating in-application streams and pumps.</p> <p>Note
     * that the application code must create the streams with names specified in the
     * <code>Outputs</code>. For example, if your <code>Outputs</code> defines output
     * streams named <code>ExampleOutputStream1</code> and
     * <code>ExampleOutputStream2</code>, then your application code must create these
     * streams. </p>
     */
    inline CreateApplicationRequest& WithApplicationCode(const char* value) { SetApplicationCode(value); return *this;}


    /**
     * <p>A list of one or more tags to assign to the application. A tag is a key-value
     * pair that identifies an application. Note that the maximum number of application
     * tags includes system tags. The maximum number of user-defined application tags
     * is 50. For more information, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html">Using
     * Cost Allocation Tags</a> in the <i>AWS Billing and Cost Management
     * Guide</i>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>A list of one or more tags to assign to the application. A tag is a key-value
     * pair that identifies an application. Note that the maximum number of application
     * tags includes system tags. The maximum number of user-defined application tags
     * is 50. For more information, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html">Using
     * Cost Allocation Tags</a> in the <i>AWS Billing and Cost Management
     * Guide</i>.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A list of one or more tags to assign to the application. A tag is a key-value
     * pair that identifies an application. Note that the maximum number of application
     * tags includes system tags. The maximum number of user-defined application tags
     * is 50. For more information, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html">Using
     * Cost Allocation Tags</a> in the <i>AWS Billing and Cost Management
     * Guide</i>.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A list of one or more tags to assign to the application. A tag is a key-value
     * pair that identifies an application. Note that the maximum number of application
     * tags includes system tags. The maximum number of user-defined application tags
     * is 50. For more information, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html">Using
     * Cost Allocation Tags</a> in the <i>AWS Billing and Cost Management
     * Guide</i>.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A list of one or more tags to assign to the application. A tag is a key-value
     * pair that identifies an application. Note that the maximum number of application
     * tags includes system tags. The maximum number of user-defined application tags
     * is 50. For more information, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html">Using
     * Cost Allocation Tags</a> in the <i>AWS Billing and Cost Management
     * Guide</i>.</p>
     */
    inline CreateApplicationRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of one or more tags to assign to the application. A tag is a key-value
     * pair that identifies an application. Note that the maximum number of application
     * tags includes system tags. The maximum number of user-defined application tags
     * is 50. For more information, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html">Using
     * Cost Allocation Tags</a> in the <i>AWS Billing and Cost Management
     * Guide</i>.</p>
     */
    inline CreateApplicationRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A list of one or more tags to assign to the application. A tag is a key-value
     * pair that identifies an application. Note that the maximum number of application
     * tags includes system tags. The maximum number of user-defined application tags
     * is 50. For more information, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html">Using
     * Cost Allocation Tags</a> in the <i>AWS Billing and Cost Management
     * Guide</i>.</p>
     */
    inline CreateApplicationRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>A list of one or more tags to assign to the application. A tag is a key-value
     * pair that identifies an application. Note that the maximum number of application
     * tags includes system tags. The maximum number of user-defined application tags
     * is 50. For more information, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html">Using
     * Cost Allocation Tags</a> in the <i>AWS Billing and Cost Management
     * Guide</i>.</p>
     */
    inline CreateApplicationRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_applicationName;
    bool m_applicationNameHasBeenSet;

    Aws::String m_applicationDescription;
    bool m_applicationDescriptionHasBeenSet;

    Aws::Vector<Input> m_inputs;
    bool m_inputsHasBeenSet;

    Aws::Vector<Output> m_outputs;
    bool m_outputsHasBeenSet;

    Aws::Vector<CloudWatchLoggingOption> m_cloudWatchLoggingOptions;
    bool m_cloudWatchLoggingOptionsHasBeenSet;

    Aws::String m_applicationCode;
    bool m_applicationCodeHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace KinesisAnalytics
} // namespace Aws
