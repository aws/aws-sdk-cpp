﻿/*
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

#include <aws/lightsail/model/LoadBalancer.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Lightsail
{
namespace Model
{

LoadBalancer::LoadBalancer() : 
    m_nameHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_supportCodeHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_locationHasBeenSet(false),
    m_resourceType(ResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false),
    m_dnsNameHasBeenSet(false),
    m_state(LoadBalancerState::NOT_SET),
    m_stateHasBeenSet(false),
    m_protocol(LoadBalancerProtocol::NOT_SET),
    m_protocolHasBeenSet(false),
    m_publicPortsHasBeenSet(false),
    m_healthCheckPathHasBeenSet(false),
    m_instancePort(0),
    m_instancePortHasBeenSet(false),
    m_instanceHealthSummaryHasBeenSet(false),
    m_tlsCertificateSummariesHasBeenSet(false),
    m_configurationOptionsHasBeenSet(false)
{
}

LoadBalancer::LoadBalancer(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_supportCodeHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_locationHasBeenSet(false),
    m_resourceType(ResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false),
    m_dnsNameHasBeenSet(false),
    m_state(LoadBalancerState::NOT_SET),
    m_stateHasBeenSet(false),
    m_protocol(LoadBalancerProtocol::NOT_SET),
    m_protocolHasBeenSet(false),
    m_publicPortsHasBeenSet(false),
    m_healthCheckPathHasBeenSet(false),
    m_instancePort(0),
    m_instancePortHasBeenSet(false),
    m_instanceHealthSummaryHasBeenSet(false),
    m_tlsCertificateSummariesHasBeenSet(false),
    m_configurationOptionsHasBeenSet(false)
{
  *this = jsonValue;
}

LoadBalancer& LoadBalancer::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("supportCode"))
  {
    m_supportCode = jsonValue.GetString("supportCode");

    m_supportCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("location"))
  {
    m_location = jsonValue.GetObject("location");

    m_locationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resourceType"))
  {
    m_resourceType = ResourceTypeMapper::GetResourceTypeForName(jsonValue.GetString("resourceType"));

    m_resourceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dnsName"))
  {
    m_dnsName = jsonValue.GetString("dnsName");

    m_dnsNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("state"))
  {
    m_state = LoadBalancerStateMapper::GetLoadBalancerStateForName(jsonValue.GetString("state"));

    m_stateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("protocol"))
  {
    m_protocol = LoadBalancerProtocolMapper::GetLoadBalancerProtocolForName(jsonValue.GetString("protocol"));

    m_protocolHasBeenSet = true;
  }

  if(jsonValue.ValueExists("publicPorts"))
  {
    Array<JsonView> publicPortsJsonList = jsonValue.GetArray("publicPorts");
    for(unsigned publicPortsIndex = 0; publicPortsIndex < publicPortsJsonList.GetLength(); ++publicPortsIndex)
    {
      m_publicPorts.push_back(publicPortsJsonList[publicPortsIndex].AsInteger());
    }
    m_publicPortsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("healthCheckPath"))
  {
    m_healthCheckPath = jsonValue.GetString("healthCheckPath");

    m_healthCheckPathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("instancePort"))
  {
    m_instancePort = jsonValue.GetInteger("instancePort");

    m_instancePortHasBeenSet = true;
  }

  if(jsonValue.ValueExists("instanceHealthSummary"))
  {
    Array<JsonView> instanceHealthSummaryJsonList = jsonValue.GetArray("instanceHealthSummary");
    for(unsigned instanceHealthSummaryIndex = 0; instanceHealthSummaryIndex < instanceHealthSummaryJsonList.GetLength(); ++instanceHealthSummaryIndex)
    {
      m_instanceHealthSummary.push_back(instanceHealthSummaryJsonList[instanceHealthSummaryIndex].AsObject());
    }
    m_instanceHealthSummaryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tlsCertificateSummaries"))
  {
    Array<JsonView> tlsCertificateSummariesJsonList = jsonValue.GetArray("tlsCertificateSummaries");
    for(unsigned tlsCertificateSummariesIndex = 0; tlsCertificateSummariesIndex < tlsCertificateSummariesJsonList.GetLength(); ++tlsCertificateSummariesIndex)
    {
      m_tlsCertificateSummaries.push_back(tlsCertificateSummariesJsonList[tlsCertificateSummariesIndex].AsObject());
    }
    m_tlsCertificateSummariesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("configurationOptions"))
  {
    Aws::Map<Aws::String, JsonView> configurationOptionsJsonMap = jsonValue.GetObject("configurationOptions").GetAllObjects();
    for(auto& configurationOptionsItem : configurationOptionsJsonMap)
    {
      m_configurationOptions[LoadBalancerAttributeNameMapper::GetLoadBalancerAttributeNameForName(configurationOptionsItem.first)] = configurationOptionsItem.second.AsString();
    }
    m_configurationOptionsHasBeenSet = true;
  }

  return *this;
}

JsonValue LoadBalancer::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_supportCodeHasBeenSet)
  {
   payload.WithString("supportCode", m_supportCode);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_locationHasBeenSet)
  {
   payload.WithObject("location", m_location.Jsonize());

  }

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithString("resourceType", ResourceTypeMapper::GetNameForResourceType(m_resourceType));
  }

  if(m_dnsNameHasBeenSet)
  {
   payload.WithString("dnsName", m_dnsName);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("state", LoadBalancerStateMapper::GetNameForLoadBalancerState(m_state));
  }

  if(m_protocolHasBeenSet)
  {
   payload.WithString("protocol", LoadBalancerProtocolMapper::GetNameForLoadBalancerProtocol(m_protocol));
  }

  if(m_publicPortsHasBeenSet)
  {
   Array<JsonValue> publicPortsJsonList(m_publicPorts.size());
   for(unsigned publicPortsIndex = 0; publicPortsIndex < publicPortsJsonList.GetLength(); ++publicPortsIndex)
   {
     publicPortsJsonList[publicPortsIndex].AsInteger(m_publicPorts[publicPortsIndex]);
   }
   payload.WithArray("publicPorts", std::move(publicPortsJsonList));

  }

  if(m_healthCheckPathHasBeenSet)
  {
   payload.WithString("healthCheckPath", m_healthCheckPath);

  }

  if(m_instancePortHasBeenSet)
  {
   payload.WithInteger("instancePort", m_instancePort);

  }

  if(m_instanceHealthSummaryHasBeenSet)
  {
   Array<JsonValue> instanceHealthSummaryJsonList(m_instanceHealthSummary.size());
   for(unsigned instanceHealthSummaryIndex = 0; instanceHealthSummaryIndex < instanceHealthSummaryJsonList.GetLength(); ++instanceHealthSummaryIndex)
   {
     instanceHealthSummaryJsonList[instanceHealthSummaryIndex].AsObject(m_instanceHealthSummary[instanceHealthSummaryIndex].Jsonize());
   }
   payload.WithArray("instanceHealthSummary", std::move(instanceHealthSummaryJsonList));

  }

  if(m_tlsCertificateSummariesHasBeenSet)
  {
   Array<JsonValue> tlsCertificateSummariesJsonList(m_tlsCertificateSummaries.size());
   for(unsigned tlsCertificateSummariesIndex = 0; tlsCertificateSummariesIndex < tlsCertificateSummariesJsonList.GetLength(); ++tlsCertificateSummariesIndex)
   {
     tlsCertificateSummariesJsonList[tlsCertificateSummariesIndex].AsObject(m_tlsCertificateSummaries[tlsCertificateSummariesIndex].Jsonize());
   }
   payload.WithArray("tlsCertificateSummaries", std::move(tlsCertificateSummariesJsonList));

  }

  if(m_configurationOptionsHasBeenSet)
  {
   JsonValue configurationOptionsJsonMap;
   for(auto& configurationOptionsItem : m_configurationOptions)
   {
     configurationOptionsJsonMap.WithString(LoadBalancerAttributeNameMapper::GetNameForLoadBalancerAttributeName(configurationOptionsItem.first), configurationOptionsItem.second);
   }
   payload.WithObject("configurationOptions", std::move(configurationOptionsJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace Lightsail
} // namespace Aws
