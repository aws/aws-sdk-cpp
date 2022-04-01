/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53resolver/model/GetResolverQueryLogConfigAssociationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Route53Resolver::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetResolverQueryLogConfigAssociationRequest::GetResolverQueryLogConfigAssociationRequest() : 
    m_resolverQueryLogConfigAssociationIdHasBeenSet(false)
{
}

Aws::String GetResolverQueryLogConfigAssociationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_resolverQueryLogConfigAssociationIdHasBeenSet)
  {
   payload.WithString("ResolverQueryLogConfigAssociationId", m_resolverQueryLogConfigAssociationId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetResolverQueryLogConfigAssociationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Route53Resolver.GetResolverQueryLogConfigAssociation"));
  return headers;

}




