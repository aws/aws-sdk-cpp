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
#include <aws/kinesis/model/EnhancedMetrics.h>
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

EnhancedMetrics::EnhancedMetrics() : 
    m_shardLevelMetricsHasBeenSet(false)
{
}

EnhancedMetrics::EnhancedMetrics(const JsonValue& jsonValue) : 
    m_shardLevelMetricsHasBeenSet(false)
{
  *this = jsonValue;
}

EnhancedMetrics& EnhancedMetrics::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("ShardLevelMetrics"))
  {
    Array<JsonValue> shardLevelMetricsJsonList = jsonValue.GetArray("ShardLevelMetrics");
    for(unsigned shardLevelMetricsIndex = 0; shardLevelMetricsIndex < shardLevelMetricsJsonList.GetLength(); ++shardLevelMetricsIndex)
    {
      m_shardLevelMetrics.push_back(MetricsNameMapper::GetMetricsNameForName(shardLevelMetricsJsonList[shardLevelMetricsIndex].AsString()));
    }
    m_shardLevelMetricsHasBeenSet = true;
  }

  return *this;
}

JsonValue EnhancedMetrics::Jsonize() const
{
  JsonValue payload;

  if(m_shardLevelMetricsHasBeenSet)
  {
   Array<JsonValue> shardLevelMetricsJsonList(m_shardLevelMetrics.size());
   for(unsigned shardLevelMetricsIndex = 0; shardLevelMetricsIndex < shardLevelMetricsJsonList.GetLength(); ++shardLevelMetricsIndex)
   {
     shardLevelMetricsJsonList[shardLevelMetricsIndex].AsString(MetricsNameMapper::GetNameForMetricsName(m_shardLevelMetrics[shardLevelMetricsIndex]));
   }
   payload.WithArray("ShardLevelMetrics", std::move(shardLevelMetricsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Kinesis
} // namespace Aws