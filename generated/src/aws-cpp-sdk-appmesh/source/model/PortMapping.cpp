/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appmesh/model/PortMapping.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppMesh
{
namespace Model
{

PortMapping::PortMapping(JsonView jsonValue)
{
  *this = jsonValue;
}

PortMapping& PortMapping::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("port"))
  {
    m_port = jsonValue.GetInteger("port");
    m_portHasBeenSet = true;
  }
  if(jsonValue.ValueExists("protocol"))
  {
    m_protocol = PortProtocolMapper::GetPortProtocolForName(jsonValue.GetString("protocol"));
    m_protocolHasBeenSet = true;
  }
  return *this;
}

JsonValue PortMapping::Jsonize() const
{
  JsonValue payload;

  if(m_portHasBeenSet)
  {
   payload.WithInteger("port", m_port);

  }

  if(m_protocolHasBeenSet)
  {
   payload.WithString("protocol", PortProtocolMapper::GetNameForPortProtocol(m_protocol));
  }

  return payload;
}

} // namespace Model
} // namespace AppMesh
} // namespace Aws
