/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lakeformation/model/QueryPlanningContext.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LakeFormation
{
namespace Model
{

QueryPlanningContext::QueryPlanningContext() : 
    m_catalogIdHasBeenSet(false),
    m_databaseNameHasBeenSet(false),
    m_queryAsOfTimeHasBeenSet(false),
    m_queryParametersHasBeenSet(false),
    m_transactionIdHasBeenSet(false)
{
}

QueryPlanningContext::QueryPlanningContext(JsonView jsonValue) : 
    m_catalogIdHasBeenSet(false),
    m_databaseNameHasBeenSet(false),
    m_queryAsOfTimeHasBeenSet(false),
    m_queryParametersHasBeenSet(false),
    m_transactionIdHasBeenSet(false)
{
  *this = jsonValue;
}

QueryPlanningContext& QueryPlanningContext::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CatalogId"))
  {
    m_catalogId = jsonValue.GetString("CatalogId");

    m_catalogIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DatabaseName"))
  {
    m_databaseName = jsonValue.GetString("DatabaseName");

    m_databaseNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("QueryAsOfTime"))
  {
    m_queryAsOfTime = jsonValue.GetDouble("QueryAsOfTime");

    m_queryAsOfTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("QueryParameters"))
  {
    Aws::Map<Aws::String, JsonView> queryParametersJsonMap = jsonValue.GetObject("QueryParameters").GetAllObjects();
    for(auto& queryParametersItem : queryParametersJsonMap)
    {
      m_queryParameters[queryParametersItem.first] = queryParametersItem.second.AsString();
    }
    m_queryParametersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TransactionId"))
  {
    m_transactionId = jsonValue.GetString("TransactionId");

    m_transactionIdHasBeenSet = true;
  }

  return *this;
}

JsonValue QueryPlanningContext::Jsonize() const
{
  JsonValue payload;

  if(m_catalogIdHasBeenSet)
  {
   payload.WithString("CatalogId", m_catalogId);

  }

  if(m_databaseNameHasBeenSet)
  {
   payload.WithString("DatabaseName", m_databaseName);

  }

  if(m_queryAsOfTimeHasBeenSet)
  {
   payload.WithDouble("QueryAsOfTime", m_queryAsOfTime.SecondsWithMSPrecision());
  }

  if(m_queryParametersHasBeenSet)
  {
   JsonValue queryParametersJsonMap;
   for(auto& queryParametersItem : m_queryParameters)
   {
     queryParametersJsonMap.WithString(queryParametersItem.first, queryParametersItem.second);
   }
   payload.WithObject("QueryParameters", std::move(queryParametersJsonMap));

  }

  if(m_transactionIdHasBeenSet)
  {
   payload.WithString("TransactionId", m_transactionId);

  }

  return payload;
}

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
