/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/IpPermission.h>
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

IpPermission::IpPermission() : 
    m_fromPort(0),
    m_fromPortHasBeenSet(false),
    m_toPort(0),
    m_toPortHasBeenSet(false),
    m_ipRangeHasBeenSet(false),
    m_protocol(IpProtocol::NOT_SET),
    m_protocolHasBeenSet(false)
{
}

IpPermission::IpPermission(JsonView jsonValue) : 
    m_fromPort(0),
    m_fromPortHasBeenSet(false),
    m_toPort(0),
    m_toPortHasBeenSet(false),
    m_ipRangeHasBeenSet(false),
    m_protocol(IpProtocol::NOT_SET),
    m_protocolHasBeenSet(false)
{
  *this = jsonValue;
}

IpPermission& IpPermission::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FromPort"))
  {
    m_fromPort = jsonValue.GetInteger("FromPort");

    m_fromPortHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ToPort"))
  {
    m_toPort = jsonValue.GetInteger("ToPort");

    m_toPortHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IpRange"))
  {
    m_ipRange = jsonValue.GetString("IpRange");

    m_ipRangeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Protocol"))
  {
    m_protocol = IpProtocolMapper::GetIpProtocolForName(jsonValue.GetString("Protocol"));

    m_protocolHasBeenSet = true;
  }

  return *this;
}

JsonValue IpPermission::Jsonize() const
{
  JsonValue payload;

  if(m_fromPortHasBeenSet)
  {
   payload.WithInteger("FromPort", m_fromPort);

  }

  if(m_toPortHasBeenSet)
  {
   payload.WithInteger("ToPort", m_toPort);

  }

  if(m_ipRangeHasBeenSet)
  {
   payload.WithString("IpRange", m_ipRange);

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
