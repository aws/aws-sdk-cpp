/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/PutDeliverabilityDashboardOptionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SESV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutDeliverabilityDashboardOptionRequest::PutDeliverabilityDashboardOptionRequest() : 
    m_dashboardEnabled(false),
    m_dashboardEnabledHasBeenSet(false),
    m_subscribedDomainsHasBeenSet(false)
{
}

Aws::String PutDeliverabilityDashboardOptionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_dashboardEnabledHasBeenSet)
  {
   payload.WithBool("DashboardEnabled", m_dashboardEnabled);

  }

  if(m_subscribedDomainsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> subscribedDomainsJsonList(m_subscribedDomains.size());
   for(unsigned subscribedDomainsIndex = 0; subscribedDomainsIndex < subscribedDomainsJsonList.GetLength(); ++subscribedDomainsIndex)
   {
     subscribedDomainsJsonList[subscribedDomainsIndex].AsObject(m_subscribedDomains[subscribedDomainsIndex].Jsonize());
   }
   payload.WithArray("SubscribedDomains", std::move(subscribedDomainsJsonList));

  }

  return payload.View().WriteReadable();
}




