/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ds/model/ConditionalForwarder.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DirectoryService
{
namespace Model
{

ConditionalForwarder::ConditionalForwarder(JsonView jsonValue)
{
  *this = jsonValue;
}

ConditionalForwarder& ConditionalForwarder::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RemoteDomainName"))
  {
    m_remoteDomainName = jsonValue.GetString("RemoteDomainName");
    m_remoteDomainNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DnsIpAddrs"))
  {
    Aws::Utils::Array<JsonView> dnsIpAddrsJsonList = jsonValue.GetArray("DnsIpAddrs");
    for(unsigned dnsIpAddrsIndex = 0; dnsIpAddrsIndex < dnsIpAddrsJsonList.GetLength(); ++dnsIpAddrsIndex)
    {
      m_dnsIpAddrs.push_back(dnsIpAddrsJsonList[dnsIpAddrsIndex].AsString());
    }
    m_dnsIpAddrsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DnsIpv6Addrs"))
  {
    Aws::Utils::Array<JsonView> dnsIpv6AddrsJsonList = jsonValue.GetArray("DnsIpv6Addrs");
    for(unsigned dnsIpv6AddrsIndex = 0; dnsIpv6AddrsIndex < dnsIpv6AddrsJsonList.GetLength(); ++dnsIpv6AddrsIndex)
    {
      m_dnsIpv6Addrs.push_back(dnsIpv6AddrsJsonList[dnsIpv6AddrsIndex].AsString());
    }
    m_dnsIpv6AddrsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ReplicationScope"))
  {
    m_replicationScope = ReplicationScopeMapper::GetReplicationScopeForName(jsonValue.GetString("ReplicationScope"));
    m_replicationScopeHasBeenSet = true;
  }
  return *this;
}

JsonValue ConditionalForwarder::Jsonize() const
{
  JsonValue payload;

  if(m_remoteDomainNameHasBeenSet)
  {
   payload.WithString("RemoteDomainName", m_remoteDomainName);

  }

  if(m_dnsIpAddrsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> dnsIpAddrsJsonList(m_dnsIpAddrs.size());
   for(unsigned dnsIpAddrsIndex = 0; dnsIpAddrsIndex < dnsIpAddrsJsonList.GetLength(); ++dnsIpAddrsIndex)
   {
     dnsIpAddrsJsonList[dnsIpAddrsIndex].AsString(m_dnsIpAddrs[dnsIpAddrsIndex]);
   }
   payload.WithArray("DnsIpAddrs", std::move(dnsIpAddrsJsonList));

  }

  if(m_dnsIpv6AddrsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> dnsIpv6AddrsJsonList(m_dnsIpv6Addrs.size());
   for(unsigned dnsIpv6AddrsIndex = 0; dnsIpv6AddrsIndex < dnsIpv6AddrsJsonList.GetLength(); ++dnsIpv6AddrsIndex)
   {
     dnsIpv6AddrsJsonList[dnsIpv6AddrsIndex].AsString(m_dnsIpv6Addrs[dnsIpv6AddrsIndex]);
   }
   payload.WithArray("DnsIpv6Addrs", std::move(dnsIpv6AddrsJsonList));

  }

  if(m_replicationScopeHasBeenSet)
  {
   payload.WithString("ReplicationScope", ReplicationScopeMapper::GetNameForReplicationScope(m_replicationScope));
  }

  return payload;
}

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
