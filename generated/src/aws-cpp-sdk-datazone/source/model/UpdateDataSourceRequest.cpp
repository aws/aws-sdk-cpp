/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/UpdateDataSourceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DataZone::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateDataSourceRequest::UpdateDataSourceRequest() : 
    m_assetFormsInputHasBeenSet(false),
    m_configurationHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_domainIdentifierHasBeenSet(false),
    m_enableSetting(EnableSetting::NOT_SET),
    m_enableSettingHasBeenSet(false),
    m_identifierHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_publishOnImport(false),
    m_publishOnImportHasBeenSet(false),
    m_recommendationHasBeenSet(false),
    m_scheduleHasBeenSet(false)
{
}

Aws::String UpdateDataSourceRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_assetFormsInputHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> assetFormsInputJsonList(m_assetFormsInput.size());
   for(unsigned assetFormsInputIndex = 0; assetFormsInputIndex < assetFormsInputJsonList.GetLength(); ++assetFormsInputIndex)
   {
     assetFormsInputJsonList[assetFormsInputIndex].AsObject(m_assetFormsInput[assetFormsInputIndex].Jsonize());
   }
   payload.WithArray("assetFormsInput", std::move(assetFormsInputJsonList));

  }

  if(m_configurationHasBeenSet)
  {
   payload.WithObject("configuration", m_configuration.Jsonize());

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_enableSettingHasBeenSet)
  {
   payload.WithString("enableSetting", EnableSettingMapper::GetNameForEnableSetting(m_enableSetting));
  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_publishOnImportHasBeenSet)
  {
   payload.WithBool("publishOnImport", m_publishOnImport);

  }

  if(m_recommendationHasBeenSet)
  {
   payload.WithObject("recommendation", m_recommendation.Jsonize());

  }

  if(m_scheduleHasBeenSet)
  {
   payload.WithObject("schedule", m_schedule.Jsonize());

  }

  return payload.View().WriteReadable();
}




