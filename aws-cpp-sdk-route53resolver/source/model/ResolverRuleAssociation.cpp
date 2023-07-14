/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53resolver/model/ResolverRuleAssociation.h>
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

ResolverRuleAssociation::ResolverRuleAssociation() : 
    m_idHasBeenSet(false),
    m_resolverRuleIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_vPCIdHasBeenSet(false),
    m_status(ResolverRuleAssociationStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusMessageHasBeenSet(false)
{
}

ResolverRuleAssociation::ResolverRuleAssociation(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_resolverRuleIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_vPCIdHasBeenSet(false),
    m_status(ResolverRuleAssociationStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusMessageHasBeenSet(false)
{
  *this = jsonValue;
}

ResolverRuleAssociation& ResolverRuleAssociation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResolverRuleId"))
  {
    m_resolverRuleId = jsonValue.GetString("ResolverRuleId");

    m_resolverRuleIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VPCId"))
  {
    m_vPCId = jsonValue.GetString("VPCId");

    m_vPCIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = ResolverRuleAssociationStatusMapper::GetResolverRuleAssociationStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StatusMessage"))
  {
    m_statusMessage = jsonValue.GetString("StatusMessage");

    m_statusMessageHasBeenSet = true;
  }

  return *this;
}

JsonValue ResolverRuleAssociation::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_resolverRuleIdHasBeenSet)
  {
   payload.WithString("ResolverRuleId", m_resolverRuleId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_vPCIdHasBeenSet)
  {
   payload.WithString("VPCId", m_vPCId);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", ResolverRuleAssociationStatusMapper::GetNameForResolverRuleAssociationStatus(m_status));
  }

  if(m_statusMessageHasBeenSet)
  {
   payload.WithString("StatusMessage", m_statusMessage);

  }

  return payload;
}

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
