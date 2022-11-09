/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53resolver/model/ResolverRule.h>
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

ResolverRule::ResolverRule() : 
    m_idHasBeenSet(false),
    m_creatorRequestIdHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_domainNameHasBeenSet(false),
    m_status(ResolverRuleStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_ruleType(RuleTypeOption::NOT_SET),
    m_ruleTypeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_targetIpsHasBeenSet(false),
    m_resolverEndpointIdHasBeenSet(false),
    m_ownerIdHasBeenSet(false),
    m_shareStatus(ShareStatus::NOT_SET),
    m_shareStatusHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_modificationTimeHasBeenSet(false)
{
}

ResolverRule::ResolverRule(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_creatorRequestIdHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_domainNameHasBeenSet(false),
    m_status(ResolverRuleStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_ruleType(RuleTypeOption::NOT_SET),
    m_ruleTypeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_targetIpsHasBeenSet(false),
    m_resolverEndpointIdHasBeenSet(false),
    m_ownerIdHasBeenSet(false),
    m_shareStatus(ShareStatus::NOT_SET),
    m_shareStatusHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_modificationTimeHasBeenSet(false)
{
  *this = jsonValue;
}

ResolverRule& ResolverRule::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatorRequestId"))
  {
    m_creatorRequestId = jsonValue.GetString("CreatorRequestId");

    m_creatorRequestIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DomainName"))
  {
    m_domainName = jsonValue.GetString("DomainName");

    m_domainNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = ResolverRuleStatusMapper::GetResolverRuleStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StatusMessage"))
  {
    m_statusMessage = jsonValue.GetString("StatusMessage");

    m_statusMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RuleType"))
  {
    m_ruleType = RuleTypeOptionMapper::GetRuleTypeOptionForName(jsonValue.GetString("RuleType"));

    m_ruleTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TargetIps"))
  {
    Aws::Utils::Array<JsonView> targetIpsJsonList = jsonValue.GetArray("TargetIps");
    for(unsigned targetIpsIndex = 0; targetIpsIndex < targetIpsJsonList.GetLength(); ++targetIpsIndex)
    {
      m_targetIps.push_back(targetIpsJsonList[targetIpsIndex].AsObject());
    }
    m_targetIpsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResolverEndpointId"))
  {
    m_resolverEndpointId = jsonValue.GetString("ResolverEndpointId");

    m_resolverEndpointIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OwnerId"))
  {
    m_ownerId = jsonValue.GetString("OwnerId");

    m_ownerIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ShareStatus"))
  {
    m_shareStatus = ShareStatusMapper::GetShareStatusForName(jsonValue.GetString("ShareStatus"));

    m_shareStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetString("CreationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ModificationTime"))
  {
    m_modificationTime = jsonValue.GetString("ModificationTime");

    m_modificationTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue ResolverRule::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_creatorRequestIdHasBeenSet)
  {
   payload.WithString("CreatorRequestId", m_creatorRequestId);

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_domainNameHasBeenSet)
  {
   payload.WithString("DomainName", m_domainName);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", ResolverRuleStatusMapper::GetNameForResolverRuleStatus(m_status));
  }

  if(m_statusMessageHasBeenSet)
  {
   payload.WithString("StatusMessage", m_statusMessage);

  }

  if(m_ruleTypeHasBeenSet)
  {
   payload.WithString("RuleType", RuleTypeOptionMapper::GetNameForRuleTypeOption(m_ruleType));
  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_targetIpsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> targetIpsJsonList(m_targetIps.size());
   for(unsigned targetIpsIndex = 0; targetIpsIndex < targetIpsJsonList.GetLength(); ++targetIpsIndex)
   {
     targetIpsJsonList[targetIpsIndex].AsObject(m_targetIps[targetIpsIndex].Jsonize());
   }
   payload.WithArray("TargetIps", std::move(targetIpsJsonList));

  }

  if(m_resolverEndpointIdHasBeenSet)
  {
   payload.WithString("ResolverEndpointId", m_resolverEndpointId);

  }

  if(m_ownerIdHasBeenSet)
  {
   payload.WithString("OwnerId", m_ownerId);

  }

  if(m_shareStatusHasBeenSet)
  {
   payload.WithString("ShareStatus", ShareStatusMapper::GetNameForShareStatus(m_shareStatus));
  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithString("CreationTime", m_creationTime);

  }

  if(m_modificationTimeHasBeenSet)
  {
   payload.WithString("ModificationTime", m_modificationTime);

  }

  return payload;
}

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
