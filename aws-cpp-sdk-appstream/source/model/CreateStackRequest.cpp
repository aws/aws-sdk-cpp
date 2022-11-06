/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appstream/model/CreateStackRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AppStream::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateStackRequest::CreateStackRequest() : 
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_storageConnectorsHasBeenSet(false),
    m_redirectURLHasBeenSet(false),
    m_feedbackURLHasBeenSet(false),
    m_userSettingsHasBeenSet(false),
    m_applicationSettingsHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_accessEndpointsHasBeenSet(false),
    m_embedHostDomainsHasBeenSet(false),
    m_streamingExperienceSettingsHasBeenSet(false)
{
}

Aws::String CreateStackRequest::SerializePayload() const
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

  if(m_displayNameHasBeenSet)
  {
   payload.WithString("DisplayName", m_displayName);

  }

  if(m_storageConnectorsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> storageConnectorsJsonList(m_storageConnectors.size());
   for(unsigned storageConnectorsIndex = 0; storageConnectorsIndex < storageConnectorsJsonList.GetLength(); ++storageConnectorsIndex)
   {
     storageConnectorsJsonList[storageConnectorsIndex].AsObject(m_storageConnectors[storageConnectorsIndex].Jsonize());
   }
   payload.WithArray("StorageConnectors", std::move(storageConnectorsJsonList));

  }

  if(m_redirectURLHasBeenSet)
  {
   payload.WithString("RedirectURL", m_redirectURL);

  }

  if(m_feedbackURLHasBeenSet)
  {
   payload.WithString("FeedbackURL", m_feedbackURL);

  }

  if(m_userSettingsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> userSettingsJsonList(m_userSettings.size());
   for(unsigned userSettingsIndex = 0; userSettingsIndex < userSettingsJsonList.GetLength(); ++userSettingsIndex)
   {
     userSettingsJsonList[userSettingsIndex].AsObject(m_userSettings[userSettingsIndex].Jsonize());
   }
   payload.WithArray("UserSettings", std::move(userSettingsJsonList));

  }

  if(m_applicationSettingsHasBeenSet)
  {
   payload.WithObject("ApplicationSettings", m_applicationSettings.Jsonize());

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

  if(m_accessEndpointsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> accessEndpointsJsonList(m_accessEndpoints.size());
   for(unsigned accessEndpointsIndex = 0; accessEndpointsIndex < accessEndpointsJsonList.GetLength(); ++accessEndpointsIndex)
   {
     accessEndpointsJsonList[accessEndpointsIndex].AsObject(m_accessEndpoints[accessEndpointsIndex].Jsonize());
   }
   payload.WithArray("AccessEndpoints", std::move(accessEndpointsJsonList));

  }

  if(m_embedHostDomainsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> embedHostDomainsJsonList(m_embedHostDomains.size());
   for(unsigned embedHostDomainsIndex = 0; embedHostDomainsIndex < embedHostDomainsJsonList.GetLength(); ++embedHostDomainsIndex)
   {
     embedHostDomainsJsonList[embedHostDomainsIndex].AsString(m_embedHostDomains[embedHostDomainsIndex]);
   }
   payload.WithArray("EmbedHostDomains", std::move(embedHostDomainsJsonList));

  }

  if(m_streamingExperienceSettingsHasBeenSet)
  {
   payload.WithObject("StreamingExperienceSettings", m_streamingExperienceSettings.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateStackRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "PhotonAdminProxyService.CreateStack"));
  return headers;

}




