/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appmesh/model/GrpcTimeout.h>
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

GrpcTimeout::GrpcTimeout() : 
    m_idleHasBeenSet(false),
    m_perRequestHasBeenSet(false)
{
}

GrpcTimeout::GrpcTimeout(JsonView jsonValue) : 
    m_idleHasBeenSet(false),
    m_perRequestHasBeenSet(false)
{
  *this = jsonValue;
}

GrpcTimeout& GrpcTimeout::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("idle"))
  {
    m_idle = jsonValue.GetObject("idle");

    m_idleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("perRequest"))
  {
    m_perRequest = jsonValue.GetObject("perRequest");

    m_perRequestHasBeenSet = true;
  }

  return *this;
}

JsonValue GrpcTimeout::Jsonize() const
{
  JsonValue payload;

  if(m_idleHasBeenSet)
  {
   payload.WithObject("idle", m_idle.Jsonize());

  }

  if(m_perRequestHasBeenSet)
  {
   payload.WithObject("perRequest", m_perRequest.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace AppMesh
} // namespace Aws
