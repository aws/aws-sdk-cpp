﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/directconnect/model/NewPublicVirtualInterfaceAllocation.h>
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

NewPublicVirtualInterfaceAllocation::NewPublicVirtualInterfaceAllocation() : 
    m_virtualInterfaceNameHasBeenSet(false),
    m_vlan(0),
    m_vlanHasBeenSet(false),
    m_asn(0),
    m_asnHasBeenSet(false),
    m_authKeyHasBeenSet(false),
    m_amazonAddressHasBeenSet(false),
    m_customerAddressHasBeenSet(false),
    m_addressFamily(AddressFamily::NOT_SET),
    m_addressFamilyHasBeenSet(false),
    m_routeFilterPrefixesHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

NewPublicVirtualInterfaceAllocation::NewPublicVirtualInterfaceAllocation(JsonView jsonValue) : 
    m_virtualInterfaceNameHasBeenSet(false),
    m_vlan(0),
    m_vlanHasBeenSet(false),
    m_asn(0),
    m_asnHasBeenSet(false),
    m_authKeyHasBeenSet(false),
    m_amazonAddressHasBeenSet(false),
    m_customerAddressHasBeenSet(false),
    m_addressFamily(AddressFamily::NOT_SET),
    m_addressFamilyHasBeenSet(false),
    m_routeFilterPrefixesHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = jsonValue;
}

NewPublicVirtualInterfaceAllocation& NewPublicVirtualInterfaceAllocation::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("routeFilterPrefixes"))
  {
    Array<JsonView> routeFilterPrefixesJsonList = jsonValue.GetArray("routeFilterPrefixes");
    for(unsigned routeFilterPrefixesIndex = 0; routeFilterPrefixesIndex < routeFilterPrefixesJsonList.GetLength(); ++routeFilterPrefixesIndex)
    {
      m_routeFilterPrefixes.push_back(routeFilterPrefixesJsonList[routeFilterPrefixesIndex].AsObject());
    }
    m_routeFilterPrefixesHasBeenSet = true;
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

JsonValue NewPublicVirtualInterfaceAllocation::Jsonize() const
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

  if(m_routeFilterPrefixesHasBeenSet)
  {
   Array<JsonValue> routeFilterPrefixesJsonList(m_routeFilterPrefixes.size());
   for(unsigned routeFilterPrefixesIndex = 0; routeFilterPrefixesIndex < routeFilterPrefixesJsonList.GetLength(); ++routeFilterPrefixesIndex)
   {
     routeFilterPrefixesJsonList[routeFilterPrefixesIndex].AsObject(m_routeFilterPrefixes[routeFilterPrefixesIndex].Jsonize());
   }
   payload.WithArray("routeFilterPrefixes", std::move(routeFilterPrefixesJsonList));

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
