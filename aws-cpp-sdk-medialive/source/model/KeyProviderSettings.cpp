﻿/*
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

#include <aws/medialive/model/KeyProviderSettings.h>
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

KeyProviderSettings::KeyProviderSettings() : 
    m_staticKeySettingsHasBeenSet(false)
{
}

KeyProviderSettings::KeyProviderSettings(JsonView jsonValue) : 
    m_staticKeySettingsHasBeenSet(false)
{
  *this = jsonValue;
}

KeyProviderSettings& KeyProviderSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("staticKeySettings"))
  {
    m_staticKeySettings = jsonValue.GetObject("staticKeySettings");

    m_staticKeySettingsHasBeenSet = true;
  }

  return *this;
}

JsonValue KeyProviderSettings::Jsonize() const
{
  JsonValue payload;

  if(m_staticKeySettingsHasBeenSet)
  {
   payload.WithObject("staticKeySettings", m_staticKeySettings.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
