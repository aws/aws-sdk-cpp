/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/Network.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

Network::Network() : 
    m_direction(NetworkDirection::NOT_SET),
    m_directionHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_openPortRangeHasBeenSet(false),
    m_sourceIpV4HasBeenSet(false),
    m_sourceIpV6HasBeenSet(false),
    m_sourcePort(0),
    m_sourcePortHasBeenSet(false),
    m_sourceDomainHasBeenSet(false),
    m_sourceMacHasBeenSet(false),
    m_destinationIpV4HasBeenSet(false),
    m_destinationIpV6HasBeenSet(false),
    m_destinationPort(0),
    m_destinationPortHasBeenSet(false),
    m_destinationDomainHasBeenSet(false)
{
}

Network::Network(JsonView jsonValue) : 
    m_direction(NetworkDirection::NOT_SET),
    m_directionHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_openPortRangeHasBeenSet(false),
    m_sourceIpV4HasBeenSet(false),
    m_sourceIpV6HasBeenSet(false),
    m_sourcePort(0),
    m_sourcePortHasBeenSet(false),
    m_sourceDomainHasBeenSet(false),
    m_sourceMacHasBeenSet(false),
    m_destinationIpV4HasBeenSet(false),
    m_destinationIpV6HasBeenSet(false),
    m_destinationPort(0),
    m_destinationPortHasBeenSet(false),
    m_destinationDomainHasBeenSet(false)
{
  *this = jsonValue;
}

Network& Network::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Direction"))
  {
    m_direction = NetworkDirectionMapper::GetNetworkDirectionForName(jsonValue.GetString("Direction"));

    m_directionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Protocol"))
  {
    m_protocol = jsonValue.GetString("Protocol");

    m_protocolHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OpenPortRange"))
  {
    m_openPortRange = jsonValue.GetObject("OpenPortRange");

    m_openPortRangeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SourceIpV4"))
  {
    m_sourceIpV4 = jsonValue.GetString("SourceIpV4");

    m_sourceIpV4HasBeenSet = true;
  }

  if(jsonValue.ValueExists("SourceIpV6"))
  {
    m_sourceIpV6 = jsonValue.GetString("SourceIpV6");

    m_sourceIpV6HasBeenSet = true;
  }

  if(jsonValue.ValueExists("SourcePort"))
  {
    m_sourcePort = jsonValue.GetInteger("SourcePort");

    m_sourcePortHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SourceDomain"))
  {
    m_sourceDomain = jsonValue.GetString("SourceDomain");

    m_sourceDomainHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SourceMac"))
  {
    m_sourceMac = jsonValue.GetString("SourceMac");

    m_sourceMacHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DestinationIpV4"))
  {
    m_destinationIpV4 = jsonValue.GetString("DestinationIpV4");

    m_destinationIpV4HasBeenSet = true;
  }

  if(jsonValue.ValueExists("DestinationIpV6"))
  {
    m_destinationIpV6 = jsonValue.GetString("DestinationIpV6");

    m_destinationIpV6HasBeenSet = true;
  }

  if(jsonValue.ValueExists("DestinationPort"))
  {
    m_destinationPort = jsonValue.GetInteger("DestinationPort");

    m_destinationPortHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DestinationDomain"))
  {
    m_destinationDomain = jsonValue.GetString("DestinationDomain");

    m_destinationDomainHasBeenSet = true;
  }

  return *this;
}

JsonValue Network::Jsonize() const
{
  JsonValue payload;

  if(m_directionHasBeenSet)
  {
   payload.WithString("Direction", NetworkDirectionMapper::GetNameForNetworkDirection(m_direction));
  }

  if(m_protocolHasBeenSet)
  {
   payload.WithString("Protocol", m_protocol);

  }

  if(m_openPortRangeHasBeenSet)
  {
   payload.WithObject("OpenPortRange", m_openPortRange.Jsonize());

  }

  if(m_sourceIpV4HasBeenSet)
  {
   payload.WithString("SourceIpV4", m_sourceIpV4);

  }

  if(m_sourceIpV6HasBeenSet)
  {
   payload.WithString("SourceIpV6", m_sourceIpV6);

  }

  if(m_sourcePortHasBeenSet)
  {
   payload.WithInteger("SourcePort", m_sourcePort);

  }

  if(m_sourceDomainHasBeenSet)
  {
   payload.WithString("SourceDomain", m_sourceDomain);

  }

  if(m_sourceMacHasBeenSet)
  {
   payload.WithString("SourceMac", m_sourceMac);

  }

  if(m_destinationIpV4HasBeenSet)
  {
   payload.WithString("DestinationIpV4", m_destinationIpV4);

  }

  if(m_destinationIpV6HasBeenSet)
  {
   payload.WithString("DestinationIpV6", m_destinationIpV6);

  }

  if(m_destinationPortHasBeenSet)
  {
   payload.WithInteger("DestinationPort", m_destinationPort);

  }

  if(m_destinationDomainHasBeenSet)
  {
   payload.WithString("DestinationDomain", m_destinationDomain);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
