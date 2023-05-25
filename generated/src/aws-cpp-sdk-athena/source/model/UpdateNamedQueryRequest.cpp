/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/athena/model/UpdateNamedQueryRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Athena::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateNamedQueryRequest::UpdateNamedQueryRequest() : 
    m_namedQueryIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_queryStringHasBeenSet(false)
{
}

Aws::String UpdateNamedQueryRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_namedQueryIdHasBeenSet)
  {
   payload.WithString("NamedQueryId", m_namedQueryId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_queryStringHasBeenSet)
  {
   payload.WithString("QueryString", m_queryString);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateNamedQueryRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonAthena.UpdateNamedQuery"));
  return headers;

}




