﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appmesh/model/ListenerTimeout.h>
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

ListenerTimeout::ListenerTimeout(JsonView jsonValue)
{
  *this = jsonValue;
}

ListenerTimeout& ListenerTimeout::operator =(JsonView jsonValue)
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
  if(jsonValue.ValueExists("tcp"))
  {
    m_tcp = jsonValue.GetObject("tcp");
    m_tcpHasBeenSet = true;
  }
  return *this;
}

JsonValue ListenerTimeout::Jsonize() const
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

  if(m_tcpHasBeenSet)
  {
   payload.WithObject("tcp", m_tcp.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace AppMesh
} // namespace Aws
