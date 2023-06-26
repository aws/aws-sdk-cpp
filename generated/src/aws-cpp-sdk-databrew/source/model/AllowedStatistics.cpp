/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/databrew/model/AllowedStatistics.h>
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

AllowedStatistics::AllowedStatistics() : 
    m_statisticsHasBeenSet(false)
{
}

AllowedStatistics::AllowedStatistics(JsonView jsonValue) : 
    m_statisticsHasBeenSet(false)
{
  *this = jsonValue;
}

AllowedStatistics& AllowedStatistics::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Statistics"))
  {
    Aws::Utils::Array<JsonView> statisticsJsonList = jsonValue.GetArray("Statistics");
    for(unsigned statisticsIndex = 0; statisticsIndex < statisticsJsonList.GetLength(); ++statisticsIndex)
    {
      m_statistics.push_back(statisticsJsonList[statisticsIndex].AsString());
    }
    m_statisticsHasBeenSet = true;
  }

  return *this;
}

JsonValue AllowedStatistics::Jsonize() const
{
  JsonValue payload;

  if(m_statisticsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> statisticsJsonList(m_statistics.size());
   for(unsigned statisticsIndex = 0; statisticsIndex < statisticsJsonList.GetLength(); ++statisticsIndex)
   {
     statisticsJsonList[statisticsIndex].AsString(m_statistics[statisticsIndex]);
   }
   payload.WithArray("Statistics", std::move(statisticsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace GlueDataBrew
} // namespace Aws
