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

#include <aws/guardduty/model/NetworkConnectionAction.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GuardDuty
{
namespace Model
{

NetworkConnectionAction::NetworkConnectionAction() : 
    m_blocked(false),
    m_blockedHasBeenSet(false),
    m_connectionDirectionHasBeenSet(false),
    m_localPortDetailsHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_remoteIpDetailsHasBeenSet(false),
    m_remotePortDetailsHasBeenSet(false)
{
}

NetworkConnectionAction::NetworkConnectionAction(JsonView jsonValue) : 
    m_blocked(false),
    m_blockedHasBeenSet(false),
    m_connectionDirectionHasBeenSet(false),
    m_localPortDetailsHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_remoteIpDetailsHasBeenSet(false),
    m_remotePortDetailsHasBeenSet(false)
{
  *this = jsonValue;
}

NetworkConnectionAction& NetworkConnectionAction::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("blocked"))
  {
    m_blocked = jsonValue.GetBool("blocked");

    m_blockedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("connectionDirection"))
  {
    m_connectionDirection = jsonValue.GetString("connectionDirection");

    m_connectionDirectionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("localPortDetails"))
  {
    m_localPortDetails = jsonValue.GetObject("localPortDetails");

    m_localPortDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("protocol"))
  {
    m_protocol = jsonValue.GetString("protocol");

    m_protocolHasBeenSet = true;
  }

  if(jsonValue.ValueExists("remoteIpDetails"))
  {
    m_remoteIpDetails = jsonValue.GetObject("remoteIpDetails");

    m_remoteIpDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("remotePortDetails"))
  {
    m_remotePortDetails = jsonValue.GetObject("remotePortDetails");

    m_remotePortDetailsHasBeenSet = true;
  }

  return *this;
}

JsonValue NetworkConnectionAction::Jsonize() const
{
  JsonValue payload;

  if(m_blockedHasBeenSet)
  {
   payload.WithBool("blocked", m_blocked);

  }

  if(m_connectionDirectionHasBeenSet)
  {
   payload.WithString("connectionDirection", m_connectionDirection);

  }

  if(m_localPortDetailsHasBeenSet)
  {
   payload.WithObject("localPortDetails", m_localPortDetails.Jsonize());

  }

  if(m_protocolHasBeenSet)
  {
   payload.WithString("protocol", m_protocol);

  }

  if(m_remoteIpDetailsHasBeenSet)
  {
   payload.WithObject("remoteIpDetails", m_remoteIpDetails.Jsonize());

  }

  if(m_remotePortDetailsHasBeenSet)
  {
   payload.WithObject("remotePortDetails", m_remotePortDetails.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
