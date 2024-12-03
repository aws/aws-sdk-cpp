/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dsql/model/CreateMultiRegionClustersRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DSQL::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateMultiRegionClustersRequest::CreateMultiRegionClustersRequest() : 
    m_linkedRegionListHasBeenSet(false),
    m_clusterPropertiesHasBeenSet(false),
    m_witnessRegionHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientTokenHasBeenSet(true)
{
}

Aws::String CreateMultiRegionClustersRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_linkedRegionListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> linkedRegionListJsonList(m_linkedRegionList.size());
   for(unsigned linkedRegionListIndex = 0; linkedRegionListIndex < linkedRegionListJsonList.GetLength(); ++linkedRegionListIndex)
   {
     linkedRegionListJsonList[linkedRegionListIndex].AsString(m_linkedRegionList[linkedRegionListIndex]);
   }
   payload.WithArray("linkedRegionList", std::move(linkedRegionListJsonList));

  }

  if(m_clusterPropertiesHasBeenSet)
  {
   JsonValue clusterPropertiesJsonMap;
   for(auto& clusterPropertiesItem : m_clusterProperties)
   {
     clusterPropertiesJsonMap.WithObject(clusterPropertiesItem.first, clusterPropertiesItem.second.Jsonize());
   }
   payload.WithObject("clusterProperties", std::move(clusterPropertiesJsonMap));

  }

  if(m_witnessRegionHasBeenSet)
  {
   payload.WithString("witnessRegion", m_witnessRegion);

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  return payload.View().WriteReadable();
}




