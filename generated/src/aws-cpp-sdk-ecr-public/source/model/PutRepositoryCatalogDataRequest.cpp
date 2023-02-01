/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecr-public/model/PutRepositoryCatalogDataRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ECRPublic::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutRepositoryCatalogDataRequest::PutRepositoryCatalogDataRequest() : 
    m_registryIdHasBeenSet(false),
    m_repositoryNameHasBeenSet(false),
    m_catalogDataHasBeenSet(false)
{
}

Aws::String PutRepositoryCatalogDataRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_registryIdHasBeenSet)
  {
   payload.WithString("registryId", m_registryId);

  }

  if(m_repositoryNameHasBeenSet)
  {
   payload.WithString("repositoryName", m_repositoryName);

  }

  if(m_catalogDataHasBeenSet)
  {
   payload.WithObject("catalogData", m_catalogData.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection PutRepositoryCatalogDataRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SpencerFrontendService.PutRepositoryCatalogData"));
  return headers;

}




