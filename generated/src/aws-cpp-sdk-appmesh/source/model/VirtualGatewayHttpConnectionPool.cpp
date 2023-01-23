/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appmesh/model/VirtualGatewayHttpConnectionPool.h>
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

VirtualGatewayHttpConnectionPool::VirtualGatewayHttpConnectionPool() : 
    m_maxConnections(0),
    m_maxConnectionsHasBeenSet(false),
    m_maxPendingRequests(0),
    m_maxPendingRequestsHasBeenSet(false)
{
}

VirtualGatewayHttpConnectionPool::VirtualGatewayHttpConnectionPool(JsonView jsonValue) : 
    m_maxConnections(0),
    m_maxConnectionsHasBeenSet(false),
    m_maxPendingRequests(0),
    m_maxPendingRequestsHasBeenSet(false)
{
  *this = jsonValue;
}

VirtualGatewayHttpConnectionPool& VirtualGatewayHttpConnectionPool::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("maxConnections"))
  {
    m_maxConnections = jsonValue.GetInteger("maxConnections");

    m_maxConnectionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("maxPendingRequests"))
  {
    m_maxPendingRequests = jsonValue.GetInteger("maxPendingRequests");

    m_maxPendingRequestsHasBeenSet = true;
  }

  return *this;
}

JsonValue VirtualGatewayHttpConnectionPool::Jsonize() const
{
  JsonValue payload;

  if(m_maxConnectionsHasBeenSet)
  {
   payload.WithInteger("maxConnections", m_maxConnections);

  }

  if(m_maxPendingRequestsHasBeenSet)
  {
   payload.WithInteger("maxPendingRequests", m_maxPendingRequests);

  }

  return payload;
}

} // namespace Model
} // namespace AppMesh
} // namespace Aws
