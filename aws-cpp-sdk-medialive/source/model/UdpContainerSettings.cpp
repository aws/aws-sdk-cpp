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

#include <aws/medialive/model/UdpContainerSettings.h>
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

UdpContainerSettings::UdpContainerSettings() : 
    m_m2tsSettingsHasBeenSet(false)
{
}

UdpContainerSettings::UdpContainerSettings(const JsonValue& jsonValue) : 
    m_m2tsSettingsHasBeenSet(false)
{
  *this = jsonValue;
}

UdpContainerSettings& UdpContainerSettings::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("m2tsSettings"))
  {
    m_m2tsSettings = jsonValue.GetObject("m2tsSettings");

    m_m2tsSettingsHasBeenSet = true;
  }

  return *this;
}

JsonValue UdpContainerSettings::Jsonize() const
{
  JsonValue payload;

  if(m_m2tsSettingsHasBeenSet)
  {
   payload.WithObject("m2tsSettings", m_m2tsSettings.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
