/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/databrew/model/EntityDetectorConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GlueDataBrew
{
namespace Model
{

EntityDetectorConfiguration::EntityDetectorConfiguration() : 
    m_entityTypesHasBeenSet(false),
    m_allowedStatisticsHasBeenSet(false)
{
}

EntityDetectorConfiguration::EntityDetectorConfiguration(JsonView jsonValue) : 
    m_entityTypesHasBeenSet(false),
    m_allowedStatisticsHasBeenSet(false)
{
  *this = jsonValue;
}

EntityDetectorConfiguration& EntityDetectorConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EntityTypes"))
  {
    Aws::Utils::Array<JsonView> entityTypesJsonList = jsonValue.GetArray("EntityTypes");
    for(unsigned entityTypesIndex = 0; entityTypesIndex < entityTypesJsonList.GetLength(); ++entityTypesIndex)
    {
      m_entityTypes.push_back(entityTypesJsonList[entityTypesIndex].AsString());
    }
    m_entityTypesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AllowedStatistics"))
  {
    Aws::Utils::Array<JsonView> allowedStatisticsJsonList = jsonValue.GetArray("AllowedStatistics");
    for(unsigned allowedStatisticsIndex = 0; allowedStatisticsIndex < allowedStatisticsJsonList.GetLength(); ++allowedStatisticsIndex)
    {
      m_allowedStatistics.push_back(allowedStatisticsJsonList[allowedStatisticsIndex].AsObject());
    }
    m_allowedStatisticsHasBeenSet = true;
  }

  return *this;
}

JsonValue EntityDetectorConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_entityTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> entityTypesJsonList(m_entityTypes.size());
   for(unsigned entityTypesIndex = 0; entityTypesIndex < entityTypesJsonList.GetLength(); ++entityTypesIndex)
   {
     entityTypesJsonList[entityTypesIndex].AsString(m_entityTypes[entityTypesIndex]);
   }
   payload.WithArray("EntityTypes", std::move(entityTypesJsonList));

  }

  if(m_allowedStatisticsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> allowedStatisticsJsonList(m_allowedStatistics.size());
   for(unsigned allowedStatisticsIndex = 0; allowedStatisticsIndex < allowedStatisticsJsonList.GetLength(); ++allowedStatisticsIndex)
   {
     allowedStatisticsJsonList[allowedStatisticsIndex].AsObject(m_allowedStatistics[allowedStatisticsIndex].Jsonize());
   }
   payload.WithArray("AllowedStatistics", std::move(allowedStatisticsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace GlueDataBrew
} // namespace Aws
