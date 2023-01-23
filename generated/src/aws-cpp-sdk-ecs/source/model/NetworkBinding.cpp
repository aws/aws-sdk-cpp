/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
    m_protocolHasBeenSet(false),
    m_containerPortRangeHasBeenSet(false),
    m_hostPortRangeHasBeenSet(false)
{
}

NetworkBinding::NetworkBinding(JsonView jsonValue) : 
    m_bindIPHasBeenSet(false),
    m_containerPort(0),
    m_containerPortHasBeenSet(false),
    m_hostPort(0),
    m_hostPortHasBeenSet(false),
    m_protocol(TransportProtocol::NOT_SET),
    m_protocolHasBeenSet(false),
    m_containerPortRangeHasBeenSet(false),
    m_hostPortRangeHasBeenSet(false)
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

  if(jsonValue.ValueExists("containerPortRange"))
  {
    m_containerPortRange = jsonValue.GetString("containerPortRange");

    m_containerPortRangeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("hostPortRange"))
  {
    m_hostPortRange = jsonValue.GetString("hostPortRange");

    m_hostPortRangeHasBeenSet = true;
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

  if(m_containerPortRangeHasBeenSet)
  {
   payload.WithString("containerPortRange", m_containerPortRange);

  }

  if(m_hostPortRangeHasBeenSet)
  {
   payload.WithString("hostPortRange", m_hostPortRange);

  }

  return payload;
}

} // namespace Model
} // namespace ECS
} // namespace Aws
