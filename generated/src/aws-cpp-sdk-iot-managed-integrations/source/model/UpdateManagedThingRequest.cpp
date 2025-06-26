/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot-managed-integrations/model/UpdateManagedThingRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTManagedIntegrations::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateManagedThingRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_ownerHasBeenSet)
  {
   payload.WithString("Owner", m_owner);

  }

  if(m_credentialLockerIdHasBeenSet)
  {
   payload.WithString("CredentialLockerId", m_credentialLockerId);

  }

  if(m_serialNumberHasBeenSet)
  {
   payload.WithString("SerialNumber", m_serialNumber);

  }

  if(m_brandHasBeenSet)
  {
   payload.WithString("Brand", m_brand);

  }

  if(m_modelHasBeenSet)
  {
   payload.WithString("Model", m_model);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_capabilityReportHasBeenSet)
  {
   payload.WithObject("CapabilityReport", m_capabilityReport.Jsonize());

  }

  if(m_capabilitySchemasHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> capabilitySchemasJsonList(m_capabilitySchemas.size());
   for(unsigned capabilitySchemasIndex = 0; capabilitySchemasIndex < capabilitySchemasJsonList.GetLength(); ++capabilitySchemasIndex)
   {
     capabilitySchemasJsonList[capabilitySchemasIndex].AsObject(m_capabilitySchemas[capabilitySchemasIndex].Jsonize());
   }
   payload.WithArray("CapabilitySchemas", std::move(capabilitySchemasJsonList));

  }

  if(m_capabilitiesHasBeenSet)
  {
   payload.WithString("Capabilities", m_capabilities);

  }

  if(m_classificationHasBeenSet)
  {
   payload.WithString("Classification", m_classification);

  }

  if(m_hubNetworkModeHasBeenSet)
  {
   payload.WithString("HubNetworkMode", HubNetworkModeMapper::GetNameForHubNetworkMode(m_hubNetworkMode));
  }

  if(m_metaDataHasBeenSet)
  {
   JsonValue metaDataJsonMap;
   for(auto& metaDataItem : m_metaData)
   {
     metaDataJsonMap.WithString(metaDataItem.first, metaDataItem.second);
   }
   payload.WithObject("MetaData", std::move(metaDataJsonMap));

  }

  return payload.View().WriteReadable();
}




