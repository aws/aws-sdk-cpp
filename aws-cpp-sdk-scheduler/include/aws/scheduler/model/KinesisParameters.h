/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/scheduler/Scheduler_EXPORTS.h>
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
namespace Scheduler
{
namespace Model
{

  /**
   * <p>The templated target type for the Amazon Kinesis <a
   * href="kinesis/latest/APIReference/API_PutRecord.html"> <code>PutRecord</code>
   * </a> API operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/scheduler-2021-06-30/KinesisParameters">AWS
   * API Reference</a></p>
   */
  class KinesisParameters
  {
  public:
    AWS_SCHEDULER_API KinesisParameters();
    AWS_SCHEDULER_API KinesisParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_SCHEDULER_API KinesisParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SCHEDULER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies the shard to which EventBridge Scheduler sends the event. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/streams/latest/dev/key-concepts.html">Amazon
     * Kinesis Data Streams terminology and concepts</a> in the <i>Amazon Kinesis
     * Streams Developer Guide</i>.</p>
     */
    inline const Aws::String& GetPartitionKey() const{ return m_partitionKey; }

    /**
     * <p>Specifies the shard to which EventBridge Scheduler sends the event. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/streams/latest/dev/key-concepts.html">Amazon
     * Kinesis Data Streams terminology and concepts</a> in the <i>Amazon Kinesis
     * Streams Developer Guide</i>.</p>
     */
    inline bool PartitionKeyHasBeenSet() const { return m_partitionKeyHasBeenSet; }

    /**
     * <p>Specifies the shard to which EventBridge Scheduler sends the event. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/streams/latest/dev/key-concepts.html">Amazon
     * Kinesis Data Streams terminology and concepts</a> in the <i>Amazon Kinesis
     * Streams Developer Guide</i>.</p>
     */
    inline void SetPartitionKey(const Aws::String& value) { m_partitionKeyHasBeenSet = true; m_partitionKey = value; }

    /**
     * <p>Specifies the shard to which EventBridge Scheduler sends the event. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/streams/latest/dev/key-concepts.html">Amazon
     * Kinesis Data Streams terminology and concepts</a> in the <i>Amazon Kinesis
     * Streams Developer Guide</i>.</p>
     */
    inline void SetPartitionKey(Aws::String&& value) { m_partitionKeyHasBeenSet = true; m_partitionKey = std::move(value); }

    /**
     * <p>Specifies the shard to which EventBridge Scheduler sends the event. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/streams/latest/dev/key-concepts.html">Amazon
     * Kinesis Data Streams terminology and concepts</a> in the <i>Amazon Kinesis
     * Streams Developer Guide</i>.</p>
     */
    inline void SetPartitionKey(const char* value) { m_partitionKeyHasBeenSet = true; m_partitionKey.assign(value); }

    /**
     * <p>Specifies the shard to which EventBridge Scheduler sends the event. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/streams/latest/dev/key-concepts.html">Amazon
     * Kinesis Data Streams terminology and concepts</a> in the <i>Amazon Kinesis
     * Streams Developer Guide</i>.</p>
     */
    inline KinesisParameters& WithPartitionKey(const Aws::String& value) { SetPartitionKey(value); return *this;}

    /**
     * <p>Specifies the shard to which EventBridge Scheduler sends the event. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/streams/latest/dev/key-concepts.html">Amazon
     * Kinesis Data Streams terminology and concepts</a> in the <i>Amazon Kinesis
     * Streams Developer Guide</i>.</p>
     */
    inline KinesisParameters& WithPartitionKey(Aws::String&& value) { SetPartitionKey(std::move(value)); return *this;}

    /**
     * <p>Specifies the shard to which EventBridge Scheduler sends the event. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/streams/latest/dev/key-concepts.html">Amazon
     * Kinesis Data Streams terminology and concepts</a> in the <i>Amazon Kinesis
     * Streams Developer Guide</i>.</p>
     */
    inline KinesisParameters& WithPartitionKey(const char* value) { SetPartitionKey(value); return *this;}

  private:

    Aws::String m_partitionKey;
    bool m_partitionKeyHasBeenSet = false;
  };

} // namespace Model
} // namespace Scheduler
} // namespace Aws
