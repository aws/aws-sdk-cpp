/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appconfig/model/CreateEnvironmentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AppConfig::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateEnvironmentRequest::CreateEnvironmentRequest() : 
    m_applicationIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_monitorsHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateEnvironmentRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_monitorsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> monitorsJsonList(m_monitors.size());
   for(unsigned monitorsIndex = 0; monitorsIndex < monitorsJsonList.GetLength(); ++monitorsIndex)
   {
     monitorsJsonList[monitorsIndex].AsObject(m_monitors[monitorsIndex].Jsonize());
   }
   payload.WithArray("Monitors", std::move(monitorsJsonList));

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("Tags", std::move(tagsJsonMap));

  }

  return payload.View().WriteReadable();
}




