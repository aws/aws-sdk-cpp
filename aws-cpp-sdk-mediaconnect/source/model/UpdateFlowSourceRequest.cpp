/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconnect/model/UpdateFlowSourceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MediaConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateFlowSourceRequest::UpdateFlowSourceRequest() : 
    m_decryptionHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_entitlementArnHasBeenSet(false),
    m_flowArnHasBeenSet(false),
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
    m_protocol(Protocol::NOT_SET),
    m_protocolHasBeenSet(false),
    m_senderControlPort(0),
    m_senderControlPortHasBeenSet(false),
    m_senderIpAddressHasBeenSet(false),
    m_sourceArnHasBeenSet(false),
    m_sourceListenerAddressHasBeenSet(false),
    m_sourceListenerPort(0),
    m_sourceListenerPortHasBeenSet(false),
    m_streamIdHasBeenSet(false),
    m_vpcInterfaceNameHasBeenSet(false),
    m_whitelistCidrHasBeenSet(false)
{
}

Aws::String UpdateFlowSourceRequest::SerializePayload() const
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

  return payload.View().WriteReadable();
}




