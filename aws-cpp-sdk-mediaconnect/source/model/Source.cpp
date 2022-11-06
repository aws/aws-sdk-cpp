/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconnect/model/Source.h>
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

Source::Source() : 
    m_dataTransferSubscriberFeePercent(0),
    m_dataTransferSubscriberFeePercentHasBeenSet(false),
    m_decryptionHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_entitlementArnHasBeenSet(false),
    m_ingestIpHasBeenSet(false),
    m_ingestPort(0),
    m_ingestPortHasBeenSet(false),
    m_mediaStreamSourceConfigurationsHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_senderControlPort(0),
    m_senderControlPortHasBeenSet(false),
    m_senderIpAddressHasBeenSet(false),
    m_sourceArnHasBeenSet(false),
    m_transportHasBeenSet(false),
    m_vpcInterfaceNameHasBeenSet(false),
    m_whitelistCidrHasBeenSet(false)
{
}

Source::Source(JsonView jsonValue) : 
    m_dataTransferSubscriberFeePercent(0),
    m_dataTransferSubscriberFeePercentHasBeenSet(false),
    m_decryptionHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_entitlementArnHasBeenSet(false),
    m_ingestIpHasBeenSet(false),
    m_ingestPort(0),
    m_ingestPortHasBeenSet(false),
    m_mediaStreamSourceConfigurationsHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_senderControlPort(0),
    m_senderControlPortHasBeenSet(false),
    m_senderIpAddressHasBeenSet(false),
    m_sourceArnHasBeenSet(false),
    m_transportHasBeenSet(false),
    m_vpcInterfaceNameHasBeenSet(false),
    m_whitelistCidrHasBeenSet(false)
{
  *this = jsonValue;
}

Source& Source::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("dataTransferSubscriberFeePercent"))
  {
    m_dataTransferSubscriberFeePercent = jsonValue.GetInteger("dataTransferSubscriberFeePercent");

    m_dataTransferSubscriberFeePercentHasBeenSet = true;
  }

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

  if(jsonValue.ValueExists("ingestIp"))
  {
    m_ingestIp = jsonValue.GetString("ingestIp");

    m_ingestIpHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ingestPort"))
  {
    m_ingestPort = jsonValue.GetInteger("ingestPort");

    m_ingestPortHasBeenSet = true;
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

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
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

  if(jsonValue.ValueExists("sourceArn"))
  {
    m_sourceArn = jsonValue.GetString("sourceArn");

    m_sourceArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("transport"))
  {
    m_transport = jsonValue.GetObject("transport");

    m_transportHasBeenSet = true;
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

JsonValue Source::Jsonize() const
{
  JsonValue payload;

  if(m_dataTransferSubscriberFeePercentHasBeenSet)
  {
   payload.WithInteger("dataTransferSubscriberFeePercent", m_dataTransferSubscriberFeePercent);

  }

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

  if(m_ingestIpHasBeenSet)
  {
   payload.WithString("ingestIp", m_ingestIp);

  }

  if(m_ingestPortHasBeenSet)
  {
   payload.WithInteger("ingestPort", m_ingestPort);

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

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_senderControlPortHasBeenSet)
  {
   payload.WithInteger("senderControlPort", m_senderControlPort);

  }

  if(m_senderIpAddressHasBeenSet)
  {
   payload.WithString("senderIpAddress", m_senderIpAddress);

  }

  if(m_sourceArnHasBeenSet)
  {
   payload.WithString("sourceArn", m_sourceArn);

  }

  if(m_transportHasBeenSet)
  {
   payload.WithObject("transport", m_transport.Jsonize());

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
