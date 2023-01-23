/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appmesh/model/VirtualNodeTcpConnectionPool.h>
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

VirtualNodeTcpConnectionPool::VirtualNodeTcpConnectionPool() : 
    m_maxConnections(0),
    m_maxConnectionsHasBeenSet(false)
{
}

VirtualNodeTcpConnectionPool::VirtualNodeTcpConnectionPool(JsonView jsonValue) : 
    m_maxConnections(0),
    m_maxConnectionsHasBeenSet(false)
{
  *this = jsonValue;
}

VirtualNodeTcpConnectionPool& VirtualNodeTcpConnectionPool::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("maxConnections"))
  {
    m_maxConnections = jsonValue.GetInteger("maxConnections");

    m_maxConnectionsHasBeenSet = true;
  }

  return *this;
}

JsonValue VirtualNodeTcpConnectionPool::Jsonize() const
{
  JsonValue payload;

  if(m_maxConnectionsHasBeenSet)
  {
   payload.WithInteger("maxConnections", m_maxConnections);

  }

  return payload;
}

} // namespace Model
} // namespace AppMesh
} // namespace Aws
