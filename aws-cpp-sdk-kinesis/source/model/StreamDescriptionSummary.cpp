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

#include <aws/kinesis/model/StreamDescriptionSummary.h>
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

StreamDescriptionSummary::StreamDescriptionSummary() : 
    m_streamNameHasBeenSet(false),
    m_streamARNHasBeenSet(false),
    m_streamStatus(StreamStatus::NOT_SET),
    m_streamStatusHasBeenSet(false),
    m_retentionPeriodHours(0),
    m_retentionPeriodHoursHasBeenSet(false),
    m_streamCreationTimestampHasBeenSet(false),
    m_enhancedMonitoringHasBeenSet(false),
    m_encryptionType(EncryptionType::NOT_SET),
    m_encryptionTypeHasBeenSet(false),
    m_keyIdHasBeenSet(false),
    m_openShardCount(0),
    m_openShardCountHasBeenSet(false)
{
}

StreamDescriptionSummary::StreamDescriptionSummary(const JsonValue& jsonValue) : 
    m_streamNameHasBeenSet(false),
    m_streamARNHasBeenSet(false),
    m_streamStatus(StreamStatus::NOT_SET),
    m_streamStatusHasBeenSet(false),
    m_retentionPeriodHours(0),
    m_retentionPeriodHoursHasBeenSet(false),
    m_streamCreationTimestampHasBeenSet(false),
    m_enhancedMonitoringHasBeenSet(false),
    m_encryptionType(EncryptionType::NOT_SET),
    m_encryptionTypeHasBeenSet(false),
    m_keyIdHasBeenSet(false),
    m_openShardCount(0),
    m_openShardCountHasBeenSet(false)
{
  *this = jsonValue;
}

StreamDescriptionSummary& StreamDescriptionSummary::operator =(const JsonValue& jsonValue)
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

  if(jsonValue.ValueExists("EncryptionType"))
  {
    m_encryptionType = EncryptionTypeMapper::GetEncryptionTypeForName(jsonValue.GetString("EncryptionType"));

    m_encryptionTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KeyId"))
  {
    m_keyId = jsonValue.GetString("KeyId");

    m_keyIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OpenShardCount"))
  {
    m_openShardCount = jsonValue.GetInteger("OpenShardCount");

    m_openShardCountHasBeenSet = true;
  }

  return *this;
}

JsonValue StreamDescriptionSummary::Jsonize() const
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

  if(m_encryptionTypeHasBeenSet)
  {
   payload.WithString("EncryptionType", EncryptionTypeMapper::GetNameForEncryptionType(m_encryptionType));
  }

  if(m_keyIdHasBeenSet)
  {
   payload.WithString("KeyId", m_keyId);

  }

  if(m_openShardCountHasBeenSet)
  {
   payload.WithInteger("OpenShardCount", m_openShardCount);

  }

  return payload;
}

} // namespace Model
} // namespace Kinesis
} // namespace Aws
