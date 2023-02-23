/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/location/model/CreateKeyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LocationService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateKeyRequest::CreateKeyRequest() : 
    m_descriptionHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_keyNameHasBeenSet(false),
    m_noExpiry(false),
    m_noExpiryHasBeenSet(false),
    m_restrictionsHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateKeyRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_expireTimeHasBeenSet)
  {
   payload.WithString("ExpireTime", m_expireTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_keyNameHasBeenSet)
  {
   payload.WithString("KeyName", m_keyName);

  }

  if(m_noExpiryHasBeenSet)
  {
   payload.WithBool("NoExpiry", m_noExpiry);

  }

  if(m_restrictionsHasBeenSet)
  {
   payload.WithObject("Restrictions", m_restrictions.Jsonize());

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




