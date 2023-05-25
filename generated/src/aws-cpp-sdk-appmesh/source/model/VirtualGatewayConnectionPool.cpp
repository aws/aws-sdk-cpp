/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appmesh/model/VirtualGatewayConnectionPool.h>
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

VirtualGatewayConnectionPool::VirtualGatewayConnectionPool() : 
    m_grpcHasBeenSet(false),
    m_httpHasBeenSet(false),
    m_http2HasBeenSet(false)
{
}

VirtualGatewayConnectionPool::VirtualGatewayConnectionPool(JsonView jsonValue) : 
    m_grpcHasBeenSet(false),
    m_httpHasBeenSet(false),
    m_http2HasBeenSet(false)
{
  *this = jsonValue;
}

VirtualGatewayConnectionPool& VirtualGatewayConnectionPool::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("grpc"))
  {
    m_grpc = jsonValue.GetObject("grpc");

    m_grpcHasBeenSet = true;
  }

  if(jsonValue.ValueExists("http"))
  {
    m_http = jsonValue.GetObject("http");

    m_httpHasBeenSet = true;
  }

  if(jsonValue.ValueExists("http2"))
  {
    m_http2 = jsonValue.GetObject("http2");

    m_http2HasBeenSet = true;
  }

  return *this;
}

JsonValue VirtualGatewayConnectionPool::Jsonize() const
{
  JsonValue payload;

  if(m_grpcHasBeenSet)
  {
   payload.WithObject("grpc", m_grpc.Jsonize());

  }

  if(m_httpHasBeenSet)
  {
   payload.WithObject("http", m_http.Jsonize());

  }

  if(m_http2HasBeenSet)
  {
   payload.WithObject("http2", m_http2.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace AppMesh
} // namespace Aws
