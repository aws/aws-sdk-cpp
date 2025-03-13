/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class CreateApplicationRequest : public KinesisAnalyticsRequest
  {
  public:
    AWS_KINESISANALYTICS_API CreateApplicationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateApplication"; }

    AWS_KINESISANALYTICS_API Aws::String SerializePayload() const override;

    AWS_KINESISANALYTICS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Name of your Amazon Kinesis Analytics application (for example,
     * <code>sample-app</code>).</p>
     */
    inline const Aws::String& GetApplicationName() const { return m_applicationName; }
    inline bool ApplicationNameHasBeenSet() const { return m_applicationNameHasBeenSet; }
    template<typename ApplicationNameT = Aws::String>
    void SetApplicationName(ApplicationNameT&& value) { m_applicationNameHasBeenSet = true; m_applicationName = std::forward<ApplicationNameT>(value); }
    template<typename ApplicationNameT = Aws::String>
    CreateApplicationRequest& WithApplicationName(ApplicationNameT&& value) { SetApplicationName(std::forward<ApplicationNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Summary description of the application.</p>
     */
    inline const Aws::String& GetApplicationDescription() const { return m_applicationDescription; }
    inline bool ApplicationDescriptionHasBeenSet() const { return m_applicationDescriptionHasBeenSet; }
    template<typename ApplicationDescriptionT = Aws::String>
    void SetApplicationDescription(ApplicationDescriptionT&& value) { m_applicationDescriptionHasBeenSet = true; m_applicationDescription = std::forward<ApplicationDescriptionT>(value); }
    template<typename ApplicationDescriptionT = Aws::String>
    CreateApplicationRequest& WithApplicationDescription(ApplicationDescriptionT&& value) { SetApplicationDescription(std::forward<ApplicationDescriptionT>(value)); return *this;}
    ///@}

    ///@{
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
    inline const Aws::Vector<Input>& GetInputs() const { return m_inputs; }
    inline bool InputsHasBeenSet() const { return m_inputsHasBeenSet; }
    template<typename InputsT = Aws::Vector<Input>>
    void SetInputs(InputsT&& value) { m_inputsHasBeenSet = true; m_inputs = std::forward<InputsT>(value); }
    template<typename InputsT = Aws::Vector<Input>>
    CreateApplicationRequest& WithInputs(InputsT&& value) { SetInputs(std::forward<InputsT>(value)); return *this;}
    template<typename InputsT = Input>
    CreateApplicationRequest& AddInputs(InputsT&& value) { m_inputsHasBeenSet = true; m_inputs.emplace_back(std::forward<InputsT>(value)); return *this; }
    ///@}

    ///@{
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
    inline const Aws::Vector<Output>& GetOutputs() const { return m_outputs; }
    inline bool OutputsHasBeenSet() const { return m_outputsHasBeenSet; }
    template<typename OutputsT = Aws::Vector<Output>>
    void SetOutputs(OutputsT&& value) { m_outputsHasBeenSet = true; m_outputs = std::forward<OutputsT>(value); }
    template<typename OutputsT = Aws::Vector<Output>>
    CreateApplicationRequest& WithOutputs(OutputsT&& value) { SetOutputs(std::forward<OutputsT>(value)); return *this;}
    template<typename OutputsT = Output>
    CreateApplicationRequest& AddOutputs(OutputsT&& value) { m_outputsHasBeenSet = true; m_outputs.emplace_back(std::forward<OutputsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Use this parameter to configure a CloudWatch log stream to monitor
     * application configuration errors. For more information, see <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/cloudwatch-logs.html">Working
     * with Amazon CloudWatch Logs</a>.</p>
     */
    inline const Aws::Vector<CloudWatchLoggingOption>& GetCloudWatchLoggingOptions() const { return m_cloudWatchLoggingOptions; }
    inline bool CloudWatchLoggingOptionsHasBeenSet() const { return m_cloudWatchLoggingOptionsHasBeenSet; }
    template<typename CloudWatchLoggingOptionsT = Aws::Vector<CloudWatchLoggingOption>>
    void SetCloudWatchLoggingOptions(CloudWatchLoggingOptionsT&& value) { m_cloudWatchLoggingOptionsHasBeenSet = true; m_cloudWatchLoggingOptions = std::forward<CloudWatchLoggingOptionsT>(value); }
    template<typename CloudWatchLoggingOptionsT = Aws::Vector<CloudWatchLoggingOption>>
    CreateApplicationRequest& WithCloudWatchLoggingOptions(CloudWatchLoggingOptionsT&& value) { SetCloudWatchLoggingOptions(std::forward<CloudWatchLoggingOptionsT>(value)); return *this;}
    template<typename CloudWatchLoggingOptionsT = CloudWatchLoggingOption>
    CreateApplicationRequest& AddCloudWatchLoggingOptions(CloudWatchLoggingOptionsT&& value) { m_cloudWatchLoggingOptionsHasBeenSet = true; m_cloudWatchLoggingOptions.emplace_back(std::forward<CloudWatchLoggingOptionsT>(value)); return *this; }
    ///@}

    ///@{
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
    inline const Aws::String& GetApplicationCode() const { return m_applicationCode; }
    inline bool ApplicationCodeHasBeenSet() const { return m_applicationCodeHasBeenSet; }
    template<typename ApplicationCodeT = Aws::String>
    void SetApplicationCode(ApplicationCodeT&& value) { m_applicationCodeHasBeenSet = true; m_applicationCode = std::forward<ApplicationCodeT>(value); }
    template<typename ApplicationCodeT = Aws::String>
    CreateApplicationRequest& WithApplicationCode(ApplicationCodeT&& value) { SetApplicationCode(std::forward<ApplicationCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of one or more tags to assign to the application. A tag is a key-value
     * pair that identifies an application. Note that the maximum number of application
     * tags includes system tags. The maximum number of user-defined application tags
     * is 50. For more information, see <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/how-tagging.html">Using
     * Tagging</a>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateApplicationRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateApplicationRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_applicationName;
    bool m_applicationNameHasBeenSet = false;

    Aws::String m_applicationDescription;
    bool m_applicationDescriptionHasBeenSet = false;

    Aws::Vector<Input> m_inputs;
    bool m_inputsHasBeenSet = false;

    Aws::Vector<Output> m_outputs;
    bool m_outputsHasBeenSet = false;

    Aws::Vector<CloudWatchLoggingOption> m_cloudWatchLoggingOptions;
    bool m_cloudWatchLoggingOptionsHasBeenSet = false;

    Aws::String m_applicationCode;
    bool m_applicationCodeHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalytics
} // namespace Aws
