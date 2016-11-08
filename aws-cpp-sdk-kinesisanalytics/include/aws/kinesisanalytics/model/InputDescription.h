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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kinesisanalytics/model/KinesisStreamsInputDescription.h>
#include <aws/kinesisanalytics/model/KinesisFirehoseInputDescription.h>
#include <aws/kinesisanalytics/model/SourceSchema.h>
#include <aws/kinesisanalytics/model/InputParallelism.h>
#include <aws/kinesisanalytics/model/InputStartingPositionConfiguration.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace KinesisAnalytics
{
namespace Model
{

  /**
   * <p>Describes the application input configuration. For more information, see <a
   * href="http://docs.aws.amazon.com/kinesisanalytics/latest/dev/how-it-works-input.html">Configuring
   * Application Input</a>. </p>
   */
  class AWS_KINESISANALYTICS_API InputDescription
  {
  public:
    InputDescription();
    InputDescription(const Aws::Utils::Json::JsonValue& jsonValue);
    InputDescription& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>Input ID associated with the application input. This is the ID that Amazon
     * Kinesis Analytics assigns to each input configuration you add to your
     * application. </p>
     */
    inline const Aws::String& GetInputId() const{ return m_inputId; }

    /**
     * <p>Input ID associated with the application input. This is the ID that Amazon
     * Kinesis Analytics assigns to each input configuration you add to your
     * application. </p>
     */
    inline void SetInputId(const Aws::String& value) { m_inputIdHasBeenSet = true; m_inputId = value; }

    /**
     * <p>Input ID associated with the application input. This is the ID that Amazon
     * Kinesis Analytics assigns to each input configuration you add to your
     * application. </p>
     */
    inline void SetInputId(Aws::String&& value) { m_inputIdHasBeenSet = true; m_inputId = value; }

    /**
     * <p>Input ID associated with the application input. This is the ID that Amazon
     * Kinesis Analytics assigns to each input configuration you add to your
     * application. </p>
     */
    inline void SetInputId(const char* value) { m_inputIdHasBeenSet = true; m_inputId.assign(value); }

    /**
     * <p>Input ID associated with the application input. This is the ID that Amazon
     * Kinesis Analytics assigns to each input configuration you add to your
     * application. </p>
     */
    inline InputDescription& WithInputId(const Aws::String& value) { SetInputId(value); return *this;}

    /**
     * <p>Input ID associated with the application input. This is the ID that Amazon
     * Kinesis Analytics assigns to each input configuration you add to your
     * application. </p>
     */
    inline InputDescription& WithInputId(Aws::String&& value) { SetInputId(value); return *this;}

    /**
     * <p>Input ID associated with the application input. This is the ID that Amazon
     * Kinesis Analytics assigns to each input configuration you add to your
     * application. </p>
     */
    inline InputDescription& WithInputId(const char* value) { SetInputId(value); return *this;}

    /**
     * <p>In-application name prefix.</p>
     */
    inline const Aws::String& GetNamePrefix() const{ return m_namePrefix; }

    /**
     * <p>In-application name prefix.</p>
     */
    inline void SetNamePrefix(const Aws::String& value) { m_namePrefixHasBeenSet = true; m_namePrefix = value; }

    /**
     * <p>In-application name prefix.</p>
     */
    inline void SetNamePrefix(Aws::String&& value) { m_namePrefixHasBeenSet = true; m_namePrefix = value; }

    /**
     * <p>In-application name prefix.</p>
     */
    inline void SetNamePrefix(const char* value) { m_namePrefixHasBeenSet = true; m_namePrefix.assign(value); }

    /**
     * <p>In-application name prefix.</p>
     */
    inline InputDescription& WithNamePrefix(const Aws::String& value) { SetNamePrefix(value); return *this;}

    /**
     * <p>In-application name prefix.</p>
     */
    inline InputDescription& WithNamePrefix(Aws::String&& value) { SetNamePrefix(value); return *this;}

    /**
     * <p>In-application name prefix.</p>
     */
    inline InputDescription& WithNamePrefix(const char* value) { SetNamePrefix(value); return *this;}

    /**
     * <p>Returns the in-application stream names that are mapped to the stream
     * source.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInAppStreamNames() const{ return m_inAppStreamNames; }

    /**
     * <p>Returns the in-application stream names that are mapped to the stream
     * source.</p>
     */
    inline void SetInAppStreamNames(const Aws::Vector<Aws::String>& value) { m_inAppStreamNamesHasBeenSet = true; m_inAppStreamNames = value; }

    /**
     * <p>Returns the in-application stream names that are mapped to the stream
     * source.</p>
     */
    inline void SetInAppStreamNames(Aws::Vector<Aws::String>&& value) { m_inAppStreamNamesHasBeenSet = true; m_inAppStreamNames = value; }

    /**
     * <p>Returns the in-application stream names that are mapped to the stream
     * source.</p>
     */
    inline InputDescription& WithInAppStreamNames(const Aws::Vector<Aws::String>& value) { SetInAppStreamNames(value); return *this;}

    /**
     * <p>Returns the in-application stream names that are mapped to the stream
     * source.</p>
     */
    inline InputDescription& WithInAppStreamNames(Aws::Vector<Aws::String>&& value) { SetInAppStreamNames(value); return *this;}

    /**
     * <p>Returns the in-application stream names that are mapped to the stream
     * source.</p>
     */
    inline InputDescription& AddInAppStreamNames(const Aws::String& value) { m_inAppStreamNamesHasBeenSet = true; m_inAppStreamNames.push_back(value); return *this; }

    /**
     * <p>Returns the in-application stream names that are mapped to the stream
     * source.</p>
     */
    inline InputDescription& AddInAppStreamNames(Aws::String&& value) { m_inAppStreamNamesHasBeenSet = true; m_inAppStreamNames.push_back(value); return *this; }

    /**
     * <p>Returns the in-application stream names that are mapped to the stream
     * source.</p>
     */
    inline InputDescription& AddInAppStreamNames(const char* value) { m_inAppStreamNamesHasBeenSet = true; m_inAppStreamNames.push_back(value); return *this; }

    /**
     * <p>If an Amazon Kinesis stream is configured as streaming source, provides
     * Amazon Kinesis stream's ARN and an IAM role that enables Amazon Kinesis
     * Analytics to access the stream on your behalf.</p>
     */
    inline const KinesisStreamsInputDescription& GetKinesisStreamsInputDescription() const{ return m_kinesisStreamsInputDescription; }

    /**
     * <p>If an Amazon Kinesis stream is configured as streaming source, provides
     * Amazon Kinesis stream's ARN and an IAM role that enables Amazon Kinesis
     * Analytics to access the stream on your behalf.</p>
     */
    inline void SetKinesisStreamsInputDescription(const KinesisStreamsInputDescription& value) { m_kinesisStreamsInputDescriptionHasBeenSet = true; m_kinesisStreamsInputDescription = value; }

    /**
     * <p>If an Amazon Kinesis stream is configured as streaming source, provides
     * Amazon Kinesis stream's ARN and an IAM role that enables Amazon Kinesis
     * Analytics to access the stream on your behalf.</p>
     */
    inline void SetKinesisStreamsInputDescription(KinesisStreamsInputDescription&& value) { m_kinesisStreamsInputDescriptionHasBeenSet = true; m_kinesisStreamsInputDescription = value; }

    /**
     * <p>If an Amazon Kinesis stream is configured as streaming source, provides
     * Amazon Kinesis stream's ARN and an IAM role that enables Amazon Kinesis
     * Analytics to access the stream on your behalf.</p>
     */
    inline InputDescription& WithKinesisStreamsInputDescription(const KinesisStreamsInputDescription& value) { SetKinesisStreamsInputDescription(value); return *this;}

    /**
     * <p>If an Amazon Kinesis stream is configured as streaming source, provides
     * Amazon Kinesis stream's ARN and an IAM role that enables Amazon Kinesis
     * Analytics to access the stream on your behalf.</p>
     */
    inline InputDescription& WithKinesisStreamsInputDescription(KinesisStreamsInputDescription&& value) { SetKinesisStreamsInputDescription(value); return *this;}

    /**
     * <p>If an Amazon Kinesis Firehose delivery stream is configured as a streaming
     * source, provides the Firehose delivery stream's Amazon Resource Name (ARN) and
     * an IAM role that enables Amazon Kinesis Analytics to access the stream on your
     * behalf.</p>
     */
    inline const KinesisFirehoseInputDescription& GetKinesisFirehoseInputDescription() const{ return m_kinesisFirehoseInputDescription; }

    /**
     * <p>If an Amazon Kinesis Firehose delivery stream is configured as a streaming
     * source, provides the Firehose delivery stream's Amazon Resource Name (ARN) and
     * an IAM role that enables Amazon Kinesis Analytics to access the stream on your
     * behalf.</p>
     */
    inline void SetKinesisFirehoseInputDescription(const KinesisFirehoseInputDescription& value) { m_kinesisFirehoseInputDescriptionHasBeenSet = true; m_kinesisFirehoseInputDescription = value; }

    /**
     * <p>If an Amazon Kinesis Firehose delivery stream is configured as a streaming
     * source, provides the Firehose delivery stream's Amazon Resource Name (ARN) and
     * an IAM role that enables Amazon Kinesis Analytics to access the stream on your
     * behalf.</p>
     */
    inline void SetKinesisFirehoseInputDescription(KinesisFirehoseInputDescription&& value) { m_kinesisFirehoseInputDescriptionHasBeenSet = true; m_kinesisFirehoseInputDescription = value; }

    /**
     * <p>If an Amazon Kinesis Firehose delivery stream is configured as a streaming
     * source, provides the Firehose delivery stream's Amazon Resource Name (ARN) and
     * an IAM role that enables Amazon Kinesis Analytics to access the stream on your
     * behalf.</p>
     */
    inline InputDescription& WithKinesisFirehoseInputDescription(const KinesisFirehoseInputDescription& value) { SetKinesisFirehoseInputDescription(value); return *this;}

    /**
     * <p>If an Amazon Kinesis Firehose delivery stream is configured as a streaming
     * source, provides the Firehose delivery stream's Amazon Resource Name (ARN) and
     * an IAM role that enables Amazon Kinesis Analytics to access the stream on your
     * behalf.</p>
     */
    inline InputDescription& WithKinesisFirehoseInputDescription(KinesisFirehoseInputDescription&& value) { SetKinesisFirehoseInputDescription(value); return *this;}

    
    inline const SourceSchema& GetInputSchema() const{ return m_inputSchema; }

    
    inline void SetInputSchema(const SourceSchema& value) { m_inputSchemaHasBeenSet = true; m_inputSchema = value; }

    
    inline void SetInputSchema(SourceSchema&& value) { m_inputSchemaHasBeenSet = true; m_inputSchema = value; }

    
    inline InputDescription& WithInputSchema(const SourceSchema& value) { SetInputSchema(value); return *this;}

    
    inline InputDescription& WithInputSchema(SourceSchema&& value) { SetInputSchema(value); return *this;}

    /**
     * <p>Describes the configured parallelism (number of in-application streams mapped
     * to the streaming source).</p>
     */
    inline const InputParallelism& GetInputParallelism() const{ return m_inputParallelism; }

    /**
     * <p>Describes the configured parallelism (number of in-application streams mapped
     * to the streaming source).</p>
     */
    inline void SetInputParallelism(const InputParallelism& value) { m_inputParallelismHasBeenSet = true; m_inputParallelism = value; }

    /**
     * <p>Describes the configured parallelism (number of in-application streams mapped
     * to the streaming source).</p>
     */
    inline void SetInputParallelism(InputParallelism&& value) { m_inputParallelismHasBeenSet = true; m_inputParallelism = value; }

    /**
     * <p>Describes the configured parallelism (number of in-application streams mapped
     * to the streaming source).</p>
     */
    inline InputDescription& WithInputParallelism(const InputParallelism& value) { SetInputParallelism(value); return *this;}

    /**
     * <p>Describes the configured parallelism (number of in-application streams mapped
     * to the streaming source).</p>
     */
    inline InputDescription& WithInputParallelism(InputParallelism&& value) { SetInputParallelism(value); return *this;}

    /**
     * <p>Point at which the application is configured to read from the input
     * stream.</p>
     */
    inline const InputStartingPositionConfiguration& GetInputStartingPositionConfiguration() const{ return m_inputStartingPositionConfiguration; }

    /**
     * <p>Point at which the application is configured to read from the input
     * stream.</p>
     */
    inline void SetInputStartingPositionConfiguration(const InputStartingPositionConfiguration& value) { m_inputStartingPositionConfigurationHasBeenSet = true; m_inputStartingPositionConfiguration = value; }

    /**
     * <p>Point at which the application is configured to read from the input
     * stream.</p>
     */
    inline void SetInputStartingPositionConfiguration(InputStartingPositionConfiguration&& value) { m_inputStartingPositionConfigurationHasBeenSet = true; m_inputStartingPositionConfiguration = value; }

    /**
     * <p>Point at which the application is configured to read from the input
     * stream.</p>
     */
    inline InputDescription& WithInputStartingPositionConfiguration(const InputStartingPositionConfiguration& value) { SetInputStartingPositionConfiguration(value); return *this;}

    /**
     * <p>Point at which the application is configured to read from the input
     * stream.</p>
     */
    inline InputDescription& WithInputStartingPositionConfiguration(InputStartingPositionConfiguration&& value) { SetInputStartingPositionConfiguration(value); return *this;}

  private:
    Aws::String m_inputId;
    bool m_inputIdHasBeenSet;
    Aws::String m_namePrefix;
    bool m_namePrefixHasBeenSet;
    Aws::Vector<Aws::String> m_inAppStreamNames;
    bool m_inAppStreamNamesHasBeenSet;
    KinesisStreamsInputDescription m_kinesisStreamsInputDescription;
    bool m_kinesisStreamsInputDescriptionHasBeenSet;
    KinesisFirehoseInputDescription m_kinesisFirehoseInputDescription;
    bool m_kinesisFirehoseInputDescriptionHasBeenSet;
    SourceSchema m_inputSchema;
    bool m_inputSchemaHasBeenSet;
    InputParallelism m_inputParallelism;
    bool m_inputParallelismHasBeenSet;
    InputStartingPositionConfiguration m_inputStartingPositionConfiguration;
    bool m_inputStartingPositionConfigurationHasBeenSet;
  };

} // namespace Model
} // namespace KinesisAnalytics
} // namespace Aws
