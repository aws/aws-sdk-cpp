/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class OutputUpdate
  {
  public:
    AWS_KINESISANALYTICS_API OutputUpdate() = default;
    AWS_KINESISANALYTICS_API OutputUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICS_API OutputUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Identifies the specific output configuration that you want to update.</p>
     */
    inline const Aws::String& GetOutputId() const { return m_outputId; }
    inline bool OutputIdHasBeenSet() const { return m_outputIdHasBeenSet; }
    template<typename OutputIdT = Aws::String>
    void SetOutputId(OutputIdT&& value) { m_outputIdHasBeenSet = true; m_outputId = std::forward<OutputIdT>(value); }
    template<typename OutputIdT = Aws::String>
    OutputUpdate& WithOutputId(OutputIdT&& value) { SetOutputId(std::forward<OutputIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If you want to specify a different in-application stream for this output
     * configuration, use this field to specify the new in-application stream name.</p>
     */
    inline const Aws::String& GetNameUpdate() const { return m_nameUpdate; }
    inline bool NameUpdateHasBeenSet() const { return m_nameUpdateHasBeenSet; }
    template<typename NameUpdateT = Aws::String>
    void SetNameUpdate(NameUpdateT&& value) { m_nameUpdateHasBeenSet = true; m_nameUpdate = std::forward<NameUpdateT>(value); }
    template<typename NameUpdateT = Aws::String>
    OutputUpdate& WithNameUpdate(NameUpdateT&& value) { SetNameUpdate(std::forward<NameUpdateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes an Amazon Kinesis stream as the destination for the output.</p>
     */
    inline const KinesisStreamsOutputUpdate& GetKinesisStreamsOutputUpdate() const { return m_kinesisStreamsOutputUpdate; }
    inline bool KinesisStreamsOutputUpdateHasBeenSet() const { return m_kinesisStreamsOutputUpdateHasBeenSet; }
    template<typename KinesisStreamsOutputUpdateT = KinesisStreamsOutputUpdate>
    void SetKinesisStreamsOutputUpdate(KinesisStreamsOutputUpdateT&& value) { m_kinesisStreamsOutputUpdateHasBeenSet = true; m_kinesisStreamsOutputUpdate = std::forward<KinesisStreamsOutputUpdateT>(value); }
    template<typename KinesisStreamsOutputUpdateT = KinesisStreamsOutputUpdate>
    OutputUpdate& WithKinesisStreamsOutputUpdate(KinesisStreamsOutputUpdateT&& value) { SetKinesisStreamsOutputUpdate(std::forward<KinesisStreamsOutputUpdateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes an Amazon Kinesis Firehose delivery stream as the destination for
     * the output.</p>
     */
    inline const KinesisFirehoseOutputUpdate& GetKinesisFirehoseOutputUpdate() const { return m_kinesisFirehoseOutputUpdate; }
    inline bool KinesisFirehoseOutputUpdateHasBeenSet() const { return m_kinesisFirehoseOutputUpdateHasBeenSet; }
    template<typename KinesisFirehoseOutputUpdateT = KinesisFirehoseOutputUpdate>
    void SetKinesisFirehoseOutputUpdate(KinesisFirehoseOutputUpdateT&& value) { m_kinesisFirehoseOutputUpdateHasBeenSet = true; m_kinesisFirehoseOutputUpdate = std::forward<KinesisFirehoseOutputUpdateT>(value); }
    template<typename KinesisFirehoseOutputUpdateT = KinesisFirehoseOutputUpdate>
    OutputUpdate& WithKinesisFirehoseOutputUpdate(KinesisFirehoseOutputUpdateT&& value) { SetKinesisFirehoseOutputUpdate(std::forward<KinesisFirehoseOutputUpdateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes an AWS Lambda function as the destination for the output.</p>
     */
    inline const LambdaOutputUpdate& GetLambdaOutputUpdate() const { return m_lambdaOutputUpdate; }
    inline bool LambdaOutputUpdateHasBeenSet() const { return m_lambdaOutputUpdateHasBeenSet; }
    template<typename LambdaOutputUpdateT = LambdaOutputUpdate>
    void SetLambdaOutputUpdate(LambdaOutputUpdateT&& value) { m_lambdaOutputUpdateHasBeenSet = true; m_lambdaOutputUpdate = std::forward<LambdaOutputUpdateT>(value); }
    template<typename LambdaOutputUpdateT = LambdaOutputUpdate>
    OutputUpdate& WithLambdaOutputUpdate(LambdaOutputUpdateT&& value) { SetLambdaOutputUpdate(std::forward<LambdaOutputUpdateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the data format when records are written to the destination. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/how-it-works-output.html">Configuring
     * Application Output</a>.</p>
     */
    inline const DestinationSchema& GetDestinationSchemaUpdate() const { return m_destinationSchemaUpdate; }
    inline bool DestinationSchemaUpdateHasBeenSet() const { return m_destinationSchemaUpdateHasBeenSet; }
    template<typename DestinationSchemaUpdateT = DestinationSchema>
    void SetDestinationSchemaUpdate(DestinationSchemaUpdateT&& value) { m_destinationSchemaUpdateHasBeenSet = true; m_destinationSchemaUpdate = std::forward<DestinationSchemaUpdateT>(value); }
    template<typename DestinationSchemaUpdateT = DestinationSchema>
    OutputUpdate& WithDestinationSchemaUpdate(DestinationSchemaUpdateT&& value) { SetDestinationSchemaUpdate(std::forward<DestinationSchemaUpdateT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_outputId;
    bool m_outputIdHasBeenSet = false;

    Aws::String m_nameUpdate;
    bool m_nameUpdateHasBeenSet = false;

    KinesisStreamsOutputUpdate m_kinesisStreamsOutputUpdate;
    bool m_kinesisStreamsOutputUpdateHasBeenSet = false;

    KinesisFirehoseOutputUpdate m_kinesisFirehoseOutputUpdate;
    bool m_kinesisFirehoseOutputUpdateHasBeenSet = false;

    LambdaOutputUpdate m_lambdaOutputUpdate;
    bool m_lambdaOutputUpdateHasBeenSet = false;

    DestinationSchema m_destinationSchemaUpdate;
    bool m_destinationSchemaUpdateHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalytics
} // namespace Aws
