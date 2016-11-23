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
#include <aws/kinesisanalytics/model/KinesisStreamsOutput.h>
#include <aws/kinesisanalytics/model/KinesisFirehoseOutput.h>
#include <aws/kinesisanalytics/model/DestinationSchema.h>

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
   * <p> Describes application output configuration in which you identify an
   * in-application stream and a destination where you want the in-application stream
   * data to be written. The destination can be an Amazon Kinesis stream or an Amazon
   * Kinesis Firehose delivery stream. </p> <p/> <p>You can configure your
   * application to write output to up to five destinations.</p>
   */
  class AWS_KINESISANALYTICS_API Output
  {
  public:
    Output();
    Output(const Aws::Utils::Json::JsonValue& jsonValue);
    Output& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>Name of the in-application stream.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Name of the in-application stream.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Name of the in-application stream.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = value; }

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
    inline Output& WithName(Aws::String&& value) { SetName(value); return *this;}

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
    inline void SetKinesisStreamsOutput(const KinesisStreamsOutput& value) { m_kinesisStreamsOutputHasBeenSet = true; m_kinesisStreamsOutput = value; }

    /**
     * <p>Identifies an Amazon Kinesis stream as the destination.</p>
     */
    inline void SetKinesisStreamsOutput(KinesisStreamsOutput&& value) { m_kinesisStreamsOutputHasBeenSet = true; m_kinesisStreamsOutput = value; }

    /**
     * <p>Identifies an Amazon Kinesis stream as the destination.</p>
     */
    inline Output& WithKinesisStreamsOutput(const KinesisStreamsOutput& value) { SetKinesisStreamsOutput(value); return *this;}

    /**
     * <p>Identifies an Amazon Kinesis stream as the destination.</p>
     */
    inline Output& WithKinesisStreamsOutput(KinesisStreamsOutput&& value) { SetKinesisStreamsOutput(value); return *this;}

    /**
     * <p>Identifies an Amazon Kinesis Firehose delivery stream as the destination.</p>
     */
    inline const KinesisFirehoseOutput& GetKinesisFirehoseOutput() const{ return m_kinesisFirehoseOutput; }

    /**
     * <p>Identifies an Amazon Kinesis Firehose delivery stream as the destination.</p>
     */
    inline void SetKinesisFirehoseOutput(const KinesisFirehoseOutput& value) { m_kinesisFirehoseOutputHasBeenSet = true; m_kinesisFirehoseOutput = value; }

    /**
     * <p>Identifies an Amazon Kinesis Firehose delivery stream as the destination.</p>
     */
    inline void SetKinesisFirehoseOutput(KinesisFirehoseOutput&& value) { m_kinesisFirehoseOutputHasBeenSet = true; m_kinesisFirehoseOutput = value; }

    /**
     * <p>Identifies an Amazon Kinesis Firehose delivery stream as the destination.</p>
     */
    inline Output& WithKinesisFirehoseOutput(const KinesisFirehoseOutput& value) { SetKinesisFirehoseOutput(value); return *this;}

    /**
     * <p>Identifies an Amazon Kinesis Firehose delivery stream as the destination.</p>
     */
    inline Output& WithKinesisFirehoseOutput(KinesisFirehoseOutput&& value) { SetKinesisFirehoseOutput(value); return *this;}

    
    inline const DestinationSchema& GetDestinationSchema() const{ return m_destinationSchema; }

    
    inline void SetDestinationSchema(const DestinationSchema& value) { m_destinationSchemaHasBeenSet = true; m_destinationSchema = value; }

    
    inline void SetDestinationSchema(DestinationSchema&& value) { m_destinationSchemaHasBeenSet = true; m_destinationSchema = value; }

    
    inline Output& WithDestinationSchema(const DestinationSchema& value) { SetDestinationSchema(value); return *this;}

    
    inline Output& WithDestinationSchema(DestinationSchema&& value) { SetDestinationSchema(value); return *this;}

  private:
    Aws::String m_name;
    bool m_nameHasBeenSet;
    KinesisStreamsOutput m_kinesisStreamsOutput;
    bool m_kinesisStreamsOutputHasBeenSet;
    KinesisFirehoseOutput m_kinesisFirehoseOutput;
    bool m_kinesisFirehoseOutputHasBeenSet;
    DestinationSchema m_destinationSchema;
    bool m_destinationSchemaHasBeenSet;
  };

} // namespace Model
} // namespace KinesisAnalytics
} // namespace Aws
