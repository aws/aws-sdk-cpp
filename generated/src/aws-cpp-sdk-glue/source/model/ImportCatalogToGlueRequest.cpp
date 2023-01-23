/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/ImportCatalogToGlueRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ImportCatalogToGlueRequest::ImportCatalogToGlueRequest() : 
    m_catalogIdHasBeenSet(false)
{
}

Aws::String ImportCatalogToGlueRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_catalogIdHasBeenSet)
  {
   payload.WithString("CatalogId", m_catalogId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ImportCatalogToGlueRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSGlue.ImportCatalogToGlue"));
  return headers;

}




