/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/privatenetworks/model/UpdateNetworkSitePlanRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::PrivateNetworks::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateNetworkSitePlanRequest::UpdateNetworkSitePlanRequest() : 
    m_clientTokenHasBeenSet(false),
    m_networkSiteArnHasBeenSet(false),
    m_pendingPlanHasBeenSet(false)
{
}

Aws::String UpdateNetworkSitePlanRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_networkSiteArnHasBeenSet)
  {
   payload.WithString("networkSiteArn", m_networkSiteArn);

  }

  if(m_pendingPlanHasBeenSet)
  {
   payload.WithObject("pendingPlan", m_pendingPlan.Jsonize());

  }

  return payload.View().WriteReadable();
}




