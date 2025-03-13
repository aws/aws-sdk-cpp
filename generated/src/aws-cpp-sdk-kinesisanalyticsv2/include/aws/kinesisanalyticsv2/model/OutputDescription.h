/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kinesisanalyticsv2/model/KinesisStreamsOutputDescription.h>
#include <aws/kinesisanalyticsv2/model/KinesisFirehoseOutputDescription.h>
#include <aws/kinesisanalyticsv2/model/LambdaOutputDescription.h>
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
   * <p>For a SQL-based Kinesis Data Analytics application, describes the application
   * output configuration, which includes the in-application stream name and the
   * destination where the stream data is written. The destination can be a Kinesis
   * data stream or a Kinesis Data Firehose delivery stream. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/OutputDescription">AWS
   * API Reference</a></p>
   */
  class OutputDescription
  {
  public:
    AWS_KINESISANALYTICSV2_API OutputDescription() = default;
    AWS_KINESISANALYTICSV2_API OutputDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API OutputDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A unique identifier for the output configuration.</p>
     */
    inline const Aws::String& GetOutputId() const { return m_outputId; }
    inline bool OutputIdHasBeenSet() const { return m_outputIdHasBeenSet; }
    template<typename OutputIdT = Aws::String>
    void SetOutputId(OutputIdT&& value) { m_outputIdHasBeenSet = true; m_outputId = std::forward<OutputIdT>(value); }
    template<typename OutputIdT = Aws::String>
    OutputDescription& WithOutputId(OutputIdT&& value) { SetOutputId(std::forward<OutputIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the in-application stream that is configured as output.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    OutputDescription& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the Kinesis data stream that is configured as the destination where
     * output is written.</p>
     */
    inline const KinesisStreamsOutputDescription& GetKinesisStreamsOutputDescription() const { return m_kinesisStreamsOutputDescription; }
    inline bool KinesisStreamsOutputDescriptionHasBeenSet() const { return m_kinesisStreamsOutputDescriptionHasBeenSet; }
    template<typename KinesisStreamsOutputDescriptionT = KinesisStreamsOutputDescription>
    void SetKinesisStreamsOutputDescription(KinesisStreamsOutputDescriptionT&& value) { m_kinesisStreamsOutputDescriptionHasBeenSet = true; m_kinesisStreamsOutputDescription = std::forward<KinesisStreamsOutputDescriptionT>(value); }
    template<typename KinesisStreamsOutputDescriptionT = KinesisStreamsOutputDescription>
    OutputDescription& WithKinesisStreamsOutputDescription(KinesisStreamsOutputDescriptionT&& value) { SetKinesisStreamsOutputDescription(std::forward<KinesisStreamsOutputDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the Kinesis Data Firehose delivery stream that is configured as the
     * destination where output is written.</p>
     */
    inline const KinesisFirehoseOutputDescription& GetKinesisFirehoseOutputDescription() const { return m_kinesisFirehoseOutputDescription; }
    inline bool KinesisFirehoseOutputDescriptionHasBeenSet() const { return m_kinesisFirehoseOutputDescriptionHasBeenSet; }
    template<typename KinesisFirehoseOutputDescriptionT = KinesisFirehoseOutputDescription>
    void SetKinesisFirehoseOutputDescription(KinesisFirehoseOutputDescriptionT&& value) { m_kinesisFirehoseOutputDescriptionHasBeenSet = true; m_kinesisFirehoseOutputDescription = std::forward<KinesisFirehoseOutputDescriptionT>(value); }
    template<typename KinesisFirehoseOutputDescriptionT = KinesisFirehoseOutputDescription>
    OutputDescription& WithKinesisFirehoseOutputDescription(KinesisFirehoseOutputDescriptionT&& value) { SetKinesisFirehoseOutputDescription(std::forward<KinesisFirehoseOutputDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the Lambda function that is configured as the destination where
     * output is written.</p>
     */
    inline const LambdaOutputDescription& GetLambdaOutputDescription() const { return m_lambdaOutputDescription; }
    inline bool LambdaOutputDescriptionHasBeenSet() const { return m_lambdaOutputDescriptionHasBeenSet; }
    template<typename LambdaOutputDescriptionT = LambdaOutputDescription>
    void SetLambdaOutputDescription(LambdaOutputDescriptionT&& value) { m_lambdaOutputDescriptionHasBeenSet = true; m_lambdaOutputDescription = std::forward<LambdaOutputDescriptionT>(value); }
    template<typename LambdaOutputDescriptionT = LambdaOutputDescription>
    OutputDescription& WithLambdaOutputDescription(LambdaOutputDescriptionT&& value) { SetLambdaOutputDescription(std::forward<LambdaOutputDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data format used for writing data to the destination.</p>
     */
    inline const DestinationSchema& GetDestinationSchema() const { return m_destinationSchema; }
    inline bool DestinationSchemaHasBeenSet() const { return m_destinationSchemaHasBeenSet; }
    template<typename DestinationSchemaT = DestinationSchema>
    void SetDestinationSchema(DestinationSchemaT&& value) { m_destinationSchemaHasBeenSet = true; m_destinationSchema = std::forward<DestinationSchemaT>(value); }
    template<typename DestinationSchemaT = DestinationSchema>
    OutputDescription& WithDestinationSchema(DestinationSchemaT&& value) { SetDestinationSchema(std::forward<DestinationSchemaT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_outputId;
    bool m_outputIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    KinesisStreamsOutputDescription m_kinesisStreamsOutputDescription;
    bool m_kinesisStreamsOutputDescriptionHasBeenSet = false;

    KinesisFirehoseOutputDescription m_kinesisFirehoseOutputDescription;
    bool m_kinesisFirehoseOutputDescriptionHasBeenSet = false;

    LambdaOutputDescription m_lambdaOutputDescription;
    bool m_lambdaOutputDescriptionHasBeenSet = false;

    DestinationSchema m_destinationSchema;
    bool m_destinationSchemaHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
