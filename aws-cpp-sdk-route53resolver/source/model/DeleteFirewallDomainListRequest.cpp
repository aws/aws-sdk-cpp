/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53resolver/model/DeleteFirewallDomainListRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Route53Resolver::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteFirewallDomainListRequest::DeleteFirewallDomainListRequest() : 
    m_firewallDomainListIdHasBeenSet(false)
{
}

Aws::String DeleteFirewallDomainListRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_firewallDomainListIdHasBeenSet)
  {
   payload.WithString("FirewallDomainListId", m_firewallDomainListId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteFirewallDomainListRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Route53Resolver.DeleteFirewallDomainList"));
  return headers;

}




