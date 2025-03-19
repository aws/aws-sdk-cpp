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
    AWS_KINESISANALYTICSV2_API Output() = default;
    AWS_KINESISANALYTICSV2_API Output(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API Output& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the in-application stream.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Output& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifies a Kinesis data stream as the destination.</p>
     */
    inline const KinesisStreamsOutput& GetKinesisStreamsOutput() const { return m_kinesisStreamsOutput; }
    inline bool KinesisStreamsOutputHasBeenSet() const { return m_kinesisStreamsOutputHasBeenSet; }
    template<typename KinesisStreamsOutputT = KinesisStreamsOutput>
    void SetKinesisStreamsOutput(KinesisStreamsOutputT&& value) { m_kinesisStreamsOutputHasBeenSet = true; m_kinesisStreamsOutput = std::forward<KinesisStreamsOutputT>(value); }
    template<typename KinesisStreamsOutputT = KinesisStreamsOutput>
    Output& WithKinesisStreamsOutput(KinesisStreamsOutputT&& value) { SetKinesisStreamsOutput(std::forward<KinesisStreamsOutputT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifies a Kinesis Data Firehose delivery stream as the destination.</p>
     */
    inline const KinesisFirehoseOutput& GetKinesisFirehoseOutput() const { return m_kinesisFirehoseOutput; }
    inline bool KinesisFirehoseOutputHasBeenSet() const { return m_kinesisFirehoseOutputHasBeenSet; }
    template<typename KinesisFirehoseOutputT = KinesisFirehoseOutput>
    void SetKinesisFirehoseOutput(KinesisFirehoseOutputT&& value) { m_kinesisFirehoseOutputHasBeenSet = true; m_kinesisFirehoseOutput = std::forward<KinesisFirehoseOutputT>(value); }
    template<typename KinesisFirehoseOutputT = KinesisFirehoseOutput>
    Output& WithKinesisFirehoseOutput(KinesisFirehoseOutputT&& value) { SetKinesisFirehoseOutput(std::forward<KinesisFirehoseOutputT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifies an Amazon Lambda function as the destination.</p>
     */
    inline const LambdaOutput& GetLambdaOutput() const { return m_lambdaOutput; }
    inline bool LambdaOutputHasBeenSet() const { return m_lambdaOutputHasBeenSet; }
    template<typename LambdaOutputT = LambdaOutput>
    void SetLambdaOutput(LambdaOutputT&& value) { m_lambdaOutputHasBeenSet = true; m_lambdaOutput = std::forward<LambdaOutputT>(value); }
    template<typename LambdaOutputT = LambdaOutput>
    Output& WithLambdaOutput(LambdaOutputT&& value) { SetLambdaOutput(std::forward<LambdaOutputT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the data format when records are written to the destination. </p>
     */
    inline const DestinationSchema& GetDestinationSchema() const { return m_destinationSchema; }
    inline bool DestinationSchemaHasBeenSet() const { return m_destinationSchemaHasBeenSet; }
    template<typename DestinationSchemaT = DestinationSchema>
    void SetDestinationSchema(DestinationSchemaT&& value) { m_destinationSchemaHasBeenSet = true; m_destinationSchema = std::forward<DestinationSchemaT>(value); }
    template<typename DestinationSchemaT = DestinationSchema>
    Output& WithDestinationSchema(DestinationSchemaT&& value) { SetDestinationSchema(std::forward<DestinationSchemaT>(value)); return *this;}
    ///@}
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
