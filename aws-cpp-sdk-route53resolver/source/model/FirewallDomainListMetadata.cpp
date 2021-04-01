/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53resolver/model/FirewallDomainListMetadata.h>
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

FirewallDomainListMetadata::FirewallDomainListMetadata() : 
    m_idHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_creatorRequestIdHasBeenSet(false),
    m_managedOwnerNameHasBeenSet(false)
{
}

FirewallDomainListMetadata::FirewallDomainListMetadata(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_creatorRequestIdHasBeenSet(false),
    m_managedOwnerNameHasBeenSet(false)
{
  *this = jsonValue;
}

FirewallDomainListMetadata& FirewallDomainListMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatorRequestId"))
  {
    m_creatorRequestId = jsonValue.GetString("CreatorRequestId");

    m_creatorRequestIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ManagedOwnerName"))
  {
    m_managedOwnerName = jsonValue.GetString("ManagedOwnerName");

    m_managedOwnerNameHasBeenSet = true;
  }

  return *this;
}

JsonValue FirewallDomainListMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_creatorRequestIdHasBeenSet)
  {
   payload.WithString("CreatorRequestId", m_creatorRequestId);

  }

  if(m_managedOwnerNameHasBeenSet)
  {
   payload.WithString("ManagedOwnerName", m_managedOwnerName);

  }

  return payload;
}

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
