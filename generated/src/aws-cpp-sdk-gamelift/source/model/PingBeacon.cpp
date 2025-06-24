/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/PingBeacon.h>
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

PingBeacon::PingBeacon(JsonView jsonValue)
{
  *this = jsonValue;
}

PingBeacon& PingBeacon::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("UDPEndpoint"))
  {
    m_uDPEndpoint = jsonValue.GetObject("UDPEndpoint");
    m_uDPEndpointHasBeenSet = true;
  }
  return *this;
}

JsonValue PingBeacon::Jsonize() const
{
  JsonValue payload;

  if(m_uDPEndpointHasBeenSet)
  {
   payload.WithObject("UDPEndpoint", m_uDPEndpoint.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace GameLift
} // namespace Aws
