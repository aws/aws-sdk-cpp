/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/InputDeviceNetworkSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaLive
{
namespace Model
{

InputDeviceNetworkSettings::InputDeviceNetworkSettings() : 
    m_dnsAddressesHasBeenSet(false),
    m_gatewayHasBeenSet(false),
    m_ipAddressHasBeenSet(false),
    m_ipScheme(InputDeviceIpScheme::NOT_SET),
    m_ipSchemeHasBeenSet(false),
    m_subnetMaskHasBeenSet(false)
{
}

InputDeviceNetworkSettings::InputDeviceNetworkSettings(JsonView jsonValue) : 
    m_dnsAddressesHasBeenSet(false),
    m_gatewayHasBeenSet(false),
    m_ipAddressHasBeenSet(false),
    m_ipScheme(InputDeviceIpScheme::NOT_SET),
    m_ipSchemeHasBeenSet(false),
    m_subnetMaskHasBeenSet(false)
{
  *this = jsonValue;
}

InputDeviceNetworkSettings& InputDeviceNetworkSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("dnsAddresses"))
  {
    Aws::Utils::Array<JsonView> dnsAddressesJsonList = jsonValue.GetArray("dnsAddresses");
    for(unsigned dnsAddressesIndex = 0; dnsAddressesIndex < dnsAddressesJsonList.GetLength(); ++dnsAddressesIndex)
    {
      m_dnsAddresses.push_back(dnsAddressesJsonList[dnsAddressesIndex].AsString());
    }
    m_dnsAddressesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("gateway"))
  {
    m_gateway = jsonValue.GetString("gateway");

    m_gatewayHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ipAddress"))
  {
    m_ipAddress = jsonValue.GetString("ipAddress");

    m_ipAddressHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ipScheme"))
  {
    m_ipScheme = InputDeviceIpSchemeMapper::GetInputDeviceIpSchemeForName(jsonValue.GetString("ipScheme"));

    m_ipSchemeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("subnetMask"))
  {
    m_subnetMask = jsonValue.GetString("subnetMask");

    m_subnetMaskHasBeenSet = true;
  }

  return *this;
}

JsonValue InputDeviceNetworkSettings::Jsonize() const
{
  JsonValue payload;

  if(m_dnsAddressesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> dnsAddressesJsonList(m_dnsAddresses.size());
   for(unsigned dnsAddressesIndex = 0; dnsAddressesIndex < dnsAddressesJsonList.GetLength(); ++dnsAddressesIndex)
   {
     dnsAddressesJsonList[dnsAddressesIndex].AsString(m_dnsAddresses[dnsAddressesIndex]);
   }
   payload.WithArray("dnsAddresses", std::move(dnsAddressesJsonList));

  }

  if(m_gatewayHasBeenSet)
  {
   payload.WithString("gateway", m_gateway);

  }

  if(m_ipAddressHasBeenSet)
  {
   payload.WithString("ipAddress", m_ipAddress);

  }

  if(m_ipSchemeHasBeenSet)
  {
   payload.WithString("ipScheme", InputDeviceIpSchemeMapper::GetNameForInputDeviceIpScheme(m_ipScheme));
  }

  if(m_subnetMaskHasBeenSet)
  {
   payload.WithString("subnetMask", m_subnetMask);

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
