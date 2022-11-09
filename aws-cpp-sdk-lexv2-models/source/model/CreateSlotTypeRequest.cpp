/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/CreateSlotTypeRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LexModelsV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateSlotTypeRequest::CreateSlotTypeRequest() : 
    m_slotTypeNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_slotTypeValuesHasBeenSet(false),
    m_valueSelectionSettingHasBeenSet(false),
    m_parentSlotTypeSignatureHasBeenSet(false),
    m_botIdHasBeenSet(false),
    m_botVersionHasBeenSet(false),
    m_localeIdHasBeenSet(false),
    m_externalSourceSettingHasBeenSet(false),
    m_compositeSlotTypeSettingHasBeenSet(false)
{
}

Aws::String CreateSlotTypeRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_slotTypeNameHasBeenSet)
  {
   payload.WithString("slotTypeName", m_slotTypeName);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_slotTypeValuesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> slotTypeValuesJsonList(m_slotTypeValues.size());
   for(unsigned slotTypeValuesIndex = 0; slotTypeValuesIndex < slotTypeValuesJsonList.GetLength(); ++slotTypeValuesIndex)
   {
     slotTypeValuesJsonList[slotTypeValuesIndex].AsObject(m_slotTypeValues[slotTypeValuesIndex].Jsonize());
   }
   payload.WithArray("slotTypeValues", std::move(slotTypeValuesJsonList));

  }

  if(m_valueSelectionSettingHasBeenSet)
  {
   payload.WithObject("valueSelectionSetting", m_valueSelectionSetting.Jsonize());

  }

  if(m_parentSlotTypeSignatureHasBeenSet)
  {
   payload.WithString("parentSlotTypeSignature", m_parentSlotTypeSignature);

  }

  if(m_externalSourceSettingHasBeenSet)
  {
   payload.WithObject("externalSourceSetting", m_externalSourceSetting.Jsonize());

  }

  if(m_compositeSlotTypeSettingHasBeenSet)
  {
   payload.WithObject("compositeSlotTypeSetting", m_compositeSlotTypeSetting.Jsonize());

  }

  return payload.View().WriteReadable();
}




