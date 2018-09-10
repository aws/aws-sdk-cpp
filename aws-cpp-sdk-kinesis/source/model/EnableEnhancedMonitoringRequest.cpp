﻿/*
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

#include <aws/kinesis/model/EnableEnhancedMonitoringRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Kinesis::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

EnableEnhancedMonitoringRequest::EnableEnhancedMonitoringRequest() : 
    m_streamNameHasBeenSet(false),
    m_shardLevelMetricsHasBeenSet(false)
{
}

Aws::String EnableEnhancedMonitoringRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_streamNameHasBeenSet)
  {
   payload.WithString("StreamName", m_streamName);

  }

  if(m_shardLevelMetricsHasBeenSet)
  {
   Array<JsonValue> shardLevelMetricsJsonList(m_shardLevelMetrics.size());
   for(unsigned shardLevelMetricsIndex = 0; shardLevelMetricsIndex < shardLevelMetricsJsonList.GetLength(); ++shardLevelMetricsIndex)
   {
     shardLevelMetricsJsonList[shardLevelMetricsIndex].AsString(MetricsNameMapper::GetNameForMetricsName(m_shardLevelMetrics[shardLevelMetricsIndex]));
   }
   payload.WithArray("ShardLevelMetrics", std::move(shardLevelMetricsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection EnableEnhancedMonitoringRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Kinesis_20131202.EnableEnhancedMonitoring"));
  return headers;

}




