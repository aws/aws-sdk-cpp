/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/SessionKeysAbpV1_0_x.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTWireless
{
namespace Model
{

SessionKeysAbpV1_0_x::SessionKeysAbpV1_0_x() : 
    m_nwkSKeyHasBeenSet(false),
    m_appSKeyHasBeenSet(false)
{
}

SessionKeysAbpV1_0_x::SessionKeysAbpV1_0_x(JsonView jsonValue) : 
    m_nwkSKeyHasBeenSet(false),
    m_appSKeyHasBeenSet(false)
{
  *this = jsonValue;
}

SessionKeysAbpV1_0_x& SessionKeysAbpV1_0_x::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("NwkSKey"))
  {
    m_nwkSKey = jsonValue.GetString("NwkSKey");

    m_nwkSKeyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AppSKey"))
  {
    m_appSKey = jsonValue.GetString("AppSKey");

    m_appSKeyHasBeenSet = true;
  }

  return *this;
}

JsonValue SessionKeysAbpV1_0_x::Jsonize() const
{
  JsonValue payload;

  if(m_nwkSKeyHasBeenSet)
  {
   payload.WithString("NwkSKey", m_nwkSKey);

  }

  if(m_appSKeyHasBeenSet)
  {
   payload.WithString("AppSKey", m_appSKey);

  }

  return payload;
}

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
