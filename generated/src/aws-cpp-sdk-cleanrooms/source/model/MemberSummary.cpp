/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/MemberSummary.h>
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

MemberSummary::MemberSummary() : 
    m_accountIdHasBeenSet(false),
    m_status(MemberStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_abilitiesHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_membershipIdHasBeenSet(false),
    m_membershipArnHasBeenSet(false),
    m_paymentConfigurationHasBeenSet(false)
{
}

MemberSummary::MemberSummary(JsonView jsonValue) : 
    m_accountIdHasBeenSet(false),
    m_status(MemberStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_abilitiesHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_membershipIdHasBeenSet(false),
    m_membershipArnHasBeenSet(false),
    m_paymentConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

MemberSummary& MemberSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("accountId"))
  {
    m_accountId = jsonValue.GetString("accountId");

    m_accountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = MemberStatusMapper::GetMemberStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("displayName"))
  {
    m_displayName = jsonValue.GetString("displayName");

    m_displayNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("abilities"))
  {
    Aws::Utils::Array<JsonView> abilitiesJsonList = jsonValue.GetArray("abilities");
    for(unsigned abilitiesIndex = 0; abilitiesIndex < abilitiesJsonList.GetLength(); ++abilitiesIndex)
    {
      m_abilities.push_back(MemberAbilityMapper::GetMemberAbilityForName(abilitiesJsonList[abilitiesIndex].AsString()));
    }
    m_abilitiesHasBeenSet = true;
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

  if(jsonValue.ValueExists("membershipId"))
  {
    m_membershipId = jsonValue.GetString("membershipId");

    m_membershipIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("membershipArn"))
  {
    m_membershipArn = jsonValue.GetString("membershipArn");

    m_membershipArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("paymentConfiguration"))
  {
    m_paymentConfiguration = jsonValue.GetObject("paymentConfiguration");

    m_paymentConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue MemberSummary::Jsonize() const
{
  JsonValue payload;

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("accountId", m_accountId);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", MemberStatusMapper::GetNameForMemberStatus(m_status));
  }

  if(m_displayNameHasBeenSet)
  {
   payload.WithString("displayName", m_displayName);

  }

  if(m_abilitiesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> abilitiesJsonList(m_abilities.size());
   for(unsigned abilitiesIndex = 0; abilitiesIndex < abilitiesJsonList.GetLength(); ++abilitiesIndex)
   {
     abilitiesJsonList[abilitiesIndex].AsString(MemberAbilityMapper::GetNameForMemberAbility(m_abilities[abilitiesIndex]));
   }
   payload.WithArray("abilities", std::move(abilitiesJsonList));

  }

  if(m_createTimeHasBeenSet)
  {
   payload.WithDouble("createTime", m_createTime.SecondsWithMSPrecision());
  }

  if(m_updateTimeHasBeenSet)
  {
   payload.WithDouble("updateTime", m_updateTime.SecondsWithMSPrecision());
  }

  if(m_membershipIdHasBeenSet)
  {
   payload.WithString("membershipId", m_membershipId);

  }

  if(m_membershipArnHasBeenSet)
  {
   payload.WithString("membershipArn", m_membershipArn);

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
