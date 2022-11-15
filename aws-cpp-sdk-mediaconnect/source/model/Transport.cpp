/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconnect/model/Transport.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaConnect
{
namespace Model
{

Transport::Transport() : 
    m_cidrAllowListHasBeenSet(false),
    m_maxBitrate(0),
    m_maxBitrateHasBeenSet(false),
    m_maxLatency(0),
    m_maxLatencyHasBeenSet(false),
    m_maxSyncBuffer(0),
    m_maxSyncBufferHasBeenSet(false),
    m_minLatency(0),
    m_minLatencyHasBeenSet(false),
    m_protocol(Protocol::NOT_SET),
    m_protocolHasBeenSet(false),
    m_remoteIdHasBeenSet(false),
    m_senderControlPort(0),
    m_senderControlPortHasBeenSet(false),
    m_senderIpAddressHasBeenSet(false),
    m_smoothingLatency(0),
    m_smoothingLatencyHasBeenSet(false),
    m_sourceListenerAddressHasBeenSet(false),
    m_sourceListenerPort(0),
    m_sourceListenerPortHasBeenSet(false),
    m_streamIdHasBeenSet(false)
{
}

Transport::Transport(JsonView jsonValue) : 
    m_cidrAllowListHasBeenSet(false),
    m_maxBitrate(0),
    m_maxBitrateHasBeenSet(false),
    m_maxLatency(0),
    m_maxLatencyHasBeenSet(false),
    m_maxSyncBuffer(0),
    m_maxSyncBufferHasBeenSet(false),
    m_minLatency(0),
    m_minLatencyHasBeenSet(false),
    m_protocol(Protocol::NOT_SET),
    m_protocolHasBeenSet(false),
    m_remoteIdHasBeenSet(false),
    m_senderControlPort(0),
    m_senderControlPortHasBeenSet(false),
    m_senderIpAddressHasBeenSet(false),
    m_smoothingLatency(0),
    m_smoothingLatencyHasBeenSet(false),
    m_sourceListenerAddressHasBeenSet(false),
    m_sourceListenerPort(0),
    m_sourceListenerPortHasBeenSet(false),
    m_streamIdHasBeenSet(false)
{
  *this = jsonValue;
}

Transport& Transport::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("cidrAllowList"))
  {
    Aws::Utils::Array<JsonView> cidrAllowListJsonList = jsonValue.GetArray("cidrAllowList");
    for(unsigned cidrAllowListIndex = 0; cidrAllowListIndex < cidrAllowListJsonList.GetLength(); ++cidrAllowListIndex)
    {
      m_cidrAllowList.push_back(cidrAllowListJsonList[cidrAllowListIndex].AsString());
    }
    m_cidrAllowListHasBeenSet = true;
  }

  if(jsonValue.ValueExists("maxBitrate"))
  {
    m_maxBitrate = jsonValue.GetInteger("maxBitrate");

    m_maxBitrateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("maxLatency"))
  {
    m_maxLatency = jsonValue.GetInteger("maxLatency");

    m_maxLatencyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("maxSyncBuffer"))
  {
    m_maxSyncBuffer = jsonValue.GetInteger("maxSyncBuffer");

    m_maxSyncBufferHasBeenSet = true;
  }

  if(jsonValue.ValueExists("minLatency"))
  {
    m_minLatency = jsonValue.GetInteger("minLatency");

    m_minLatencyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("protocol"))
  {
    m_protocol = ProtocolMapper::GetProtocolForName(jsonValue.GetString("protocol"));

    m_protocolHasBeenSet = true;
  }

  if(jsonValue.ValueExists("remoteId"))
  {
    m_remoteId = jsonValue.GetString("remoteId");

    m_remoteIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("senderControlPort"))
  {
    m_senderControlPort = jsonValue.GetInteger("senderControlPort");

    m_senderControlPortHasBeenSet = true;
  }

  if(jsonValue.ValueExists("senderIpAddress"))
  {
    m_senderIpAddress = jsonValue.GetString("senderIpAddress");

    m_senderIpAddressHasBeenSet = true;
  }

  if(jsonValue.ValueExists("smoothingLatency"))
  {
    m_smoothingLatency = jsonValue.GetInteger("smoothingLatency");

    m_smoothingLatencyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sourceListenerAddress"))
  {
    m_sourceListenerAddress = jsonValue.GetString("sourceListenerAddress");

    m_sourceListenerAddressHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sourceListenerPort"))
  {
    m_sourceListenerPort = jsonValue.GetInteger("sourceListenerPort");

    m_sourceListenerPortHasBeenSet = true;
  }

  if(jsonValue.ValueExists("streamId"))
  {
    m_streamId = jsonValue.GetString("streamId");

    m_streamIdHasBeenSet = true;
  }

  return *this;
}

JsonValue Transport::Jsonize() const
{
  JsonValue payload;

  if(m_cidrAllowListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> cidrAllowListJsonList(m_cidrAllowList.size());
   for(unsigned cidrAllowListIndex = 0; cidrAllowListIndex < cidrAllowListJsonList.GetLength(); ++cidrAllowListIndex)
   {
     cidrAllowListJsonList[cidrAllowListIndex].AsString(m_cidrAllowList[cidrAllowListIndex]);
   }
   payload.WithArray("cidrAllowList", std::move(cidrAllowListJsonList));

  }

  if(m_maxBitrateHasBeenSet)
  {
   payload.WithInteger("maxBitrate", m_maxBitrate);

  }

  if(m_maxLatencyHasBeenSet)
  {
   payload.WithInteger("maxLatency", m_maxLatency);

  }

  if(m_maxSyncBufferHasBeenSet)
  {
   payload.WithInteger("maxSyncBuffer", m_maxSyncBuffer);

  }

  if(m_minLatencyHasBeenSet)
  {
   payload.WithInteger("minLatency", m_minLatency);

  }

  if(m_protocolHasBeenSet)
  {
   payload.WithString("protocol", ProtocolMapper::GetNameForProtocol(m_protocol));
  }

  if(m_remoteIdHasBeenSet)
  {
   payload.WithString("remoteId", m_remoteId);

  }

  if(m_senderControlPortHasBeenSet)
  {
   payload.WithInteger("senderControlPort", m_senderControlPort);

  }

  if(m_senderIpAddressHasBeenSet)
  {
   payload.WithString("senderIpAddress", m_senderIpAddress);

  }

  if(m_smoothingLatencyHasBeenSet)
  {
   payload.WithInteger("smoothingLatency", m_smoothingLatency);

  }

  if(m_sourceListenerAddressHasBeenSet)
  {
   payload.WithString("sourceListenerAddress", m_sourceListenerAddress);

  }

  if(m_sourceListenerPortHasBeenSet)
  {
   payload.WithInteger("sourceListenerPort", m_sourceListenerPort);

  }

  if(m_streamIdHasBeenSet)
  {
   payload.WithString("streamId", m_streamId);

  }

  return payload;
}

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
