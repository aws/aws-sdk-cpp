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
#include <aws/kinesis/model/DisableEnhancedMonitoringResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Kinesis::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DisableEnhancedMonitoringResult::DisableEnhancedMonitoringResult()
{
}

DisableEnhancedMonitoringResult::DisableEnhancedMonitoringResult(const AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DisableEnhancedMonitoringResult& DisableEnhancedMonitoringResult::operator =(const AmazonWebServiceResult<JsonValue>& result)
{
  const JsonValue& jsonValue = result.GetPayload();
  if(jsonValue.ValueExists("StreamName"))
  {
    m_streamName = jsonValue.GetString("StreamName");

  }

  if(jsonValue.ValueExists("CurrentShardLevelMetrics"))
  {
    Array<JsonValue> currentShardLevelMetricsJsonList = jsonValue.GetArray("CurrentShardLevelMetrics");
    for(unsigned currentShardLevelMetricsIndex = 0; currentShardLevelMetricsIndex < currentShardLevelMetricsJsonList.GetLength(); ++currentShardLevelMetricsIndex)
    {
      m_currentShardLevelMetrics.push_back(MetricsNameMapper::GetMetricsNameForName(currentShardLevelMetricsJsonList[currentShardLevelMetricsIndex].AsString()));
    }
  }

  if(jsonValue.ValueExists("DesiredShardLevelMetrics"))
  {
    Array<JsonValue> desiredShardLevelMetricsJsonList = jsonValue.GetArray("DesiredShardLevelMetrics");
    for(unsigned desiredShardLevelMetricsIndex = 0; desiredShardLevelMetricsIndex < desiredShardLevelMetricsJsonList.GetLength(); ++desiredShardLevelMetricsIndex)
    {
      m_desiredShardLevelMetrics.push_back(MetricsNameMapper::GetMetricsNameForName(desiredShardLevelMetricsJsonList[desiredShardLevelMetricsIndex].AsString()));
    }
  }



  return *this;
}
