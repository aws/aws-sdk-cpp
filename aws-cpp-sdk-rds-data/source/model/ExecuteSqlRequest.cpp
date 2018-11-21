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

#include <aws/rds-data/model/ExecuteSqlRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::RDSDataService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ExecuteSqlRequest::ExecuteSqlRequest() : 
    m_awsSecretStoreArnHasBeenSet(false),
    m_databaseHasBeenSet(false),
    m_dbClusterOrInstanceArnHasBeenSet(false),
    m_schemaHasBeenSet(false),
    m_sqlStatementsHasBeenSet(false)
{
}

Aws::String ExecuteSqlRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_awsSecretStoreArnHasBeenSet)
  {
   payload.WithString("awsSecretStoreArn", m_awsSecretStoreArn);

  }

  if(m_databaseHasBeenSet)
  {
   payload.WithString("database", m_database);

  }

  if(m_dbClusterOrInstanceArnHasBeenSet)
  {
   payload.WithString("dbClusterOrInstanceArn", m_dbClusterOrInstanceArn);

  }

  if(m_schemaHasBeenSet)
  {
   payload.WithString("schema", m_schema);

  }

  if(m_sqlStatementsHasBeenSet)
  {
   payload.WithString("sqlStatements", m_sqlStatements);

  }

  return payload.View().WriteReadable();
}




