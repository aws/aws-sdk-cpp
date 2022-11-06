/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift-data/model/StatementData.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace RedshiftDataAPIService
{
namespace Model
{

StatementData::StatementData() : 
    m_createdAtHasBeenSet(false),
    m_idHasBeenSet(false),
    m_isBatchStatement(false),
    m_isBatchStatementHasBeenSet(false),
    m_queryParametersHasBeenSet(false),
    m_queryStringHasBeenSet(false),
    m_queryStringsHasBeenSet(false),
    m_secretArnHasBeenSet(false),
    m_statementNameHasBeenSet(false),
    m_status(StatusString::NOT_SET),
    m_statusHasBeenSet(false),
    m_updatedAtHasBeenSet(false)
{
}

StatementData::StatementData(JsonView jsonValue) : 
    m_createdAtHasBeenSet(false),
    m_idHasBeenSet(false),
    m_isBatchStatement(false),
    m_isBatchStatementHasBeenSet(false),
    m_queryParametersHasBeenSet(false),
    m_queryStringHasBeenSet(false),
    m_queryStringsHasBeenSet(false),
    m_secretArnHasBeenSet(false),
    m_statementNameHasBeenSet(false),
    m_status(StatusString::NOT_SET),
    m_statusHasBeenSet(false),
    m_updatedAtHasBeenSet(false)
{
  *this = jsonValue;
}

StatementData& StatementData::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CreatedAt"))
  {
    m_createdAt = jsonValue.GetDouble("CreatedAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IsBatchStatement"))
  {
    m_isBatchStatement = jsonValue.GetBool("IsBatchStatement");

    m_isBatchStatementHasBeenSet = true;
  }

  if(jsonValue.ValueExists("QueryParameters"))
  {
    Aws::Utils::Array<JsonView> queryParametersJsonList = jsonValue.GetArray("QueryParameters");
    for(unsigned queryParametersIndex = 0; queryParametersIndex < queryParametersJsonList.GetLength(); ++queryParametersIndex)
    {
      m_queryParameters.push_back(queryParametersJsonList[queryParametersIndex].AsObject());
    }
    m_queryParametersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("QueryString"))
  {
    m_queryString = jsonValue.GetString("QueryString");

    m_queryStringHasBeenSet = true;
  }

  if(jsonValue.ValueExists("QueryStrings"))
  {
    Aws::Utils::Array<JsonView> queryStringsJsonList = jsonValue.GetArray("QueryStrings");
    for(unsigned queryStringsIndex = 0; queryStringsIndex < queryStringsJsonList.GetLength(); ++queryStringsIndex)
    {
      m_queryStrings.push_back(queryStringsJsonList[queryStringsIndex].AsString());
    }
    m_queryStringsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SecretArn"))
  {
    m_secretArn = jsonValue.GetString("SecretArn");

    m_secretArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StatementName"))
  {
    m_statementName = jsonValue.GetString("StatementName");

    m_statementNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = StatusStringMapper::GetStatusStringForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UpdatedAt"))
  {
    m_updatedAt = jsonValue.GetDouble("UpdatedAt");

    m_updatedAtHasBeenSet = true;
  }

  return *this;
}

JsonValue StatementData::Jsonize() const
{
  JsonValue payload;

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("CreatedAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_isBatchStatementHasBeenSet)
  {
   payload.WithBool("IsBatchStatement", m_isBatchStatement);

  }

  if(m_queryParametersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> queryParametersJsonList(m_queryParameters.size());
   for(unsigned queryParametersIndex = 0; queryParametersIndex < queryParametersJsonList.GetLength(); ++queryParametersIndex)
   {
     queryParametersJsonList[queryParametersIndex].AsObject(m_queryParameters[queryParametersIndex].Jsonize());
   }
   payload.WithArray("QueryParameters", std::move(queryParametersJsonList));

  }

  if(m_queryStringHasBeenSet)
  {
   payload.WithString("QueryString", m_queryString);

  }

  if(m_queryStringsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> queryStringsJsonList(m_queryStrings.size());
   for(unsigned queryStringsIndex = 0; queryStringsIndex < queryStringsJsonList.GetLength(); ++queryStringsIndex)
   {
     queryStringsJsonList[queryStringsIndex].AsString(m_queryStrings[queryStringsIndex]);
   }
   payload.WithArray("QueryStrings", std::move(queryStringsJsonList));

  }

  if(m_secretArnHasBeenSet)
  {
   payload.WithString("SecretArn", m_secretArn);

  }

  if(m_statementNameHasBeenSet)
  {
   payload.WithString("StatementName", m_statementName);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", StatusStringMapper::GetNameForStatusString(m_status));
  }

  if(m_updatedAtHasBeenSet)
  {
   payload.WithDouble("UpdatedAt", m_updatedAt.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace RedshiftDataAPIService
} // namespace Aws
