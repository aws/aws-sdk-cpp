/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift-data/model/ExecuteStatementRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::RedshiftDataAPIService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ExecuteStatementRequest::ExecuteStatementRequest() : 
    m_clientToken(Aws::Utils::UUID::RandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_clusterIdentifierHasBeenSet(false),
    m_databaseHasBeenSet(false),
    m_dbUserHasBeenSet(false),
    m_parametersHasBeenSet(false),
    m_secretArnHasBeenSet(false),
    m_sqlHasBeenSet(false),
    m_statementNameHasBeenSet(false),
    m_withEvent(false),
    m_withEventHasBeenSet(false),
    m_workgroupNameHasBeenSet(false)
{
}

Aws::String ExecuteStatementRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("ClientToken", m_clientToken);

  }

  if(m_clusterIdentifierHasBeenSet)
  {
   payload.WithString("ClusterIdentifier", m_clusterIdentifier);

  }

  if(m_databaseHasBeenSet)
  {
   payload.WithString("Database", m_database);

  }

  if(m_dbUserHasBeenSet)
  {
   payload.WithString("DbUser", m_dbUser);

  }

  if(m_parametersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> parametersJsonList(m_parameters.size());
   for(unsigned parametersIndex = 0; parametersIndex < parametersJsonList.GetLength(); ++parametersIndex)
   {
     parametersJsonList[parametersIndex].AsObject(m_parameters[parametersIndex].Jsonize());
   }
   payload.WithArray("Parameters", std::move(parametersJsonList));

  }

  if(m_secretArnHasBeenSet)
  {
   payload.WithString("SecretArn", m_secretArn);

  }

  if(m_sqlHasBeenSet)
  {
   payload.WithString("Sql", m_sql);

  }

  if(m_statementNameHasBeenSet)
  {
   payload.WithString("StatementName", m_statementName);

  }

  if(m_withEventHasBeenSet)
  {
   payload.WithBool("WithEvent", m_withEvent);

  }

  if(m_workgroupNameHasBeenSet)
  {
   payload.WithString("WorkgroupName", m_workgroupName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ExecuteStatementRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "RedshiftData.ExecuteStatement"));
  return headers;

}




