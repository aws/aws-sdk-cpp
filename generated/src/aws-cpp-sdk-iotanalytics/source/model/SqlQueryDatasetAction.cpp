/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotanalytics/model/SqlQueryDatasetAction.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTAnalytics
{
namespace Model
{

SqlQueryDatasetAction::SqlQueryDatasetAction() : 
    m_sqlQueryHasBeenSet(false),
    m_filtersHasBeenSet(false)
{
}

SqlQueryDatasetAction::SqlQueryDatasetAction(JsonView jsonValue) : 
    m_sqlQueryHasBeenSet(false),
    m_filtersHasBeenSet(false)
{
  *this = jsonValue;
}

SqlQueryDatasetAction& SqlQueryDatasetAction::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("sqlQuery"))
  {
    m_sqlQuery = jsonValue.GetString("sqlQuery");

    m_sqlQueryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("filters"))
  {
    Aws::Utils::Array<JsonView> filtersJsonList = jsonValue.GetArray("filters");
    for(unsigned filtersIndex = 0; filtersIndex < filtersJsonList.GetLength(); ++filtersIndex)
    {
      m_filters.push_back(filtersJsonList[filtersIndex].AsObject());
    }
    m_filtersHasBeenSet = true;
  }

  return *this;
}

JsonValue SqlQueryDatasetAction::Jsonize() const
{
  JsonValue payload;

  if(m_sqlQueryHasBeenSet)
  {
   payload.WithString("sqlQuery", m_sqlQuery);

  }

  if(m_filtersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> filtersJsonList(m_filters.size());
   for(unsigned filtersIndex = 0; filtersIndex < filtersJsonList.GetLength(); ++filtersIndex)
   {
     filtersJsonList[filtersIndex].AsObject(m_filters[filtersIndex].Jsonize());
   }
   payload.WithArray("filters", std::move(filtersJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
