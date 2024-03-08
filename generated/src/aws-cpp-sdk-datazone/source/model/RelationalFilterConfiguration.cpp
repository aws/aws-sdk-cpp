/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/RelationalFilterConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataZone
{
namespace Model
{

RelationalFilterConfiguration::RelationalFilterConfiguration() : 
    m_databaseNameHasBeenSet(false),
    m_filterExpressionsHasBeenSet(false),
    m_schemaNameHasBeenSet(false)
{
}

RelationalFilterConfiguration::RelationalFilterConfiguration(JsonView jsonValue) : 
    m_databaseNameHasBeenSet(false),
    m_filterExpressionsHasBeenSet(false),
    m_schemaNameHasBeenSet(false)
{
  *this = jsonValue;
}

RelationalFilterConfiguration& RelationalFilterConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("databaseName"))
  {
    m_databaseName = jsonValue.GetString("databaseName");

    m_databaseNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("filterExpressions"))
  {
    Aws::Utils::Array<JsonView> filterExpressionsJsonList = jsonValue.GetArray("filterExpressions");
    for(unsigned filterExpressionsIndex = 0; filterExpressionsIndex < filterExpressionsJsonList.GetLength(); ++filterExpressionsIndex)
    {
      m_filterExpressions.push_back(filterExpressionsJsonList[filterExpressionsIndex].AsObject());
    }
    m_filterExpressionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("schemaName"))
  {
    m_schemaName = jsonValue.GetString("schemaName");

    m_schemaNameHasBeenSet = true;
  }

  return *this;
}

JsonValue RelationalFilterConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_databaseNameHasBeenSet)
  {
   payload.WithString("databaseName", m_databaseName);

  }

  if(m_filterExpressionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> filterExpressionsJsonList(m_filterExpressions.size());
   for(unsigned filterExpressionsIndex = 0; filterExpressionsIndex < filterExpressionsJsonList.GetLength(); ++filterExpressionsIndex)
   {
     filterExpressionsJsonList[filterExpressionsIndex].AsObject(m_filterExpressions[filterExpressionsIndex].Jsonize());
   }
   payload.WithArray("filterExpressions", std::move(filterExpressionsJsonList));

  }

  if(m_schemaNameHasBeenSet)
  {
   payload.WithString("schemaName", m_schemaName);

  }

  return payload;
}

} // namespace Model
} // namespace DataZone
} // namespace Aws
