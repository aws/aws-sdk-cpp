/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/honeycode/model/BatchCreateTableRowsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Honeycode::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

BatchCreateTableRowsRequest::BatchCreateTableRowsRequest() : 
    m_workbookIdHasBeenSet(false),
    m_tableIdHasBeenSet(false),
    m_rowsToCreateHasBeenSet(false),
    m_clientRequestTokenHasBeenSet(false)
{
}

Aws::String BatchCreateTableRowsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_rowsToCreateHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> rowsToCreateJsonList(m_rowsToCreate.size());
   for(unsigned rowsToCreateIndex = 0; rowsToCreateIndex < rowsToCreateJsonList.GetLength(); ++rowsToCreateIndex)
   {
     rowsToCreateJsonList[rowsToCreateIndex].AsObject(m_rowsToCreate[rowsToCreateIndex].Jsonize());
   }
   payload.WithArray("rowsToCreate", std::move(rowsToCreateJsonList));

  }

  if(m_clientRequestTokenHasBeenSet)
  {
   payload.WithString("clientRequestToken", m_clientRequestToken);

  }

  return payload.View().WriteReadable();
}




