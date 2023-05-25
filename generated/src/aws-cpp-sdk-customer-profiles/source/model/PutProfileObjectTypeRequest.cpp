/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/model/PutProfileObjectTypeRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CustomerProfiles::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutProfileObjectTypeRequest::PutProfileObjectTypeRequest() : 
    m_domainNameHasBeenSet(false),
    m_objectTypeNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_templateIdHasBeenSet(false),
    m_expirationDays(0),
    m_expirationDaysHasBeenSet(false),
    m_encryptionKeyHasBeenSet(false),
    m_allowProfileCreation(false),
    m_allowProfileCreationHasBeenSet(false),
    m_sourceLastUpdatedTimestampFormatHasBeenSet(false),
    m_fieldsHasBeenSet(false),
    m_keysHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String PutProfileObjectTypeRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_templateIdHasBeenSet)
  {
   payload.WithString("TemplateId", m_templateId);

  }

  if(m_expirationDaysHasBeenSet)
  {
   payload.WithInteger("ExpirationDays", m_expirationDays);

  }

  if(m_encryptionKeyHasBeenSet)
  {
   payload.WithString("EncryptionKey", m_encryptionKey);

  }

  if(m_allowProfileCreationHasBeenSet)
  {
   payload.WithBool("AllowProfileCreation", m_allowProfileCreation);

  }

  if(m_sourceLastUpdatedTimestampFormatHasBeenSet)
  {
   payload.WithString("SourceLastUpdatedTimestampFormat", m_sourceLastUpdatedTimestampFormat);

  }

  if(m_fieldsHasBeenSet)
  {
   JsonValue fieldsJsonMap;
   for(auto& fieldsItem : m_fields)
   {
     fieldsJsonMap.WithObject(fieldsItem.first, fieldsItem.second.Jsonize());
   }
   payload.WithObject("Fields", std::move(fieldsJsonMap));

  }

  if(m_keysHasBeenSet)
  {
   JsonValue keysJsonMap;
   for(auto& keysItem : m_keys)
   {
     Aws::Utils::Array<JsonValue> objectTypeKeyListJsonList(keysItem.second.size());
     for(unsigned objectTypeKeyListIndex = 0; objectTypeKeyListIndex < objectTypeKeyListJsonList.GetLength(); ++objectTypeKeyListIndex)
     {
       objectTypeKeyListJsonList[objectTypeKeyListIndex].AsObject(keysItem.second[objectTypeKeyListIndex].Jsonize());
     }
     keysJsonMap.WithArray(keysItem.first, std::move(objectTypeKeyListJsonList));
   }
   payload.WithObject("Keys", std::move(keysJsonMap));

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




