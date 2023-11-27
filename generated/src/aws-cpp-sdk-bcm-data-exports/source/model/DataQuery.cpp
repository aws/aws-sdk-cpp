/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bcm-data-exports/model/DataQuery.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BCMDataExports
{
namespace Model
{

DataQuery::DataQuery() : 
    m_queryStatementHasBeenSet(false),
    m_tableConfigurationsHasBeenSet(false)
{
}

DataQuery::DataQuery(JsonView jsonValue) : 
    m_queryStatementHasBeenSet(false),
    m_tableConfigurationsHasBeenSet(false)
{
  *this = jsonValue;
}

DataQuery& DataQuery::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("QueryStatement"))
  {
    m_queryStatement = jsonValue.GetString("QueryStatement");

    m_queryStatementHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TableConfigurations"))
  {
    Aws::Map<Aws::String, JsonView> tableConfigurationsJsonMap = jsonValue.GetObject("TableConfigurations").GetAllObjects();
    for(auto& tableConfigurationsItem : tableConfigurationsJsonMap)
    {
      Aws::Map<Aws::String, JsonView> tablePropertiesJsonMap = tableConfigurationsItem.second.GetAllObjects();
      Aws::Map<Aws::String, Aws::String> tablePropertiesMap;
      for(auto& tablePropertiesItem : tablePropertiesJsonMap)
      {
        tablePropertiesMap[tablePropertiesItem.first] = tablePropertiesItem.second.AsString();
      }
      m_tableConfigurations[tableConfigurationsItem.first] = std::move(tablePropertiesMap);
    }
    m_tableConfigurationsHasBeenSet = true;
  }

  return *this;
}

JsonValue DataQuery::Jsonize() const
{
  JsonValue payload;

  if(m_queryStatementHasBeenSet)
  {
   payload.WithString("QueryStatement", m_queryStatement);

  }

  if(m_tableConfigurationsHasBeenSet)
  {
   JsonValue tableConfigurationsJsonMap;
   for(auto& tableConfigurationsItem : m_tableConfigurations)
   {
     JsonValue tablePropertiesJsonMap;
     for(auto& tablePropertiesItem : tableConfigurationsItem.second)
     {
       tablePropertiesJsonMap.WithString(tablePropertiesItem.first, tablePropertiesItem.second);
     }
     tableConfigurationsJsonMap.WithObject(tableConfigurationsItem.first, std::move(tablePropertiesJsonMap));
   }
   payload.WithObject("TableConfigurations", std::move(tableConfigurationsJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace BCMDataExports
} // namespace Aws
