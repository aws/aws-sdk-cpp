/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecr-public/model/PutRegistryCatalogDataRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ECRPublic::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutRegistryCatalogDataRequest::PutRegistryCatalogDataRequest() : 
    m_displayNameHasBeenSet(false)
{
}

Aws::String PutRegistryCatalogDataRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_displayNameHasBeenSet)
  {
   payload.WithString("displayName", m_displayName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection PutRegistryCatalogDataRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SpencerFrontendService.PutRegistryCatalogData"));
  return headers;

}




