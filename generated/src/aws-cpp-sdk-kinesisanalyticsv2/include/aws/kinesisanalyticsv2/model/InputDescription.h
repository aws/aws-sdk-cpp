/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kinesisanalyticsv2/model/InputProcessingConfigurationDescription.h>
#include <aws/kinesisanalyticsv2/model/KinesisStreamsInputDescription.h>
#include <aws/kinesisanalyticsv2/model/KinesisFirehoseInputDescription.h>
#include <aws/kinesisanalyticsv2/model/SourceSchema.h>
#include <aws/kinesisanalyticsv2/model/InputParallelism.h>
#include <aws/kinesisanalyticsv2/model/InputStartingPositionConfiguration.h>
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
   * <p>Describes the application input configuration for a SQL-based Kinesis Data
   * Analytics application. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/InputDescription">AWS
   * API Reference</a></p>
   */
  class InputDescription
  {
  public:
    AWS_KINESISANALYTICSV2_API InputDescription() = default;
    AWS_KINESISANALYTICSV2_API InputDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API InputDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The input ID that is associated with the application input. This is the ID
     * that Kinesis Data Analytics assigns to each input configuration that you add to
     * your application. </p>
     */
    inline const Aws::String& GetInputId() const { return m_inputId; }
    inline bool InputIdHasBeenSet() const { return m_inputIdHasBeenSet; }
    template<typename InputIdT = Aws::String>
    void SetInputId(InputIdT&& value) { m_inputIdHasBeenSet = true; m_inputId = std::forward<InputIdT>(value); }
    template<typename InputIdT = Aws::String>
    InputDescription& WithInputId(InputIdT&& value) { SetInputId(std::forward<InputIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The in-application name prefix.</p>
     */
    inline const Aws::String& GetNamePrefix() const { return m_namePrefix; }
    inline bool NamePrefixHasBeenSet() const { return m_namePrefixHasBeenSet; }
    template<typename NamePrefixT = Aws::String>
    void SetNamePrefix(NamePrefixT&& value) { m_namePrefixHasBeenSet = true; m_namePrefix = std::forward<NamePrefixT>(value); }
    template<typename NamePrefixT = Aws::String>
    InputDescription& WithNamePrefix(NamePrefixT&& value) { SetNamePrefix(std::forward<NamePrefixT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns the in-application stream names that are mapped to the stream source.
     * </p>
     */
    inline const Aws::Vector<Aws::String>& GetInAppStreamNames() const { return m_inAppStreamNames; }
    inline bool InAppStreamNamesHasBeenSet() const { return m_inAppStreamNamesHasBeenSet; }
    template<typename InAppStreamNamesT = Aws::Vector<Aws::String>>
    void SetInAppStreamNames(InAppStreamNamesT&& value) { m_inAppStreamNamesHasBeenSet = true; m_inAppStreamNames = std::forward<InAppStreamNamesT>(value); }
    template<typename InAppStreamNamesT = Aws::Vector<Aws::String>>
    InputDescription& WithInAppStreamNames(InAppStreamNamesT&& value) { SetInAppStreamNames(std::forward<InAppStreamNamesT>(value)); return *this;}
    template<typename InAppStreamNamesT = Aws::String>
    InputDescription& AddInAppStreamNames(InAppStreamNamesT&& value) { m_inAppStreamNamesHasBeenSet = true; m_inAppStreamNames.emplace_back(std::forward<InAppStreamNamesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The description of the preprocessor that executes on records in this input
     * before the application's code is run. </p>
     */
    inline const InputProcessingConfigurationDescription& GetInputProcessingConfigurationDescription() const { return m_inputProcessingConfigurationDescription; }
    inline bool InputProcessingConfigurationDescriptionHasBeenSet() const { return m_inputProcessingConfigurationDescriptionHasBeenSet; }
    template<typename InputProcessingConfigurationDescriptionT = InputProcessingConfigurationDescription>
    void SetInputProcessingConfigurationDescription(InputProcessingConfigurationDescriptionT&& value) { m_inputProcessingConfigurationDescriptionHasBeenSet = true; m_inputProcessingConfigurationDescription = std::forward<InputProcessingConfigurationDescriptionT>(value); }
    template<typename InputProcessingConfigurationDescriptionT = InputProcessingConfigurationDescription>
    InputDescription& WithInputProcessingConfigurationDescription(InputProcessingConfigurationDescriptionT&& value) { SetInputProcessingConfigurationDescription(std::forward<InputProcessingConfigurationDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If a Kinesis data stream is configured as a streaming source, provides the
     * Kinesis data stream's Amazon Resource Name (ARN). </p>
     */
    inline const KinesisStreamsInputDescription& GetKinesisStreamsInputDescription() const { return m_kinesisStreamsInputDescription; }
    inline bool KinesisStreamsInputDescriptionHasBeenSet() const { return m_kinesisStreamsInputDescriptionHasBeenSet; }
    template<typename KinesisStreamsInputDescriptionT = KinesisStreamsInputDescription>
    void SetKinesisStreamsInputDescription(KinesisStreamsInputDescriptionT&& value) { m_kinesisStreamsInputDescriptionHasBeenSet = true; m_kinesisStreamsInputDescription = std::forward<KinesisStreamsInputDescriptionT>(value); }
    template<typename KinesisStreamsInputDescriptionT = KinesisStreamsInputDescription>
    InputDescription& WithKinesisStreamsInputDescription(KinesisStreamsInputDescriptionT&& value) { SetKinesisStreamsInputDescription(std::forward<KinesisStreamsInputDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If a Kinesis Data Firehose delivery stream is configured as a streaming
     * source, provides the delivery stream's ARN. </p>
     */
    inline const KinesisFirehoseInputDescription& GetKinesisFirehoseInputDescription() const { return m_kinesisFirehoseInputDescription; }
    inline bool KinesisFirehoseInputDescriptionHasBeenSet() const { return m_kinesisFirehoseInputDescriptionHasBeenSet; }
    template<typename KinesisFirehoseInputDescriptionT = KinesisFirehoseInputDescription>
    void SetKinesisFirehoseInputDescription(KinesisFirehoseInputDescriptionT&& value) { m_kinesisFirehoseInputDescriptionHasBeenSet = true; m_kinesisFirehoseInputDescription = std::forward<KinesisFirehoseInputDescriptionT>(value); }
    template<typename KinesisFirehoseInputDescriptionT = KinesisFirehoseInputDescription>
    InputDescription& WithKinesisFirehoseInputDescription(KinesisFirehoseInputDescriptionT&& value) { SetKinesisFirehoseInputDescription(std::forward<KinesisFirehoseInputDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the format of the data in the streaming source, and how each data
     * element maps to corresponding columns in the in-application stream that is being
     * created. </p>
     */
    inline const SourceSchema& GetInputSchema() const { return m_inputSchema; }
    inline bool InputSchemaHasBeenSet() const { return m_inputSchemaHasBeenSet; }
    template<typename InputSchemaT = SourceSchema>
    void SetInputSchema(InputSchemaT&& value) { m_inputSchemaHasBeenSet = true; m_inputSchema = std::forward<InputSchemaT>(value); }
    template<typename InputSchemaT = SourceSchema>
    InputDescription& WithInputSchema(InputSchemaT&& value) { SetInputSchema(std::forward<InputSchemaT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the configured parallelism (number of in-application streams mapped
     * to the streaming source). </p>
     */
    inline const InputParallelism& GetInputParallelism() const { return m_inputParallelism; }
    inline bool InputParallelismHasBeenSet() const { return m_inputParallelismHasBeenSet; }
    template<typename InputParallelismT = InputParallelism>
    void SetInputParallelism(InputParallelismT&& value) { m_inputParallelismHasBeenSet = true; m_inputParallelism = std::forward<InputParallelismT>(value); }
    template<typename InputParallelismT = InputParallelism>
    InputDescription& WithInputParallelism(InputParallelismT&& value) { SetInputParallelism(std::forward<InputParallelismT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The point at which the application is configured to read from the input
     * stream.</p>
     */
    inline const InputStartingPositionConfiguration& GetInputStartingPositionConfiguration() const { return m_inputStartingPositionConfiguration; }
    inline bool InputStartingPositionConfigurationHasBeenSet() const { return m_inputStartingPositionConfigurationHasBeenSet; }
    template<typename InputStartingPositionConfigurationT = InputStartingPositionConfiguration>
    void SetInputStartingPositionConfiguration(InputStartingPositionConfigurationT&& value) { m_inputStartingPositionConfigurationHasBeenSet = true; m_inputStartingPositionConfiguration = std::forward<InputStartingPositionConfigurationT>(value); }
    template<typename InputStartingPositionConfigurationT = InputStartingPositionConfiguration>
    InputDescription& WithInputStartingPositionConfiguration(InputStartingPositionConfigurationT&& value) { SetInputStartingPositionConfiguration(std::forward<InputStartingPositionConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_inputId;
    bool m_inputIdHasBeenSet = false;

    Aws::String m_namePrefix;
    bool m_namePrefixHasBeenSet = false;

    Aws::Vector<Aws::String> m_inAppStreamNames;
    bool m_inAppStreamNamesHasBeenSet = false;

    InputProcessingConfigurationDescription m_inputProcessingConfigurationDescription;
    bool m_inputProcessingConfigurationDescriptionHasBeenSet = false;

    KinesisStreamsInputDescription m_kinesisStreamsInputDescription;
    bool m_kinesisStreamsInputDescriptionHasBeenSet = false;

    KinesisFirehoseInputDescription m_kinesisFirehoseInputDescription;
    bool m_kinesisFirehoseInputDescriptionHasBeenSet = false;

    SourceSchema m_inputSchema;
    bool m_inputSchemaHasBeenSet = false;

    InputParallelism m_inputParallelism;
    bool m_inputParallelismHasBeenSet = false;

    InputStartingPositionConfiguration m_inputStartingPositionConfiguration;
    bool m_inputStartingPositionConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
