/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appmesh/model/TcpRouteMatch.h>
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

TcpRouteMatch::TcpRouteMatch() : 
    m_port(0),
    m_portHasBeenSet(false)
{
}

TcpRouteMatch::TcpRouteMatch(JsonView jsonValue) : 
    m_port(0),
    m_portHasBeenSet(false)
{
  *this = jsonValue;
}

TcpRouteMatch& TcpRouteMatch::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("port"))
  {
    m_port = jsonValue.GetInteger("port");

    m_portHasBeenSet = true;
  }

  return *this;
}

JsonValue TcpRouteMatch::Jsonize() const
{
  JsonValue payload;

  if(m_portHasBeenSet)
  {
   payload.WithInteger("port", m_port);

  }

  return payload;
}

} // namespace Model
} // namespace AppMesh
} // namespace Aws
