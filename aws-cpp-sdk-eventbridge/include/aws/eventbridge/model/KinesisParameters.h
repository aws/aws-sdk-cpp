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
#include <aws/eventbridge/EventBridge_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace EventBridge
{
namespace Model
{

  /**
   * <p>This object enables you to specify a JSON path to extract from the event and
   * use as the partition key for the Amazon Kinesis data stream so that you can
   * control the shard that the event goes to. If you don't include this parameter,
   * the default is to use the <code>eventId</code> as the partition
   * key.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridge-2015-10-07/KinesisParameters">AWS
   * API Reference</a></p>
   */
  class AWS_EVENTBRIDGE_API KinesisParameters
  {
  public:
    KinesisParameters();
    KinesisParameters(Aws::Utils::Json::JsonView jsonValue);
    KinesisParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The JSON path to be extracted from the event and used as the partition key.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/streams/latest/dev/key-concepts.html#partition-key">Amazon
     * Kinesis Streams Key Concepts</a> in the <i>Amazon Kinesis Streams Developer
     * Guide</i>.</p>
     */
    inline const Aws::String& GetPartitionKeyPath() const{ return m_partitionKeyPath; }

    /**
     * <p>The JSON path to be extracted from the event and used as the partition key.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/streams/latest/dev/key-concepts.html#partition-key">Amazon
     * Kinesis Streams Key Concepts</a> in the <i>Amazon Kinesis Streams Developer
     * Guide</i>.</p>
     */
    inline bool PartitionKeyPathHasBeenSet() const { return m_partitionKeyPathHasBeenSet; }

    /**
     * <p>The JSON path to be extracted from the event and used as the partition key.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/streams/latest/dev/key-concepts.html#partition-key">Amazon
     * Kinesis Streams Key Concepts</a> in the <i>Amazon Kinesis Streams Developer
     * Guide</i>.</p>
     */
    inline void SetPartitionKeyPath(const Aws::String& value) { m_partitionKeyPathHasBeenSet = true; m_partitionKeyPath = value; }

    /**
     * <p>The JSON path to be extracted from the event and used as the partition key.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/streams/latest/dev/key-concepts.html#partition-key">Amazon
     * Kinesis Streams Key Concepts</a> in the <i>Amazon Kinesis Streams Developer
     * Guide</i>.</p>
     */
    inline void SetPartitionKeyPath(Aws::String&& value) { m_partitionKeyPathHasBeenSet = true; m_partitionKeyPath = std::move(value); }

    /**
     * <p>The JSON path to be extracted from the event and used as the partition key.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/streams/latest/dev/key-concepts.html#partition-key">Amazon
     * Kinesis Streams Key Concepts</a> in the <i>Amazon Kinesis Streams Developer
     * Guide</i>.</p>
     */
    inline void SetPartitionKeyPath(const char* value) { m_partitionKeyPathHasBeenSet = true; m_partitionKeyPath.assign(value); }

    /**
     * <p>The JSON path to be extracted from the event and used as the partition key.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/streams/latest/dev/key-concepts.html#partition-key">Amazon
     * Kinesis Streams Key Concepts</a> in the <i>Amazon Kinesis Streams Developer
     * Guide</i>.</p>
     */
    inline KinesisParameters& WithPartitionKeyPath(const Aws::String& value) { SetPartitionKeyPath(value); return *this;}

    /**
     * <p>The JSON path to be extracted from the event and used as the partition key.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/streams/latest/dev/key-concepts.html#partition-key">Amazon
     * Kinesis Streams Key Concepts</a> in the <i>Amazon Kinesis Streams Developer
     * Guide</i>.</p>
     */
    inline KinesisParameters& WithPartitionKeyPath(Aws::String&& value) { SetPartitionKeyPath(std::move(value)); return *this;}

    /**
     * <p>The JSON path to be extracted from the event and used as the partition key.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/streams/latest/dev/key-concepts.html#partition-key">Amazon
     * Kinesis Streams Key Concepts</a> in the <i>Amazon Kinesis Streams Developer
     * Guide</i>.</p>
     */
    inline KinesisParameters& WithPartitionKeyPath(const char* value) { SetPartitionKeyPath(value); return *this;}

  private:

    Aws::String m_partitionKeyPath;
    bool m_partitionKeyPathHasBeenSet;
  };

} // namespace Model
} // namespace EventBridge
} // namespace Aws
