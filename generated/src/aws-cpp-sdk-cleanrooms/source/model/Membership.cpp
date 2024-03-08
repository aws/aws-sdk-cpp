/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/Membership.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CleanRooms
{
namespace Model
{

Membership::Membership() : 
    m_idHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_collaborationArnHasBeenSet(false),
    m_collaborationIdHasBeenSet(false),
    m_collaborationCreatorAccountIdHasBeenSet(false),
    m_collaborationCreatorDisplayNameHasBeenSet(false),
    m_collaborationNameHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_status(MembershipStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_memberAbilitiesHasBeenSet(false),
    m_queryLogStatus(MembershipQueryLogStatus::NOT_SET),
    m_queryLogStatusHasBeenSet(false),
    m_defaultResultConfigurationHasBeenSet(false),
    m_paymentConfigurationHasBeenSet(false)
{
}

Membership::Membership(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_collaborationArnHasBeenSet(false),
    m_collaborationIdHasBeenSet(false),
    m_collaborationCreatorAccountIdHasBeenSet(false),
    m_collaborationCreatorDisplayNameHasBeenSet(false),
    m_collaborationNameHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_status(MembershipStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_memberAbilitiesHasBeenSet(false),
    m_queryLogStatus(MembershipQueryLogStatus::NOT_SET),
    m_queryLogStatusHasBeenSet(false),
    m_defaultResultConfigurationHasBeenSet(false),
    m_paymentConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

Membership& Membership::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("collaborationArn"))
  {
    m_collaborationArn = jsonValue.GetString("collaborationArn");

    m_collaborationArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("collaborationId"))
  {
    m_collaborationId = jsonValue.GetString("collaborationId");

    m_collaborationIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("collaborationCreatorAccountId"))
  {
    m_collaborationCreatorAccountId = jsonValue.GetString("collaborationCreatorAccountId");

    m_collaborationCreatorAccountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("collaborationCreatorDisplayName"))
  {
    m_collaborationCreatorDisplayName = jsonValue.GetString("collaborationCreatorDisplayName");

    m_collaborationCreatorDisplayNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("collaborationName"))
  {
    m_collaborationName = jsonValue.GetString("collaborationName");

    m_collaborationNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createTime"))
  {
    m_createTime = jsonValue.GetDouble("createTime");

    m_createTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("updateTime"))
  {
    m_updateTime = jsonValue.GetDouble("updateTime");

    m_updateTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = MembershipStatusMapper::GetMembershipStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("memberAbilities"))
  {
    Aws::Utils::Array<JsonView> memberAbilitiesJsonList = jsonValue.GetArray("memberAbilities");
    for(unsigned memberAbilitiesIndex = 0; memberAbilitiesIndex < memberAbilitiesJsonList.GetLength(); ++memberAbilitiesIndex)
    {
      m_memberAbilities.push_back(MemberAbilityMapper::GetMemberAbilityForName(memberAbilitiesJsonList[memberAbilitiesIndex].AsString()));
    }
    m_memberAbilitiesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("queryLogStatus"))
  {
    m_queryLogStatus = MembershipQueryLogStatusMapper::GetMembershipQueryLogStatusForName(jsonValue.GetString("queryLogStatus"));

    m_queryLogStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("defaultResultConfiguration"))
  {
    m_defaultResultConfiguration = jsonValue.GetObject("defaultResultConfiguration");

    m_defaultResultConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("paymentConfiguration"))
  {
    m_paymentConfiguration = jsonValue.GetObject("paymentConfiguration");

    m_paymentConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue Membership::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_collaborationArnHasBeenSet)
  {
   payload.WithString("collaborationArn", m_collaborationArn);

  }

  if(m_collaborationIdHasBeenSet)
  {
   payload.WithString("collaborationId", m_collaborationId);

  }

  if(m_collaborationCreatorAccountIdHasBeenSet)
  {
   payload.WithString("collaborationCreatorAccountId", m_collaborationCreatorAccountId);

  }

  if(m_collaborationCreatorDisplayNameHasBeenSet)
  {
   payload.WithString("collaborationCreatorDisplayName", m_collaborationCreatorDisplayName);

  }

  if(m_collaborationNameHasBeenSet)
  {
   payload.WithString("collaborationName", m_collaborationName);

  }

  if(m_createTimeHasBeenSet)
  {
   payload.WithDouble("createTime", m_createTime.SecondsWithMSPrecision());
  }

  if(m_updateTimeHasBeenSet)
  {
   payload.WithDouble("updateTime", m_updateTime.SecondsWithMSPrecision());
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", MembershipStatusMapper::GetNameForMembershipStatus(m_status));
  }

  if(m_memberAbilitiesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> memberAbilitiesJsonList(m_memberAbilities.size());
   for(unsigned memberAbilitiesIndex = 0; memberAbilitiesIndex < memberAbilitiesJsonList.GetLength(); ++memberAbilitiesIndex)
   {
     memberAbilitiesJsonList[memberAbilitiesIndex].AsString(MemberAbilityMapper::GetNameForMemberAbility(m_memberAbilities[memberAbilitiesIndex]));
   }
   payload.WithArray("memberAbilities", std::move(memberAbilitiesJsonList));

  }

  if(m_queryLogStatusHasBeenSet)
  {
   payload.WithString("queryLogStatus", MembershipQueryLogStatusMapper::GetNameForMembershipQueryLogStatus(m_queryLogStatus));
  }

  if(m_defaultResultConfigurationHasBeenSet)
  {
   payload.WithObject("defaultResultConfiguration", m_defaultResultConfiguration.Jsonize());

  }

  if(m_paymentConfigurationHasBeenSet)
  {
   payload.WithObject("paymentConfiguration", m_paymentConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
