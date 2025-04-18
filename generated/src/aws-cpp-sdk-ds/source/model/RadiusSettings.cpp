﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

RadiusSettings::RadiusSettings(JsonView jsonValue)
{
  *this = jsonValue;
}

RadiusSettings& RadiusSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RadiusServers"))
  {
    Aws::Utils::Array<JsonView> radiusServersJsonList = jsonValue.GetArray("RadiusServers");
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
   Aws::Utils::Array<JsonValue> radiusServersJsonList(m_radiusServers.size());
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
