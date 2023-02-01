/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/clouddirectory/model/CreateTypedLinkFacetRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CloudDirectory::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateTypedLinkFacetRequest::CreateTypedLinkFacetRequest() : 
    m_schemaArnHasBeenSet(false),
    m_facetHasBeenSet(false)
{
}

Aws::String CreateTypedLinkFacetRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_facetHasBeenSet)
  {
   payload.WithObject("Facet", m_facet.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateTypedLinkFacetRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if(m_schemaArnHasBeenSet)
  {
    ss << m_schemaArn;
    headers.emplace("x-amz-data-partition",  ss.str());
    ss.str("");
  }

  return headers;

}




