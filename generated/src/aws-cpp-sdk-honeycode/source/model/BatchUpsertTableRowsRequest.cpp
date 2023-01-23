/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/honeycode/model/BatchUpsertTableRowsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Honeycode::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

BatchUpsertTableRowsRequest::BatchUpsertTableRowsRequest() : 
    m_workbookIdHasBeenSet(false),
    m_tableIdHasBeenSet(false),
    m_rowsToUpsertHasBeenSet(false),
    m_clientRequestTokenHasBeenSet(false)
{
}

Aws::String BatchUpsertTableRowsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_rowsToUpsertHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> rowsToUpsertJsonList(m_rowsToUpsert.size());
   for(unsigned rowsToUpsertIndex = 0; rowsToUpsertIndex < rowsToUpsertJsonList.GetLength(); ++rowsToUpsertIndex)
   {
     rowsToUpsertJsonList[rowsToUpsertIndex].AsObject(m_rowsToUpsert[rowsToUpsertIndex].Jsonize());
   }
   payload.WithArray("rowsToUpsert", std::move(rowsToUpsertJsonList));

  }

  if(m_clientRequestTokenHasBeenSet)
  {
   payload.WithString("clientRequestToken", m_clientRequestToken);

  }

  return payload.View().WriteReadable();
}




