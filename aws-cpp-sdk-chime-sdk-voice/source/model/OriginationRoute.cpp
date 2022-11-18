/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-voice/model/OriginationRoute.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ChimeSDKVoice
{
namespace Model
{

OriginationRoute::OriginationRoute() : 
    m_hostHasBeenSet(false),
    m_port(0),
    m_portHasBeenSet(false),
    m_protocol(OriginationRouteProtocol::NOT_SET),
    m_protocolHasBeenSet(false),
    m_priority(0),
    m_priorityHasBeenSet(false),
    m_weight(0),
    m_weightHasBeenSet(false)
{
}

OriginationRoute::OriginationRoute(JsonView jsonValue) : 
    m_hostHasBeenSet(false),
    m_port(0),
    m_portHasBeenSet(false),
    m_protocol(OriginationRouteProtocol::NOT_SET),
    m_protocolHasBeenSet(false),
    m_priority(0),
    m_priorityHasBeenSet(false),
    m_weight(0),
    m_weightHasBeenSet(false)
{
  *this = jsonValue;
}

OriginationRoute& OriginationRoute::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Host"))
  {
    m_host = jsonValue.GetString("Host");

    m_hostHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Port"))
  {
    m_port = jsonValue.GetInteger("Port");

    m_portHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Protocol"))
  {
    m_protocol = OriginationRouteProtocolMapper::GetOriginationRouteProtocolForName(jsonValue.GetString("Protocol"));

    m_protocolHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Priority"))
  {
    m_priority = jsonValue.GetInteger("Priority");

    m_priorityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Weight"))
  {
    m_weight = jsonValue.GetInteger("Weight");

    m_weightHasBeenSet = true;
  }

  return *this;
}

JsonValue OriginationRoute::Jsonize() const
{
  JsonValue payload;

  if(m_hostHasBeenSet)
  {
   payload.WithString("Host", m_host);

  }

  if(m_portHasBeenSet)
  {
   payload.WithInteger("Port", m_port);

  }

  if(m_protocolHasBeenSet)
  {
   payload.WithString("Protocol", OriginationRouteProtocolMapper::GetNameForOriginationRouteProtocol(m_protocol));
  }

  if(m_priorityHasBeenSet)
  {
   payload.WithInteger("Priority", m_priority);

  }

  if(m_weightHasBeenSet)
  {
   payload.WithInteger("Weight", m_weight);

  }

  return payload;
}

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
