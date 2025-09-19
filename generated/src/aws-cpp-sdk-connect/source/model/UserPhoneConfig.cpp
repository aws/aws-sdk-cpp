/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

UserPhoneConfig::UserPhoneConfig(JsonView jsonValue)
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
  if(jsonValue.ValueExists("PersistentConnection"))
  {
    m_persistentConnection = jsonValue.GetBool("PersistentConnection");
    m_persistentConnectionHasBeenSet = true;
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

  if(m_persistentConnectionHasBeenSet)
  {
   payload.WithBool("PersistentConnection", m_persistentConnection);

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
