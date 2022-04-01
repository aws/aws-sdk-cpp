/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53resolver/model/GetResolverRuleAssociationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Route53Resolver::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetResolverRuleAssociationRequest::GetResolverRuleAssociationRequest() : 
    m_resolverRuleAssociationIdHasBeenSet(false)
{
}

Aws::String GetResolverRuleAssociationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_resolverRuleAssociationIdHasBeenSet)
  {
   payload.WithString("ResolverRuleAssociationId", m_resolverRuleAssociationId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetResolverRuleAssociationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Route53Resolver.GetResolverRuleAssociation"));
  return headers;

}




