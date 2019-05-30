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

#include <aws/pinpoint-email/model/PutDeliverabilityDashboardOptionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::PinpointEmail::Model;
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
   Array<JsonValue> subscribedDomainsJsonList(m_subscribedDomains.size());
   for(unsigned subscribedDomainsIndex = 0; subscribedDomainsIndex < subscribedDomainsJsonList.GetLength(); ++subscribedDomainsIndex)
   {
     subscribedDomainsJsonList[subscribedDomainsIndex].AsObject(m_subscribedDomains[subscribedDomainsIndex].Jsonize());
   }
   payload.WithArray("SubscribedDomains", std::move(subscribedDomainsJsonList));

  }

  return payload.View().WriteReadable();
}




