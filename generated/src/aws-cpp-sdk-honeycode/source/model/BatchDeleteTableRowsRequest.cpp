/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/honeycode/model/BatchDeleteTableRowsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Honeycode::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

BatchDeleteTableRowsRequest::BatchDeleteTableRowsRequest() : 
    m_workbookIdHasBeenSet(false),
    m_tableIdHasBeenSet(false),
    m_rowIdsHasBeenSet(false),
    m_clientRequestTokenHasBeenSet(false)
{
}

Aws::String BatchDeleteTableRowsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_rowIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> rowIdsJsonList(m_rowIds.size());
   for(unsigned rowIdsIndex = 0; rowIdsIndex < rowIdsJsonList.GetLength(); ++rowIdsIndex)
   {
     rowIdsJsonList[rowIdsIndex].AsString(m_rowIds[rowIdsIndex]);
   }
   payload.WithArray("rowIds", std::move(rowIdsJsonList));

  }

  if(m_clientRequestTokenHasBeenSet)
  {
   payload.WithString("clientRequestToken", m_clientRequestToken);

  }

  return payload.View().WriteReadable();
}




