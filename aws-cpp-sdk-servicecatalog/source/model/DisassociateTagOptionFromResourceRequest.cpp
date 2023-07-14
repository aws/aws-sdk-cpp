/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicecatalog/model/DisassociateTagOptionFromResourceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ServiceCatalog::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DisassociateTagOptionFromResourceRequest::DisassociateTagOptionFromResourceRequest() : 
    m_resourceIdHasBeenSet(false),
    m_tagOptionIdHasBeenSet(false)
{
}

Aws::String DisassociateTagOptionFromResourceRequest::SerializePayload() const
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

Aws::Http::HeaderValueCollection DisassociateTagOptionFromResourceRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWS242ServiceCatalogService.DisassociateTagOptionFromResource"));
  return headers;

}




