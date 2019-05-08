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
#include <aws/kinesisanalytics/model/KinesisStreamsOutput.h>
#include <aws/kinesisanalytics/model/KinesisFirehoseOutput.h>
#include <aws/kinesisanalytics/model/LambdaOutput.h>
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
   * <p> Describes application output configuration in which you identify an
   * in-application stream and a destination where you want the in-application stream
   * data to be written. The destination can be an Amazon Kinesis stream or an Amazon
   * Kinesis Firehose delivery stream. </p> <p/> <p>For limits on how many
   * destinations an application can write and other limitations, see <a
   * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/limits.html">Limits</a>.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalytics-2015-08-14/Output">AWS
   * API Reference</a></p>
   */
  class AWS_KINESISANALYTICS_API Output
  {
  public:
    Output();
    Output(Aws::Utils::Json::JsonView jsonValue);
    Output& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Name of the in-application stream.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Name of the in-application stream.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>Name of the in-application stream.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Name of the in-application stream.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>Name of the in-application stream.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>Name of the in-application stream.</p>
     */
    inline Output& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Name of the in-application stream.</p>
     */
    inline Output& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>Name of the in-application stream.</p>
     */
    inline Output& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Identifies an Amazon Kinesis stream as the destination.</p>
     */
    inline const KinesisStreamsOutput& GetKinesisStreamsOutput() const{ return m_kinesisStreamsOutput; }

    /**
     * <p>Identifies an Amazon Kinesis stream as the destination.</p>
     */
    inline bool KinesisStreamsOutputHasBeenSet() const { return m_kinesisStreamsOutputHasBeenSet; }

    /**
     * <p>Identifies an Amazon Kinesis stream as the destination.</p>
     */
    inline void SetKinesisStreamsOutput(const KinesisStreamsOutput& value) { m_kinesisStreamsOutputHasBeenSet = true; m_kinesisStreamsOutput = value; }

    /**
     * <p>Identifies an Amazon Kinesis stream as the destination.</p>
     */
    inline void SetKinesisStreamsOutput(KinesisStreamsOutput&& value) { m_kinesisStreamsOutputHasBeenSet = true; m_kinesisStreamsOutput = std::move(value); }

    /**
     * <p>Identifies an Amazon Kinesis stream as the destination.</p>
     */
    inline Output& WithKinesisStreamsOutput(const KinesisStreamsOutput& value) { SetKinesisStreamsOutput(value); return *this;}

    /**
     * <p>Identifies an Amazon Kinesis stream as the destination.</p>
     */
    inline Output& WithKinesisStreamsOutput(KinesisStreamsOutput&& value) { SetKinesisStreamsOutput(std::move(value)); return *this;}


    /**
     * <p>Identifies an Amazon Kinesis Firehose delivery stream as the destination.</p>
     */
    inline const KinesisFirehoseOutput& GetKinesisFirehoseOutput() const{ return m_kinesisFirehoseOutput; }

    /**
     * <p>Identifies an Amazon Kinesis Firehose delivery stream as the destination.</p>
     */
    inline bool KinesisFirehoseOutputHasBeenSet() const { return m_kinesisFirehoseOutputHasBeenSet; }

    /**
     * <p>Identifies an Amazon Kinesis Firehose delivery stream as the destination.</p>
     */
    inline void SetKinesisFirehoseOutput(const KinesisFirehoseOutput& value) { m_kinesisFirehoseOutputHasBeenSet = true; m_kinesisFirehoseOutput = value; }

    /**
     * <p>Identifies an Amazon Kinesis Firehose delivery stream as the destination.</p>
     */
    inline void SetKinesisFirehoseOutput(KinesisFirehoseOutput&& value) { m_kinesisFirehoseOutputHasBeenSet = true; m_kinesisFirehoseOutput = std::move(value); }

    /**
     * <p>Identifies an Amazon Kinesis Firehose delivery stream as the destination.</p>
     */
    inline Output& WithKinesisFirehoseOutput(const KinesisFirehoseOutput& value) { SetKinesisFirehoseOutput(value); return *this;}

    /**
     * <p>Identifies an Amazon Kinesis Firehose delivery stream as the destination.</p>
     */
    inline Output& WithKinesisFirehoseOutput(KinesisFirehoseOutput&& value) { SetKinesisFirehoseOutput(std::move(value)); return *this;}


    /**
     * <p>Identifies an AWS Lambda function as the destination.</p>
     */
    inline const LambdaOutput& GetLambdaOutput() const{ return m_lambdaOutput; }

    /**
     * <p>Identifies an AWS Lambda function as the destination.</p>
     */
    inline bool LambdaOutputHasBeenSet() const { return m_lambdaOutputHasBeenSet; }

    /**
     * <p>Identifies an AWS Lambda function as the destination.</p>
     */
    inline void SetLambdaOutput(const LambdaOutput& value) { m_lambdaOutputHasBeenSet = true; m_lambdaOutput = value; }

    /**
     * <p>Identifies an AWS Lambda function as the destination.</p>
     */
    inline void SetLambdaOutput(LambdaOutput&& value) { m_lambdaOutputHasBeenSet = true; m_lambdaOutput = std::move(value); }

    /**
     * <p>Identifies an AWS Lambda function as the destination.</p>
     */
    inline Output& WithLambdaOutput(const LambdaOutput& value) { SetLambdaOutput(value); return *this;}

    /**
     * <p>Identifies an AWS Lambda function as the destination.</p>
     */
    inline Output& WithLambdaOutput(LambdaOutput&& value) { SetLambdaOutput(std::move(value)); return *this;}


    /**
     * <p>Describes the data format when records are written to the destination. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/how-it-works-output.html">Configuring
     * Application Output</a>.</p>
     */
    inline const DestinationSchema& GetDestinationSchema() const{ return m_destinationSchema; }

    /**
     * <p>Describes the data format when records are written to the destination. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/how-it-works-output.html">Configuring
     * Application Output</a>.</p>
     */
    inline bool DestinationSchemaHasBeenSet() const { return m_destinationSchemaHasBeenSet; }

    /**
     * <p>Describes the data format when records are written to the destination. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/how-it-works-output.html">Configuring
     * Application Output</a>.</p>
     */
    inline void SetDestinationSchema(const DestinationSchema& value) { m_destinationSchemaHasBeenSet = true; m_destinationSchema = value; }

    /**
     * <p>Describes the data format when records are written to the destination. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/how-it-works-output.html">Configuring
     * Application Output</a>.</p>
     */
    inline void SetDestinationSchema(DestinationSchema&& value) { m_destinationSchemaHasBeenSet = true; m_destinationSchema = std::move(value); }

    /**
     * <p>Describes the data format when records are written to the destination. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/how-it-works-output.html">Configuring
     * Application Output</a>.</p>
     */
    inline Output& WithDestinationSchema(const DestinationSchema& value) { SetDestinationSchema(value); return *this;}

    /**
     * <p>Describes the data format when records are written to the destination. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/how-it-works-output.html">Configuring
     * Application Output</a>.</p>
     */
    inline Output& WithDestinationSchema(DestinationSchema&& value) { SetDestinationSchema(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    KinesisStreamsOutput m_kinesisStreamsOutput;
    bool m_kinesisStreamsOutputHasBeenSet;

    KinesisFirehoseOutput m_kinesisFirehoseOutput;
    bool m_kinesisFirehoseOutputHasBeenSet;

    LambdaOutput m_lambdaOutput;
    bool m_lambdaOutputHasBeenSet;

    DestinationSchema m_destinationSchema;
    bool m_destinationSchemaHasBeenSet;
  };

} // namespace Model
} // namespace KinesisAnalytics
} // namespace Aws
