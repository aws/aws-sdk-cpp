﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/appstream/model/UpdateStackRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AppStream::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateStackRequest::UpdateStackRequest() : 
    m_displayNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_storageConnectorsHasBeenSet(false),
    m_redirectURLHasBeenSet(false),
    m_feedbackURLHasBeenSet(false),
    m_attributesToDeleteHasBeenSet(false),
    m_userSettingsHasBeenSet(false),
    m_applicationSettingsHasBeenSet(false)
{
}

Aws::String UpdateStackRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_displayNameHasBeenSet)
  {
   payload.WithString("DisplayName", m_displayName);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_storageConnectorsHasBeenSet)
  {
   Array<JsonValue> storageConnectorsJsonList(m_storageConnectors.size());
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

  if(m_attributesToDeleteHasBeenSet)
  {
   Array<JsonValue> attributesToDeleteJsonList(m_attributesToDelete.size());
   for(unsigned attributesToDeleteIndex = 0; attributesToDeleteIndex < attributesToDeleteJsonList.GetLength(); ++attributesToDeleteIndex)
   {
     attributesToDeleteJsonList[attributesToDeleteIndex].AsString(StackAttributeMapper::GetNameForStackAttribute(m_attributesToDelete[attributesToDeleteIndex]));
   }
   payload.WithArray("AttributesToDelete", std::move(attributesToDeleteJsonList));

  }

  if(m_userSettingsHasBeenSet)
  {
   Array<JsonValue> userSettingsJsonList(m_userSettings.size());
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

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateStackRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "PhotonAdminProxyService.UpdateStack"));
  return headers;

}




