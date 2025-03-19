/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kinesisanalyticsv2/model/InputProcessingConfiguration.h>
#include <aws/kinesisanalyticsv2/model/KinesisStreamsInput.h>
#include <aws/kinesisanalyticsv2/model/KinesisFirehoseInput.h>
#include <aws/kinesisanalyticsv2/model/InputParallelism.h>
#include <aws/kinesisanalyticsv2/model/SourceSchema.h>
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
namespace KinesisAnalyticsV2
{
namespace Model
{

  /**
   * <p>When you configure the application input for a SQL-based Kinesis Data
   * Analytics application, you specify the streaming source, the in-application
   * stream name that is created, and the mapping between the two. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/Input">AWS
   * API Reference</a></p>
   */
  class Input
  {
  public:
    AWS_KINESISANALYTICSV2_API Input() = default;
    AWS_KINESISANALYTICSV2_API Input(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API Input& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name prefix to use when creating an in-application stream. Suppose that
     * you specify a prefix "<code>MyInApplicationStream</code>." Kinesis Data
     * Analytics then creates one or more (as per the <code>InputParallelism</code>
     * count you specified) in-application streams with the names
     * "<code>MyInApplicationStream_001</code>,"
     * "<code>MyInApplicationStream_002</code>," and so on. </p>
     */
    inline const Aws::String& GetNamePrefix() const { return m_namePrefix; }
    inline bool NamePrefixHasBeenSet() const { return m_namePrefixHasBeenSet; }
    template<typename NamePrefixT = Aws::String>
    void SetNamePrefix(NamePrefixT&& value) { m_namePrefixHasBeenSet = true; m_namePrefix = std::forward<NamePrefixT>(value); }
    template<typename NamePrefixT = Aws::String>
    Input& WithNamePrefix(NamePrefixT&& value) { SetNamePrefix(std::forward<NamePrefixT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <a>InputProcessingConfiguration</a> for the input. An input processor
     * transforms records as they are received from the stream, before the
     * application's SQL code executes. Currently, the only input processing
     * configuration available is <a>InputLambdaProcessor</a>. </p>
     */
    inline const InputProcessingConfiguration& GetInputProcessingConfiguration() const { return m_inputProcessingConfiguration; }
    inline bool InputProcessingConfigurationHasBeenSet() const { return m_inputProcessingConfigurationHasBeenSet; }
    template<typename InputProcessingConfigurationT = InputProcessingConfiguration>
    void SetInputProcessingConfiguration(InputProcessingConfigurationT&& value) { m_inputProcessingConfigurationHasBeenSet = true; m_inputProcessingConfiguration = std::forward<InputProcessingConfigurationT>(value); }
    template<typename InputProcessingConfigurationT = InputProcessingConfiguration>
    Input& WithInputProcessingConfiguration(InputProcessingConfigurationT&& value) { SetInputProcessingConfiguration(std::forward<InputProcessingConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the streaming source is an Amazon Kinesis data stream, identifies the
     * stream's Amazon Resource Name (ARN). </p>
     */
    inline const KinesisStreamsInput& GetKinesisStreamsInput() const { return m_kinesisStreamsInput; }
    inline bool KinesisStreamsInputHasBeenSet() const { return m_kinesisStreamsInputHasBeenSet; }
    template<typename KinesisStreamsInputT = KinesisStreamsInput>
    void SetKinesisStreamsInput(KinesisStreamsInputT&& value) { m_kinesisStreamsInputHasBeenSet = true; m_kinesisStreamsInput = std::forward<KinesisStreamsInputT>(value); }
    template<typename KinesisStreamsInputT = KinesisStreamsInput>
    Input& WithKinesisStreamsInput(KinesisStreamsInputT&& value) { SetKinesisStreamsInput(std::forward<KinesisStreamsInputT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the streaming source is an Amazon Kinesis Data Firehose delivery stream,
     * identifies the delivery stream's ARN.</p>
     */
    inline const KinesisFirehoseInput& GetKinesisFirehoseInput() const { return m_kinesisFirehoseInput; }
    inline bool KinesisFirehoseInputHasBeenSet() const { return m_kinesisFirehoseInputHasBeenSet; }
    template<typename KinesisFirehoseInputT = KinesisFirehoseInput>
    void SetKinesisFirehoseInput(KinesisFirehoseInputT&& value) { m_kinesisFirehoseInputHasBeenSet = true; m_kinesisFirehoseInput = std::forward<KinesisFirehoseInputT>(value); }
    template<typename KinesisFirehoseInputT = KinesisFirehoseInput>
    Input& WithKinesisFirehoseInput(KinesisFirehoseInputT&& value) { SetKinesisFirehoseInput(std::forward<KinesisFirehoseInputT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the number of in-application streams to create. </p>
     */
    inline const InputParallelism& GetInputParallelism() const { return m_inputParallelism; }
    inline bool InputParallelismHasBeenSet() const { return m_inputParallelismHasBeenSet; }
    template<typename InputParallelismT = InputParallelism>
    void SetInputParallelism(InputParallelismT&& value) { m_inputParallelismHasBeenSet = true; m_inputParallelism = std::forward<InputParallelismT>(value); }
    template<typename InputParallelismT = InputParallelism>
    Input& WithInputParallelism(InputParallelismT&& value) { SetInputParallelism(std::forward<InputParallelismT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the format of the data in the streaming source, and how each data
     * element maps to corresponding columns in the in-application stream that is being
     * created.</p> <p>Also used to describe the format of the reference data
     * source.</p>
     */
    inline const SourceSchema& GetInputSchema() const { return m_inputSchema; }
    inline bool InputSchemaHasBeenSet() const { return m_inputSchemaHasBeenSet; }
    template<typename InputSchemaT = SourceSchema>
    void SetInputSchema(InputSchemaT&& value) { m_inputSchemaHasBeenSet = true; m_inputSchema = std::forward<InputSchemaT>(value); }
    template<typename InputSchemaT = SourceSchema>
    Input& WithInputSchema(InputSchemaT&& value) { SetInputSchema(std::forward<InputSchemaT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_namePrefix;
    bool m_namePrefixHasBeenSet = false;

    InputProcessingConfiguration m_inputProcessingConfiguration;
    bool m_inputProcessingConfigurationHasBeenSet = false;

    KinesisStreamsInput m_kinesisStreamsInput;
    bool m_kinesisStreamsInputHasBeenSet = false;

    KinesisFirehoseInput m_kinesisFirehoseInput;
    bool m_kinesisFirehoseInputHasBeenSet = false;

    InputParallelism m_inputParallelism;
    bool m_inputParallelismHasBeenSet = false;

    SourceSchema m_inputSchema;
    bool m_inputSchemaHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
