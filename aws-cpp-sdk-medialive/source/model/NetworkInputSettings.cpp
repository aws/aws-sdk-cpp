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

#include <aws/medialive/model/NetworkInputSettings.h>
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

NetworkInputSettings::NetworkInputSettings() : 
    m_hlsInputSettingsHasBeenSet(false),
    m_serverValidation(NetworkInputServerValidation::NOT_SET),
    m_serverValidationHasBeenSet(false)
{
}

NetworkInputSettings::NetworkInputSettings(const JsonValue& jsonValue) : 
    m_hlsInputSettingsHasBeenSet(false),
    m_serverValidation(NetworkInputServerValidation::NOT_SET),
    m_serverValidationHasBeenSet(false)
{
  *this = jsonValue;
}

NetworkInputSettings& NetworkInputSettings::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("hlsInputSettings"))
  {
    m_hlsInputSettings = jsonValue.GetObject("hlsInputSettings");

    m_hlsInputSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("serverValidation"))
  {
    m_serverValidation = NetworkInputServerValidationMapper::GetNetworkInputServerValidationForName(jsonValue.GetString("serverValidation"));

    m_serverValidationHasBeenSet = true;
  }

  return *this;
}

JsonValue NetworkInputSettings::Jsonize() const
{
  JsonValue payload;

  if(m_hlsInputSettingsHasBeenSet)
  {
   payload.WithObject("hlsInputSettings", m_hlsInputSettings.Jsonize());

  }

  if(m_serverValidationHasBeenSet)
  {
   payload.WithString("serverValidation", NetworkInputServerValidationMapper::GetNameForNetworkInputServerValidation(m_serverValidation));
  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
