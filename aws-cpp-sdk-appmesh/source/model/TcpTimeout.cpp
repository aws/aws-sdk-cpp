/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appmesh/model/TcpTimeout.h>
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

TcpTimeout::TcpTimeout() : 
    m_idleHasBeenSet(false)
{
}

TcpTimeout::TcpTimeout(JsonView jsonValue) : 
    m_idleHasBeenSet(false)
{
  *this = jsonValue;
}

TcpTimeout& TcpTimeout::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("idle"))
  {
    m_idle = jsonValue.GetObject("idle");

    m_idleHasBeenSet = true;
  }

  return *this;
}

JsonValue TcpTimeout::Jsonize() const
{
  JsonValue payload;

  if(m_idleHasBeenSet)
  {
   payload.WithObject("idle", m_idle.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace AppMesh
} // namespace Aws
