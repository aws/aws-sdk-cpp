/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amp/model/UpdateScraperLoggingConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::PrometheusService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateScraperLoggingConfigurationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_loggingDestinationHasBeenSet)
  {
   payload.WithObject("loggingDestination", m_loggingDestination.Jsonize());

  }

  if(m_scraperComponentsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> scraperComponentsJsonList(m_scraperComponents.size());
   for(unsigned scraperComponentsIndex = 0; scraperComponentsIndex < scraperComponentsJsonList.GetLength(); ++scraperComponentsIndex)
   {
     scraperComponentsJsonList[scraperComponentsIndex].AsObject(m_scraperComponents[scraperComponentsIndex].Jsonize());
   }
   payload.WithArray("scraperComponents", std::move(scraperComponentsJsonList));

  }

  return payload.View().WriteReadable();
}




