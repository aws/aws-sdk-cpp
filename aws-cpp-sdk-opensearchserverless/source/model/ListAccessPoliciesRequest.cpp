/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearchserverless/model/ListAccessPoliciesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::OpenSearchServerless::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListAccessPoliciesRequest::ListAccessPoliciesRequest() : 
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_resourceHasBeenSet(false),
    m_type(AccessPolicyType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

Aws::String ListAccessPoliciesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("maxResults", m_maxResults);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("nextToken", m_nextToken);

  }

  if(m_resourceHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> resourceJsonList(m_resource.size());
   for(unsigned resourceIndex = 0; resourceIndex < resourceJsonList.GetLength(); ++resourceIndex)
   {
     resourceJsonList[resourceIndex].AsString(m_resource[resourceIndex]);
   }
   payload.WithArray("resource", std::move(resourceJsonList));

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", AccessPolicyTypeMapper::GetNameForAccessPolicyType(m_type));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListAccessPoliciesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "OpenSearchServerless.ListAccessPolicies"));
  return headers;

}




