/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/PutDataCatalogEncryptionSettingsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutDataCatalogEncryptionSettingsRequest::PutDataCatalogEncryptionSettingsRequest() : 
    m_catalogIdHasBeenSet(false),
    m_dataCatalogEncryptionSettingsHasBeenSet(false)
{
}

Aws::String PutDataCatalogEncryptionSettingsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_catalogIdHasBeenSet)
  {
   payload.WithString("CatalogId", m_catalogId);

  }

  if(m_dataCatalogEncryptionSettingsHasBeenSet)
  {
   payload.WithObject("DataCatalogEncryptionSettings", m_dataCatalogEncryptionSettings.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection PutDataCatalogEncryptionSettingsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSGlue.PutDataCatalogEncryptionSettings"));
  return headers;

}




