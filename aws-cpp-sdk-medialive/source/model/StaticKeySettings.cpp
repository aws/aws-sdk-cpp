/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/StaticKeySettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaLive
{
namespace Model
{

StaticKeySettings::StaticKeySettings() : 
    m_keyProviderServerHasBeenSet(false),
    m_staticKeyValueHasBeenSet(false)
{
}

StaticKeySettings::StaticKeySettings(JsonView jsonValue) : 
    m_keyProviderServerHasBeenSet(false),
    m_staticKeyValueHasBeenSet(false)
{
  *this = jsonValue;
}

StaticKeySettings& StaticKeySettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("keyProviderServer"))
  {
    m_keyProviderServer = jsonValue.GetObject("keyProviderServer");

    m_keyProviderServerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("staticKeyValue"))
  {
    m_staticKeyValue = jsonValue.GetString("staticKeyValue");

    m_staticKeyValueHasBeenSet = true;
  }

  return *this;
}

JsonValue StaticKeySettings::Jsonize() const
{
  JsonValue payload;

  if(m_keyProviderServerHasBeenSet)
  {
   payload.WithObject("keyProviderServer", m_keyProviderServer.Jsonize());

  }

  if(m_staticKeyValueHasBeenSet)
  {
   payload.WithString("staticKeyValue", m_staticKeyValue);

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
