/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/SessionKeysAbpV1_1.h>
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

SessionKeysAbpV1_1::SessionKeysAbpV1_1() : 
    m_fNwkSIntKeyHasBeenSet(false),
    m_sNwkSIntKeyHasBeenSet(false),
    m_nwkSEncKeyHasBeenSet(false),
    m_appSKeyHasBeenSet(false)
{
}

SessionKeysAbpV1_1::SessionKeysAbpV1_1(JsonView jsonValue) : 
    m_fNwkSIntKeyHasBeenSet(false),
    m_sNwkSIntKeyHasBeenSet(false),
    m_nwkSEncKeyHasBeenSet(false),
    m_appSKeyHasBeenSet(false)
{
  *this = jsonValue;
}

SessionKeysAbpV1_1& SessionKeysAbpV1_1::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FNwkSIntKey"))
  {
    m_fNwkSIntKey = jsonValue.GetString("FNwkSIntKey");

    m_fNwkSIntKeyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SNwkSIntKey"))
  {
    m_sNwkSIntKey = jsonValue.GetString("SNwkSIntKey");

    m_sNwkSIntKeyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NwkSEncKey"))
  {
    m_nwkSEncKey = jsonValue.GetString("NwkSEncKey");

    m_nwkSEncKeyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AppSKey"))
  {
    m_appSKey = jsonValue.GetString("AppSKey");

    m_appSKeyHasBeenSet = true;
  }

  return *this;
}

JsonValue SessionKeysAbpV1_1::Jsonize() const
{
  JsonValue payload;

  if(m_fNwkSIntKeyHasBeenSet)
  {
   payload.WithString("FNwkSIntKey", m_fNwkSIntKey);

  }

  if(m_sNwkSIntKeyHasBeenSet)
  {
   payload.WithString("SNwkSIntKey", m_sNwkSIntKey);

  }

  if(m_nwkSEncKeyHasBeenSet)
  {
   payload.WithString("NwkSEncKey", m_nwkSEncKey);

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
