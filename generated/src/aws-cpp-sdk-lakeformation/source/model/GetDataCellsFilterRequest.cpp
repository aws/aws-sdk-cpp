/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lakeformation/model/GetDataCellsFilterRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LakeFormation::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetDataCellsFilterRequest::GetDataCellsFilterRequest() : 
    m_tableCatalogIdHasBeenSet(false),
    m_databaseNameHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_nameHasBeenSet(false)
{
}

Aws::String GetDataCellsFilterRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_tableCatalogIdHasBeenSet)
  {
   payload.WithString("TableCatalogId", m_tableCatalogId);

  }

  if(m_databaseNameHasBeenSet)
  {
   payload.WithString("DatabaseName", m_databaseName);

  }

  if(m_tableNameHasBeenSet)
  {
   payload.WithString("TableName", m_tableName);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  return payload.View().WriteReadable();
}




