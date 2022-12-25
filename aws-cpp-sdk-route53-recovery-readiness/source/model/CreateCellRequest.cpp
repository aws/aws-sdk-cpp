/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53-recovery-readiness/model/CreateCellRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Route53RecoveryReadiness::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateCellRequest::CreateCellRequest() : 
    m_cellNameHasBeenSet(false),
    m_cellsHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateCellRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_cellNameHasBeenSet)
  {
   payload.WithString("cellName", m_cellName);

  }

  if(m_cellsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> cellsJsonList(m_cells.size());
   for(unsigned cellsIndex = 0; cellsIndex < cellsJsonList.GetLength(); ++cellsIndex)
   {
     cellsJsonList[cellsIndex].AsString(m_cells[cellsIndex]);
   }
   payload.WithArray("cells", std::move(cellsJsonList));

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  return payload.View().WriteReadable();
}




