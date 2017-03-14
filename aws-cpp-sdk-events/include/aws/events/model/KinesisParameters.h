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
#include <aws/events/CloudWatchEvents_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace CloudWatchEvents
{
namespace Model
{

  /**
   * <zonbook> <simpara>This object enables you to specify a JSON path to extract
   * from the event and use as the partition key for the Amazon Kinesis stream, so
   * that you can control the shard to which the event goes. If you do not include
   * this parameter, the default is to use the <code>eventId</code> as the partition
   * key.</simpara> </zonbook> <xhtml> <p>This object enables you to specify a JSON
   * path to extract from the event and use as the partition key for the Amazon
   * Kinesis stream, so that you can control the shard to which the event goes. If
   * you do not include this parameter, the default is to use the
   * <code>eventId</code> as the partition key.</p> </xhtml>
   */
  class AWS_CLOUDWATCHEVENTS_API KinesisParameters
  {
  public:
    KinesisParameters();
    KinesisParameters(const Aws::Utils::Json::JsonValue& jsonValue);
    KinesisParameters& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <zonbook> <simpara>The JSON path to be extracted from the event and used as the
     * partition key. For more information, see <ulink type="documentation"
     * url="streams/latest/dev/key-concepts.html#partition-key">Amazon Kinesis Streams
     * Key Concepts</ulink> in the <emphasis>Amazon Kinesis Streams Developer
     * Guide</emphasis>.</simpara> </zonbook> <xhtml> <p>The JSON path to be extracted
     * from the event and used as the partition key. For more information, see <a
     * href="http://docs.aws.amazon.com/streams/latest/dev/key-concepts.html#partition-key">Amazon
     * Kinesis Streams Key Concepts</a> in the <i>Amazon Kinesis Streams Developer
     * Guide</i>.</p> </xhtml>
     */
    inline const Aws::String& GetPartitionKeyPath() const{ return m_partitionKeyPath; }

    /**
     * <zonbook> <simpara>The JSON path to be extracted from the event and used as the
     * partition key. For more information, see <ulink type="documentation"
     * url="streams/latest/dev/key-concepts.html#partition-key">Amazon Kinesis Streams
     * Key Concepts</ulink> in the <emphasis>Amazon Kinesis Streams Developer
     * Guide</emphasis>.</simpara> </zonbook> <xhtml> <p>The JSON path to be extracted
     * from the event and used as the partition key. For more information, see <a
     * href="http://docs.aws.amazon.com/streams/latest/dev/key-concepts.html#partition-key">Amazon
     * Kinesis Streams Key Concepts</a> in the <i>Amazon Kinesis Streams Developer
     * Guide</i>.</p> </xhtml>
     */
    inline void SetPartitionKeyPath(const Aws::String& value) { m_partitionKeyPathHasBeenSet = true; m_partitionKeyPath = value; }

    /**
     * <zonbook> <simpara>The JSON path to be extracted from the event and used as the
     * partition key. For more information, see <ulink type="documentation"
     * url="streams/latest/dev/key-concepts.html#partition-key">Amazon Kinesis Streams
     * Key Concepts</ulink> in the <emphasis>Amazon Kinesis Streams Developer
     * Guide</emphasis>.</simpara> </zonbook> <xhtml> <p>The JSON path to be extracted
     * from the event and used as the partition key. For more information, see <a
     * href="http://docs.aws.amazon.com/streams/latest/dev/key-concepts.html#partition-key">Amazon
     * Kinesis Streams Key Concepts</a> in the <i>Amazon Kinesis Streams Developer
     * Guide</i>.</p> </xhtml>
     */
    inline void SetPartitionKeyPath(Aws::String&& value) { m_partitionKeyPathHasBeenSet = true; m_partitionKeyPath = value; }

    /**
     * <zonbook> <simpara>The JSON path to be extracted from the event and used as the
     * partition key. For more information, see <ulink type="documentation"
     * url="streams/latest/dev/key-concepts.html#partition-key">Amazon Kinesis Streams
     * Key Concepts</ulink> in the <emphasis>Amazon Kinesis Streams Developer
     * Guide</emphasis>.</simpara> </zonbook> <xhtml> <p>The JSON path to be extracted
     * from the event and used as the partition key. For more information, see <a
     * href="http://docs.aws.amazon.com/streams/latest/dev/key-concepts.html#partition-key">Amazon
     * Kinesis Streams Key Concepts</a> in the <i>Amazon Kinesis Streams Developer
     * Guide</i>.</p> </xhtml>
     */
    inline void SetPartitionKeyPath(const char* value) { m_partitionKeyPathHasBeenSet = true; m_partitionKeyPath.assign(value); }

    /**
     * <zonbook> <simpara>The JSON path to be extracted from the event and used as the
     * partition key. For more information, see <ulink type="documentation"
     * url="streams/latest/dev/key-concepts.html#partition-key">Amazon Kinesis Streams
     * Key Concepts</ulink> in the <emphasis>Amazon Kinesis Streams Developer
     * Guide</emphasis>.</simpara> </zonbook> <xhtml> <p>The JSON path to be extracted
     * from the event and used as the partition key. For more information, see <a
     * href="http://docs.aws.amazon.com/streams/latest/dev/key-concepts.html#partition-key">Amazon
     * Kinesis Streams Key Concepts</a> in the <i>Amazon Kinesis Streams Developer
     * Guide</i>.</p> </xhtml>
     */
    inline KinesisParameters& WithPartitionKeyPath(const Aws::String& value) { SetPartitionKeyPath(value); return *this;}

    /**
     * <zonbook> <simpara>The JSON path to be extracted from the event and used as the
     * partition key. For more information, see <ulink type="documentation"
     * url="streams/latest/dev/key-concepts.html#partition-key">Amazon Kinesis Streams
     * Key Concepts</ulink> in the <emphasis>Amazon Kinesis Streams Developer
     * Guide</emphasis>.</simpara> </zonbook> <xhtml> <p>The JSON path to be extracted
     * from the event and used as the partition key. For more information, see <a
     * href="http://docs.aws.amazon.com/streams/latest/dev/key-concepts.html#partition-key">Amazon
     * Kinesis Streams Key Concepts</a> in the <i>Amazon Kinesis Streams Developer
     * Guide</i>.</p> </xhtml>
     */
    inline KinesisParameters& WithPartitionKeyPath(Aws::String&& value) { SetPartitionKeyPath(value); return *this;}

    /**
     * <zonbook> <simpara>The JSON path to be extracted from the event and used as the
     * partition key. For more information, see <ulink type="documentation"
     * url="streams/latest/dev/key-concepts.html#partition-key">Amazon Kinesis Streams
     * Key Concepts</ulink> in the <emphasis>Amazon Kinesis Streams Developer
     * Guide</emphasis>.</simpara> </zonbook> <xhtml> <p>The JSON path to be extracted
     * from the event and used as the partition key. For more information, see <a
     * href="http://docs.aws.amazon.com/streams/latest/dev/key-concepts.html#partition-key">Amazon
     * Kinesis Streams Key Concepts</a> in the <i>Amazon Kinesis Streams Developer
     * Guide</i>.</p> </xhtml>
     */
    inline KinesisParameters& WithPartitionKeyPath(const char* value) { SetPartitionKeyPath(value); return *this;}

  private:
    Aws::String m_partitionKeyPath;
    bool m_partitionKeyPathHasBeenSet;
  };

} // namespace Model
} // namespace CloudWatchEvents
} // namespace Aws
