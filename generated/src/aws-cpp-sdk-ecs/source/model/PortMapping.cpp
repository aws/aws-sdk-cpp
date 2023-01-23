/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/PortMapping.h>
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

PortMapping::PortMapping() : 
    m_containerPort(0),
    m_containerPortHasBeenSet(false),
    m_hostPort(0),
    m_hostPortHasBeenSet(false),
    m_protocol(TransportProtocol::NOT_SET),
    m_protocolHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_appProtocol(ApplicationProtocol::NOT_SET),
    m_appProtocolHasBeenSet(false),
    m_containerPortRangeHasBeenSet(false)
{
}

PortMapping::PortMapping(JsonView jsonValue) : 
    m_containerPort(0),
    m_containerPortHasBeenSet(false),
    m_hostPort(0),
    m_hostPortHasBeenSet(false),
    m_protocol(TransportProtocol::NOT_SET),
    m_protocolHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_appProtocol(ApplicationProtocol::NOT_SET),
    m_appProtocolHasBeenSet(false),
    m_containerPortRangeHasBeenSet(false)
{
  *this = jsonValue;
}

PortMapping& PortMapping::operator =(JsonView jsonValue)
{
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

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("appProtocol"))
  {
    m_appProtocol = ApplicationProtocolMapper::GetApplicationProtocolForName(jsonValue.GetString("appProtocol"));

    m_appProtocolHasBeenSet = true;
  }

  if(jsonValue.ValueExists("containerPortRange"))
  {
    m_containerPortRange = jsonValue.GetString("containerPortRange");

    m_containerPortRangeHasBeenSet = true;
  }

  return *this;
}

JsonValue PortMapping::Jsonize() const
{
  JsonValue payload;

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

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_appProtocolHasBeenSet)
  {
   payload.WithString("appProtocol", ApplicationProtocolMapper::GetNameForApplicationProtocol(m_appProtocol));
  }

  if(m_containerPortRangeHasBeenSet)
  {
   payload.WithString("containerPortRange", m_containerPortRange);

  }

  return payload;
}

} // namespace Model
} // namespace ECS
} // namespace Aws
