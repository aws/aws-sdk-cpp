/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconnect/model/SetSourceRequest.h>
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

SetSourceRequest::SetSourceRequest() : 
    m_decryptionHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_entitlementArnHasBeenSet(false),
    m_ingestPort(0),
    m_ingestPortHasBeenSet(false),
    m_maxBitrate(0),
    m_maxBitrateHasBeenSet(false),
    m_maxLatency(0),
    m_maxLatencyHasBeenSet(false),
    m_maxSyncBuffer(0),
    m_maxSyncBufferHasBeenSet(false),
    m_mediaStreamSourceConfigurationsHasBeenSet(false),
    m_minLatency(0),
    m_minLatencyHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_protocol(Protocol::NOT_SET),
    m_protocolHasBeenSet(false),
    m_senderControlPort(0),
    m_senderControlPortHasBeenSet(false),
    m_senderIpAddressHasBeenSet(false),
    m_sourceListenerAddressHasBeenSet(false),
    m_sourceListenerPort(0),
    m_sourceListenerPortHasBeenSet(false),
    m_streamIdHasBeenSet(false),
    m_vpcInterfaceNameHasBeenSet(false),
    m_whitelistCidrHasBeenSet(false)
{
}

SetSourceRequest::SetSourceRequest(JsonView jsonValue) : 
    m_decryptionHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_entitlementArnHasBeenSet(false),
    m_ingestPort(0),
    m_ingestPortHasBeenSet(false),
    m_maxBitrate(0),
    m_maxBitrateHasBeenSet(false),
    m_maxLatency(0),
    m_maxLatencyHasBeenSet(false),
    m_maxSyncBuffer(0),
    m_maxSyncBufferHasBeenSet(false),
    m_mediaStreamSourceConfigurationsHasBeenSet(false),
    m_minLatency(0),
    m_minLatencyHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_protocol(Protocol::NOT_SET),
    m_protocolHasBeenSet(false),
    m_senderControlPort(0),
    m_senderControlPortHasBeenSet(false),
    m_senderIpAddressHasBeenSet(false),
    m_sourceListenerAddressHasBeenSet(false),
    m_sourceListenerPort(0),
    m_sourceListenerPortHasBeenSet(false),
    m_streamIdHasBeenSet(false),
    m_vpcInterfaceNameHasBeenSet(false),
    m_whitelistCidrHasBeenSet(false)
{
  *this = jsonValue;
}

SetSourceRequest& SetSourceRequest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("decryption"))
  {
    m_decryption = jsonValue.GetObject("decryption");

    m_decryptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("entitlementArn"))
  {
    m_entitlementArn = jsonValue.GetString("entitlementArn");

    m_entitlementArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ingestPort"))
  {
    m_ingestPort = jsonValue.GetInteger("ingestPort");

    m_ingestPortHasBeenSet = true;
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

  if(jsonValue.ValueExists("mediaStreamSourceConfigurations"))
  {
    Aws::Utils::Array<JsonView> mediaStreamSourceConfigurationsJsonList = jsonValue.GetArray("mediaStreamSourceConfigurations");
    for(unsigned mediaStreamSourceConfigurationsIndex = 0; mediaStreamSourceConfigurationsIndex < mediaStreamSourceConfigurationsJsonList.GetLength(); ++mediaStreamSourceConfigurationsIndex)
    {
      m_mediaStreamSourceConfigurations.push_back(mediaStreamSourceConfigurationsJsonList[mediaStreamSourceConfigurationsIndex].AsObject());
    }
    m_mediaStreamSourceConfigurationsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("minLatency"))
  {
    m_minLatency = jsonValue.GetInteger("minLatency");

    m_minLatencyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("protocol"))
  {
    m_protocol = ProtocolMapper::GetProtocolForName(jsonValue.GetString("protocol"));

    m_protocolHasBeenSet = true;
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

  if(jsonValue.ValueExists("vpcInterfaceName"))
  {
    m_vpcInterfaceName = jsonValue.GetString("vpcInterfaceName");

    m_vpcInterfaceNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("whitelistCidr"))
  {
    m_whitelistCidr = jsonValue.GetString("whitelistCidr");

    m_whitelistCidrHasBeenSet = true;
  }

  return *this;
}

JsonValue SetSourceRequest::Jsonize() const
{
  JsonValue payload;

  if(m_decryptionHasBeenSet)
  {
   payload.WithObject("decryption", m_decryption.Jsonize());

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_entitlementArnHasBeenSet)
  {
   payload.WithString("entitlementArn", m_entitlementArn);

  }

  if(m_ingestPortHasBeenSet)
  {
   payload.WithInteger("ingestPort", m_ingestPort);

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

  if(m_mediaStreamSourceConfigurationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> mediaStreamSourceConfigurationsJsonList(m_mediaStreamSourceConfigurations.size());
   for(unsigned mediaStreamSourceConfigurationsIndex = 0; mediaStreamSourceConfigurationsIndex < mediaStreamSourceConfigurationsJsonList.GetLength(); ++mediaStreamSourceConfigurationsIndex)
   {
     mediaStreamSourceConfigurationsJsonList[mediaStreamSourceConfigurationsIndex].AsObject(m_mediaStreamSourceConfigurations[mediaStreamSourceConfigurationsIndex].Jsonize());
   }
   payload.WithArray("mediaStreamSourceConfigurations", std::move(mediaStreamSourceConfigurationsJsonList));

  }

  if(m_minLatencyHasBeenSet)
  {
   payload.WithInteger("minLatency", m_minLatency);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_protocolHasBeenSet)
  {
   payload.WithString("protocol", ProtocolMapper::GetNameForProtocol(m_protocol));
  }

  if(m_senderControlPortHasBeenSet)
  {
   payload.WithInteger("senderControlPort", m_senderControlPort);

  }

  if(m_senderIpAddressHasBeenSet)
  {
   payload.WithString("senderIpAddress", m_senderIpAddress);

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

  if(m_vpcInterfaceNameHasBeenSet)
  {
   payload.WithString("vpcInterfaceName", m_vpcInterfaceName);

  }

  if(m_whitelistCidrHasBeenSet)
  {
   payload.WithString("whitelistCidr", m_whitelistCidr);

  }

  return payload;
}

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
