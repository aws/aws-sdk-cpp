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
#include <aws/kinesisanalytics/model/KinesisStreamsOutputUpdate.h>
#include <aws/kinesisanalytics/model/KinesisFirehoseOutputUpdate.h>
#include <aws/kinesisanalytics/model/LambdaOutputUpdate.h>
#include <aws/kinesisanalytics/model/DestinationSchema.h>
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
   * <p> Describes updates to the output configuration identified by the
   * <code>OutputId</code>. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalytics-2015-08-14/OutputUpdate">AWS
   * API Reference</a></p>
   */
  class AWS_KINESISANALYTICS_API OutputUpdate
  {
  public:
    OutputUpdate();
    OutputUpdate(Aws::Utils::Json::JsonView jsonValue);
    OutputUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Identifies the specific output configuration that you want to update.</p>
     */
    inline const Aws::String& GetOutputId() const{ return m_outputId; }

    /**
     * <p>Identifies the specific output configuration that you want to update.</p>
     */
    inline bool OutputIdHasBeenSet() const { return m_outputIdHasBeenSet; }

    /**
     * <p>Identifies the specific output configuration that you want to update.</p>
     */
    inline void SetOutputId(const Aws::String& value) { m_outputIdHasBeenSet = true; m_outputId = value; }

    /**
     * <p>Identifies the specific output configuration that you want to update.</p>
     */
    inline void SetOutputId(Aws::String&& value) { m_outputIdHasBeenSet = true; m_outputId = std::move(value); }

    /**
     * <p>Identifies the specific output configuration that you want to update.</p>
     */
    inline void SetOutputId(const char* value) { m_outputIdHasBeenSet = true; m_outputId.assign(value); }

    /**
     * <p>Identifies the specific output configuration that you want to update.</p>
     */
    inline OutputUpdate& WithOutputId(const Aws::String& value) { SetOutputId(value); return *this;}

    /**
     * <p>Identifies the specific output configuration that you want to update.</p>
     */
    inline OutputUpdate& WithOutputId(Aws::String&& value) { SetOutputId(std::move(value)); return *this;}

    /**
     * <p>Identifies the specific output configuration that you want to update.</p>
     */
    inline OutputUpdate& WithOutputId(const char* value) { SetOutputId(value); return *this;}


    /**
     * <p>If you want to specify a different in-application stream for this output
     * configuration, use this field to specify the new in-application stream name.</p>
     */
    inline const Aws::String& GetNameUpdate() const{ return m_nameUpdate; }

    /**
     * <p>If you want to specify a different in-application stream for this output
     * configuration, use this field to specify the new in-application stream name.</p>
     */
    inline bool NameUpdateHasBeenSet() const { return m_nameUpdateHasBeenSet; }

    /**
     * <p>If you want to specify a different in-application stream for this output
     * configuration, use this field to specify the new in-application stream name.</p>
     */
    inline void SetNameUpdate(const Aws::String& value) { m_nameUpdateHasBeenSet = true; m_nameUpdate = value; }

    /**
     * <p>If you want to specify a different in-application stream for this output
     * configuration, use this field to specify the new in-application stream name.</p>
     */
    inline void SetNameUpdate(Aws::String&& value) { m_nameUpdateHasBeenSet = true; m_nameUpdate = std::move(value); }

    /**
     * <p>If you want to specify a different in-application stream for this output
     * configuration, use this field to specify the new in-application stream name.</p>
     */
    inline void SetNameUpdate(const char* value) { m_nameUpdateHasBeenSet = true; m_nameUpdate.assign(value); }

    /**
     * <p>If you want to specify a different in-application stream for this output
     * configuration, use this field to specify the new in-application stream name.</p>
     */
    inline OutputUpdate& WithNameUpdate(const Aws::String& value) { SetNameUpdate(value); return *this;}

    /**
     * <p>If you want to specify a different in-application stream for this output
     * configuration, use this field to specify the new in-application stream name.</p>
     */
    inline OutputUpdate& WithNameUpdate(Aws::String&& value) { SetNameUpdate(std::move(value)); return *this;}

    /**
     * <p>If you want to specify a different in-application stream for this output
     * configuration, use this field to specify the new in-application stream name.</p>
     */
    inline OutputUpdate& WithNameUpdate(const char* value) { SetNameUpdate(value); return *this;}


    /**
     * <p>Describes an Amazon Kinesis stream as the destination for the output.</p>
     */
    inline const KinesisStreamsOutputUpdate& GetKinesisStreamsOutputUpdate() const{ return m_kinesisStreamsOutputUpdate; }

    /**
     * <p>Describes an Amazon Kinesis stream as the destination for the output.</p>
     */
    inline bool KinesisStreamsOutputUpdateHasBeenSet() const { return m_kinesisStreamsOutputUpdateHasBeenSet; }

    /**
     * <p>Describes an Amazon Kinesis stream as the destination for the output.</p>
     */
    inline void SetKinesisStreamsOutputUpdate(const KinesisStreamsOutputUpdate& value) { m_kinesisStreamsOutputUpdateHasBeenSet = true; m_kinesisStreamsOutputUpdate = value; }

    /**
     * <p>Describes an Amazon Kinesis stream as the destination for the output.</p>
     */
    inline void SetKinesisStreamsOutputUpdate(KinesisStreamsOutputUpdate&& value) { m_kinesisStreamsOutputUpdateHasBeenSet = true; m_kinesisStreamsOutputUpdate = std::move(value); }

    /**
     * <p>Describes an Amazon Kinesis stream as the destination for the output.</p>
     */
    inline OutputUpdate& WithKinesisStreamsOutputUpdate(const KinesisStreamsOutputUpdate& value) { SetKinesisStreamsOutputUpdate(value); return *this;}

    /**
     * <p>Describes an Amazon Kinesis stream as the destination for the output.</p>
     */
    inline OutputUpdate& WithKinesisStreamsOutputUpdate(KinesisStreamsOutputUpdate&& value) { SetKinesisStreamsOutputUpdate(std::move(value)); return *this;}


    /**
     * <p>Describes an Amazon Kinesis Firehose delivery stream as the destination for
     * the output.</p>
     */
    inline const KinesisFirehoseOutputUpdate& GetKinesisFirehoseOutputUpdate() const{ return m_kinesisFirehoseOutputUpdate; }

    /**
     * <p>Describes an Amazon Kinesis Firehose delivery stream as the destination for
     * the output.</p>
     */
    inline bool KinesisFirehoseOutputUpdateHasBeenSet() const { return m_kinesisFirehoseOutputUpdateHasBeenSet; }

    /**
     * <p>Describes an Amazon Kinesis Firehose delivery stream as the destination for
     * the output.</p>
     */
    inline void SetKinesisFirehoseOutputUpdate(const KinesisFirehoseOutputUpdate& value) { m_kinesisFirehoseOutputUpdateHasBeenSet = true; m_kinesisFirehoseOutputUpdate = value; }

    /**
     * <p>Describes an Amazon Kinesis Firehose delivery stream as the destination for
     * the output.</p>
     */
    inline void SetKinesisFirehoseOutputUpdate(KinesisFirehoseOutputUpdate&& value) { m_kinesisFirehoseOutputUpdateHasBeenSet = true; m_kinesisFirehoseOutputUpdate = std::move(value); }

    /**
     * <p>Describes an Amazon Kinesis Firehose delivery stream as the destination for
     * the output.</p>
     */
    inline OutputUpdate& WithKinesisFirehoseOutputUpdate(const KinesisFirehoseOutputUpdate& value) { SetKinesisFirehoseOutputUpdate(value); return *this;}

    /**
     * <p>Describes an Amazon Kinesis Firehose delivery stream as the destination for
     * the output.</p>
     */
    inline OutputUpdate& WithKinesisFirehoseOutputUpdate(KinesisFirehoseOutputUpdate&& value) { SetKinesisFirehoseOutputUpdate(std::move(value)); return *this;}


    /**
     * <p>Describes an AWS Lambda function as the destination for the output.</p>
     */
    inline const LambdaOutputUpdate& GetLambdaOutputUpdate() const{ return m_lambdaOutputUpdate; }

    /**
     * <p>Describes an AWS Lambda function as the destination for the output.</p>
     */
    inline bool LambdaOutputUpdateHasBeenSet() const { return m_lambdaOutputUpdateHasBeenSet; }

    /**
     * <p>Describes an AWS Lambda function as the destination for the output.</p>
     */
    inline void SetLambdaOutputUpdate(const LambdaOutputUpdate& value) { m_lambdaOutputUpdateHasBeenSet = true; m_lambdaOutputUpdate = value; }

    /**
     * <p>Describes an AWS Lambda function as the destination for the output.</p>
     */
    inline void SetLambdaOutputUpdate(LambdaOutputUpdate&& value) { m_lambdaOutputUpdateHasBeenSet = true; m_lambdaOutputUpdate = std::move(value); }

    /**
     * <p>Describes an AWS Lambda function as the destination for the output.</p>
     */
    inline OutputUpdate& WithLambdaOutputUpdate(const LambdaOutputUpdate& value) { SetLambdaOutputUpdate(value); return *this;}

    /**
     * <p>Describes an AWS Lambda function as the destination for the output.</p>
     */
    inline OutputUpdate& WithLambdaOutputUpdate(LambdaOutputUpdate&& value) { SetLambdaOutputUpdate(std::move(value)); return *this;}


    /**
     * <p>Describes the data format when records are written to the destination. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/how-it-works-output.html">Configuring
     * Application Output</a>.</p>
     */
    inline const DestinationSchema& GetDestinationSchemaUpdate() const{ return m_destinationSchemaUpdate; }

    /**
     * <p>Describes the data format when records are written to the destination. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/how-it-works-output.html">Configuring
     * Application Output</a>.</p>
     */
    inline bool DestinationSchemaUpdateHasBeenSet() const { return m_destinationSchemaUpdateHasBeenSet; }

    /**
     * <p>Describes the data format when records are written to the destination. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/how-it-works-output.html">Configuring
     * Application Output</a>.</p>
     */
    inline void SetDestinationSchemaUpdate(const DestinationSchema& value) { m_destinationSchemaUpdateHasBeenSet = true; m_destinationSchemaUpdate = value; }

    /**
     * <p>Describes the data format when records are written to the destination. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/how-it-works-output.html">Configuring
     * Application Output</a>.</p>
     */
    inline void SetDestinationSchemaUpdate(DestinationSchema&& value) { m_destinationSchemaUpdateHasBeenSet = true; m_destinationSchemaUpdate = std::move(value); }

    /**
     * <p>Describes the data format when records are written to the destination. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/how-it-works-output.html">Configuring
     * Application Output</a>.</p>
     */
    inline OutputUpdate& WithDestinationSchemaUpdate(const DestinationSchema& value) { SetDestinationSchemaUpdate(value); return *this;}

    /**
     * <p>Describes the data format when records are written to the destination. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/how-it-works-output.html">Configuring
     * Application Output</a>.</p>
     */
    inline OutputUpdate& WithDestinationSchemaUpdate(DestinationSchema&& value) { SetDestinationSchemaUpdate(std::move(value)); return *this;}

  private:

    Aws::String m_outputId;
    bool m_outputIdHasBeenSet;

    Aws::String m_nameUpdate;
    bool m_nameUpdateHasBeenSet;

    KinesisStreamsOutputUpdate m_kinesisStreamsOutputUpdate;
    bool m_kinesisStreamsOutputUpdateHasBeenSet;

    KinesisFirehoseOutputUpdate m_kinesisFirehoseOutputUpdate;
    bool m_kinesisFirehoseOutputUpdateHasBeenSet;

    LambdaOutputUpdate m_lambdaOutputUpdate;
    bool m_lambdaOutputUpdateHasBeenSet;

    DestinationSchema m_destinationSchemaUpdate;
    bool m_destinationSchemaUpdateHasBeenSet;
  };

} // namespace Model
} // namespace KinesisAnalytics
} // namespace Aws
