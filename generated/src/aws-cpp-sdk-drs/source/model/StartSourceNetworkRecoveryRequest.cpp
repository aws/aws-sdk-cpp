/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/drs/model/StartSourceNetworkRecoveryRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::drs::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartSourceNetworkRecoveryRequest::StartSourceNetworkRecoveryRequest() : 
    m_deployAsNew(false),
    m_deployAsNewHasBeenSet(false),
    m_sourceNetworksHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String StartSourceNetworkRecoveryRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_deployAsNewHasBeenSet)
  {
   payload.WithBool("deployAsNew", m_deployAsNew);

  }

  if(m_sourceNetworksHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> sourceNetworksJsonList(m_sourceNetworks.size());
   for(unsigned sourceNetworksIndex = 0; sourceNetworksIndex < sourceNetworksJsonList.GetLength(); ++sourceNetworksIndex)
   {
     sourceNetworksJsonList[sourceNetworksIndex].AsObject(m_sourceNetworks[sourceNetworksIndex].Jsonize());
   }
   payload.WithArray("sourceNetworks", std::move(sourceNetworksJsonList));

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  return payload.View().WriteReadable();
}




