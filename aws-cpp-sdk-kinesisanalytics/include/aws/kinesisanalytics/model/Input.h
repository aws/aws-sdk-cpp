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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kinesisanalytics/model/InputProcessingConfiguration.h>
#include <aws/kinesisanalytics/model/KinesisStreamsInput.h>
#include <aws/kinesisanalytics/model/KinesisFirehoseInput.h>
#include <aws/kinesisanalytics/model/InputParallelism.h>
#include <aws/kinesisanalytics/model/SourceSchema.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace KinesisAnalytics
{
namespace Model
{

  /**
   * <p>When you configure the application input, you specify the streaming source,
   * the in-application stream name that is created, and the mapping between the two.
   * For more information, see <a
   * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/how-it-works-input.html">Configuring
   * Application Input</a>. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalytics-2015-08-14/Input">AWS
   * API Reference</a></p>
   */
  class AWS_KINESISANALYTICS_API Input
  {
  public:
    Input();
    Input(Aws::Utils::Json::JsonView jsonValue);
    Input& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Name prefix to use when creating an in-application stream. Suppose that you
     * specify a prefix "MyInApplicationStream." Amazon Kinesis Analytics then creates
     * one or more (as per the <code>InputParallelism</code> count you specified)
     * in-application streams with names "MyInApplicationStream_001,"
     * "MyInApplicationStream_002," and so on. </p>
     */
    inline const Aws::String& GetNamePrefix() const{ return m_namePrefix; }

    /**
     * <p>Name prefix to use when creating an in-application stream. Suppose that you
     * specify a prefix "MyInApplicationStream." Amazon Kinesis Analytics then creates
     * one or more (as per the <code>InputParallelism</code> count you specified)
     * in-application streams with names "MyInApplicationStream_001,"
     * "MyInApplicationStream_002," and so on. </p>
     */
    inline bool NamePrefixHasBeenSet() const { return m_namePrefixHasBeenSet; }

    /**
     * <p>Name prefix to use when creating an in-application stream. Suppose that you
     * specify a prefix "MyInApplicationStream." Amazon Kinesis Analytics then creates
     * one or more (as per the <code>InputParallelism</code> count you specified)
     * in-application streams with names "MyInApplicationStream_001,"
     * "MyInApplicationStream_002," and so on. </p>
     */
    inline void SetNamePrefix(const Aws::String& value) { m_namePrefixHasBeenSet = true; m_namePrefix = value; }

    /**
     * <p>Name prefix to use when creating an in-application stream. Suppose that you
     * specify a prefix "MyInApplicationStream." Amazon Kinesis Analytics then creates
     * one or more (as per the <code>InputParallelism</code> count you specified)
     * in-application streams with names "MyInApplicationStream_001,"
     * "MyInApplicationStream_002," and so on. </p>
     */
    inline void SetNamePrefix(Aws::String&& value) { m_namePrefixHasBeenSet = true; m_namePrefix = std::move(value); }

    /**
     * <p>Name prefix to use when creating an in-application stream. Suppose that you
     * specify a prefix "MyInApplicationStream." Amazon Kinesis Analytics then creates
     * one or more (as per the <code>InputParallelism</code> count you specified)
     * in-application streams with names "MyInApplicationStream_001,"
     * "MyInApplicationStream_002," and so on. </p>
     */
    inline void SetNamePrefix(const char* value) { m_namePrefixHasBeenSet = true; m_namePrefix.assign(value); }

    /**
     * <p>Name prefix to use when creating an in-application stream. Suppose that you
     * specify a prefix "MyInApplicationStream." Amazon Kinesis Analytics then creates
     * one or more (as per the <code>InputParallelism</code> count you specified)
     * in-application streams with names "MyInApplicationStream_001,"
     * "MyInApplicationStream_002," and so on. </p>
     */
    inline Input& WithNamePrefix(const Aws::String& value) { SetNamePrefix(value); return *this;}

    /**
     * <p>Name prefix to use when creating an in-application stream. Suppose that you
     * specify a prefix "MyInApplicationStream." Amazon Kinesis Analytics then creates
     * one or more (as per the <code>InputParallelism</code> count you specified)
     * in-application streams with names "MyInApplicationStream_001,"
     * "MyInApplicationStream_002," and so on. </p>
     */
    inline Input& WithNamePrefix(Aws::String&& value) { SetNamePrefix(std::move(value)); return *this;}

    /**
     * <p>Name prefix to use when creating an in-application stream. Suppose that you
     * specify a prefix "MyInApplicationStream." Amazon Kinesis Analytics then creates
     * one or more (as per the <code>InputParallelism</code> count you specified)
     * in-application streams with names "MyInApplicationStream_001,"
     * "MyInApplicationStream_002," and so on. </p>
     */
    inline Input& WithNamePrefix(const char* value) { SetNamePrefix(value); return *this;}


    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_InputProcessingConfiguration.html">InputProcessingConfiguration</a>
     * for the input. An input processor transforms records as they are received from
     * the stream, before the application's SQL code executes. Currently, the only
     * input processing configuration available is <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_InputLambdaProcessor.html">InputLambdaProcessor</a>.</p>
     */
    inline const InputProcessingConfiguration& GetInputProcessingConfiguration() const{ return m_inputProcessingConfiguration; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_InputProcessingConfiguration.html">InputProcessingConfiguration</a>
     * for the input. An input processor transforms records as they are received from
     * the stream, before the application's SQL code executes. Currently, the only
     * input processing configuration available is <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_InputLambdaProcessor.html">InputLambdaProcessor</a>.</p>
     */
    inline bool InputProcessingConfigurationHasBeenSet() const { return m_inputProcessingConfigurationHasBeenSet; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_InputProcessingConfiguration.html">InputProcessingConfiguration</a>
     * for the input. An input processor transforms records as they are received from
     * the stream, before the application's SQL code executes. Currently, the only
     * input processing configuration available is <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_InputLambdaProcessor.html">InputLambdaProcessor</a>.</p>
     */
    inline void SetInputProcessingConfiguration(const InputProcessingConfiguration& value) { m_inputProcessingConfigurationHasBeenSet = true; m_inputProcessingConfiguration = value; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_InputProcessingConfiguration.html">InputProcessingConfiguration</a>
     * for the input. An input processor transforms records as they are received from
     * the stream, before the application's SQL code executes. Currently, the only
     * input processing configuration available is <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_InputLambdaProcessor.html">InputLambdaProcessor</a>.</p>
     */
    inline void SetInputProcessingConfiguration(InputProcessingConfiguration&& value) { m_inputProcessingConfigurationHasBeenSet = true; m_inputProcessingConfiguration = std::move(value); }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_InputProcessingConfiguration.html">InputProcessingConfiguration</a>
     * for the input. An input processor transforms records as they are received from
     * the stream, before the application's SQL code executes. Currently, the only
     * input processing configuration available is <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_InputLambdaProcessor.html">InputLambdaProcessor</a>.</p>
     */
    inline Input& WithInputProcessingConfiguration(const InputProcessingConfiguration& value) { SetInputProcessingConfiguration(value); return *this;}

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_InputProcessingConfiguration.html">InputProcessingConfiguration</a>
     * for the input. An input processor transforms records as they are received from
     * the stream, before the application's SQL code executes. Currently, the only
     * input processing configuration available is <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_InputLambdaProcessor.html">InputLambdaProcessor</a>.</p>
     */
    inline Input& WithInputProcessingConfiguration(InputProcessingConfiguration&& value) { SetInputProcessingConfiguration(std::move(value)); return *this;}


    /**
     * <p>If the streaming source is an Amazon Kinesis stream, identifies the stream's
     * Amazon Resource Name (ARN) and an IAM role that enables Amazon Kinesis Analytics
     * to access the stream on your behalf.</p> <p>Note: Either
     * <code>KinesisStreamsInput</code> or <code>KinesisFirehoseInput</code> is
     * required.</p>
     */
    inline const KinesisStreamsInput& GetKinesisStreamsInput() const{ return m_kinesisStreamsInput; }

    /**
     * <p>If the streaming source is an Amazon Kinesis stream, identifies the stream's
     * Amazon Resource Name (ARN) and an IAM role that enables Amazon Kinesis Analytics
     * to access the stream on your behalf.</p> <p>Note: Either
     * <code>KinesisStreamsInput</code> or <code>KinesisFirehoseInput</code> is
     * required.</p>
     */
    inline bool KinesisStreamsInputHasBeenSet() const { return m_kinesisStreamsInputHasBeenSet; }

    /**
     * <p>If the streaming source is an Amazon Kinesis stream, identifies the stream's
     * Amazon Resource Name (ARN) and an IAM role that enables Amazon Kinesis Analytics
     * to access the stream on your behalf.</p> <p>Note: Either
     * <code>KinesisStreamsInput</code> or <code>KinesisFirehoseInput</code> is
     * required.</p>
     */
    inline void SetKinesisStreamsInput(const KinesisStreamsInput& value) { m_kinesisStreamsInputHasBeenSet = true; m_kinesisStreamsInput = value; }

    /**
     * <p>If the streaming source is an Amazon Kinesis stream, identifies the stream's
     * Amazon Resource Name (ARN) and an IAM role that enables Amazon Kinesis Analytics
     * to access the stream on your behalf.</p> <p>Note: Either
     * <code>KinesisStreamsInput</code> or <code>KinesisFirehoseInput</code> is
     * required.</p>
     */
    inline void SetKinesisStreamsInput(KinesisStreamsInput&& value) { m_kinesisStreamsInputHasBeenSet = true; m_kinesisStreamsInput = std::move(value); }

    /**
     * <p>If the streaming source is an Amazon Kinesis stream, identifies the stream's
     * Amazon Resource Name (ARN) and an IAM role that enables Amazon Kinesis Analytics
     * to access the stream on your behalf.</p> <p>Note: Either
     * <code>KinesisStreamsInput</code> or <code>KinesisFirehoseInput</code> is
     * required.</p>
     */
    inline Input& WithKinesisStreamsInput(const KinesisStreamsInput& value) { SetKinesisStreamsInput(value); return *this;}

    /**
     * <p>If the streaming source is an Amazon Kinesis stream, identifies the stream's
     * Amazon Resource Name (ARN) and an IAM role that enables Amazon Kinesis Analytics
     * to access the stream on your behalf.</p> <p>Note: Either
     * <code>KinesisStreamsInput</code> or <code>KinesisFirehoseInput</code> is
     * required.</p>
     */
    inline Input& WithKinesisStreamsInput(KinesisStreamsInput&& value) { SetKinesisStreamsInput(std::move(value)); return *this;}


    /**
     * <p>If the streaming source is an Amazon Kinesis Firehose delivery stream,
     * identifies the delivery stream's ARN and an IAM role that enables Amazon Kinesis
     * Analytics to access the stream on your behalf.</p> <p>Note: Either
     * <code>KinesisStreamsInput</code> or <code>KinesisFirehoseInput</code> is
     * required.</p>
     */
    inline const KinesisFirehoseInput& GetKinesisFirehoseInput() const{ return m_kinesisFirehoseInput; }

    /**
     * <p>If the streaming source is an Amazon Kinesis Firehose delivery stream,
     * identifies the delivery stream's ARN and an IAM role that enables Amazon Kinesis
     * Analytics to access the stream on your behalf.</p> <p>Note: Either
     * <code>KinesisStreamsInput</code> or <code>KinesisFirehoseInput</code> is
     * required.</p>
     */
    inline bool KinesisFirehoseInputHasBeenSet() const { return m_kinesisFirehoseInputHasBeenSet; }

    /**
     * <p>If the streaming source is an Amazon Kinesis Firehose delivery stream,
     * identifies the delivery stream's ARN and an IAM role that enables Amazon Kinesis
     * Analytics to access the stream on your behalf.</p> <p>Note: Either
     * <code>KinesisStreamsInput</code> or <code>KinesisFirehoseInput</code> is
     * required.</p>
     */
    inline void SetKinesisFirehoseInput(const KinesisFirehoseInput& value) { m_kinesisFirehoseInputHasBeenSet = true; m_kinesisFirehoseInput = value; }

    /**
     * <p>If the streaming source is an Amazon Kinesis Firehose delivery stream,
     * identifies the delivery stream's ARN and an IAM role that enables Amazon Kinesis
     * Analytics to access the stream on your behalf.</p> <p>Note: Either
     * <code>KinesisStreamsInput</code> or <code>KinesisFirehoseInput</code> is
     * required.</p>
     */
    inline void SetKinesisFirehoseInput(KinesisFirehoseInput&& value) { m_kinesisFirehoseInputHasBeenSet = true; m_kinesisFirehoseInput = std::move(value); }

    /**
     * <p>If the streaming source is an Amazon Kinesis Firehose delivery stream,
     * identifies the delivery stream's ARN and an IAM role that enables Amazon Kinesis
     * Analytics to access the stream on your behalf.</p> <p>Note: Either
     * <code>KinesisStreamsInput</code> or <code>KinesisFirehoseInput</code> is
     * required.</p>
     */
    inline Input& WithKinesisFirehoseInput(const KinesisFirehoseInput& value) { SetKinesisFirehoseInput(value); return *this;}

    /**
     * <p>If the streaming source is an Amazon Kinesis Firehose delivery stream,
     * identifies the delivery stream's ARN and an IAM role that enables Amazon Kinesis
     * Analytics to access the stream on your behalf.</p> <p>Note: Either
     * <code>KinesisStreamsInput</code> or <code>KinesisFirehoseInput</code> is
     * required.</p>
     */
    inline Input& WithKinesisFirehoseInput(KinesisFirehoseInput&& value) { SetKinesisFirehoseInput(std::move(value)); return *this;}


    /**
     * <p>Describes the number of in-application streams to create. </p> <p>Data from
     * your source is routed to these in-application input streams.</p> <p> (see <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/how-it-works-input.html">Configuring
     * Application Input</a>.</p>
     */
    inline const InputParallelism& GetInputParallelism() const{ return m_inputParallelism; }

    /**
     * <p>Describes the number of in-application streams to create. </p> <p>Data from
     * your source is routed to these in-application input streams.</p> <p> (see <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/how-it-works-input.html">Configuring
     * Application Input</a>.</p>
     */
    inline bool InputParallelismHasBeenSet() const { return m_inputParallelismHasBeenSet; }

    /**
     * <p>Describes the number of in-application streams to create. </p> <p>Data from
     * your source is routed to these in-application input streams.</p> <p> (see <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/how-it-works-input.html">Configuring
     * Application Input</a>.</p>
     */
    inline void SetInputParallelism(const InputParallelism& value) { m_inputParallelismHasBeenSet = true; m_inputParallelism = value; }

    /**
     * <p>Describes the number of in-application streams to create. </p> <p>Data from
     * your source is routed to these in-application input streams.</p> <p> (see <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/how-it-works-input.html">Configuring
     * Application Input</a>.</p>
     */
    inline void SetInputParallelism(InputParallelism&& value) { m_inputParallelismHasBeenSet = true; m_inputParallelism = std::move(value); }

    /**
     * <p>Describes the number of in-application streams to create. </p> <p>Data from
     * your source is routed to these in-application input streams.</p> <p> (see <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/how-it-works-input.html">Configuring
     * Application Input</a>.</p>
     */
    inline Input& WithInputParallelism(const InputParallelism& value) { SetInputParallelism(value); return *this;}

    /**
     * <p>Describes the number of in-application streams to create. </p> <p>Data from
     * your source is routed to these in-application input streams.</p> <p> (see <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/how-it-works-input.html">Configuring
     * Application Input</a>.</p>
     */
    inline Input& WithInputParallelism(InputParallelism&& value) { SetInputParallelism(std::move(value)); return *this;}


    /**
     * <p>Describes the format of the data in the streaming source, and how each data
     * element maps to corresponding columns in the in-application stream that is being
     * created.</p> <p>Also used to describe the format of the reference data
     * source.</p>
     */
    inline const SourceSchema& GetInputSchema() const{ return m_inputSchema; }

    /**
     * <p>Describes the format of the data in the streaming source, and how each data
     * element maps to corresponding columns in the in-application stream that is being
     * created.</p> <p>Also used to describe the format of the reference data
     * source.</p>
     */
    inline bool InputSchemaHasBeenSet() const { return m_inputSchemaHasBeenSet; }

    /**
     * <p>Describes the format of the data in the streaming source, and how each data
     * element maps to corresponding columns in the in-application stream that is being
     * created.</p> <p>Also used to describe the format of the reference data
     * source.</p>
     */
    inline void SetInputSchema(const SourceSchema& value) { m_inputSchemaHasBeenSet = true; m_inputSchema = value; }

    /**
     * <p>Describes the format of the data in the streaming source, and how each data
     * element maps to corresponding columns in the in-application stream that is being
     * created.</p> <p>Also used to describe the format of the reference data
     * source.</p>
     */
    inline void SetInputSchema(SourceSchema&& value) { m_inputSchemaHasBeenSet = true; m_inputSchema = std::move(value); }

    /**
     * <p>Describes the format of the data in the streaming source, and how each data
     * element maps to corresponding columns in the in-application stream that is being
     * created.</p> <p>Also used to describe the format of the reference data
     * source.</p>
     */
    inline Input& WithInputSchema(const SourceSchema& value) { SetInputSchema(value); return *this;}

    /**
     * <p>Describes the format of the data in the streaming source, and how each data
     * element maps to corresponding columns in the in-application stream that is being
     * created.</p> <p>Also used to describe the format of the reference data
     * source.</p>
     */
    inline Input& WithInputSchema(SourceSchema&& value) { SetInputSchema(std::move(value)); return *this;}

  private:

    Aws::String m_namePrefix;
    bool m_namePrefixHasBeenSet;

    InputProcessingConfiguration m_inputProcessingConfiguration;
    bool m_inputProcessingConfigurationHasBeenSet;

    KinesisStreamsInput m_kinesisStreamsInput;
    bool m_kinesisStreamsInputHasBeenSet;

    KinesisFirehoseInput m_kinesisFirehoseInput;
    bool m_kinesisFirehoseInputHasBeenSet;

    InputParallelism m_inputParallelism;
    bool m_inputParallelismHasBeenSet;

    SourceSchema m_inputSchema;
    bool m_inputSchemaHasBeenSet;
  };

} // namespace Model
} // namespace KinesisAnalytics
} // namespace Aws
