﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/LoRaWANGateway.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTWireless
{
namespace Model
{

LoRaWANGateway::LoRaWANGateway() : 
    m_gatewayEuiHasBeenSet(false),
    m_rfRegionHasBeenSet(false),
    m_joinEuiFiltersHasBeenSet(false),
    m_netIdFiltersHasBeenSet(false),
    m_subBandsHasBeenSet(false)
{
}

LoRaWANGateway::LoRaWANGateway(JsonView jsonValue) : 
    m_gatewayEuiHasBeenSet(false),
    m_rfRegionHasBeenSet(false),
    m_joinEuiFiltersHasBeenSet(false),
    m_netIdFiltersHasBeenSet(false),
    m_subBandsHasBeenSet(false)
{
  *this = jsonValue;
}

LoRaWANGateway& LoRaWANGateway::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("GatewayEui"))
  {
    m_gatewayEui = jsonValue.GetString("GatewayEui");

    m_gatewayEuiHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RfRegion"))
  {
    m_rfRegion = jsonValue.GetString("RfRegion");

    m_rfRegionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("JoinEuiFilters"))
  {
    Array<JsonView> joinEuiFiltersJsonList = jsonValue.GetArray("JoinEuiFilters");
    for(unsigned joinEuiFiltersIndex = 0; joinEuiFiltersIndex < joinEuiFiltersJsonList.GetLength(); ++joinEuiFiltersIndex)
    {
      Array<JsonView> joinEuiRangeJsonList = joinEuiFiltersJsonList[joinEuiFiltersIndex].AsArray();
      Aws::Vector<Aws::String> joinEuiRangeList;
      joinEuiRangeList.reserve((size_t)joinEuiRangeJsonList.GetLength());
      for(unsigned joinEuiRangeIndex = 0; joinEuiRangeIndex < joinEuiRangeJsonList.GetLength(); ++joinEuiRangeIndex)
      {
        joinEuiRangeList.push_back(joinEuiRangeJsonList[joinEuiRangeIndex].AsString());
      }
      m_joinEuiFilters.push_back(std::move(joinEuiRangeList));
    }
    m_joinEuiFiltersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NetIdFilters"))
  {
    Array<JsonView> netIdFiltersJsonList = jsonValue.GetArray("NetIdFilters");
    for(unsigned netIdFiltersIndex = 0; netIdFiltersIndex < netIdFiltersJsonList.GetLength(); ++netIdFiltersIndex)
    {
      m_netIdFilters.push_back(netIdFiltersJsonList[netIdFiltersIndex].AsString());
    }
    m_netIdFiltersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SubBands"))
  {
    Array<JsonView> subBandsJsonList = jsonValue.GetArray("SubBands");
    for(unsigned subBandsIndex = 0; subBandsIndex < subBandsJsonList.GetLength(); ++subBandsIndex)
    {
      m_subBands.push_back(subBandsJsonList[subBandsIndex].AsInteger());
    }
    m_subBandsHasBeenSet = true;
  }

  return *this;
}

JsonValue LoRaWANGateway::Jsonize() const
{
  JsonValue payload;

  if(m_gatewayEuiHasBeenSet)
  {
   payload.WithString("GatewayEui", m_gatewayEui);

  }

  if(m_rfRegionHasBeenSet)
  {
   payload.WithString("RfRegion", m_rfRegion);

  }

  if(m_joinEuiFiltersHasBeenSet)
  {
   Array<JsonValue> joinEuiFiltersJsonList(m_joinEuiFilters.size());
   for(unsigned joinEuiFiltersIndex = 0; joinEuiFiltersIndex < joinEuiFiltersJsonList.GetLength(); ++joinEuiFiltersIndex)
   {
     Array<JsonValue> joinEuiRangeJsonList(m_joinEuiFilters[joinEuiFiltersIndex].size());
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
   Array<JsonValue> netIdFiltersJsonList(m_netIdFilters.size());
   for(unsigned netIdFiltersIndex = 0; netIdFiltersIndex < netIdFiltersJsonList.GetLength(); ++netIdFiltersIndex)
   {
     netIdFiltersJsonList[netIdFiltersIndex].AsString(m_netIdFilters[netIdFiltersIndex]);
   }
   payload.WithArray("NetIdFilters", std::move(netIdFiltersJsonList));

  }

  if(m_subBandsHasBeenSet)
  {
   Array<JsonValue> subBandsJsonList(m_subBands.size());
   for(unsigned subBandsIndex = 0; subBandsIndex < subBandsJsonList.GetLength(); ++subBandsIndex)
   {
     subBandsJsonList[subBandsIndex].AsInteger(m_subBands[subBandsIndex]);
   }
   payload.WithArray("SubBands", std::move(subBandsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
