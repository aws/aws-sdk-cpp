/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/MLMemberAbilities.h>
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

MLMemberAbilities::MLMemberAbilities(JsonView jsonValue)
{
  *this = jsonValue;
}

MLMemberAbilities& MLMemberAbilities::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("customMLMemberAbilities"))
  {
    Aws::Utils::Array<JsonView> customMLMemberAbilitiesJsonList = jsonValue.GetArray("customMLMemberAbilities");
    for(unsigned customMLMemberAbilitiesIndex = 0; customMLMemberAbilitiesIndex < customMLMemberAbilitiesJsonList.GetLength(); ++customMLMemberAbilitiesIndex)
    {
      m_customMLMemberAbilities.push_back(CustomMLMemberAbilityMapper::GetCustomMLMemberAbilityForName(customMLMemberAbilitiesJsonList[customMLMemberAbilitiesIndex].AsString()));
    }
    m_customMLMemberAbilitiesHasBeenSet = true;
  }
  return *this;
}

JsonValue MLMemberAbilities::Jsonize() const
{
  JsonValue payload;

  if(m_customMLMemberAbilitiesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> customMLMemberAbilitiesJsonList(m_customMLMemberAbilities.size());
   for(unsigned customMLMemberAbilitiesIndex = 0; customMLMemberAbilitiesIndex < customMLMemberAbilitiesJsonList.GetLength(); ++customMLMemberAbilitiesIndex)
   {
     customMLMemberAbilitiesJsonList[customMLMemberAbilitiesIndex].AsString(CustomMLMemberAbilityMapper::GetNameForCustomMLMemberAbility(m_customMLMemberAbilities[customMLMemberAbilitiesIndex]));
   }
   payload.WithArray("customMLMemberAbilities", std::move(customMLMemberAbilitiesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
