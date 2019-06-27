/*
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

#include <aws/directconnect/model/NewPrivateVirtualInterface.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DirectConnect
{
namespace Model
{

NewPrivateVirtualInterface::NewPrivateVirtualInterface() : 
    m_virtualInterfaceNameHasBeenSet(false),
    m_vlan(0),
    m_vlanHasBeenSet(false),
    m_asn(0),
    m_asnHasBeenSet(false),
    m_mtu(0),
    m_mtuHasBeenSet(false),
    m_authKeyHasBeenSet(false),
    m_amazonAddressHasBeenSet(false),
    m_customerAddressHasBeenSet(false),
    m_addressFamily(AddressFamily::NOT_SET),
    m_addressFamilyHasBeenSet(false),
    m_virtualGatewayIdHasBeenSet(false),
    m_directConnectGatewayIdHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

NewPrivateVirtualInterface::NewPrivateVirtualInterface(JsonView jsonValue) : 
    m_virtualInterfaceNameHasBeenSet(false),
    m_vlan(0),
    m_vlanHasBeenSet(false),
    m_asn(0),
    m_asnHasBeenSet(false),
    m_mtu(0),
    m_mtuHasBeenSet(false),
    m_authKeyHasBeenSet(false),
    m_amazonAddressHasBeenSet(false),
    m_customerAddressHasBeenSet(false),
    m_addressFamily(AddressFamily::NOT_SET),
    m_addressFamilyHasBeenSet(false),
    m_virtualGatewayIdHasBeenSet(false),
    m_directConnectGatewayIdHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = jsonValue;
}

NewPrivateVirtualInterface& NewPrivateVirtualInterface::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("virtualInterfaceName"))
  {
    m_virtualInterfaceName = jsonValue.GetString("virtualInterfaceName");

    m_virtualInterfaceNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("vlan"))
  {
    m_vlan = jsonValue.GetInteger("vlan");

    m_vlanHasBeenSet = true;
  }

  if(jsonValue.ValueExists("asn"))
  {
    m_asn = jsonValue.GetInteger("asn");

    m_asnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("mtu"))
  {
    m_mtu = jsonValue.GetInteger("mtu");

    m_mtuHasBeenSet = true;
  }

  if(jsonValue.ValueExists("authKey"))
  {
    m_authKey = jsonValue.GetString("authKey");

    m_authKeyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("amazonAddress"))
  {
    m_amazonAddress = jsonValue.GetString("amazonAddress");

    m_amazonAddressHasBeenSet = true;
  }

  if(jsonValue.ValueExists("customerAddress"))
  {
    m_customerAddress = jsonValue.GetString("customerAddress");

    m_customerAddressHasBeenSet = true;
  }

  if(jsonValue.ValueExists("addressFamily"))
  {
    m_addressFamily = AddressFamilyMapper::GetAddressFamilyForName(jsonValue.GetString("addressFamily"));

    m_addressFamilyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("virtualGatewayId"))
  {
    m_virtualGatewayId = jsonValue.GetString("virtualGatewayId");

    m_virtualGatewayIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("directConnectGatewayId"))
  {
    m_directConnectGatewayId = jsonValue.GetString("directConnectGatewayId");

    m_directConnectGatewayIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tags"))
  {
    Array<JsonView> tagsJsonList = jsonValue.GetArray("tags");
    for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
    {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
    }
    m_tagsHasBeenSet = true;
  }

  return *this;
}

JsonValue NewPrivateVirtualInterface::Jsonize() const
{
  JsonValue payload;

  if(m_virtualInterfaceNameHasBeenSet)
  {
   payload.WithString("virtualInterfaceName", m_virtualInterfaceName);

  }

  if(m_vlanHasBeenSet)
  {
   payload.WithInteger("vlan", m_vlan);

  }

  if(m_asnHasBeenSet)
  {
   payload.WithInteger("asn", m_asn);

  }

  if(m_mtuHasBeenSet)
  {
   payload.WithInteger("mtu", m_mtu);

  }

  if(m_authKeyHasBeenSet)
  {
   payload.WithString("authKey", m_authKey);

  }

  if(m_amazonAddressHasBeenSet)
  {
   payload.WithString("amazonAddress", m_amazonAddress);

  }

  if(m_customerAddressHasBeenSet)
  {
   payload.WithString("customerAddress", m_customerAddress);

  }

  if(m_addressFamilyHasBeenSet)
  {
   payload.WithString("addressFamily", AddressFamilyMapper::GetNameForAddressFamily(m_addressFamily));
  }

  if(m_virtualGatewayIdHasBeenSet)
  {
   payload.WithString("virtualGatewayId", m_virtualGatewayId);

  }

  if(m_directConnectGatewayIdHasBeenSet)
  {
   payload.WithString("directConnectGatewayId", m_directConnectGatewayId);

  }

  if(m_tagsHasBeenSet)
  {
   Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("tags", std::move(tagsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
