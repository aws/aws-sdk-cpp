/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker-geospatial/model/TemporalStatisticsConfigInput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMakerGeospatial
{
namespace Model
{

TemporalStatisticsConfigInput::TemporalStatisticsConfigInput() : 
    m_groupBy(GroupBy::NOT_SET),
    m_groupByHasBeenSet(false),
    m_statisticsHasBeenSet(false),
    m_targetBandsHasBeenSet(false)
{
}

TemporalStatisticsConfigInput::TemporalStatisticsConfigInput(JsonView jsonValue) : 
    m_groupBy(GroupBy::NOT_SET),
    m_groupByHasBeenSet(false),
    m_statisticsHasBeenSet(false),
    m_targetBandsHasBeenSet(false)
{
  *this = jsonValue;
}

TemporalStatisticsConfigInput& TemporalStatisticsConfigInput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("GroupBy"))
  {
    m_groupBy = GroupByMapper::GetGroupByForName(jsonValue.GetString("GroupBy"));

    m_groupByHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Statistics"))
  {
    Aws::Utils::Array<JsonView> statisticsJsonList = jsonValue.GetArray("Statistics");
    for(unsigned statisticsIndex = 0; statisticsIndex < statisticsJsonList.GetLength(); ++statisticsIndex)
    {
      m_statistics.push_back(TemporalStatisticsMapper::GetTemporalStatisticsForName(statisticsJsonList[statisticsIndex].AsString()));
    }
    m_statisticsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TargetBands"))
  {
    Aws::Utils::Array<JsonView> targetBandsJsonList = jsonValue.GetArray("TargetBands");
    for(unsigned targetBandsIndex = 0; targetBandsIndex < targetBandsJsonList.GetLength(); ++targetBandsIndex)
    {
      m_targetBands.push_back(targetBandsJsonList[targetBandsIndex].AsString());
    }
    m_targetBandsHasBeenSet = true;
  }

  return *this;
}

JsonValue TemporalStatisticsConfigInput::Jsonize() const
{
  JsonValue payload;

  if(m_groupByHasBeenSet)
  {
   payload.WithString("GroupBy", GroupByMapper::GetNameForGroupBy(m_groupBy));
  }

  if(m_statisticsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> statisticsJsonList(m_statistics.size());
   for(unsigned statisticsIndex = 0; statisticsIndex < statisticsJsonList.GetLength(); ++statisticsIndex)
   {
     statisticsJsonList[statisticsIndex].AsString(TemporalStatisticsMapper::GetNameForTemporalStatistics(m_statistics[statisticsIndex]));
   }
   payload.WithArray("Statistics", std::move(statisticsJsonList));

  }

  if(m_targetBandsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> targetBandsJsonList(m_targetBands.size());
   for(unsigned targetBandsIndex = 0; targetBandsIndex < targetBandsJsonList.GetLength(); ++targetBandsIndex)
   {
     targetBandsJsonList[targetBandsIndex].AsString(m_targetBands[targetBandsIndex]);
   }
   payload.WithArray("TargetBands", std::move(targetBandsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws
