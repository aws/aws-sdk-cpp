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

StaticKeySettings::StaticKeySettings(const JsonValue& jsonValue) : 
    m_keyProviderServerHasBeenSet(false),
    m_staticKeyValueHasBeenSet(false)
{
  *this = jsonValue;
}

StaticKeySettings& StaticKeySettings::operator =(const JsonValue& jsonValue)
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
