/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class OutputDescription
  {
  public:
    AWS_KINESISANALYTICS_API OutputDescription();
    AWS_KINESISANALYTICS_API OutputDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICS_API OutputDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A unique identifier for the output configuration.</p>
     */
    inline const Aws::String& GetOutputId() const{ return m_outputId; }
    inline bool OutputIdHasBeenSet() const { return m_outputIdHasBeenSet; }
    inline void SetOutputId(const Aws::String& value) { m_outputIdHasBeenSet = true; m_outputId = value; }
    inline void SetOutputId(Aws::String&& value) { m_outputIdHasBeenSet = true; m_outputId = std::move(value); }
    inline void SetOutputId(const char* value) { m_outputIdHasBeenSet = true; m_outputId.assign(value); }
    inline OutputDescription& WithOutputId(const Aws::String& value) { SetOutputId(value); return *this;}
    inline OutputDescription& WithOutputId(Aws::String&& value) { SetOutputId(std::move(value)); return *this;}
    inline OutputDescription& WithOutputId(const char* value) { SetOutputId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of the in-application stream configured as output.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline OutputDescription& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline OutputDescription& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline OutputDescription& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes Amazon Kinesis stream configured as the destination where output is
     * written.</p>
     */
    inline const KinesisStreamsOutputDescription& GetKinesisStreamsOutputDescription() const{ return m_kinesisStreamsOutputDescription; }
    inline bool KinesisStreamsOutputDescriptionHasBeenSet() const { return m_kinesisStreamsOutputDescriptionHasBeenSet; }
    inline void SetKinesisStreamsOutputDescription(const KinesisStreamsOutputDescription& value) { m_kinesisStreamsOutputDescriptionHasBeenSet = true; m_kinesisStreamsOutputDescription = value; }
    inline void SetKinesisStreamsOutputDescription(KinesisStreamsOutputDescription&& value) { m_kinesisStreamsOutputDescriptionHasBeenSet = true; m_kinesisStreamsOutputDescription = std::move(value); }
    inline OutputDescription& WithKinesisStreamsOutputDescription(const KinesisStreamsOutputDescription& value) { SetKinesisStreamsOutputDescription(value); return *this;}
    inline OutputDescription& WithKinesisStreamsOutputDescription(KinesisStreamsOutputDescription&& value) { SetKinesisStreamsOutputDescription(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the Amazon Kinesis Firehose delivery stream configured as the
     * destination where output is written.</p>
     */
    inline const KinesisFirehoseOutputDescription& GetKinesisFirehoseOutputDescription() const{ return m_kinesisFirehoseOutputDescription; }
    inline bool KinesisFirehoseOutputDescriptionHasBeenSet() const { return m_kinesisFirehoseOutputDescriptionHasBeenSet; }
    inline void SetKinesisFirehoseOutputDescription(const KinesisFirehoseOutputDescription& value) { m_kinesisFirehoseOutputDescriptionHasBeenSet = true; m_kinesisFirehoseOutputDescription = value; }
    inline void SetKinesisFirehoseOutputDescription(KinesisFirehoseOutputDescription&& value) { m_kinesisFirehoseOutputDescriptionHasBeenSet = true; m_kinesisFirehoseOutputDescription = std::move(value); }
    inline OutputDescription& WithKinesisFirehoseOutputDescription(const KinesisFirehoseOutputDescription& value) { SetKinesisFirehoseOutputDescription(value); return *this;}
    inline OutputDescription& WithKinesisFirehoseOutputDescription(KinesisFirehoseOutputDescription&& value) { SetKinesisFirehoseOutputDescription(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the AWS Lambda function configured as the destination where output
     * is written.</p>
     */
    inline const LambdaOutputDescription& GetLambdaOutputDescription() const{ return m_lambdaOutputDescription; }
    inline bool LambdaOutputDescriptionHasBeenSet() const { return m_lambdaOutputDescriptionHasBeenSet; }
    inline void SetLambdaOutputDescription(const LambdaOutputDescription& value) { m_lambdaOutputDescriptionHasBeenSet = true; m_lambdaOutputDescription = value; }
    inline void SetLambdaOutputDescription(LambdaOutputDescription&& value) { m_lambdaOutputDescriptionHasBeenSet = true; m_lambdaOutputDescription = std::move(value); }
    inline OutputDescription& WithLambdaOutputDescription(const LambdaOutputDescription& value) { SetLambdaOutputDescription(value); return *this;}
    inline OutputDescription& WithLambdaOutputDescription(LambdaOutputDescription&& value) { SetLambdaOutputDescription(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Data format used for writing data to the destination.</p>
     */
    inline const DestinationSchema& GetDestinationSchema() const{ return m_destinationSchema; }
    inline bool DestinationSchemaHasBeenSet() const { return m_destinationSchemaHasBeenSet; }
    inline void SetDestinationSchema(const DestinationSchema& value) { m_destinationSchemaHasBeenSet = true; m_destinationSchema = value; }
    inline void SetDestinationSchema(DestinationSchema&& value) { m_destinationSchemaHasBeenSet = true; m_destinationSchema = std::move(value); }
    inline OutputDescription& WithDestinationSchema(const DestinationSchema& value) { SetDestinationSchema(value); return *this;}
    inline OutputDescription& WithDestinationSchema(DestinationSchema&& value) { SetDestinationSchema(std::move(value)); return *this;}
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
} // namespace KinesisAnalytics
} // namespace Aws
