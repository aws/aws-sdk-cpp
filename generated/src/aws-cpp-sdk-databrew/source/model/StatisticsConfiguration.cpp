/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/databrew/model/StatisticsConfiguration.h>
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

StatisticsConfiguration::StatisticsConfiguration() : 
    m_includedStatisticsHasBeenSet(false),
    m_overridesHasBeenSet(false)
{
}

StatisticsConfiguration::StatisticsConfiguration(JsonView jsonValue) : 
    m_includedStatisticsHasBeenSet(false),
    m_overridesHasBeenSet(false)
{
  *this = jsonValue;
}

StatisticsConfiguration& StatisticsConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("IncludedStatistics"))
  {
    Aws::Utils::Array<JsonView> includedStatisticsJsonList = jsonValue.GetArray("IncludedStatistics");
    for(unsigned includedStatisticsIndex = 0; includedStatisticsIndex < includedStatisticsJsonList.GetLength(); ++includedStatisticsIndex)
    {
      m_includedStatistics.push_back(includedStatisticsJsonList[includedStatisticsIndex].AsString());
    }
    m_includedStatisticsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Overrides"))
  {
    Aws::Utils::Array<JsonView> overridesJsonList = jsonValue.GetArray("Overrides");
    for(unsigned overridesIndex = 0; overridesIndex < overridesJsonList.GetLength(); ++overridesIndex)
    {
      m_overrides.push_back(overridesJsonList[overridesIndex].AsObject());
    }
    m_overridesHasBeenSet = true;
  }

  return *this;
}

JsonValue StatisticsConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_includedStatisticsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> includedStatisticsJsonList(m_includedStatistics.size());
   for(unsigned includedStatisticsIndex = 0; includedStatisticsIndex < includedStatisticsJsonList.GetLength(); ++includedStatisticsIndex)
   {
     includedStatisticsJsonList[includedStatisticsIndex].AsString(m_includedStatistics[includedStatisticsIndex]);
   }
   payload.WithArray("IncludedStatistics", std::move(includedStatisticsJsonList));

  }

  if(m_overridesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> overridesJsonList(m_overrides.size());
   for(unsigned overridesIndex = 0; overridesIndex < overridesJsonList.GetLength(); ++overridesIndex)
   {
     overridesJsonList[overridesIndex].AsObject(m_overrides[overridesIndex].Jsonize());
   }
   payload.WithArray("Overrides", std::move(overridesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace GlueDataBrew
} // namespace Aws
