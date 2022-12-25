/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/AccountRecoverySettingType.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CognitoIdentityProvider
{
namespace Model
{

AccountRecoverySettingType::AccountRecoverySettingType() : 
    m_recoveryMechanismsHasBeenSet(false)
{
}

AccountRecoverySettingType::AccountRecoverySettingType(JsonView jsonValue) : 
    m_recoveryMechanismsHasBeenSet(false)
{
  *this = jsonValue;
}

AccountRecoverySettingType& AccountRecoverySettingType::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RecoveryMechanisms"))
  {
    Aws::Utils::Array<JsonView> recoveryMechanismsJsonList = jsonValue.GetArray("RecoveryMechanisms");
    for(unsigned recoveryMechanismsIndex = 0; recoveryMechanismsIndex < recoveryMechanismsJsonList.GetLength(); ++recoveryMechanismsIndex)
    {
      m_recoveryMechanisms.push_back(recoveryMechanismsJsonList[recoveryMechanismsIndex].AsObject());
    }
    m_recoveryMechanismsHasBeenSet = true;
  }

  return *this;
}

JsonValue AccountRecoverySettingType::Jsonize() const
{
  JsonValue payload;

  if(m_recoveryMechanismsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> recoveryMechanismsJsonList(m_recoveryMechanisms.size());
   for(unsigned recoveryMechanismsIndex = 0; recoveryMechanismsIndex < recoveryMechanismsJsonList.GetLength(); ++recoveryMechanismsIndex)
   {
     recoveryMechanismsJsonList[recoveryMechanismsIndex].AsObject(m_recoveryMechanisms[recoveryMechanismsIndex].Jsonize());
   }
   payload.WithArray("RecoveryMechanisms", std::move(recoveryMechanismsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
