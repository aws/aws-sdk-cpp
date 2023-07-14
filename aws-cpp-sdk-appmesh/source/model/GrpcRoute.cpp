/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appmesh/model/GrpcRoute.h>
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

GrpcRoute::GrpcRoute() : 
    m_actionHasBeenSet(false),
    m_matchHasBeenSet(false),
    m_retryPolicyHasBeenSet(false),
    m_timeoutHasBeenSet(false)
{
}

GrpcRoute::GrpcRoute(JsonView jsonValue) : 
    m_actionHasBeenSet(false),
    m_matchHasBeenSet(false),
    m_retryPolicyHasBeenSet(false),
    m_timeoutHasBeenSet(false)
{
  *this = jsonValue;
}

GrpcRoute& GrpcRoute::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("action"))
  {
    m_action = jsonValue.GetObject("action");

    m_actionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("match"))
  {
    m_match = jsonValue.GetObject("match");

    m_matchHasBeenSet = true;
  }

  if(jsonValue.ValueExists("retryPolicy"))
  {
    m_retryPolicy = jsonValue.GetObject("retryPolicy");

    m_retryPolicyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("timeout"))
  {
    m_timeout = jsonValue.GetObject("timeout");

    m_timeoutHasBeenSet = true;
  }

  return *this;
}

JsonValue GrpcRoute::Jsonize() const
{
  JsonValue payload;

  if(m_actionHasBeenSet)
  {
   payload.WithObject("action", m_action.Jsonize());

  }

  if(m_matchHasBeenSet)
  {
   payload.WithObject("match", m_match.Jsonize());

  }

  if(m_retryPolicyHasBeenSet)
  {
   payload.WithObject("retryPolicy", m_retryPolicy.Jsonize());

  }

  if(m_timeoutHasBeenSet)
  {
   payload.WithObject("timeout", m_timeout.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace AppMesh
} // namespace Aws
