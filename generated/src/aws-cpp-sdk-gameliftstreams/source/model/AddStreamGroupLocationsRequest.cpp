/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gameliftstreams/model/AddStreamGroupLocationsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::GameLiftStreams::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String AddStreamGroupLocationsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_locationConfigurationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> locationConfigurationsJsonList(m_locationConfigurations.size());
   for(unsigned locationConfigurationsIndex = 0; locationConfigurationsIndex < locationConfigurationsJsonList.GetLength(); ++locationConfigurationsIndex)
   {
     locationConfigurationsJsonList[locationConfigurationsIndex].AsObject(m_locationConfigurations[locationConfigurationsIndex].Jsonize());
   }
   payload.WithArray("LocationConfigurations", std::move(locationConfigurationsJsonList));

  }

  return payload.View().WriteReadable();
}




