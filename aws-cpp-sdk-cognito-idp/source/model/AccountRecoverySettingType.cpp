/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
    Array<JsonView> recoveryMechanismsJsonList = jsonValue.GetArray("RecoveryMechanisms");
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
   Array<JsonValue> recoveryMechanismsJsonList(m_recoveryMechanisms.size());
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
