/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appmesh/model/VirtualNodeGrpcConnectionPool.h>
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

VirtualNodeGrpcConnectionPool::VirtualNodeGrpcConnectionPool() : 
    m_maxRequests(0),
    m_maxRequestsHasBeenSet(false)
{
}

VirtualNodeGrpcConnectionPool::VirtualNodeGrpcConnectionPool(JsonView jsonValue) : 
    m_maxRequests(0),
    m_maxRequestsHasBeenSet(false)
{
  *this = jsonValue;
}

VirtualNodeGrpcConnectionPool& VirtualNodeGrpcConnectionPool::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("maxRequests"))
  {
    m_maxRequests = jsonValue.GetInteger("maxRequests");

    m_maxRequestsHasBeenSet = true;
  }

  return *this;
}

JsonValue VirtualNodeGrpcConnectionPool::Jsonize() const
{
  JsonValue payload;

  if(m_maxRequestsHasBeenSet)
  {
   payload.WithInteger("maxRequests", m_maxRequests);

  }

  return payload;
}

} // namespace Model
} // namespace AppMesh
} // namespace Aws
