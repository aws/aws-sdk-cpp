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
#include <aws/kinesisanalytics/model/KinesisStreamsOutputUpdate.h>
#include <aws/kinesisanalytics/model/KinesisFirehoseOutputUpdate.h>
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
   * <p> Describes updates to the output configuration identified by the
   * <code>OutputId</code>. </p>
   */
  class AWS_KINESISANALYTICS_API OutputUpdate
  {
  public:
    OutputUpdate();
    OutputUpdate(const Aws::Utils::Json::JsonValue& jsonValue);
    OutputUpdate& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>Identifies the specific output configuration that you want to update.</p>
     */
    inline const Aws::String& GetOutputId() const{ return m_outputId; }

    /**
     * <p>Identifies the specific output configuration that you want to update.</p>
     */
    inline void SetOutputId(const Aws::String& value) { m_outputIdHasBeenSet = true; m_outputId = value; }

    /**
     * <p>Identifies the specific output configuration that you want to update.</p>
     */
    inline void SetOutputId(Aws::String&& value) { m_outputIdHasBeenSet = true; m_outputId = value; }

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
    inline OutputUpdate& WithOutputId(Aws::String&& value) { SetOutputId(value); return *this;}

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
    inline void SetNameUpdate(const Aws::String& value) { m_nameUpdateHasBeenSet = true; m_nameUpdate = value; }

    /**
     * <p>If you want to specify a different in-application stream for this output
     * configuration, use this field to specify the new in-application stream name.</p>
     */
    inline void SetNameUpdate(Aws::String&& value) { m_nameUpdateHasBeenSet = true; m_nameUpdate = value; }

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
    inline OutputUpdate& WithNameUpdate(Aws::String&& value) { SetNameUpdate(value); return *this;}

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
    inline void SetKinesisStreamsOutputUpdate(const KinesisStreamsOutputUpdate& value) { m_kinesisStreamsOutputUpdateHasBeenSet = true; m_kinesisStreamsOutputUpdate = value; }

    /**
     * <p>Describes an Amazon Kinesis stream as the destination for the output.</p>
     */
    inline void SetKinesisStreamsOutputUpdate(KinesisStreamsOutputUpdate&& value) { m_kinesisStreamsOutputUpdateHasBeenSet = true; m_kinesisStreamsOutputUpdate = value; }

    /**
     * <p>Describes an Amazon Kinesis stream as the destination for the output.</p>
     */
    inline OutputUpdate& WithKinesisStreamsOutputUpdate(const KinesisStreamsOutputUpdate& value) { SetKinesisStreamsOutputUpdate(value); return *this;}

    /**
     * <p>Describes an Amazon Kinesis stream as the destination for the output.</p>
     */
    inline OutputUpdate& WithKinesisStreamsOutputUpdate(KinesisStreamsOutputUpdate&& value) { SetKinesisStreamsOutputUpdate(value); return *this;}

    /**
     * <p>Describes a Amazon Kinesis Firehose delivery stream as the destination for
     * the output.</p>
     */
    inline const KinesisFirehoseOutputUpdate& GetKinesisFirehoseOutputUpdate() const{ return m_kinesisFirehoseOutputUpdate; }

    /**
     * <p>Describes a Amazon Kinesis Firehose delivery stream as the destination for
     * the output.</p>
     */
    inline void SetKinesisFirehoseOutputUpdate(const KinesisFirehoseOutputUpdate& value) { m_kinesisFirehoseOutputUpdateHasBeenSet = true; m_kinesisFirehoseOutputUpdate = value; }

    /**
     * <p>Describes a Amazon Kinesis Firehose delivery stream as the destination for
     * the output.</p>
     */
    inline void SetKinesisFirehoseOutputUpdate(KinesisFirehoseOutputUpdate&& value) { m_kinesisFirehoseOutputUpdateHasBeenSet = true; m_kinesisFirehoseOutputUpdate = value; }

    /**
     * <p>Describes a Amazon Kinesis Firehose delivery stream as the destination for
     * the output.</p>
     */
    inline OutputUpdate& WithKinesisFirehoseOutputUpdate(const KinesisFirehoseOutputUpdate& value) { SetKinesisFirehoseOutputUpdate(value); return *this;}

    /**
     * <p>Describes a Amazon Kinesis Firehose delivery stream as the destination for
     * the output.</p>
     */
    inline OutputUpdate& WithKinesisFirehoseOutputUpdate(KinesisFirehoseOutputUpdate&& value) { SetKinesisFirehoseOutputUpdate(value); return *this;}

    
    inline const DestinationSchema& GetDestinationSchemaUpdate() const{ return m_destinationSchemaUpdate; }

    
    inline void SetDestinationSchemaUpdate(const DestinationSchema& value) { m_destinationSchemaUpdateHasBeenSet = true; m_destinationSchemaUpdate = value; }

    
    inline void SetDestinationSchemaUpdate(DestinationSchema&& value) { m_destinationSchemaUpdateHasBeenSet = true; m_destinationSchemaUpdate = value; }

    
    inline OutputUpdate& WithDestinationSchemaUpdate(const DestinationSchema& value) { SetDestinationSchemaUpdate(value); return *this;}

    
    inline OutputUpdate& WithDestinationSchemaUpdate(DestinationSchema&& value) { SetDestinationSchemaUpdate(value); return *this;}

  private:
    Aws::String m_outputId;
    bool m_outputIdHasBeenSet;
    Aws::String m_nameUpdate;
    bool m_nameUpdateHasBeenSet;
    KinesisStreamsOutputUpdate m_kinesisStreamsOutputUpdate;
    bool m_kinesisStreamsOutputUpdateHasBeenSet;
    KinesisFirehoseOutputUpdate m_kinesisFirehoseOutputUpdate;
    bool m_kinesisFirehoseOutputUpdateHasBeenSet;
    DestinationSchema m_destinationSchemaUpdate;
    bool m_destinationSchemaUpdateHasBeenSet;
  };

} // namespace Model
} // namespace KinesisAnalytics
} // namespace Aws
