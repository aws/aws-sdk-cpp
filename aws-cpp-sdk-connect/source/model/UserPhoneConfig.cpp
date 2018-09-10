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

#include <aws/connect/model/UserPhoneConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Connect
{
namespace Model
{

UserPhoneConfig::UserPhoneConfig() : 
    m_phoneType(PhoneType::NOT_SET),
    m_phoneTypeHasBeenSet(false),
    m_autoAccept(false),
    m_autoAcceptHasBeenSet(false),
    m_afterContactWorkTimeLimit(0),
    m_afterContactWorkTimeLimitHasBeenSet(false),
    m_deskPhoneNumberHasBeenSet(false)
{
}

UserPhoneConfig::UserPhoneConfig(JsonView jsonValue) : 
    m_phoneType(PhoneType::NOT_SET),
    m_phoneTypeHasBeenSet(false),
    m_autoAccept(false),
    m_autoAcceptHasBeenSet(false),
    m_afterContactWorkTimeLimit(0),
    m_afterContactWorkTimeLimitHasBeenSet(false),
    m_deskPhoneNumberHasBeenSet(false)
{
  *this = jsonValue;
}

UserPhoneConfig& UserPhoneConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PhoneType"))
  {
    m_phoneType = PhoneTypeMapper::GetPhoneTypeForName(jsonValue.GetString("PhoneType"));

    m_phoneTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AutoAccept"))
  {
    m_autoAccept = jsonValue.GetBool("AutoAccept");

    m_autoAcceptHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AfterContactWorkTimeLimit"))
  {
    m_afterContactWorkTimeLimit = jsonValue.GetInteger("AfterContactWorkTimeLimit");

    m_afterContactWorkTimeLimitHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeskPhoneNumber"))
  {
    m_deskPhoneNumber = jsonValue.GetString("DeskPhoneNumber");

    m_deskPhoneNumberHasBeenSet = true;
  }

  return *this;
}

JsonValue UserPhoneConfig::Jsonize() const
{
  JsonValue payload;

  if(m_phoneTypeHasBeenSet)
  {
   payload.WithString("PhoneType", PhoneTypeMapper::GetNameForPhoneType(m_phoneType));
  }

  if(m_autoAcceptHasBeenSet)
  {
   payload.WithBool("AutoAccept", m_autoAccept);

  }

  if(m_afterContactWorkTimeLimitHasBeenSet)
  {
   payload.WithInteger("AfterContactWorkTimeLimit", m_afterContactWorkTimeLimit);

  }

  if(m_deskPhoneNumberHasBeenSet)
  {
   payload.WithString("DeskPhoneNumber", m_deskPhoneNumber);

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
