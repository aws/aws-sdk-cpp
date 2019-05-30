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

#include <aws/rds-data/model/BatchExecuteStatementRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::RDSDataService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

BatchExecuteStatementRequest::BatchExecuteStatementRequest() : 
    m_databaseHasBeenSet(false),
    m_parameterSetsHasBeenSet(false),
    m_resourceArnHasBeenSet(false),
    m_schemaHasBeenSet(false),
    m_secretArnHasBeenSet(false),
    m_sqlHasBeenSet(false),
    m_transactionIdHasBeenSet(false)
{
}

Aws::String BatchExecuteStatementRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_databaseHasBeenSet)
  {
   payload.WithString("database", m_database);

  }

  if(m_parameterSetsHasBeenSet)
  {
   Array<JsonValue> parameterSetsJsonList(m_parameterSets.size());
   for(unsigned parameterSetsIndex = 0; parameterSetsIndex < parameterSetsJsonList.GetLength(); ++parameterSetsIndex)
   {
     Array<JsonValue> sqlParametersListJsonList(m_parameterSets[parameterSetsIndex].size());
     for(unsigned sqlParametersListIndex = 0; sqlParametersListIndex < sqlParametersListJsonList.GetLength(); ++sqlParametersListIndex)
     {
       sqlParametersListJsonList[sqlParametersListIndex].AsObject(m_parameterSets[parameterSetsIndex][sqlParametersListIndex].Jsonize());
     }
     parameterSetsJsonList[parameterSetsIndex].AsArray(std::move(sqlParametersListJsonList));
   }
   payload.WithArray("parameterSets", std::move(parameterSetsJsonList));

  }

  if(m_resourceArnHasBeenSet)
  {
   payload.WithString("resourceArn", m_resourceArn);

  }

  if(m_schemaHasBeenSet)
  {
   payload.WithString("schema", m_schema);

  }

  if(m_secretArnHasBeenSet)
  {
   payload.WithString("secretArn", m_secretArn);

  }

  if(m_sqlHasBeenSet)
  {
   payload.WithString("sql", m_sql);

  }

  if(m_transactionIdHasBeenSet)
  {
   payload.WithString("transactionId", m_transactionId);

  }

  return payload.View().WriteReadable();
}




