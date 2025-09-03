/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/MemberChangeSpecification.h>
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

MemberChangeSpecification::MemberChangeSpecification(JsonView jsonValue)
{
  *this = jsonValue;
}

MemberChangeSpecification& MemberChangeSpecification::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("accountId"))
  {
    m_accountId = jsonValue.GetString("accountId");
    m_accountIdHasBeenSet = true;
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
  if(jsonValue.ValueExists("displayName"))
  {
    m_displayName = jsonValue.GetString("displayName");
    m_displayNameHasBeenSet = true;
  }
  return *this;
}

JsonValue MemberChangeSpecification::Jsonize() const
{
  JsonValue payload;

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("accountId", m_accountId);

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

  if(m_displayNameHasBeenSet)
  {
   payload.WithString("displayName", m_displayName);

  }

  return payload;
}

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
