/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/ContainerPortMapping.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GameLift
{
namespace Model
{

ContainerPortMapping::ContainerPortMapping() : 
    m_containerPort(0),
    m_containerPortHasBeenSet(false),
    m_connectionPort(0),
    m_connectionPortHasBeenSet(false),
    m_protocol(IpProtocol::NOT_SET),
    m_protocolHasBeenSet(false)
{
}

ContainerPortMapping::ContainerPortMapping(JsonView jsonValue) : 
    m_containerPort(0),
    m_containerPortHasBeenSet(false),
    m_connectionPort(0),
    m_connectionPortHasBeenSet(false),
    m_protocol(IpProtocol::NOT_SET),
    m_protocolHasBeenSet(false)
{
  *this = jsonValue;
}

ContainerPortMapping& ContainerPortMapping::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ContainerPort"))
  {
    m_containerPort = jsonValue.GetInteger("ContainerPort");

    m_containerPortHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ConnectionPort"))
  {
    m_connectionPort = jsonValue.GetInteger("ConnectionPort");

    m_connectionPortHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Protocol"))
  {
    m_protocol = IpProtocolMapper::GetIpProtocolForName(jsonValue.GetString("Protocol"));

    m_protocolHasBeenSet = true;
  }

  return *this;
}

JsonValue ContainerPortMapping::Jsonize() const
{
  JsonValue payload;

  if(m_containerPortHasBeenSet)
  {
   payload.WithInteger("ContainerPort", m_containerPort);

  }

  if(m_connectionPortHasBeenSet)
  {
   payload.WithInteger("ConnectionPort", m_connectionPort);

  }

  if(m_protocolHasBeenSet)
  {
   payload.WithString("Protocol", IpProtocolMapper::GetNameForIpProtocol(m_protocol));
  }

  return payload;
}

} // namespace Model
} // namespace GameLift
} // namespace Aws
