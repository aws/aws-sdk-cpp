/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/grafana/model/UpdatePermissionsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ManagedGrafana::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdatePermissionsRequest::UpdatePermissionsRequest() : 
    m_updateInstructionBatchHasBeenSet(false),
    m_workspaceIdHasBeenSet(false)
{
}

Aws::String UpdatePermissionsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_updateInstructionBatchHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> updateInstructionBatchJsonList(m_updateInstructionBatch.size());
   for(unsigned updateInstructionBatchIndex = 0; updateInstructionBatchIndex < updateInstructionBatchJsonList.GetLength(); ++updateInstructionBatchIndex)
   {
     updateInstructionBatchJsonList[updateInstructionBatchIndex].AsObject(m_updateInstructionBatch[updateInstructionBatchIndex].Jsonize());
   }
   payload.WithArray("updateInstructionBatch", std::move(updateInstructionBatchJsonList));

  }

  return payload.View().WriteReadable();
}




