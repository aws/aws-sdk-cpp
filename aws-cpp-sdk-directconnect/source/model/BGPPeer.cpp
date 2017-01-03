﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/directconnect/model/BGPPeer.h>
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

BGPPeer::BGPPeer() : 
    m_asn(0),
    m_asnHasBeenSet(false),
    m_authKeyHasBeenSet(false),
    m_addressFamily(AddressFamily::NOT_SET),
    m_addressFamilyHasBeenSet(false),
    m_amazonAddressHasBeenSet(false),
    m_customerAddressHasBeenSet(false),
    m_bgpPeerState(BGPPeerState::NOT_SET),
    m_bgpPeerStateHasBeenSet(false),
    m_bgpStatus(BGPStatus::NOT_SET),
    m_bgpStatusHasBeenSet(false)
{
}

BGPPeer::BGPPeer(const JsonValue& jsonValue) : 
    m_asn(0),
    m_asnHasBeenSet(false),
    m_authKeyHasBeenSet(false),
    m_addressFamily(AddressFamily::NOT_SET),
    m_addressFamilyHasBeenSet(false),
    m_amazonAddressHasBeenSet(false),
    m_customerAddressHasBeenSet(false),
    m_bgpPeerState(BGPPeerState::NOT_SET),
    m_bgpPeerStateHasBeenSet(false),
    m_bgpStatus(BGPStatus::NOT_SET),
    m_bgpStatusHasBeenSet(false)
{
  *this = jsonValue;
}

BGPPeer& BGPPeer::operator =(const JsonValue& jsonValue)
{
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

  if(jsonValue.ValueExists("addressFamily"))
  {
    m_addressFamily = AddressFamilyMapper::GetAddressFamilyForName(jsonValue.GetString("addressFamily"));

    m_addressFamilyHasBeenSet = true;
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

  if(jsonValue.ValueExists("bgpPeerState"))
  {
    m_bgpPeerState = BGPPeerStateMapper::GetBGPPeerStateForName(jsonValue.GetString("bgpPeerState"));

    m_bgpPeerStateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("bgpStatus"))
  {
    m_bgpStatus = BGPStatusMapper::GetBGPStatusForName(jsonValue.GetString("bgpStatus"));

    m_bgpStatusHasBeenSet = true;
  }

  return *this;
}

JsonValue BGPPeer::Jsonize() const
{
  JsonValue payload;

  if(m_asnHasBeenSet)
  {
   payload.WithInteger("asn", m_asn);

  }

  if(m_authKeyHasBeenSet)
  {
   payload.WithString("authKey", m_authKey);

  }

  if(m_addressFamilyHasBeenSet)
  {
   payload.WithString("addressFamily", AddressFamilyMapper::GetNameForAddressFamily(m_addressFamily));
  }

  if(m_amazonAddressHasBeenSet)
  {
   payload.WithString("amazonAddress", m_amazonAddress);

  }

  if(m_customerAddressHasBeenSet)
  {
   payload.WithString("customerAddress", m_customerAddress);

  }

  if(m_bgpPeerStateHasBeenSet)
  {
   payload.WithString("bgpPeerState", BGPPeerStateMapper::GetNameForBGPPeerState(m_bgpPeerState));
  }

  if(m_bgpStatusHasBeenSet)
  {
   payload.WithString("bgpStatus", BGPStatusMapper::GetNameForBGPStatus(m_bgpStatus));
  }

  return payload;
}

} // namespace Model
} // namespace DirectConnect
} // namespace Aws