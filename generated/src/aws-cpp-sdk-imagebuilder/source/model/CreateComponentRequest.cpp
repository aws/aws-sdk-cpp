/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/imagebuilder/model/CreateComponentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::imagebuilder::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateComponentRequest::CreateComponentRequest() : 
    m_nameHasBeenSet(false),
    m_semanticVersionHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_changeDescriptionHasBeenSet(false),
    m_platform(Platform::NOT_SET),
    m_platformHasBeenSet(false),
    m_supportedOsVersionsHasBeenSet(false),
    m_dataHasBeenSet(false),
    m_uriHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::RandomUUID()),
    m_clientTokenHasBeenSet(true)
{
}

Aws::String CreateComponentRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_semanticVersionHasBeenSet)
  {
   payload.WithString("semanticVersion", m_semanticVersion);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_changeDescriptionHasBeenSet)
  {
   payload.WithString("changeDescription", m_changeDescription);

  }

  if(m_platformHasBeenSet)
  {
   payload.WithString("platform", PlatformMapper::GetNameForPlatform(m_platform));
  }

  if(m_supportedOsVersionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> supportedOsVersionsJsonList(m_supportedOsVersions.size());
   for(unsigned supportedOsVersionsIndex = 0; supportedOsVersionsIndex < supportedOsVersionsJsonList.GetLength(); ++supportedOsVersionsIndex)
   {
     supportedOsVersionsJsonList[supportedOsVersionsIndex].AsString(m_supportedOsVersions[supportedOsVersionsIndex]);
   }
   payload.WithArray("supportedOsVersions", std::move(supportedOsVersionsJsonList));

  }

  if(m_dataHasBeenSet)
  {
   payload.WithString("data", m_data);

  }

  if(m_uriHasBeenSet)
  {
   payload.WithString("uri", m_uri);

  }

  if(m_kmsKeyIdHasBeenSet)
  {
   payload.WithString("kmsKeyId", m_kmsKeyId);

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  return payload.View().WriteReadable();
}




