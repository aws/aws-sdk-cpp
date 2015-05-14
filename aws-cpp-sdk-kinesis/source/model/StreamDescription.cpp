/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

using namespace Aws::Kinesis::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StreamDescription::StreamDescription() : 
    m_hasMoreShards(false)
{
}

StreamDescription::StreamDescription(const JsonValue& jsonValue) : 
    m_hasMoreShards(false)
{
  *this = jsonValue;
}

StreamDescription& StreamDescription::operator =(const JsonValue& jsonValue)
{
  m_streamName = jsonValue.GetString("StreamName");

  m_streamARN = jsonValue.GetString("StreamARN");

  m_streamStatus = StreamStatusMapper::GetStreamStatusForName(jsonValue.GetString("StreamStatus"));

  Array<JsonValue> shardsJsonList = jsonValue.GetArray("Shards");
  for(unsigned shardsIndex = 0; shardsIndex < shardsJsonList.GetLength(); ++shardsIndex)
  {
    m_shards.push_back(shardsJsonList[shardsIndex].AsObject());
  }
  m_hasMoreShards = jsonValue.GetBool("HasMoreShards");

  return *this;
}

JsonValue StreamDescription::Jsonize() const
{
  JsonValue payload;

  payload.WithString("StreamName", m_streamName);

  payload.WithString("StreamARN", m_streamARN);

  payload.WithString("StreamStatus", StreamStatusMapper::GetNameForStreamStatus(m_streamStatus));
  Array<JsonValue> shardsJsonList(m_shards.size());
  for(unsigned shardsIndex = 0; shardsIndex < shardsJsonList.GetLength(); ++shardsIndex)
  {
    shardsJsonList[shardsIndex].AsObject(m_shards[shardsIndex].Jsonize());
  }
  payload.WithArray("Shards", std::move(shardsJsonList));

  payload.WithBool("HasMoreShards", m_hasMoreShards);

  return std::move(payload);
}