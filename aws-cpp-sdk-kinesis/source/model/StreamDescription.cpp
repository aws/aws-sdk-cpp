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
#include <aws/kinesis/model/StreamDescription.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Kinesis
{
namespace Model
{

StreamDescription::StreamDescription() : 
    m_streamNameHasBeenSet(false),
    m_streamARNHasBeenSet(false),
    m_streamStatus(StreamStatus::NOT_SET),
    m_streamStatusHasBeenSet(false),
    m_shardsHasBeenSet(false),
    m_hasMoreShards(false),
    m_hasMoreShardsHasBeenSet(false),
    m_retentionPeriodHours(0),
    m_retentionPeriodHoursHasBeenSet(false),
    m_streamCreationTimestampHasBeenSet(false),
    m_enhancedMonitoringHasBeenSet(false)
{
}

StreamDescription::StreamDescription(const JsonValue& jsonValue) : 
    m_streamNameHasBeenSet(false),
    m_streamARNHasBeenSet(false),
    m_streamStatus(StreamStatus::NOT_SET),
    m_streamStatusHasBeenSet(false),
    m_shardsHasBeenSet(false),
    m_hasMoreShards(false),
    m_hasMoreShardsHasBeenSet(false),
    m_retentionPeriodHours(0),
    m_retentionPeriodHoursHasBeenSet(false),
    m_streamCreationTimestampHasBeenSet(false),
    m_enhancedMonitoringHasBeenSet(false)
{
  *this = jsonValue;
}

StreamDescription& StreamDescription::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("StreamName"))
  {
    m_streamName = jsonValue.GetString("StreamName");

    m_streamNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StreamARN"))
  {
    m_streamARN = jsonValue.GetString("StreamARN");

    m_streamARNHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StreamStatus"))
  {
    m_streamStatus = StreamStatusMapper::GetStreamStatusForName(jsonValue.GetString("StreamStatus"));

    m_streamStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Shards"))
  {
    Array<JsonValue> shardsJsonList = jsonValue.GetArray("Shards");
    for(unsigned shardsIndex = 0; shardsIndex < shardsJsonList.GetLength(); ++shardsIndex)
    {
      m_shards.push_back(shardsJsonList[shardsIndex].AsObject());
    }
    m_shardsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HasMoreShards"))
  {
    m_hasMoreShards = jsonValue.GetBool("HasMoreShards");

    m_hasMoreShardsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RetentionPeriodHours"))
  {
    m_retentionPeriodHours = jsonValue.GetInteger("RetentionPeriodHours");

    m_retentionPeriodHoursHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StreamCreationTimestamp"))
  {
    m_streamCreationTimestamp = jsonValue.GetDouble("StreamCreationTimestamp");

    m_streamCreationTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EnhancedMonitoring"))
  {
    Array<JsonValue> enhancedMonitoringJsonList = jsonValue.GetArray("EnhancedMonitoring");
    for(unsigned enhancedMonitoringIndex = 0; enhancedMonitoringIndex < enhancedMonitoringJsonList.GetLength(); ++enhancedMonitoringIndex)
    {
      m_enhancedMonitoring.push_back(enhancedMonitoringJsonList[enhancedMonitoringIndex].AsObject());
    }
    m_enhancedMonitoringHasBeenSet = true;
  }

  return *this;
}

JsonValue StreamDescription::Jsonize() const
{
  JsonValue payload;

  if(m_streamNameHasBeenSet)
  {
   payload.WithString("StreamName", m_streamName);

  }

  if(m_streamARNHasBeenSet)
  {
   payload.WithString("StreamARN", m_streamARN);

  }

  if(m_streamStatusHasBeenSet)
  {
   payload.WithString("StreamStatus", StreamStatusMapper::GetNameForStreamStatus(m_streamStatus));
  }

  if(m_shardsHasBeenSet)
  {
   Array<JsonValue> shardsJsonList(m_shards.size());
   for(unsigned shardsIndex = 0; shardsIndex < shardsJsonList.GetLength(); ++shardsIndex)
   {
     shardsJsonList[shardsIndex].AsObject(m_shards[shardsIndex].Jsonize());
   }
   payload.WithArray("Shards", std::move(shardsJsonList));

  }

  if(m_hasMoreShardsHasBeenSet)
  {
   payload.WithBool("HasMoreShards", m_hasMoreShards);

  }

  if(m_retentionPeriodHoursHasBeenSet)
  {
   payload.WithInteger("RetentionPeriodHours", m_retentionPeriodHours);

  }

  if(m_streamCreationTimestampHasBeenSet)
  {
   payload.WithDouble("StreamCreationTimestamp", m_streamCreationTimestamp.SecondsWithMSPrecision());
  }

  if(m_enhancedMonitoringHasBeenSet)
  {
   Array<JsonValue> enhancedMonitoringJsonList(m_enhancedMonitoring.size());
   for(unsigned enhancedMonitoringIndex = 0; enhancedMonitoringIndex < enhancedMonitoringJsonList.GetLength(); ++enhancedMonitoringIndex)
   {
     enhancedMonitoringJsonList[enhancedMonitoringIndex].AsObject(m_enhancedMonitoring[enhancedMonitoringIndex].Jsonize());
   }
   payload.WithArray("EnhancedMonitoring", std::move(enhancedMonitoringJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Kinesis
} // namespace Aws