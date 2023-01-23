/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/UpdateSlotRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LexModelsV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateSlotRequest::UpdateSlotRequest() : 
    m_slotIdHasBeenSet(false),
    m_slotNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_slotTypeIdHasBeenSet(false),
    m_valueElicitationSettingHasBeenSet(false),
    m_obfuscationSettingHasBeenSet(false),
    m_botIdHasBeenSet(false),
    m_botVersionHasBeenSet(false),
    m_localeIdHasBeenSet(false),
    m_intentIdHasBeenSet(false),
    m_multipleValuesSettingHasBeenSet(false),
    m_subSlotSettingHasBeenSet(false)
{
}

Aws::String UpdateSlotRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_slotNameHasBeenSet)
  {
   payload.WithString("slotName", m_slotName);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_slotTypeIdHasBeenSet)
  {
   payload.WithString("slotTypeId", m_slotTypeId);

  }

  if(m_valueElicitationSettingHasBeenSet)
  {
   payload.WithObject("valueElicitationSetting", m_valueElicitationSetting.Jsonize());

  }

  if(m_obfuscationSettingHasBeenSet)
  {
   payload.WithObject("obfuscationSetting", m_obfuscationSetting.Jsonize());

  }

  if(m_multipleValuesSettingHasBeenSet)
  {
   payload.WithObject("multipleValuesSetting", m_multipleValuesSetting.Jsonize());

  }

  if(m_subSlotSettingHasBeenSet)
  {
   payload.WithObject("subSlotSetting", m_subSlotSetting.Jsonize());

  }

  return payload.View().WriteReadable();
}




