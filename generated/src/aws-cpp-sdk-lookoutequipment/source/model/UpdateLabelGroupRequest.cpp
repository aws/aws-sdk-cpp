/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutequipment/model/UpdateLabelGroupRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LookoutEquipment::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateLabelGroupRequest::UpdateLabelGroupRequest() : 
    m_labelGroupNameHasBeenSet(false),
    m_faultCodesHasBeenSet(false)
{
}

Aws::String UpdateLabelGroupRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_labelGroupNameHasBeenSet)
  {
   payload.WithString("LabelGroupName", m_labelGroupName);

  }

  if(m_faultCodesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> faultCodesJsonList(m_faultCodes.size());
   for(unsigned faultCodesIndex = 0; faultCodesIndex < faultCodesJsonList.GetLength(); ++faultCodesIndex)
   {
     faultCodesJsonList[faultCodesIndex].AsString(m_faultCodes[faultCodesIndex]);
   }
   payload.WithArray("FaultCodes", std::move(faultCodesJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateLabelGroupRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSLookoutEquipmentFrontendService.UpdateLabelGroup"));
  return headers;

}




