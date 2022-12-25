/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkmanager/model/ConnectPeerConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace NetworkManager
{
namespace Model
{

ConnectPeerConfiguration::ConnectPeerConfiguration() : 
    m_coreNetworkAddressHasBeenSet(false),
    m_peerAddressHasBeenSet(false),
    m_insideCidrBlocksHasBeenSet(false),
    m_protocol(TunnelProtocol::NOT_SET),
    m_protocolHasBeenSet(false),
    m_bgpConfigurationsHasBeenSet(false)
{
}

ConnectPeerConfiguration::ConnectPeerConfiguration(JsonView jsonValue) : 
    m_coreNetworkAddressHasBeenSet(false),
    m_peerAddressHasBeenSet(false),
    m_insideCidrBlocksHasBeenSet(false),
    m_protocol(TunnelProtocol::NOT_SET),
    m_protocolHasBeenSet(false),
    m_bgpConfigurationsHasBeenSet(false)
{
  *this = jsonValue;
}

ConnectPeerConfiguration& ConnectPeerConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CoreNetworkAddress"))
  {
    m_coreNetworkAddress = jsonValue.GetString("CoreNetworkAddress");

    m_coreNetworkAddressHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PeerAddress"))
  {
    m_peerAddress = jsonValue.GetString("PeerAddress");

    m_peerAddressHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InsideCidrBlocks"))
  {
    Aws::Utils::Array<JsonView> insideCidrBlocksJsonList = jsonValue.GetArray("InsideCidrBlocks");
    for(unsigned insideCidrBlocksIndex = 0; insideCidrBlocksIndex < insideCidrBlocksJsonList.GetLength(); ++insideCidrBlocksIndex)
    {
      m_insideCidrBlocks.push_back(insideCidrBlocksJsonList[insideCidrBlocksIndex].AsString());
    }
    m_insideCidrBlocksHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Protocol"))
  {
    m_protocol = TunnelProtocolMapper::GetTunnelProtocolForName(jsonValue.GetString("Protocol"));

    m_protocolHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BgpConfigurations"))
  {
    Aws::Utils::Array<JsonView> bgpConfigurationsJsonList = jsonValue.GetArray("BgpConfigurations");
    for(unsigned bgpConfigurationsIndex = 0; bgpConfigurationsIndex < bgpConfigurationsJsonList.GetLength(); ++bgpConfigurationsIndex)
    {
      m_bgpConfigurations.push_back(bgpConfigurationsJsonList[bgpConfigurationsIndex].AsObject());
    }
    m_bgpConfigurationsHasBeenSet = true;
  }

  return *this;
}

JsonValue ConnectPeerConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_coreNetworkAddressHasBeenSet)
  {
   payload.WithString("CoreNetworkAddress", m_coreNetworkAddress);

  }

  if(m_peerAddressHasBeenSet)
  {
   payload.WithString("PeerAddress", m_peerAddress);

  }

  if(m_insideCidrBlocksHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> insideCidrBlocksJsonList(m_insideCidrBlocks.size());
   for(unsigned insideCidrBlocksIndex = 0; insideCidrBlocksIndex < insideCidrBlocksJsonList.GetLength(); ++insideCidrBlocksIndex)
   {
     insideCidrBlocksJsonList[insideCidrBlocksIndex].AsString(m_insideCidrBlocks[insideCidrBlocksIndex]);
   }
   payload.WithArray("InsideCidrBlocks", std::move(insideCidrBlocksJsonList));

  }

  if(m_protocolHasBeenSet)
  {
   payload.WithString("Protocol", TunnelProtocolMapper::GetNameForTunnelProtocol(m_protocol));
  }

  if(m_bgpConfigurationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> bgpConfigurationsJsonList(m_bgpConfigurations.size());
   for(unsigned bgpConfigurationsIndex = 0; bgpConfigurationsIndex < bgpConfigurationsJsonList.GetLength(); ++bgpConfigurationsIndex)
   {
     bgpConfigurationsJsonList[bgpConfigurationsIndex].AsObject(m_bgpConfigurations[bgpConfigurationsIndex].Jsonize());
   }
   payload.WithArray("BgpConfigurations", std::move(bgpConfigurationsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
