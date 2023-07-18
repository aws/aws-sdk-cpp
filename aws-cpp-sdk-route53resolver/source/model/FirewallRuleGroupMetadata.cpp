/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53resolver/model/FirewallRuleGroupMetadata.h>
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

FirewallRuleGroupMetadata::FirewallRuleGroupMetadata() : 
    m_idHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_ownerIdHasBeenSet(false),
    m_creatorRequestIdHasBeenSet(false),
    m_shareStatus(ShareStatus::NOT_SET),
    m_shareStatusHasBeenSet(false)
{
}

FirewallRuleGroupMetadata::FirewallRuleGroupMetadata(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_ownerIdHasBeenSet(false),
    m_creatorRequestIdHasBeenSet(false),
    m_shareStatus(ShareStatus::NOT_SET),
    m_shareStatusHasBeenSet(false)
{
  *this = jsonValue;
}

FirewallRuleGroupMetadata& FirewallRuleGroupMetadata::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("OwnerId"))
  {
    m_ownerId = jsonValue.GetString("OwnerId");

    m_ownerIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatorRequestId"))
  {
    m_creatorRequestId = jsonValue.GetString("CreatorRequestId");

    m_creatorRequestIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ShareStatus"))
  {
    m_shareStatus = ShareStatusMapper::GetShareStatusForName(jsonValue.GetString("ShareStatus"));

    m_shareStatusHasBeenSet = true;
  }

  return *this;
}

JsonValue FirewallRuleGroupMetadata::Jsonize() const
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

  if(m_ownerIdHasBeenSet)
  {
   payload.WithString("OwnerId", m_ownerId);

  }

  if(m_creatorRequestIdHasBeenSet)
  {
   payload.WithString("CreatorRequestId", m_creatorRequestId);

  }

  if(m_shareStatusHasBeenSet)
  {
   payload.WithString("ShareStatus", ShareStatusMapper::GetNameForShareStatus(m_shareStatus));
  }

  return payload;
}

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
