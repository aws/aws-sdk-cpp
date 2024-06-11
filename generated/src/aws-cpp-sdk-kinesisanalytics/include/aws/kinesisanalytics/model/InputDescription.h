﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalytics/KinesisAnalytics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kinesisanalytics/model/InputProcessingConfigurationDescription.h>
#include <aws/kinesisanalytics/model/KinesisStreamsInputDescription.h>
#include <aws/kinesisanalytics/model/KinesisFirehoseInputDescription.h>
#include <aws/kinesisanalytics/model/SourceSchema.h>
#include <aws/kinesisanalytics/model/InputParallelism.h>
#include <aws/kinesisanalytics/model/InputStartingPositionConfiguration.h>
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
   * <p>Describes the application input configuration. For more information, see <a
   * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/how-it-works-input.html">Configuring
   * Application Input</a>. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalytics-2015-08-14/InputDescription">AWS
   * API Reference</a></p>
   */
  class InputDescription
  {
  public:
    AWS_KINESISANALYTICS_API InputDescription();
    AWS_KINESISANALYTICS_API InputDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICS_API InputDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Input ID associated with the application input. This is the ID that Amazon
     * Kinesis Analytics assigns to each input configuration you add to your
     * application. </p>
     */
    inline const Aws::String& GetInputId() const{ return m_inputId; }
    inline bool InputIdHasBeenSet() const { return m_inputIdHasBeenSet; }
    inline void SetInputId(const Aws::String& value) { m_inputIdHasBeenSet = true; m_inputId = value; }
    inline void SetInputId(Aws::String&& value) { m_inputIdHasBeenSet = true; m_inputId = std::move(value); }
    inline void SetInputId(const char* value) { m_inputIdHasBeenSet = true; m_inputId.assign(value); }
    inline InputDescription& WithInputId(const Aws::String& value) { SetInputId(value); return *this;}
    inline InputDescription& WithInputId(Aws::String&& value) { SetInputId(std::move(value)); return *this;}
    inline InputDescription& WithInputId(const char* value) { SetInputId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>In-application name prefix.</p>
     */
    inline const Aws::String& GetNamePrefix() const{ return m_namePrefix; }
    inline bool NamePrefixHasBeenSet() const { return m_namePrefixHasBeenSet; }
    inline void SetNamePrefix(const Aws::String& value) { m_namePrefixHasBeenSet = true; m_namePrefix = value; }
    inline void SetNamePrefix(Aws::String&& value) { m_namePrefixHasBeenSet = true; m_namePrefix = std::move(value); }
    inline void SetNamePrefix(const char* value) { m_namePrefixHasBeenSet = true; m_namePrefix.assign(value); }
    inline InputDescription& WithNamePrefix(const Aws::String& value) { SetNamePrefix(value); return *this;}
    inline InputDescription& WithNamePrefix(Aws::String&& value) { SetNamePrefix(std::move(value)); return *this;}
    inline InputDescription& WithNamePrefix(const char* value) { SetNamePrefix(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns the in-application stream names that are mapped to the stream
     * source.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInAppStreamNames() const{ return m_inAppStreamNames; }
    inline bool InAppStreamNamesHasBeenSet() const { return m_inAppStreamNamesHasBeenSet; }
    inline void SetInAppStreamNames(const Aws::Vector<Aws::String>& value) { m_inAppStreamNamesHasBeenSet = true; m_inAppStreamNames = value; }
    inline void SetInAppStreamNames(Aws::Vector<Aws::String>&& value) { m_inAppStreamNamesHasBeenSet = true; m_inAppStreamNames = std::move(value); }
    inline InputDescription& WithInAppStreamNames(const Aws::Vector<Aws::String>& value) { SetInAppStreamNames(value); return *this;}
    inline InputDescription& WithInAppStreamNames(Aws::Vector<Aws::String>&& value) { SetInAppStreamNames(std::move(value)); return *this;}
    inline InputDescription& AddInAppStreamNames(const Aws::String& value) { m_inAppStreamNamesHasBeenSet = true; m_inAppStreamNames.push_back(value); return *this; }
    inline InputDescription& AddInAppStreamNames(Aws::String&& value) { m_inAppStreamNamesHasBeenSet = true; m_inAppStreamNames.push_back(std::move(value)); return *this; }
    inline InputDescription& AddInAppStreamNames(const char* value) { m_inAppStreamNamesHasBeenSet = true; m_inAppStreamNames.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The description of the preprocessor that executes on records in this input
     * before the application's code is run.</p>
     */
    inline const InputProcessingConfigurationDescription& GetInputProcessingConfigurationDescription() const{ return m_inputProcessingConfigurationDescription; }
    inline bool InputProcessingConfigurationDescriptionHasBeenSet() const { return m_inputProcessingConfigurationDescriptionHasBeenSet; }
    inline void SetInputProcessingConfigurationDescription(const InputProcessingConfigurationDescription& value) { m_inputProcessingConfigurationDescriptionHasBeenSet = true; m_inputProcessingConfigurationDescription = value; }
    inline void SetInputProcessingConfigurationDescription(InputProcessingConfigurationDescription&& value) { m_inputProcessingConfigurationDescriptionHasBeenSet = true; m_inputProcessingConfigurationDescription = std::move(value); }
    inline InputDescription& WithInputProcessingConfigurationDescription(const InputProcessingConfigurationDescription& value) { SetInputProcessingConfigurationDescription(value); return *this;}
    inline InputDescription& WithInputProcessingConfigurationDescription(InputProcessingConfigurationDescription&& value) { SetInputProcessingConfigurationDescription(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If an Amazon Kinesis stream is configured as streaming source, provides
     * Amazon Kinesis stream's Amazon Resource Name (ARN) and an IAM role that enables
     * Amazon Kinesis Analytics to access the stream on your behalf.</p>
     */
    inline const KinesisStreamsInputDescription& GetKinesisStreamsInputDescription() const{ return m_kinesisStreamsInputDescription; }
    inline bool KinesisStreamsInputDescriptionHasBeenSet() const { return m_kinesisStreamsInputDescriptionHasBeenSet; }
    inline void SetKinesisStreamsInputDescription(const KinesisStreamsInputDescription& value) { m_kinesisStreamsInputDescriptionHasBeenSet = true; m_kinesisStreamsInputDescription = value; }
    inline void SetKinesisStreamsInputDescription(KinesisStreamsInputDescription&& value) { m_kinesisStreamsInputDescriptionHasBeenSet = true; m_kinesisStreamsInputDescription = std::move(value); }
    inline InputDescription& WithKinesisStreamsInputDescription(const KinesisStreamsInputDescription& value) { SetKinesisStreamsInputDescription(value); return *this;}
    inline InputDescription& WithKinesisStreamsInputDescription(KinesisStreamsInputDescription&& value) { SetKinesisStreamsInputDescription(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If an Amazon Kinesis Firehose delivery stream is configured as a streaming
     * source, provides the delivery stream's ARN and an IAM role that enables Amazon
     * Kinesis Analytics to access the stream on your behalf.</p>
     */
    inline const KinesisFirehoseInputDescription& GetKinesisFirehoseInputDescription() const{ return m_kinesisFirehoseInputDescription; }
    inline bool KinesisFirehoseInputDescriptionHasBeenSet() const { return m_kinesisFirehoseInputDescriptionHasBeenSet; }
    inline void SetKinesisFirehoseInputDescription(const KinesisFirehoseInputDescription& value) { m_kinesisFirehoseInputDescriptionHasBeenSet = true; m_kinesisFirehoseInputDescription = value; }
    inline void SetKinesisFirehoseInputDescription(KinesisFirehoseInputDescription&& value) { m_kinesisFirehoseInputDescriptionHasBeenSet = true; m_kinesisFirehoseInputDescription = std::move(value); }
    inline InputDescription& WithKinesisFirehoseInputDescription(const KinesisFirehoseInputDescription& value) { SetKinesisFirehoseInputDescription(value); return *this;}
    inline InputDescription& WithKinesisFirehoseInputDescription(KinesisFirehoseInputDescription&& value) { SetKinesisFirehoseInputDescription(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the format of the data in the streaming source, and how each data
     * element maps to corresponding columns in the in-application stream that is being
     * created. </p>
     */
    inline const SourceSchema& GetInputSchema() const{ return m_inputSchema; }
    inline bool InputSchemaHasBeenSet() const { return m_inputSchemaHasBeenSet; }
    inline void SetInputSchema(const SourceSchema& value) { m_inputSchemaHasBeenSet = true; m_inputSchema = value; }
    inline void SetInputSchema(SourceSchema&& value) { m_inputSchemaHasBeenSet = true; m_inputSchema = std::move(value); }
    inline InputDescription& WithInputSchema(const SourceSchema& value) { SetInputSchema(value); return *this;}
    inline InputDescription& WithInputSchema(SourceSchema&& value) { SetInputSchema(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the configured parallelism (number of in-application streams mapped
     * to the streaming source).</p>
     */
    inline const InputParallelism& GetInputParallelism() const{ return m_inputParallelism; }
    inline bool InputParallelismHasBeenSet() const { return m_inputParallelismHasBeenSet; }
    inline void SetInputParallelism(const InputParallelism& value) { m_inputParallelismHasBeenSet = true; m_inputParallelism = value; }
    inline void SetInputParallelism(InputParallelism&& value) { m_inputParallelismHasBeenSet = true; m_inputParallelism = std::move(value); }
    inline InputDescription& WithInputParallelism(const InputParallelism& value) { SetInputParallelism(value); return *this;}
    inline InputDescription& WithInputParallelism(InputParallelism&& value) { SetInputParallelism(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Point at which the application is configured to read from the input
     * stream.</p>
     */
    inline const InputStartingPositionConfiguration& GetInputStartingPositionConfiguration() const{ return m_inputStartingPositionConfiguration; }
    inline bool InputStartingPositionConfigurationHasBeenSet() const { return m_inputStartingPositionConfigurationHasBeenSet; }
    inline void SetInputStartingPositionConfiguration(const InputStartingPositionConfiguration& value) { m_inputStartingPositionConfigurationHasBeenSet = true; m_inputStartingPositionConfiguration = value; }
    inline void SetInputStartingPositionConfiguration(InputStartingPositionConfiguration&& value) { m_inputStartingPositionConfigurationHasBeenSet = true; m_inputStartingPositionConfiguration = std::move(value); }
    inline InputDescription& WithInputStartingPositionConfiguration(const InputStartingPositionConfiguration& value) { SetInputStartingPositionConfiguration(value); return *this;}
    inline InputDescription& WithInputStartingPositionConfiguration(InputStartingPositionConfiguration&& value) { SetInputStartingPositionConfiguration(std::move(value)); return *this;}
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
} // namespace KinesisAnalytics
} // namespace Aws
