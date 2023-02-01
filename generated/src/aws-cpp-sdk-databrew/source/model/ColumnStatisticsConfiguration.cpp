/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/databrew/model/ColumnStatisticsConfiguration.h>
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

ColumnStatisticsConfiguration::ColumnStatisticsConfiguration() : 
    m_selectorsHasBeenSet(false),
    m_statisticsHasBeenSet(false)
{
}

ColumnStatisticsConfiguration::ColumnStatisticsConfiguration(JsonView jsonValue) : 
    m_selectorsHasBeenSet(false),
    m_statisticsHasBeenSet(false)
{
  *this = jsonValue;
}

ColumnStatisticsConfiguration& ColumnStatisticsConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Selectors"))
  {
    Aws::Utils::Array<JsonView> selectorsJsonList = jsonValue.GetArray("Selectors");
    for(unsigned selectorsIndex = 0; selectorsIndex < selectorsJsonList.GetLength(); ++selectorsIndex)
    {
      m_selectors.push_back(selectorsJsonList[selectorsIndex].AsObject());
    }
    m_selectorsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Statistics"))
  {
    m_statistics = jsonValue.GetObject("Statistics");

    m_statisticsHasBeenSet = true;
  }

  return *this;
}

JsonValue ColumnStatisticsConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_selectorsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> selectorsJsonList(m_selectors.size());
   for(unsigned selectorsIndex = 0; selectorsIndex < selectorsJsonList.GetLength(); ++selectorsIndex)
   {
     selectorsJsonList[selectorsIndex].AsObject(m_selectors[selectorsIndex].Jsonize());
   }
   payload.WithArray("Selectors", std::move(selectorsJsonList));

  }

  if(m_statisticsHasBeenSet)
  {
   payload.WithObject("Statistics", m_statistics.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace GlueDataBrew
} // namespace Aws
