/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appintegrations/model/CreateDataIntegrationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AppIntegrationsService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateDataIntegrationRequest::CreateDataIntegrationRequest() : 
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_kmsKeyHasBeenSet(false),
    m_sourceURIHasBeenSet(false),
    m_scheduleConfigHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_fileConfigurationHasBeenSet(false),
    m_objectConfigurationHasBeenSet(false)
{
}

Aws::String CreateDataIntegrationRequest::SerializePayload() const
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

  if(m_kmsKeyHasBeenSet)
  {
   payload.WithString("KmsKey", m_kmsKey);

  }

  if(m_sourceURIHasBeenSet)
  {
   payload.WithString("SourceURI", m_sourceURI);

  }

  if(m_scheduleConfigHasBeenSet)
  {
   payload.WithObject("ScheduleConfig", m_scheduleConfig.Jsonize());

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

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("ClientToken", m_clientToken);

  }

  if(m_fileConfigurationHasBeenSet)
  {
   payload.WithObject("FileConfiguration", m_fileConfiguration.Jsonize());

  }

  if(m_objectConfigurationHasBeenSet)
  {
   JsonValue objectConfigurationJsonMap;
   for(auto& objectConfigurationItem : m_objectConfiguration)
   {
     JsonValue fieldsMapJsonMap;
     for(auto& fieldsMapItem : objectConfigurationItem.second)
     {
       Aws::Utils::Array<JsonValue> fieldsListJsonList(fieldsMapItem.second.size());
       for(unsigned fieldsListIndex = 0; fieldsListIndex < fieldsListJsonList.GetLength(); ++fieldsListIndex)
       {
         fieldsListJsonList[fieldsListIndex].AsString(fieldsMapItem.second[fieldsListIndex]);
       }
       fieldsMapJsonMap.WithArray(fieldsMapItem.first, std::move(fieldsListJsonList));
     }
     objectConfigurationJsonMap.WithObject(objectConfigurationItem.first, std::move(fieldsMapJsonMap));
   }
   payload.WithObject("ObjectConfiguration", std::move(objectConfigurationJsonMap));

  }

  return payload.View().WriteReadable();
}




