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

ConditionalForwarder::ConditionalForwarder() : 
    m_remoteDomainNameHasBeenSet(false),
    m_dnsIpAddrsHasBeenSet(false),
    m_replicationScope(ReplicationScope::NOT_SET),
    m_replicationScopeHasBeenSet(false)
{
}

ConditionalForwarder::ConditionalForwarder(JsonView jsonValue) : 
    m_remoteDomainNameHasBeenSet(false),
    m_dnsIpAddrsHasBeenSet(false),
    m_replicationScope(ReplicationScope::NOT_SET),
    m_replicationScopeHasBeenSet(false)
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

  if(m_replicationScopeHasBeenSet)
  {
   payload.WithString("ReplicationScope", ReplicationScopeMapper::GetNameForReplicationScope(m_replicationScope));
  }

  return payload;
}

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
