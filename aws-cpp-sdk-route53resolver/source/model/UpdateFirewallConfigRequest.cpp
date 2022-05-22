/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53resolver/model/UpdateFirewallConfigRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Route53Resolver::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateFirewallConfigRequest::UpdateFirewallConfigRequest() : 
    m_resourceIdHasBeenSet(false),
    m_firewallFailOpen(FirewallFailOpenStatus::NOT_SET),
    m_firewallFailOpenHasBeenSet(false)
{
}

Aws::String UpdateFirewallConfigRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_resourceIdHasBeenSet)
  {
   payload.WithString("ResourceId", m_resourceId);

  }

  if(m_firewallFailOpenHasBeenSet)
  {
   payload.WithString("FirewallFailOpen", FirewallFailOpenStatusMapper::GetNameForFirewallFailOpenStatus(m_firewallFailOpen));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateFirewallConfigRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Route53Resolver.UpdateFirewallConfig"));
  return headers;

}




