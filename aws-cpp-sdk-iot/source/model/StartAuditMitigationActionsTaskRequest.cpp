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
     Array<JsonValue> mitigationActionNameListJsonList(auditCheckToActionsMappingItem.second.size());
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




