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
#include <aws/kinesisanalytics/model/KinesisStreamsInput.h>
#include <aws/kinesisanalytics/model/KinesisFirehoseInput.h>
#include <aws/kinesisanalytics/model/InputParallelism.h>
#include <aws/kinesisanalytics/model/SourceSchema.h>

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
   * <p>When you configure the application input, you specify the streaming source,
   * the in-application stream name that is created, and the mapping between the two.
   * For more information, see <a
   * href="http://docs.aws.amazon.com/kinesisanalytics/latest/dev/how-it-works-input.html">Configuring
   * Application Input</a>. </p>
   */
  class AWS_KINESISANALYTICS_API Input
  {
  public:
    Input();
    Input(const Aws::Utils::Json::JsonValue& jsonValue);
    Input& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>Name prefix to use when creating in-application stream. Suppose you specify a
     * prefix "MyInApplicationStream". Kinesis Analytics will then create one or more
     * (as per the <code>InputParallelism</code> count you specified) in-application
     * streams with names "MyInApplicationStream_001", "MyInApplicationStream_002" and
     * so on. </p>
     */
    inline const Aws::String& GetNamePrefix() const{ return m_namePrefix; }

    /**
     * <p>Name prefix to use when creating in-application stream. Suppose you specify a
     * prefix "MyInApplicationStream". Kinesis Analytics will then create one or more
     * (as per the <code>InputParallelism</code> count you specified) in-application
     * streams with names "MyInApplicationStream_001", "MyInApplicationStream_002" and
     * so on. </p>
     */
    inline void SetNamePrefix(const Aws::String& value) { m_namePrefixHasBeenSet = true; m_namePrefix = value; }

    /**
     * <p>Name prefix to use when creating in-application stream. Suppose you specify a
     * prefix "MyInApplicationStream". Kinesis Analytics will then create one or more
     * (as per the <code>InputParallelism</code> count you specified) in-application
     * streams with names "MyInApplicationStream_001", "MyInApplicationStream_002" and
     * so on. </p>
     */
    inline void SetNamePrefix(Aws::String&& value) { m_namePrefixHasBeenSet = true; m_namePrefix = value; }

    /**
     * <p>Name prefix to use when creating in-application stream. Suppose you specify a
     * prefix "MyInApplicationStream". Kinesis Analytics will then create one or more
     * (as per the <code>InputParallelism</code> count you specified) in-application
     * streams with names "MyInApplicationStream_001", "MyInApplicationStream_002" and
     * so on. </p>
     */
    inline void SetNamePrefix(const char* value) { m_namePrefixHasBeenSet = true; m_namePrefix.assign(value); }

    /**
     * <p>Name prefix to use when creating in-application stream. Suppose you specify a
     * prefix "MyInApplicationStream". Kinesis Analytics will then create one or more
     * (as per the <code>InputParallelism</code> count you specified) in-application
     * streams with names "MyInApplicationStream_001", "MyInApplicationStream_002" and
     * so on. </p>
     */
    inline Input& WithNamePrefix(const Aws::String& value) { SetNamePrefix(value); return *this;}

    /**
     * <p>Name prefix to use when creating in-application stream. Suppose you specify a
     * prefix "MyInApplicationStream". Kinesis Analytics will then create one or more
     * (as per the <code>InputParallelism</code> count you specified) in-application
     * streams with names "MyInApplicationStream_001", "MyInApplicationStream_002" and
     * so on. </p>
     */
    inline Input& WithNamePrefix(Aws::String&& value) { SetNamePrefix(value); return *this;}

    /**
     * <p>Name prefix to use when creating in-application stream. Suppose you specify a
     * prefix "MyInApplicationStream". Kinesis Analytics will then create one or more
     * (as per the <code>InputParallelism</code> count you specified) in-application
     * streams with names "MyInApplicationStream_001", "MyInApplicationStream_002" and
     * so on. </p>
     */
    inline Input& WithNamePrefix(const char* value) { SetNamePrefix(value); return *this;}

    /**
     * <p>If the streaming source is an Amazon Kinesis stream, identifies the stream's
     * Amazon Resource Name (ARN) and an IAM role that enables Amazon Kinesis Analytics
     * to access the stream on your behalf.</p>
     */
    inline const KinesisStreamsInput& GetKinesisStreamsInput() const{ return m_kinesisStreamsInput; }

    /**
     * <p>If the streaming source is an Amazon Kinesis stream, identifies the stream's
     * Amazon Resource Name (ARN) and an IAM role that enables Amazon Kinesis Analytics
     * to access the stream on your behalf.</p>
     */
    inline void SetKinesisStreamsInput(const KinesisStreamsInput& value) { m_kinesisStreamsInputHasBeenSet = true; m_kinesisStreamsInput = value; }

    /**
     * <p>If the streaming source is an Amazon Kinesis stream, identifies the stream's
     * Amazon Resource Name (ARN) and an IAM role that enables Amazon Kinesis Analytics
     * to access the stream on your behalf.</p>
     */
    inline void SetKinesisStreamsInput(KinesisStreamsInput&& value) { m_kinesisStreamsInputHasBeenSet = true; m_kinesisStreamsInput = value; }

    /**
     * <p>If the streaming source is an Amazon Kinesis stream, identifies the stream's
     * Amazon Resource Name (ARN) and an IAM role that enables Amazon Kinesis Analytics
     * to access the stream on your behalf.</p>
     */
    inline Input& WithKinesisStreamsInput(const KinesisStreamsInput& value) { SetKinesisStreamsInput(value); return *this;}

    /**
     * <p>If the streaming source is an Amazon Kinesis stream, identifies the stream's
     * Amazon Resource Name (ARN) and an IAM role that enables Amazon Kinesis Analytics
     * to access the stream on your behalf.</p>
     */
    inline Input& WithKinesisStreamsInput(KinesisStreamsInput&& value) { SetKinesisStreamsInput(value); return *this;}

    /**
     * <p>If the streaming source is an Amazon Kinesis Firehose delivery stream,
     * identifies the Firehose delivery stream's ARN and an IAM role that enables
     * Amazon Kinesis Analytics to access the stream on your behalf.</p>
     */
    inline const KinesisFirehoseInput& GetKinesisFirehoseInput() const{ return m_kinesisFirehoseInput; }

    /**
     * <p>If the streaming source is an Amazon Kinesis Firehose delivery stream,
     * identifies the Firehose delivery stream's ARN and an IAM role that enables
     * Amazon Kinesis Analytics to access the stream on your behalf.</p>
     */
    inline void SetKinesisFirehoseInput(const KinesisFirehoseInput& value) { m_kinesisFirehoseInputHasBeenSet = true; m_kinesisFirehoseInput = value; }

    /**
     * <p>If the streaming source is an Amazon Kinesis Firehose delivery stream,
     * identifies the Firehose delivery stream's ARN and an IAM role that enables
     * Amazon Kinesis Analytics to access the stream on your behalf.</p>
     */
    inline void SetKinesisFirehoseInput(KinesisFirehoseInput&& value) { m_kinesisFirehoseInputHasBeenSet = true; m_kinesisFirehoseInput = value; }

    /**
     * <p>If the streaming source is an Amazon Kinesis Firehose delivery stream,
     * identifies the Firehose delivery stream's ARN and an IAM role that enables
     * Amazon Kinesis Analytics to access the stream on your behalf.</p>
     */
    inline Input& WithKinesisFirehoseInput(const KinesisFirehoseInput& value) { SetKinesisFirehoseInput(value); return *this;}

    /**
     * <p>If the streaming source is an Amazon Kinesis Firehose delivery stream,
     * identifies the Firehose delivery stream's ARN and an IAM role that enables
     * Amazon Kinesis Analytics to access the stream on your behalf.</p>
     */
    inline Input& WithKinesisFirehoseInput(KinesisFirehoseInput&& value) { SetKinesisFirehoseInput(value); return *this;}

    /**
     * <p>Describes the number of in-application streams to create. </p> <p>Data from
     * your source will be routed to these in-application input streams.</p> <p> (see
     * <a
     * href="http://docs.aws.amazon.com/kinesisanalytics/latest/dev/how-it-works-input.html">Configuring
     * Application Input</a>.</p>
     */
    inline const InputParallelism& GetInputParallelism() const{ return m_inputParallelism; }

    /**
     * <p>Describes the number of in-application streams to create. </p> <p>Data from
     * your source will be routed to these in-application input streams.</p> <p> (see
     * <a
     * href="http://docs.aws.amazon.com/kinesisanalytics/latest/dev/how-it-works-input.html">Configuring
     * Application Input</a>.</p>
     */
    inline void SetInputParallelism(const InputParallelism& value) { m_inputParallelismHasBeenSet = true; m_inputParallelism = value; }

    /**
     * <p>Describes the number of in-application streams to create. </p> <p>Data from
     * your source will be routed to these in-application input streams.</p> <p> (see
     * <a
     * href="http://docs.aws.amazon.com/kinesisanalytics/latest/dev/how-it-works-input.html">Configuring
     * Application Input</a>.</p>
     */
    inline void SetInputParallelism(InputParallelism&& value) { m_inputParallelismHasBeenSet = true; m_inputParallelism = value; }

    /**
     * <p>Describes the number of in-application streams to create. </p> <p>Data from
     * your source will be routed to these in-application input streams.</p> <p> (see
     * <a
     * href="http://docs.aws.amazon.com/kinesisanalytics/latest/dev/how-it-works-input.html">Configuring
     * Application Input</a>.</p>
     */
    inline Input& WithInputParallelism(const InputParallelism& value) { SetInputParallelism(value); return *this;}

    /**
     * <p>Describes the number of in-application streams to create. </p> <p>Data from
     * your source will be routed to these in-application input streams.</p> <p> (see
     * <a
     * href="http://docs.aws.amazon.com/kinesisanalytics/latest/dev/how-it-works-input.html">Configuring
     * Application Input</a>.</p>
     */
    inline Input& WithInputParallelism(InputParallelism&& value) { SetInputParallelism(value); return *this;}

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
    inline void SetInputSchema(const SourceSchema& value) { m_inputSchemaHasBeenSet = true; m_inputSchema = value; }

    /**
     * <p>Describes the format of the data in the streaming source, and how each data
     * element maps to corresponding columns in the in-application stream that is being
     * created.</p> <p>Also used to describe the format of the reference data
     * source.</p>
     */
    inline void SetInputSchema(SourceSchema&& value) { m_inputSchemaHasBeenSet = true; m_inputSchema = value; }

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
    inline Input& WithInputSchema(SourceSchema&& value) { SetInputSchema(value); return *this;}

  private:
    Aws::String m_namePrefix;
    bool m_namePrefixHasBeenSet;
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
