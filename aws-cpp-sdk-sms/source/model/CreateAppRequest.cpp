/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sms/model/CreateAppRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SMS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateAppRequest::CreateAppRequest() : 
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_roleNameHasBeenSet(false),
    m_clientTokenHasBeenSet(false),
    m_serverGroupsHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateAppRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_roleNameHasBeenSet)
  {
   payload.WithString("roleName", m_roleName);

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_serverGroupsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> serverGroupsJsonList(m_serverGroups.size());
   for(unsigned serverGroupsIndex = 0; serverGroupsIndex < serverGroupsJsonList.GetLength(); ++serverGroupsIndex)
   {
     serverGroupsJsonList[serverGroupsIndex].AsObject(m_serverGroups[serverGroupsIndex].Jsonize());
   }
   payload.WithArray("serverGroups", std::move(serverGroupsJsonList));

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("tags", std::move(tagsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateAppRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSServerMigrationService_V2016_10_24.CreateApp"));
  return headers;

}




