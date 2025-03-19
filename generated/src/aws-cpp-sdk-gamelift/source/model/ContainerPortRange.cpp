/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/ContainerPortRange.h>
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

ContainerPortRange::ContainerPortRange(JsonView jsonValue)
{
  *this = jsonValue;
}

ContainerPortRange& ContainerPortRange::operator =(JsonView jsonValue)
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
  if(jsonValue.ValueExists("Protocol"))
  {
    m_protocol = IpProtocolMapper::GetIpProtocolForName(jsonValue.GetString("Protocol"));
    m_protocolHasBeenSet = true;
  }
  return *this;
}

JsonValue ContainerPortRange::Jsonize() const
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

  if(m_protocolHasBeenSet)
  {
   payload.WithString("Protocol", IpProtocolMapper::GetNameForIpProtocol(m_protocol));
  }

  return payload;
}

} // namespace Model
} // namespace GameLift
} // namespace Aws
