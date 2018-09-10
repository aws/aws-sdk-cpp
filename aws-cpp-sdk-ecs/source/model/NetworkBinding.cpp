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

#include <aws/ecs/model/NetworkBinding.h>
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

NetworkBinding::NetworkBinding() : 
    m_bindIPHasBeenSet(false),
    m_containerPort(0),
    m_containerPortHasBeenSet(false),
    m_hostPort(0),
    m_hostPortHasBeenSet(false),
    m_protocol(TransportProtocol::NOT_SET),
    m_protocolHasBeenSet(false)
{
}

NetworkBinding::NetworkBinding(JsonView jsonValue) : 
    m_bindIPHasBeenSet(false),
    m_containerPort(0),
    m_containerPortHasBeenSet(false),
    m_hostPort(0),
    m_hostPortHasBeenSet(false),
    m_protocol(TransportProtocol::NOT_SET),
    m_protocolHasBeenSet(false)
{
  *this = jsonValue;
}

NetworkBinding& NetworkBinding::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("bindIP"))
  {
    m_bindIP = jsonValue.GetString("bindIP");

    m_bindIPHasBeenSet = true;
  }

  if(jsonValue.ValueExists("containerPort"))
  {
    m_containerPort = jsonValue.GetInteger("containerPort");

    m_containerPortHasBeenSet = true;
  }

  if(jsonValue.ValueExists("hostPort"))
  {
    m_hostPort = jsonValue.GetInteger("hostPort");

    m_hostPortHasBeenSet = true;
  }

  if(jsonValue.ValueExists("protocol"))
  {
    m_protocol = TransportProtocolMapper::GetTransportProtocolForName(jsonValue.GetString("protocol"));

    m_protocolHasBeenSet = true;
  }

  return *this;
}

JsonValue NetworkBinding::Jsonize() const
{
  JsonValue payload;

  if(m_bindIPHasBeenSet)
  {
   payload.WithString("bindIP", m_bindIP);

  }

  if(m_containerPortHasBeenSet)
  {
   payload.WithInteger("containerPort", m_containerPort);

  }

  if(m_hostPortHasBeenSet)
  {
   payload.WithInteger("hostPort", m_hostPort);

  }

  if(m_protocolHasBeenSet)
  {
   payload.WithString("protocol", TransportProtocolMapper::GetNameForTransportProtocol(m_protocol));
  }

  return payload;
}

} // namespace Model
} // namespace ECS
} // namespace Aws
