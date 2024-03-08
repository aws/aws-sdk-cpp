/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/CreateTableOptimizerRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateTableOptimizerRequest::CreateTableOptimizerRequest() : 
    m_catalogIdHasBeenSet(false),
    m_databaseNameHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_type(TableOptimizerType::NOT_SET),
    m_typeHasBeenSet(false),
    m_tableOptimizerConfigurationHasBeenSet(false)
{
}

Aws::String CreateTableOptimizerRequest::SerializePayload() const
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

  if(m_tableNameHasBeenSet)
  {
   payload.WithString("TableName", m_tableName);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", TableOptimizerTypeMapper::GetNameForTableOptimizerType(m_type));
  }

  if(m_tableOptimizerConfigurationHasBeenSet)
  {
   payload.WithObject("TableOptimizerConfiguration", m_tableOptimizerConfiguration.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateTableOptimizerRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSGlue.CreateTableOptimizer"));
  return headers;

}




