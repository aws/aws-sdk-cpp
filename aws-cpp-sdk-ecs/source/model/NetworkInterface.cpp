﻿/*
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

#include <aws/ecs/model/NetworkInterface.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ECS
{
namespace Model
{

NetworkInterface::NetworkInterface() : 
    m_attachmentIdHasBeenSet(false),
    m_privateIpv4AddressHasBeenSet(false),
    m_ipv6AddressHasBeenSet(false)
{
}

NetworkInterface::NetworkInterface(JsonView jsonValue) : 
    m_attachmentIdHasBeenSet(false),
    m_privateIpv4AddressHasBeenSet(false),
    m_ipv6AddressHasBeenSet(false)
{
  *this = jsonValue;
}

NetworkInterface& NetworkInterface::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("attachmentId"))
  {
    m_attachmentId = jsonValue.GetString("attachmentId");

    m_attachmentIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("privateIpv4Address"))
  {
    m_privateIpv4Address = jsonValue.GetString("privateIpv4Address");

    m_privateIpv4AddressHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ipv6Address"))
  {
    m_ipv6Address = jsonValue.GetString("ipv6Address");

    m_ipv6AddressHasBeenSet = true;
  }

  return *this;
}

JsonValue NetworkInterface::Jsonize() const
{
  JsonValue payload;

  if(m_attachmentIdHasBeenSet)
  {
   payload.WithString("attachmentId", m_attachmentId);

  }

  if(m_privateIpv4AddressHasBeenSet)
  {
   payload.WithString("privateIpv4Address", m_privateIpv4Address);

  }

  if(m_ipv6AddressHasBeenSet)
  {
   payload.WithString("ipv6Address", m_ipv6Address);

  }

  return payload;
}

} // namespace Model
} // namespace ECS
} // namespace Aws
