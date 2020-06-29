/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53resolver/model/DeleteResolverRuleRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Route53Resolver::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteResolverRuleRequest::DeleteResolverRuleRequest() : 
    m_resolverRuleIdHasBeenSet(false)
{
}

Aws::String DeleteResolverRuleRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_resolverRuleIdHasBeenSet)
  {
   payload.WithString("ResolverRuleId", m_resolverRuleId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteResolverRuleRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Route53Resolver.DeleteResolverRule"));
  return headers;

}




