/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53resolver/model/ImportFirewallDomainsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Route53Resolver::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ImportFirewallDomainsRequest::ImportFirewallDomainsRequest() : 
    m_firewallDomainListIdHasBeenSet(false),
    m_operation(FirewallDomainImportOperation::NOT_SET),
    m_operationHasBeenSet(false),
    m_domainFileUrlHasBeenSet(false)
{
}

Aws::String ImportFirewallDomainsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_firewallDomainListIdHasBeenSet)
  {
   payload.WithString("FirewallDomainListId", m_firewallDomainListId);

  }

  if(m_operationHasBeenSet)
  {
   payload.WithString("Operation", FirewallDomainImportOperationMapper::GetNameForFirewallDomainImportOperation(m_operation));
  }

  if(m_domainFileUrlHasBeenSet)
  {
   payload.WithString("DomainFileUrl", m_domainFileUrl);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ImportFirewallDomainsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Route53Resolver.ImportFirewallDomains"));
  return headers;

}




