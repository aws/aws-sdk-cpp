/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/UpdateGlobalSettingsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Backup::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateGlobalSettingsRequest::UpdateGlobalSettingsRequest() : 
    m_globalSettingsHasBeenSet(false)
{
}

Aws::String UpdateGlobalSettingsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_globalSettingsHasBeenSet)
  {
   JsonValue globalSettingsJsonMap;
   for(auto& globalSettingsItem : m_globalSettings)
   {
     globalSettingsJsonMap.WithString(globalSettingsItem.first, globalSettingsItem.second);
   }
   payload.WithObject("GlobalSettings", std::move(globalSettingsJsonMap));

  }

  return payload.View().WriteReadable();
}




