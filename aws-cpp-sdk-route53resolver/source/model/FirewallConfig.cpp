/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53resolver/model/FirewallConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Route53Resolver
{
namespace Model
{

FirewallConfig::FirewallConfig() : 
    m_idHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_ownerIdHasBeenSet(false),
    m_firewallFailOpen(FirewallFailOpenStatus::NOT_SET),
    m_firewallFailOpenHasBeenSet(false)
{
}

FirewallConfig::FirewallConfig(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_ownerIdHasBeenSet(false),
    m_firewallFailOpen(FirewallFailOpenStatus::NOT_SET),
    m_firewallFailOpenHasBeenSet(false)
{
  *this = jsonValue;
}

FirewallConfig& FirewallConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceId"))
  {
    m_resourceId = jsonValue.GetString("ResourceId");

    m_resourceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OwnerId"))
  {
    m_ownerId = jsonValue.GetString("OwnerId");

    m_ownerIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FirewallFailOpen"))
  {
    m_firewallFailOpen = FirewallFailOpenStatusMapper::GetFirewallFailOpenStatusForName(jsonValue.GetString("FirewallFailOpen"));

    m_firewallFailOpenHasBeenSet = true;
  }

  return *this;
}

JsonValue FirewallConfig::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_resourceIdHasBeenSet)
  {
   payload.WithString("ResourceId", m_resourceId);

  }

  if(m_ownerIdHasBeenSet)
  {
   payload.WithString("OwnerId", m_ownerId);

  }

  if(m_firewallFailOpenHasBeenSet)
  {
   payload.WithString("FirewallFailOpen", FirewallFailOpenStatusMapper::GetNameForFirewallFailOpenStatus(m_firewallFailOpen));
  }

  return payload;
}

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
