/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/network-firewall/model/MatchAttributes.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace NetworkFirewall
{
namespace Model
{

MatchAttributes::MatchAttributes() : 
    m_sourcesHasBeenSet(false),
    m_destinationsHasBeenSet(false),
    m_sourcePortsHasBeenSet(false),
    m_destinationPortsHasBeenSet(false),
    m_protocolsHasBeenSet(false),
    m_tCPFlagsHasBeenSet(false)
{
}

MatchAttributes::MatchAttributes(JsonView jsonValue) : 
    m_sourcesHasBeenSet(false),
    m_destinationsHasBeenSet(false),
    m_sourcePortsHasBeenSet(false),
    m_destinationPortsHasBeenSet(false),
    m_protocolsHasBeenSet(false),
    m_tCPFlagsHasBeenSet(false)
{
  *this = jsonValue;
}

MatchAttributes& MatchAttributes::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Sources"))
  {
    Aws::Utils::Array<JsonView> sourcesJsonList = jsonValue.GetArray("Sources");
    for(unsigned sourcesIndex = 0; sourcesIndex < sourcesJsonList.GetLength(); ++sourcesIndex)
    {
      m_sources.push_back(sourcesJsonList[sourcesIndex].AsObject());
    }
    m_sourcesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Destinations"))
  {
    Aws::Utils::Array<JsonView> destinationsJsonList = jsonValue.GetArray("Destinations");
    for(unsigned destinationsIndex = 0; destinationsIndex < destinationsJsonList.GetLength(); ++destinationsIndex)
    {
      m_destinations.push_back(destinationsJsonList[destinationsIndex].AsObject());
    }
    m_destinationsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SourcePorts"))
  {
    Aws::Utils::Array<JsonView> sourcePortsJsonList = jsonValue.GetArray("SourcePorts");
    for(unsigned sourcePortsIndex = 0; sourcePortsIndex < sourcePortsJsonList.GetLength(); ++sourcePortsIndex)
    {
      m_sourcePorts.push_back(sourcePortsJsonList[sourcePortsIndex].AsObject());
    }
    m_sourcePortsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DestinationPorts"))
  {
    Aws::Utils::Array<JsonView> destinationPortsJsonList = jsonValue.GetArray("DestinationPorts");
    for(unsigned destinationPortsIndex = 0; destinationPortsIndex < destinationPortsJsonList.GetLength(); ++destinationPortsIndex)
    {
      m_destinationPorts.push_back(destinationPortsJsonList[destinationPortsIndex].AsObject());
    }
    m_destinationPortsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Protocols"))
  {
    Aws::Utils::Array<JsonView> protocolsJsonList = jsonValue.GetArray("Protocols");
    for(unsigned protocolsIndex = 0; protocolsIndex < protocolsJsonList.GetLength(); ++protocolsIndex)
    {
      m_protocols.push_back(protocolsJsonList[protocolsIndex].AsInteger());
    }
    m_protocolsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TCPFlags"))
  {
    Aws::Utils::Array<JsonView> tCPFlagsJsonList = jsonValue.GetArray("TCPFlags");
    for(unsigned tCPFlagsIndex = 0; tCPFlagsIndex < tCPFlagsJsonList.GetLength(); ++tCPFlagsIndex)
    {
      m_tCPFlags.push_back(tCPFlagsJsonList[tCPFlagsIndex].AsObject());
    }
    m_tCPFlagsHasBeenSet = true;
  }

  return *this;
}

JsonValue MatchAttributes::Jsonize() const
{
  JsonValue payload;

  if(m_sourcesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> sourcesJsonList(m_sources.size());
   for(unsigned sourcesIndex = 0; sourcesIndex < sourcesJsonList.GetLength(); ++sourcesIndex)
   {
     sourcesJsonList[sourcesIndex].AsObject(m_sources[sourcesIndex].Jsonize());
   }
   payload.WithArray("Sources", std::move(sourcesJsonList));

  }

  if(m_destinationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> destinationsJsonList(m_destinations.size());
   for(unsigned destinationsIndex = 0; destinationsIndex < destinationsJsonList.GetLength(); ++destinationsIndex)
   {
     destinationsJsonList[destinationsIndex].AsObject(m_destinations[destinationsIndex].Jsonize());
   }
   payload.WithArray("Destinations", std::move(destinationsJsonList));

  }

  if(m_sourcePortsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> sourcePortsJsonList(m_sourcePorts.size());
   for(unsigned sourcePortsIndex = 0; sourcePortsIndex < sourcePortsJsonList.GetLength(); ++sourcePortsIndex)
   {
     sourcePortsJsonList[sourcePortsIndex].AsObject(m_sourcePorts[sourcePortsIndex].Jsonize());
   }
   payload.WithArray("SourcePorts", std::move(sourcePortsJsonList));

  }

  if(m_destinationPortsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> destinationPortsJsonList(m_destinationPorts.size());
   for(unsigned destinationPortsIndex = 0; destinationPortsIndex < destinationPortsJsonList.GetLength(); ++destinationPortsIndex)
   {
     destinationPortsJsonList[destinationPortsIndex].AsObject(m_destinationPorts[destinationPortsIndex].Jsonize());
   }
   payload.WithArray("DestinationPorts", std::move(destinationPortsJsonList));

  }

  if(m_protocolsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> protocolsJsonList(m_protocols.size());
   for(unsigned protocolsIndex = 0; protocolsIndex < protocolsJsonList.GetLength(); ++protocolsIndex)
   {
     protocolsJsonList[protocolsIndex].AsInteger(m_protocols[protocolsIndex]);
   }
   payload.WithArray("Protocols", std::move(protocolsJsonList));

  }

  if(m_tCPFlagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tCPFlagsJsonList(m_tCPFlags.size());
   for(unsigned tCPFlagsIndex = 0; tCPFlagsIndex < tCPFlagsJsonList.GetLength(); ++tCPFlagsIndex)
   {
     tCPFlagsJsonList[tCPFlagsIndex].AsObject(m_tCPFlags[tCPFlagsIndex].Jsonize());
   }
   payload.WithArray("TCPFlags", std::move(tCPFlagsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
