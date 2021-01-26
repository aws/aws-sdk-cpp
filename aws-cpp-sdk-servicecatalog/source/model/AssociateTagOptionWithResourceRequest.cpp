/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicecatalog/model/AssociateTagOptionWithResourceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ServiceCatalog::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

AssociateTagOptionWithResourceRequest::AssociateTagOptionWithResourceRequest() : 
    m_resourceIdHasBeenSet(false),
    m_tagOptionIdHasBeenSet(false)
{
}

Aws::String AssociateTagOptionWithResourceRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_resourceIdHasBeenSet)
  {
   payload.WithString("ResourceId", m_resourceId);

  }

  if(m_tagOptionIdHasBeenSet)
  {
   payload.WithString("TagOptionId", m_tagOptionId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection AssociateTagOptionWithResourceRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWS242ServiceCatalogService.AssociateTagOptionWithResource"));
  return headers;

}




