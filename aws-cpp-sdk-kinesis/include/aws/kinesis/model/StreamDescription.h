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
#include <aws/kinesis/Kinesis_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kinesis/model/StreamStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/kinesis/model/Shard.h>
#include <aws/kinesis/model/EnhancedMetrics.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Kinesis
{
namespace Model
{

  /**
   * <p>Represents the output for <a>DescribeStream</a>.</p>
   */
  class AWS_KINESIS_API StreamDescription
  {
  public:
    StreamDescription();
    StreamDescription(const Aws::Utils::Json::JsonValue& jsonValue);
    StreamDescription& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The name of the stream being described.</p>
     */
    inline const Aws::String& GetStreamName() const{ return m_streamName; }

    /**
     * <p>The name of the stream being described.</p>
     */
    inline void SetStreamName(const Aws::String& value) { m_streamNameHasBeenSet = true; m_streamName = value; }

    /**
     * <p>The name of the stream being described.</p>
     */
    inline void SetStreamName(Aws::String&& value) { m_streamNameHasBeenSet = true; m_streamName = value; }

    /**
     * <p>The name of the stream being described.</p>
     */
    inline void SetStreamName(const char* value) { m_streamNameHasBeenSet = true; m_streamName.assign(value); }

    /**
     * <p>The name of the stream being described.</p>
     */
    inline StreamDescription& WithStreamName(const Aws::String& value) { SetStreamName(value); return *this;}

    /**
     * <p>The name of the stream being described.</p>
     */
    inline StreamDescription& WithStreamName(Aws::String&& value) { SetStreamName(value); return *this;}

    /**
     * <p>The name of the stream being described.</p>
     */
    inline StreamDescription& WithStreamName(const char* value) { SetStreamName(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the stream being described.</p>
     */
    inline const Aws::String& GetStreamARN() const{ return m_streamARN; }

    /**
     * <p>The Amazon Resource Name (ARN) for the stream being described.</p>
     */
    inline void SetStreamARN(const Aws::String& value) { m_streamARNHasBeenSet = true; m_streamARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the stream being described.</p>
     */
    inline void SetStreamARN(Aws::String&& value) { m_streamARNHasBeenSet = true; m_streamARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the stream being described.</p>
     */
    inline void SetStreamARN(const char* value) { m_streamARNHasBeenSet = true; m_streamARN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the stream being described.</p>
     */
    inline StreamDescription& WithStreamARN(const Aws::String& value) { SetStreamARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the stream being described.</p>
     */
    inline StreamDescription& WithStreamARN(Aws::String&& value) { SetStreamARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the stream being described.</p>
     */
    inline StreamDescription& WithStreamARN(const char* value) { SetStreamARN(value); return *this;}

    /**
     * <p>The current status of the stream being described. The stream status is one of
     * the following states:</p> <ul> <li> <p> <code>CREATING</code> - The stream is
     * being created. Amazon Kinesis immediately returns and sets
     * <code>StreamStatus</code> to <code>CREATING</code>.</p> </li> <li> <p>
     * <code>DELETING</code> - The stream is being deleted. The specified stream is in
     * the <code>DELETING</code> state until Amazon Kinesis completes the deletion.</p>
     * </li> <li> <p> <code>ACTIVE</code> - The stream exists and is ready for read and
     * write operations or deletion. You should perform read and write operations only
     * on an <code>ACTIVE</code> stream.</p> </li> <li> <p> <code>UPDATING</code> -
     * Shards in the stream are being merged or split. Read and write operations
     * continue to work while the stream is in the <code>UPDATING</code> state.</p>
     * </li> </ul>
     */
    inline const StreamStatus& GetStreamStatus() const{ return m_streamStatus; }

    /**
     * <p>The current status of the stream being described. The stream status is one of
     * the following states:</p> <ul> <li> <p> <code>CREATING</code> - The stream is
     * being created. Amazon Kinesis immediately returns and sets
     * <code>StreamStatus</code> to <code>CREATING</code>.</p> </li> <li> <p>
     * <code>DELETING</code> - The stream is being deleted. The specified stream is in
     * the <code>DELETING</code> state until Amazon Kinesis completes the deletion.</p>
     * </li> <li> <p> <code>ACTIVE</code> - The stream exists and is ready for read and
     * write operations or deletion. You should perform read and write operations only
     * on an <code>ACTIVE</code> stream.</p> </li> <li> <p> <code>UPDATING</code> -
     * Shards in the stream are being merged or split. Read and write operations
     * continue to work while the stream is in the <code>UPDATING</code> state.</p>
     * </li> </ul>
     */
    inline void SetStreamStatus(const StreamStatus& value) { m_streamStatusHasBeenSet = true; m_streamStatus = value; }

    /**
     * <p>The current status of the stream being described. The stream status is one of
     * the following states:</p> <ul> <li> <p> <code>CREATING</code> - The stream is
     * being created. Amazon Kinesis immediately returns and sets
     * <code>StreamStatus</code> to <code>CREATING</code>.</p> </li> <li> <p>
     * <code>DELETING</code> - The stream is being deleted. The specified stream is in
     * the <code>DELETING</code> state until Amazon Kinesis completes the deletion.</p>
     * </li> <li> <p> <code>ACTIVE</code> - The stream exists and is ready for read and
     * write operations or deletion. You should perform read and write operations only
     * on an <code>ACTIVE</code> stream.</p> </li> <li> <p> <code>UPDATING</code> -
     * Shards in the stream are being merged or split. Read and write operations
     * continue to work while the stream is in the <code>UPDATING</code> state.</p>
     * </li> </ul>
     */
    inline void SetStreamStatus(StreamStatus&& value) { m_streamStatusHasBeenSet = true; m_streamStatus = value; }

    /**
     * <p>The current status of the stream being described. The stream status is one of
     * the following states:</p> <ul> <li> <p> <code>CREATING</code> - The stream is
     * being created. Amazon Kinesis immediately returns and sets
     * <code>StreamStatus</code> to <code>CREATING</code>.</p> </li> <li> <p>
     * <code>DELETING</code> - The stream is being deleted. The specified stream is in
     * the <code>DELETING</code> state until Amazon Kinesis completes the deletion.</p>
     * </li> <li> <p> <code>ACTIVE</code> - The stream exists and is ready for read and
     * write operations or deletion. You should perform read and write operations only
     * on an <code>ACTIVE</code> stream.</p> </li> <li> <p> <code>UPDATING</code> -
     * Shards in the stream are being merged or split. Read and write operations
     * continue to work while the stream is in the <code>UPDATING</code> state.</p>
     * </li> </ul>
     */
    inline StreamDescription& WithStreamStatus(const StreamStatus& value) { SetStreamStatus(value); return *this;}

    /**
     * <p>The current status of the stream being described. The stream status is one of
     * the following states:</p> <ul> <li> <p> <code>CREATING</code> - The stream is
     * being created. Amazon Kinesis immediately returns and sets
     * <code>StreamStatus</code> to <code>CREATING</code>.</p> </li> <li> <p>
     * <code>DELETING</code> - The stream is being deleted. The specified stream is in
     * the <code>DELETING</code> state until Amazon Kinesis completes the deletion.</p>
     * </li> <li> <p> <code>ACTIVE</code> - The stream exists and is ready for read and
     * write operations or deletion. You should perform read and write operations only
     * on an <code>ACTIVE</code> stream.</p> </li> <li> <p> <code>UPDATING</code> -
     * Shards in the stream are being merged or split. Read and write operations
     * continue to work while the stream is in the <code>UPDATING</code> state.</p>
     * </li> </ul>
     */
    inline StreamDescription& WithStreamStatus(StreamStatus&& value) { SetStreamStatus(value); return *this;}

    /**
     * <p>The shards that comprise the stream.</p>
     */
    inline const Aws::Vector<Shard>& GetShards() const{ return m_shards; }

    /**
     * <p>The shards that comprise the stream.</p>
     */
    inline void SetShards(const Aws::Vector<Shard>& value) { m_shardsHasBeenSet = true; m_shards = value; }

    /**
     * <p>The shards that comprise the stream.</p>
     */
    inline void SetShards(Aws::Vector<Shard>&& value) { m_shardsHasBeenSet = true; m_shards = value; }

    /**
     * <p>The shards that comprise the stream.</p>
     */
    inline StreamDescription& WithShards(const Aws::Vector<Shard>& value) { SetShards(value); return *this;}

    /**
     * <p>The shards that comprise the stream.</p>
     */
    inline StreamDescription& WithShards(Aws::Vector<Shard>&& value) { SetShards(value); return *this;}

    /**
     * <p>The shards that comprise the stream.</p>
     */
    inline StreamDescription& AddShards(const Shard& value) { m_shardsHasBeenSet = true; m_shards.push_back(value); return *this; }

    /**
     * <p>The shards that comprise the stream.</p>
     */
    inline StreamDescription& AddShards(Shard&& value) { m_shardsHasBeenSet = true; m_shards.push_back(value); return *this; }

    /**
     * <p>If set to <code>true</code>, more shards in the stream are available to
     * describe.</p>
     */
    inline bool GetHasMoreShards() const{ return m_hasMoreShards; }

    /**
     * <p>If set to <code>true</code>, more shards in the stream are available to
     * describe.</p>
     */
    inline void SetHasMoreShards(bool value) { m_hasMoreShardsHasBeenSet = true; m_hasMoreShards = value; }

    /**
     * <p>If set to <code>true</code>, more shards in the stream are available to
     * describe.</p>
     */
    inline StreamDescription& WithHasMoreShards(bool value) { SetHasMoreShards(value); return *this;}

    /**
     * <p>The current retention period, in hours.</p>
     */
    inline int GetRetentionPeriodHours() const{ return m_retentionPeriodHours; }

    /**
     * <p>The current retention period, in hours.</p>
     */
    inline void SetRetentionPeriodHours(int value) { m_retentionPeriodHoursHasBeenSet = true; m_retentionPeriodHours = value; }

    /**
     * <p>The current retention period, in hours.</p>
     */
    inline StreamDescription& WithRetentionPeriodHours(int value) { SetRetentionPeriodHours(value); return *this;}

    /**
     * <p>The approximate time that the stream was created.</p>
     */
    inline const Aws::Utils::DateTime& GetStreamCreationTimestamp() const{ return m_streamCreationTimestamp; }

    /**
     * <p>The approximate time that the stream was created.</p>
     */
    inline void SetStreamCreationTimestamp(const Aws::Utils::DateTime& value) { m_streamCreationTimestampHasBeenSet = true; m_streamCreationTimestamp = value; }

    /**
     * <p>The approximate time that the stream was created.</p>
     */
    inline void SetStreamCreationTimestamp(Aws::Utils::DateTime&& value) { m_streamCreationTimestampHasBeenSet = true; m_streamCreationTimestamp = value; }

    /**
     * <p>The approximate time that the stream was created.</p>
     */
    inline StreamDescription& WithStreamCreationTimestamp(const Aws::Utils::DateTime& value) { SetStreamCreationTimestamp(value); return *this;}

    /**
     * <p>The approximate time that the stream was created.</p>
     */
    inline StreamDescription& WithStreamCreationTimestamp(Aws::Utils::DateTime&& value) { SetStreamCreationTimestamp(value); return *this;}

    /**
     * <p>Represents the current enhanced monitoring settings of the stream.</p>
     */
    inline const Aws::Vector<EnhancedMetrics>& GetEnhancedMonitoring() const{ return m_enhancedMonitoring; }

    /**
     * <p>Represents the current enhanced monitoring settings of the stream.</p>
     */
    inline void SetEnhancedMonitoring(const Aws::Vector<EnhancedMetrics>& value) { m_enhancedMonitoringHasBeenSet = true; m_enhancedMonitoring = value; }

    /**
     * <p>Represents the current enhanced monitoring settings of the stream.</p>
     */
    inline void SetEnhancedMonitoring(Aws::Vector<EnhancedMetrics>&& value) { m_enhancedMonitoringHasBeenSet = true; m_enhancedMonitoring = value; }

    /**
     * <p>Represents the current enhanced monitoring settings of the stream.</p>
     */
    inline StreamDescription& WithEnhancedMonitoring(const Aws::Vector<EnhancedMetrics>& value) { SetEnhancedMonitoring(value); return *this;}

    /**
     * <p>Represents the current enhanced monitoring settings of the stream.</p>
     */
    inline StreamDescription& WithEnhancedMonitoring(Aws::Vector<EnhancedMetrics>&& value) { SetEnhancedMonitoring(value); return *this;}

    /**
     * <p>Represents the current enhanced monitoring settings of the stream.</p>
     */
    inline StreamDescription& AddEnhancedMonitoring(const EnhancedMetrics& value) { m_enhancedMonitoringHasBeenSet = true; m_enhancedMonitoring.push_back(value); return *this; }

    /**
     * <p>Represents the current enhanced monitoring settings of the stream.</p>
     */
    inline StreamDescription& AddEnhancedMonitoring(EnhancedMetrics&& value) { m_enhancedMonitoringHasBeenSet = true; m_enhancedMonitoring.push_back(value); return *this; }

  private:
    Aws::String m_streamName;
    bool m_streamNameHasBeenSet;
    Aws::String m_streamARN;
    bool m_streamARNHasBeenSet;
    StreamStatus m_streamStatus;
    bool m_streamStatusHasBeenSet;
    Aws::Vector<Shard> m_shards;
    bool m_shardsHasBeenSet;
    bool m_hasMoreShards;
    bool m_hasMoreShardsHasBeenSet;
    int m_retentionPeriodHours;
    bool m_retentionPeriodHoursHasBeenSet;
    Aws::Utils::DateTime m_streamCreationTimestamp;
    bool m_streamCreationTimestampHasBeenSet;
    Aws::Vector<EnhancedMetrics> m_enhancedMonitoring;
    bool m_enhancedMonitoringHasBeenSet;
  };

} // namespace Model
} // namespace Kinesis
} // namespace Aws
