/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kinesisanalyticsv2/model/KinesisStreamsOutput.h>
#include <aws/kinesisanalyticsv2/model/KinesisFirehoseOutput.h>
#include <aws/kinesisanalyticsv2/model/LambdaOutput.h>
#include <aws/kinesisanalyticsv2/model/DestinationSchema.h>
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
   * <p> Describes a SQL-based Kinesis Data Analytics application's output
   * configuration, in which you identify an in-application stream and a destination
   * where you want the in-application stream data to be written. The destination can
   * be a Kinesis data stream or a Kinesis Data Firehose delivery stream. </p>
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/Output">AWS
   * API Reference</a></p>
   */
  class Output
  {
  public:
    AWS_KINESISANALYTICSV2_API Output();
    AWS_KINESISANALYTICSV2_API Output(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API Output& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the in-application stream.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the in-application stream.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the in-application stream.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the in-application stream.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the in-application stream.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the in-application stream.</p>
     */
    inline Output& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the in-application stream.</p>
     */
    inline Output& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the in-application stream.</p>
     */
    inline Output& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Identifies a Kinesis data stream as the destination.</p>
     */
    inline const KinesisStreamsOutput& GetKinesisStreamsOutput() const{ return m_kinesisStreamsOutput; }

    /**
     * <p>Identifies a Kinesis data stream as the destination.</p>
     */
    inline bool KinesisStreamsOutputHasBeenSet() const { return m_kinesisStreamsOutputHasBeenSet; }

    /**
     * <p>Identifies a Kinesis data stream as the destination.</p>
     */
    inline void SetKinesisStreamsOutput(const KinesisStreamsOutput& value) { m_kinesisStreamsOutputHasBeenSet = true; m_kinesisStreamsOutput = value; }

    /**
     * <p>Identifies a Kinesis data stream as the destination.</p>
     */
    inline void SetKinesisStreamsOutput(KinesisStreamsOutput&& value) { m_kinesisStreamsOutputHasBeenSet = true; m_kinesisStreamsOutput = std::move(value); }

    /**
     * <p>Identifies a Kinesis data stream as the destination.</p>
     */
    inline Output& WithKinesisStreamsOutput(const KinesisStreamsOutput& value) { SetKinesisStreamsOutput(value); return *this;}

    /**
     * <p>Identifies a Kinesis data stream as the destination.</p>
     */
    inline Output& WithKinesisStreamsOutput(KinesisStreamsOutput&& value) { SetKinesisStreamsOutput(std::move(value)); return *this;}


    /**
     * <p>Identifies a Kinesis Data Firehose delivery stream as the destination.</p>
     */
    inline const KinesisFirehoseOutput& GetKinesisFirehoseOutput() const{ return m_kinesisFirehoseOutput; }

    /**
     * <p>Identifies a Kinesis Data Firehose delivery stream as the destination.</p>
     */
    inline bool KinesisFirehoseOutputHasBeenSet() const { return m_kinesisFirehoseOutputHasBeenSet; }

    /**
     * <p>Identifies a Kinesis Data Firehose delivery stream as the destination.</p>
     */
    inline void SetKinesisFirehoseOutput(const KinesisFirehoseOutput& value) { m_kinesisFirehoseOutputHasBeenSet = true; m_kinesisFirehoseOutput = value; }

    /**
     * <p>Identifies a Kinesis Data Firehose delivery stream as the destination.</p>
     */
    inline void SetKinesisFirehoseOutput(KinesisFirehoseOutput&& value) { m_kinesisFirehoseOutputHasBeenSet = true; m_kinesisFirehoseOutput = std::move(value); }

    /**
     * <p>Identifies a Kinesis Data Firehose delivery stream as the destination.</p>
     */
    inline Output& WithKinesisFirehoseOutput(const KinesisFirehoseOutput& value) { SetKinesisFirehoseOutput(value); return *this;}

    /**
     * <p>Identifies a Kinesis Data Firehose delivery stream as the destination.</p>
     */
    inline Output& WithKinesisFirehoseOutput(KinesisFirehoseOutput&& value) { SetKinesisFirehoseOutput(std::move(value)); return *this;}


    /**
     * <p>Identifies an Amazon Lambda function as the destination.</p>
     */
    inline const LambdaOutput& GetLambdaOutput() const{ return m_lambdaOutput; }

    /**
     * <p>Identifies an Amazon Lambda function as the destination.</p>
     */
    inline bool LambdaOutputHasBeenSet() const { return m_lambdaOutputHasBeenSet; }

    /**
     * <p>Identifies an Amazon Lambda function as the destination.</p>
     */
    inline void SetLambdaOutput(const LambdaOutput& value) { m_lambdaOutputHasBeenSet = true; m_lambdaOutput = value; }

    /**
     * <p>Identifies an Amazon Lambda function as the destination.</p>
     */
    inline void SetLambdaOutput(LambdaOutput&& value) { m_lambdaOutputHasBeenSet = true; m_lambdaOutput = std::move(value); }

    /**
     * <p>Identifies an Amazon Lambda function as the destination.</p>
     */
    inline Output& WithLambdaOutput(const LambdaOutput& value) { SetLambdaOutput(value); return *this;}

    /**
     * <p>Identifies an Amazon Lambda function as the destination.</p>
     */
    inline Output& WithLambdaOutput(LambdaOutput&& value) { SetLambdaOutput(std::move(value)); return *this;}


    /**
     * <p>Describes the data format when records are written to the destination. </p>
     */
    inline const DestinationSchema& GetDestinationSchema() const{ return m_destinationSchema; }

    /**
     * <p>Describes the data format when records are written to the destination. </p>
     */
    inline bool DestinationSchemaHasBeenSet() const { return m_destinationSchemaHasBeenSet; }

    /**
     * <p>Describes the data format when records are written to the destination. </p>
     */
    inline void SetDestinationSchema(const DestinationSchema& value) { m_destinationSchemaHasBeenSet = true; m_destinationSchema = value; }

    /**
     * <p>Describes the data format when records are written to the destination. </p>
     */
    inline void SetDestinationSchema(DestinationSchema&& value) { m_destinationSchemaHasBeenSet = true; m_destinationSchema = std::move(value); }

    /**
     * <p>Describes the data format when records are written to the destination. </p>
     */
    inline Output& WithDestinationSchema(const DestinationSchema& value) { SetDestinationSchema(value); return *this;}

    /**
     * <p>Describes the data format when records are written to the destination. </p>
     */
    inline Output& WithDestinationSchema(DestinationSchema&& value) { SetDestinationSchema(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    KinesisStreamsOutput m_kinesisStreamsOutput;
    bool m_kinesisStreamsOutputHasBeenSet = false;

    KinesisFirehoseOutput m_kinesisFirehoseOutput;
    bool m_kinesisFirehoseOutputHasBeenSet = false;

    LambdaOutput m_lambdaOutput;
    bool m_lambdaOutputHasBeenSet = false;

    DestinationSchema m_destinationSchema;
    bool m_destinationSchemaHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
