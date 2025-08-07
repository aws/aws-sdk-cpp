/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gameliftstreams/model/StartStreamSessionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::GameLiftStreams::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String StartStreamSessionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("ClientToken", m_clientToken);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_protocolHasBeenSet)
  {
   payload.WithString("Protocol", ProtocolMapper::GetNameForProtocol(m_protocol));
  }

  if(m_signalRequestHasBeenSet)
  {
   payload.WithString("SignalRequest", m_signalRequest);

  }

  if(m_applicationIdentifierHasBeenSet)
  {
   payload.WithString("ApplicationIdentifier", m_applicationIdentifier);

  }

  if(m_userIdHasBeenSet)
  {
   payload.WithString("UserId", m_userId);

  }

  if(m_locationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> locationsJsonList(m_locations.size());
   for(unsigned locationsIndex = 0; locationsIndex < locationsJsonList.GetLength(); ++locationsIndex)
   {
     locationsJsonList[locationsIndex].AsString(m_locations[locationsIndex]);
   }
   payload.WithArray("Locations", std::move(locationsJsonList));

  }

  if(m_connectionTimeoutSecondsHasBeenSet)
  {
   payload.WithInteger("ConnectionTimeoutSeconds", m_connectionTimeoutSeconds);

  }

  if(m_sessionLengthSecondsHasBeenSet)
  {
   payload.WithInteger("SessionLengthSeconds", m_sessionLengthSeconds);

  }

  if(m_additionalLaunchArgsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> additionalLaunchArgsJsonList(m_additionalLaunchArgs.size());
   for(unsigned additionalLaunchArgsIndex = 0; additionalLaunchArgsIndex < additionalLaunchArgsJsonList.GetLength(); ++additionalLaunchArgsIndex)
   {
     additionalLaunchArgsJsonList[additionalLaunchArgsIndex].AsString(m_additionalLaunchArgs[additionalLaunchArgsIndex]);
   }
   payload.WithArray("AdditionalLaunchArgs", std::move(additionalLaunchArgsJsonList));

  }

  if(m_additionalEnvironmentVariablesHasBeenSet)
  {
   JsonValue additionalEnvironmentVariablesJsonMap;
   for(auto& additionalEnvironmentVariablesItem : m_additionalEnvironmentVariables)
   {
     additionalEnvironmentVariablesJsonMap.WithString(additionalEnvironmentVariablesItem.first, additionalEnvironmentVariablesItem.second);
   }
   payload.WithObject("AdditionalEnvironmentVariables", std::move(additionalEnvironmentVariablesJsonMap));

  }

  return payload.View().WriteReadable();
}




