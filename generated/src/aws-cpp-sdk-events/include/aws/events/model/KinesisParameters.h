﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/events/CloudWatchEvents_EXPORTS.h>
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
namespace CloudWatchEvents
{
namespace Model
{

  /**
   * <p>This object enables you to specify a JSON path to extract from the event and
   * use as the partition key for the Amazon Kinesis data stream, so that you can
   * control the shard to which the event goes. If you do not include this parameter,
   * the default is to use the <code>eventId</code> as the partition
   * key.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/KinesisParameters">AWS
   * API Reference</a></p>
   */
  class KinesisParameters
  {
  public:
    AWS_CLOUDWATCHEVENTS_API KinesisParameters() = default;
    AWS_CLOUDWATCHEVENTS_API KinesisParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHEVENTS_API KinesisParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHEVENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The JSON path to be extracted from the event and used as the partition key.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/streams/latest/dev/key-concepts.html#partition-key">Amazon
     * Kinesis Streams Key Concepts</a> in the <i>Amazon Kinesis Streams Developer
     * Guide</i>.</p>
     */
    inline const Aws::String& GetPartitionKeyPath() const { return m_partitionKeyPath; }
    inline bool PartitionKeyPathHasBeenSet() const { return m_partitionKeyPathHasBeenSet; }
    template<typename PartitionKeyPathT = Aws::String>
    void SetPartitionKeyPath(PartitionKeyPathT&& value) { m_partitionKeyPathHasBeenSet = true; m_partitionKeyPath = std::forward<PartitionKeyPathT>(value); }
    template<typename PartitionKeyPathT = Aws::String>
    KinesisParameters& WithPartitionKeyPath(PartitionKeyPathT&& value) { SetPartitionKeyPath(std::forward<PartitionKeyPathT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_partitionKeyPath;
    bool m_partitionKeyPathHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchEvents
} // namespace Aws
