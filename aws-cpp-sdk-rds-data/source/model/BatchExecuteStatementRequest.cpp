/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds-data/model/BatchExecuteStatementRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::RDSDataService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

BatchExecuteStatementRequest::BatchExecuteStatementRequest() : 
    m_resourceArnHasBeenSet(false),
    m_secretArnHasBeenSet(false),
    m_sqlHasBeenSet(false),
    m_databaseHasBeenSet(false),
    m_schemaHasBeenSet(false),
    m_parameterSetsHasBeenSet(false),
    m_transactionIdHasBeenSet(false)
{
}

Aws::String BatchExecuteStatementRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_resourceArnHasBeenSet)
  {
   payload.WithString("resourceArn", m_resourceArn);

  }

  if(m_secretArnHasBeenSet)
  {
   payload.WithString("secretArn", m_secretArn);

  }

  if(m_sqlHasBeenSet)
  {
   payload.WithString("sql", m_sql);

  }

  if(m_databaseHasBeenSet)
  {
   payload.WithString("database", m_database);

  }

  if(m_schemaHasBeenSet)
  {
   payload.WithString("schema", m_schema);

  }

  if(m_parameterSetsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> parameterSetsJsonList(m_parameterSets.size());
   for(unsigned parameterSetsIndex = 0; parameterSetsIndex < parameterSetsJsonList.GetLength(); ++parameterSetsIndex)
   {
     Aws::Utils::Array<JsonValue> sqlParametersListJsonList(m_parameterSets[parameterSetsIndex].size());
     for(unsigned sqlParametersListIndex = 0; sqlParametersListIndex < sqlParametersListJsonList.GetLength(); ++sqlParametersListIndex)
     {
       sqlParametersListJsonList[sqlParametersListIndex].AsObject(m_parameterSets[parameterSetsIndex][sqlParametersListIndex].Jsonize());
     }
     parameterSetsJsonList[parameterSetsIndex].AsArray(std::move(sqlParametersListJsonList));
   }
   payload.WithArray("parameterSets", std::move(parameterSetsJsonList));

  }

  if(m_transactionIdHasBeenSet)
  {
   payload.WithString("transactionId", m_transactionId);

  }

  return payload.View().WriteReadable();
}




