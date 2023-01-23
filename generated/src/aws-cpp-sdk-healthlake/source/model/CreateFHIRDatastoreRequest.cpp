/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/healthlake/model/CreateFHIRDatastoreRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::HealthLake::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateFHIRDatastoreRequest::CreateFHIRDatastoreRequest() : 
    m_datastoreNameHasBeenSet(false),
    m_datastoreTypeVersion(FHIRVersion::NOT_SET),
    m_datastoreTypeVersionHasBeenSet(false),
    m_sseConfigurationHasBeenSet(false),
    m_preloadDataConfigHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::RandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateFHIRDatastoreRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_datastoreNameHasBeenSet)
  {
   payload.WithString("DatastoreName", m_datastoreName);

  }

  if(m_datastoreTypeVersionHasBeenSet)
  {
   payload.WithString("DatastoreTypeVersion", FHIRVersionMapper::GetNameForFHIRVersion(m_datastoreTypeVersion));
  }

  if(m_sseConfigurationHasBeenSet)
  {
   payload.WithObject("SseConfiguration", m_sseConfiguration.Jsonize());

  }

  if(m_preloadDataConfigHasBeenSet)
  {
   payload.WithObject("PreloadDataConfig", m_preloadDataConfig.Jsonize());

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("ClientToken", m_clientToken);

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateFHIRDatastoreRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "HealthLake.CreateFHIRDatastore"));
  return headers;

}




