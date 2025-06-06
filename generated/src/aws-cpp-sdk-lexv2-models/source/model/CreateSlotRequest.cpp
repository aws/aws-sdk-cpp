﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/CreateSlotRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LexModelsV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateSlotRequest::SerializePayload() const
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




