/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/UpdateWirelessGatewayRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTWireless::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateWirelessGatewayRequest::UpdateWirelessGatewayRequest() : 
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_joinEuiFiltersHasBeenSet(false),
    m_netIdFiltersHasBeenSet(false)
{
}

Aws::String UpdateWirelessGatewayRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_joinEuiFiltersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> joinEuiFiltersJsonList(m_joinEuiFilters.size());
   for(unsigned joinEuiFiltersIndex = 0; joinEuiFiltersIndex < joinEuiFiltersJsonList.GetLength(); ++joinEuiFiltersIndex)
   {
     Aws::Utils::Array<JsonValue> joinEuiRangeJsonList(m_joinEuiFilters[joinEuiFiltersIndex].size());
     for(unsigned joinEuiRangeIndex = 0; joinEuiRangeIndex < joinEuiRangeJsonList.GetLength(); ++joinEuiRangeIndex)
     {
       joinEuiRangeJsonList[joinEuiRangeIndex].AsString(m_joinEuiFilters[joinEuiFiltersIndex][joinEuiRangeIndex]);
     }
     joinEuiFiltersJsonList[joinEuiFiltersIndex].AsArray(std::move(joinEuiRangeJsonList));
   }
   payload.WithArray("JoinEuiFilters", std::move(joinEuiFiltersJsonList));

  }

  if(m_netIdFiltersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> netIdFiltersJsonList(m_netIdFilters.size());
   for(unsigned netIdFiltersIndex = 0; netIdFiltersIndex < netIdFiltersJsonList.GetLength(); ++netIdFiltersIndex)
   {
     netIdFiltersJsonList[netIdFiltersIndex].AsString(m_netIdFilters[netIdFiltersIndex]);
   }
   payload.WithArray("NetIdFilters", std::move(netIdFiltersJsonList));

  }

  return payload.View().WriteReadable();
}




