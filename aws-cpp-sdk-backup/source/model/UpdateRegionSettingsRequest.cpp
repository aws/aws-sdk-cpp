/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/UpdateRegionSettingsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Backup::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateRegionSettingsRequest::UpdateRegionSettingsRequest() : 
    m_resourceTypeOptInPreferenceHasBeenSet(false)
{
}

Aws::String UpdateRegionSettingsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_resourceTypeOptInPreferenceHasBeenSet)
  {
   JsonValue resourceTypeOptInPreferenceJsonMap;
   for(auto& resourceTypeOptInPreferenceItem : m_resourceTypeOptInPreference)
   {
     resourceTypeOptInPreferenceJsonMap.WithBool(resourceTypeOptInPreferenceItem.first, resourceTypeOptInPreferenceItem.second);
   }
   payload.WithObject("ResourceTypeOptInPreference", std::move(resourceTypeOptInPreferenceJsonMap));

  }

  return payload.View().WriteReadable();
}




