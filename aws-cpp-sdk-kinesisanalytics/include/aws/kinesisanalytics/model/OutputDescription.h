﻿/*
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
#include <aws/kinesisanalytics/model/KinesisStreamsOutputDescription.h>
#include <aws/kinesisanalytics/model/KinesisFirehoseOutputDescription.h>
#include <aws/kinesisanalytics/model/LambdaOutputDescription.h>
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
   * <p>Describes the application output configuration, which includes the
   * in-application stream name and the destination where the stream data is written.
   * The destination can be an Amazon Kinesis stream or an Amazon Kinesis Firehose
   * delivery stream. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalytics-2015-08-14/OutputDescription">AWS
   * API Reference</a></p>
   */
  class AWS_KINESISANALYTICS_API OutputDescription
  {
  public:
    OutputDescription();
    OutputDescription(Aws::Utils::Json::JsonView jsonValue);
    OutputDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A unique identifier for the output configuration.</p>
     */
    inline const Aws::String& GetOutputId() const{ return m_outputId; }

    /**
     * <p>A unique identifier for the output configuration.</p>
     */
    inline void SetOutputId(const Aws::String& value) { m_outputIdHasBeenSet = true; m_outputId = value; }

    /**
     * <p>A unique identifier for the output configuration.</p>
     */
    inline void SetOutputId(Aws::String&& value) { m_outputIdHasBeenSet = true; m_outputId = std::move(value); }

    /**
     * <p>A unique identifier for the output configuration.</p>
     */
    inline void SetOutputId(const char* value) { m_outputIdHasBeenSet = true; m_outputId.assign(value); }

    /**
     * <p>A unique identifier for the output configuration.</p>
     */
    inline OutputDescription& WithOutputId(const Aws::String& value) { SetOutputId(value); return *this;}

    /**
     * <p>A unique identifier for the output configuration.</p>
     */
    inline OutputDescription& WithOutputId(Aws::String&& value) { SetOutputId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the output configuration.</p>
     */
    inline OutputDescription& WithOutputId(const char* value) { SetOutputId(value); return *this;}


    /**
     * <p>Name of the in-application stream configured as output.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Name of the in-application stream configured as output.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Name of the in-application stream configured as output.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>Name of the in-application stream configured as output.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>Name of the in-application stream configured as output.</p>
     */
    inline OutputDescription& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Name of the in-application stream configured as output.</p>
     */
    inline OutputDescription& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>Name of the in-application stream configured as output.</p>
     */
    inline OutputDescription& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Describes Amazon Kinesis stream configured as the destination where output is
     * written.</p>
     */
    inline const KinesisStreamsOutputDescription& GetKinesisStreamsOutputDescription() const{ return m_kinesisStreamsOutputDescription; }

    /**
     * <p>Describes Amazon Kinesis stream configured as the destination where output is
     * written.</p>
     */
    inline void SetKinesisStreamsOutputDescription(const KinesisStreamsOutputDescription& value) { m_kinesisStreamsOutputDescriptionHasBeenSet = true; m_kinesisStreamsOutputDescription = value; }

    /**
     * <p>Describes Amazon Kinesis stream configured as the destination where output is
     * written.</p>
     */
    inline void SetKinesisStreamsOutputDescription(KinesisStreamsOutputDescription&& value) { m_kinesisStreamsOutputDescriptionHasBeenSet = true; m_kinesisStreamsOutputDescription = std::move(value); }

    /**
     * <p>Describes Amazon Kinesis stream configured as the destination where output is
     * written.</p>
     */
    inline OutputDescription& WithKinesisStreamsOutputDescription(const KinesisStreamsOutputDescription& value) { SetKinesisStreamsOutputDescription(value); return *this;}

    /**
     * <p>Describes Amazon Kinesis stream configured as the destination where output is
     * written.</p>
     */
    inline OutputDescription& WithKinesisStreamsOutputDescription(KinesisStreamsOutputDescription&& value) { SetKinesisStreamsOutputDescription(std::move(value)); return *this;}


    /**
     * <p>Describes the Amazon Kinesis Firehose delivery stream configured as the
     * destination where output is written.</p>
     */
    inline const KinesisFirehoseOutputDescription& GetKinesisFirehoseOutputDescription() const{ return m_kinesisFirehoseOutputDescription; }

    /**
     * <p>Describes the Amazon Kinesis Firehose delivery stream configured as the
     * destination where output is written.</p>
     */
    inline void SetKinesisFirehoseOutputDescription(const KinesisFirehoseOutputDescription& value) { m_kinesisFirehoseOutputDescriptionHasBeenSet = true; m_kinesisFirehoseOutputDescription = value; }

    /**
     * <p>Describes the Amazon Kinesis Firehose delivery stream configured as the
     * destination where output is written.</p>
     */
    inline void SetKinesisFirehoseOutputDescription(KinesisFirehoseOutputDescription&& value) { m_kinesisFirehoseOutputDescriptionHasBeenSet = true; m_kinesisFirehoseOutputDescription = std::move(value); }

    /**
     * <p>Describes the Amazon Kinesis Firehose delivery stream configured as the
     * destination where output is written.</p>
     */
    inline OutputDescription& WithKinesisFirehoseOutputDescription(const KinesisFirehoseOutputDescription& value) { SetKinesisFirehoseOutputDescription(value); return *this;}

    /**
     * <p>Describes the Amazon Kinesis Firehose delivery stream configured as the
     * destination where output is written.</p>
     */
    inline OutputDescription& WithKinesisFirehoseOutputDescription(KinesisFirehoseOutputDescription&& value) { SetKinesisFirehoseOutputDescription(std::move(value)); return *this;}


    /**
     * <p>Describes the AWS Lambda function configured as the destination where output
     * is written.</p>
     */
    inline const LambdaOutputDescription& GetLambdaOutputDescription() const{ return m_lambdaOutputDescription; }

    /**
     * <p>Describes the AWS Lambda function configured as the destination where output
     * is written.</p>
     */
    inline void SetLambdaOutputDescription(const LambdaOutputDescription& value) { m_lambdaOutputDescriptionHasBeenSet = true; m_lambdaOutputDescription = value; }

    /**
     * <p>Describes the AWS Lambda function configured as the destination where output
     * is written.</p>
     */
    inline void SetLambdaOutputDescription(LambdaOutputDescription&& value) { m_lambdaOutputDescriptionHasBeenSet = true; m_lambdaOutputDescription = std::move(value); }

    /**
     * <p>Describes the AWS Lambda function configured as the destination where output
     * is written.</p>
     */
    inline OutputDescription& WithLambdaOutputDescription(const LambdaOutputDescription& value) { SetLambdaOutputDescription(value); return *this;}

    /**
     * <p>Describes the AWS Lambda function configured as the destination where output
     * is written.</p>
     */
    inline OutputDescription& WithLambdaOutputDescription(LambdaOutputDescription&& value) { SetLambdaOutputDescription(std::move(value)); return *this;}


    /**
     * <p>Data format used for writing data to the destination.</p>
     */
    inline const DestinationSchema& GetDestinationSchema() const{ return m_destinationSchema; }

    /**
     * <p>Data format used for writing data to the destination.</p>
     */
    inline void SetDestinationSchema(const DestinationSchema& value) { m_destinationSchemaHasBeenSet = true; m_destinationSchema = value; }

    /**
     * <p>Data format used for writing data to the destination.</p>
     */
    inline void SetDestinationSchema(DestinationSchema&& value) { m_destinationSchemaHasBeenSet = true; m_destinationSchema = std::move(value); }

    /**
     * <p>Data format used for writing data to the destination.</p>
     */
    inline OutputDescription& WithDestinationSchema(const DestinationSchema& value) { SetDestinationSchema(value); return *this;}

    /**
     * <p>Data format used for writing data to the destination.</p>
     */
    inline OutputDescription& WithDestinationSchema(DestinationSchema&& value) { SetDestinationSchema(std::move(value)); return *this;}

  private:

    Aws::String m_outputId;
    bool m_outputIdHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    KinesisStreamsOutputDescription m_kinesisStreamsOutputDescription;
    bool m_kinesisStreamsOutputDescriptionHasBeenSet;

    KinesisFirehoseOutputDescription m_kinesisFirehoseOutputDescription;
    bool m_kinesisFirehoseOutputDescriptionHasBeenSet;

    LambdaOutputDescription m_lambdaOutputDescription;
    bool m_lambdaOutputDescriptionHasBeenSet;

    DestinationSchema m_destinationSchema;
    bool m_destinationSchemaHasBeenSet;
  };

} // namespace Model
} // namespace KinesisAnalytics
} // namespace Aws
