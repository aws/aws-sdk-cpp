/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/NetworkConnectionAction.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

NetworkConnectionAction::NetworkConnectionAction() : 
    m_connectionDirectionHasBeenSet(false),
    m_remoteIpDetailsHasBeenSet(false),
    m_remotePortDetailsHasBeenSet(false),
    m_localPortDetailsHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_blocked(false),
    m_blockedHasBeenSet(false)
{
}

NetworkConnectionAction::NetworkConnectionAction(JsonView jsonValue) : 
    m_connectionDirectionHasBeenSet(false),
    m_remoteIpDetailsHasBeenSet(false),
    m_remotePortDetailsHasBeenSet(false),
    m_localPortDetailsHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_blocked(false),
    m_blockedHasBeenSet(false)
{
  *this = jsonValue;
}

NetworkConnectionAction& NetworkConnectionAction::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ConnectionDirection"))
  {
    m_connectionDirection = jsonValue.GetString("ConnectionDirection");

    m_connectionDirectionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RemoteIpDetails"))
  {
    m_remoteIpDetails = jsonValue.GetObject("RemoteIpDetails");

    m_remoteIpDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RemotePortDetails"))
  {
    m_remotePortDetails = jsonValue.GetObject("RemotePortDetails");

    m_remotePortDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LocalPortDetails"))
  {
    m_localPortDetails = jsonValue.GetObject("LocalPortDetails");

    m_localPortDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Protocol"))
  {
    m_protocol = jsonValue.GetString("Protocol");

    m_protocolHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Blocked"))
  {
    m_blocked = jsonValue.GetBool("Blocked");

    m_blockedHasBeenSet = true;
  }

  return *this;
}

JsonValue NetworkConnectionAction::Jsonize() const
{
  JsonValue payload;

  if(m_connectionDirectionHasBeenSet)
  {
   payload.WithString("ConnectionDirection", m_connectionDirection);

  }

  if(m_remoteIpDetailsHasBeenSet)
  {
   payload.WithObject("RemoteIpDetails", m_remoteIpDetails.Jsonize());

  }

  if(m_remotePortDetailsHasBeenSet)
  {
   payload.WithObject("RemotePortDetails", m_remotePortDetails.Jsonize());

  }

  if(m_localPortDetailsHasBeenSet)
  {
   payload.WithObject("LocalPortDetails", m_localPortDetails.Jsonize());

  }

  if(m_protocolHasBeenSet)
  {
   payload.WithString("Protocol", m_protocol);

  }

  if(m_blockedHasBeenSet)
  {
   payload.WithBool("Blocked", m_blocked);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
