/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/ColumnStatistics.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

ColumnStatistics::ColumnStatistics() : 
    m_columnNameHasBeenSet(false),
    m_columnTypeHasBeenSet(false),
    m_analyzedTimeHasBeenSet(false),
    m_statisticsDataHasBeenSet(false)
{
}

ColumnStatistics::ColumnStatistics(JsonView jsonValue) : 
    m_columnNameHasBeenSet(false),
    m_columnTypeHasBeenSet(false),
    m_analyzedTimeHasBeenSet(false),
    m_statisticsDataHasBeenSet(false)
{
  *this = jsonValue;
}

ColumnStatistics& ColumnStatistics::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ColumnName"))
  {
    m_columnName = jsonValue.GetString("ColumnName");

    m_columnNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ColumnType"))
  {
    m_columnType = jsonValue.GetString("ColumnType");

    m_columnTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AnalyzedTime"))
  {
    m_analyzedTime = jsonValue.GetDouble("AnalyzedTime");

    m_analyzedTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StatisticsData"))
  {
    m_statisticsData = jsonValue.GetObject("StatisticsData");

    m_statisticsDataHasBeenSet = true;
  }

  return *this;
}

JsonValue ColumnStatistics::Jsonize() const
{
  JsonValue payload;

  if(m_columnNameHasBeenSet)
  {
   payload.WithString("ColumnName", m_columnName);

  }

  if(m_columnTypeHasBeenSet)
  {
   payload.WithString("ColumnType", m_columnType);

  }

  if(m_analyzedTimeHasBeenSet)
  {
   payload.WithDouble("AnalyzedTime", m_analyzedTime.SecondsWithMSPrecision());
  }

  if(m_statisticsDataHasBeenSet)
  {
   payload.WithObject("StatisticsData", m_statisticsData.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
