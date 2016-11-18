/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/ds/model/RadiusSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DirectoryService
{
namespace Model
{

RadiusSettings::RadiusSettings() : 
    m_radiusServersHasBeenSet(false),
    m_radiusPort(0),
    m_radiusPortHasBeenSet(false),
    m_radiusTimeout(0),
    m_radiusTimeoutHasBeenSet(false),
    m_radiusRetries(0),
    m_radiusRetriesHasBeenSet(false),
    m_sharedSecretHasBeenSet(false),
    m_authenticationProtocol(RadiusAuthenticationProtocol::NOT_SET),
    m_authenticationProtocolHasBeenSet(false),
    m_displayLabelHasBeenSet(false),
    m_useSameUsername(false),
    m_useSameUsernameHasBeenSet(false)
{
}

RadiusSettings::RadiusSettings(const JsonValue& jsonValue) : 
    m_radiusServersHasBeenSet(false),
    m_radiusPort(0),
    m_radiusPortHasBeenSet(false),
    m_radiusTimeout(0),
    m_radiusTimeoutHasBeenSet(false),
    m_radiusRetries(0),
    m_radiusRetriesHasBeenSet(false),
    m_sharedSecretHasBeenSet(false),
    m_authenticationProtocol(RadiusAuthenticationProtocol::NOT_SET),
    m_authenticationProtocolHasBeenSet(false),
    m_displayLabelHasBeenSet(false),
    m_useSameUsername(false),
    m_useSameUsernameHasBeenSet(false)
{
  *this = jsonValue;
}

RadiusSettings& RadiusSettings::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("RadiusServers"))
  {
    Array<JsonValue> radiusServersJsonList = jsonValue.GetArray("RadiusServers");
    for(unsigned radiusServersIndex = 0; radiusServersIndex < radiusServersJsonList.GetLength(); ++radiusServersIndex)
    {
      m_radiusServers.push_back(radiusServersJsonList[radiusServersIndex].AsString());
    }
    m_radiusServersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RadiusPort"))
  {
    m_radiusPort = jsonValue.GetInteger("RadiusPort");

    m_radiusPortHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RadiusTimeout"))
  {
    m_radiusTimeout = jsonValue.GetInteger("RadiusTimeout");

    m_radiusTimeoutHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RadiusRetries"))
  {
    m_radiusRetries = jsonValue.GetInteger("RadiusRetries");

    m_radiusRetriesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SharedSecret"))
  {
    m_sharedSecret = jsonValue.GetString("SharedSecret");

    m_sharedSecretHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AuthenticationProtocol"))
  {
    m_authenticationProtocol = RadiusAuthenticationProtocolMapper::GetRadiusAuthenticationProtocolForName(jsonValue.GetString("AuthenticationProtocol"));

    m_authenticationProtocolHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DisplayLabel"))
  {
    m_displayLabel = jsonValue.GetString("DisplayLabel");

    m_displayLabelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UseSameUsername"))
  {
    m_useSameUsername = jsonValue.GetBool("UseSameUsername");

    m_useSameUsernameHasBeenSet = true;
  }

  return *this;
}

JsonValue RadiusSettings::Jsonize() const
{
  JsonValue payload;

  if(m_radiusServersHasBeenSet)
  {
   Array<JsonValue> radiusServersJsonList(m_radiusServers.size());
   for(unsigned radiusServersIndex = 0; radiusServersIndex < radiusServersJsonList.GetLength(); ++radiusServersIndex)
   {
     radiusServersJsonList[radiusServersIndex].AsString(m_radiusServers[radiusServersIndex]);
   }
   payload.WithArray("RadiusServers", std::move(radiusServersJsonList));

  }

  if(m_radiusPortHasBeenSet)
  {
   payload.WithInteger("RadiusPort", m_radiusPort);

  }

  if(m_radiusTimeoutHasBeenSet)
  {
   payload.WithInteger("RadiusTimeout", m_radiusTimeout);

  }

  if(m_radiusRetriesHasBeenSet)
  {
   payload.WithInteger("RadiusRetries", m_radiusRetries);

  }

  if(m_sharedSecretHasBeenSet)
  {
   payload.WithString("SharedSecret", m_sharedSecret);

  }

  if(m_authenticationProtocolHasBeenSet)
  {
   payload.WithString("AuthenticationProtocol", RadiusAuthenticationProtocolMapper::GetNameForRadiusAuthenticationProtocol(m_authenticationProtocol));
  }

  if(m_displayLabelHasBeenSet)
  {
   payload.WithString("DisplayLabel", m_displayLabel);

  }

  if(m_useSameUsernameHasBeenSet)
  {
   payload.WithBool("UseSameUsername", m_useSameUsername);

  }

  return payload;
}

} // namespace Model
} // namespace DirectoryService
} // namespace Aws