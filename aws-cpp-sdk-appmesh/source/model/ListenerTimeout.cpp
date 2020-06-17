/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

ListenerTimeout::ListenerTimeout() : 
    m_grpcHasBeenSet(false),
    m_httpHasBeenSet(false),
    m_http2HasBeenSet(false),
    m_tcpHasBeenSet(false)
{
}

ListenerTimeout::ListenerTimeout(JsonView jsonValue) : 
    m_grpcHasBeenSet(false),
    m_httpHasBeenSet(false),
    m_http2HasBeenSet(false),
    m_tcpHasBeenSet(false)
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
