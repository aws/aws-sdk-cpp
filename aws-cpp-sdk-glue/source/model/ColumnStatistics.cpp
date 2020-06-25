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
