/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/StartAuditMitigationActionsTaskRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartAuditMitigationActionsTaskRequest::StartAuditMitigationActionsTaskRequest() : 
    m_taskIdHasBeenSet(false),
    m_targetHasBeenSet(false),
    m_auditCheckToActionsMappingHasBeenSet(false),
    m_clientRequestToken(Aws::Utils::UUID::RandomUUID()),
    m_clientRequestTokenHasBeenSet(true)
{
}

Aws::String StartAuditMitigationActionsTaskRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_targetHasBeenSet)
  {
   payload.WithObject("target", m_target.Jsonize());

  }

  if(m_auditCheckToActionsMappingHasBeenSet)
  {
   JsonValue auditCheckToActionsMappingJsonMap;
   for(auto& auditCheckToActionsMappingItem : m_auditCheckToActionsMapping)
   {
     Aws::Utils::Array<JsonValue> mitigationActionNameListJsonList(auditCheckToActionsMappingItem.second.size());
     for(unsigned mitigationActionNameListIndex = 0; mitigationActionNameListIndex < mitigationActionNameListJsonList.GetLength(); ++mitigationActionNameListIndex)
     {
       mitigationActionNameListJsonList[mitigationActionNameListIndex].AsString(auditCheckToActionsMappingItem.second[mitigationActionNameListIndex]);
     }
     auditCheckToActionsMappingJsonMap.WithArray(auditCheckToActionsMappingItem.first, std::move(mitigationActionNameListJsonList));
   }
   payload.WithObject("auditCheckToActionsMapping", std::move(auditCheckToActionsMappingJsonMap));

  }

  if(m_clientRequestTokenHasBeenSet)
  {
   payload.WithString("clientRequestToken", m_clientRequestToken);

  }

  return payload.View().WriteReadable();
}




