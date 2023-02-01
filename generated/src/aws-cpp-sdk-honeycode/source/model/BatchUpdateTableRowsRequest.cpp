/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/honeycode/model/BatchUpdateTableRowsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Honeycode::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

BatchUpdateTableRowsRequest::BatchUpdateTableRowsRequest() : 
    m_workbookIdHasBeenSet(false),
    m_tableIdHasBeenSet(false),
    m_rowsToUpdateHasBeenSet(false),
    m_clientRequestTokenHasBeenSet(false)
{
}

Aws::String BatchUpdateTableRowsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_rowsToUpdateHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> rowsToUpdateJsonList(m_rowsToUpdate.size());
   for(unsigned rowsToUpdateIndex = 0; rowsToUpdateIndex < rowsToUpdateJsonList.GetLength(); ++rowsToUpdateIndex)
   {
     rowsToUpdateJsonList[rowsToUpdateIndex].AsObject(m_rowsToUpdate[rowsToUpdateIndex].Jsonize());
   }
   payload.WithArray("rowsToUpdate", std::move(rowsToUpdateJsonList));

  }

  if(m_clientRequestTokenHasBeenSet)
  {
   payload.WithString("clientRequestToken", m_clientRequestToken);

  }

  return payload.View().WriteReadable();
}




