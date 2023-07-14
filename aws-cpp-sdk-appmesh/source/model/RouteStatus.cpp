/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appmesh/model/RouteStatus.h>
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

RouteStatus::RouteStatus() : 
    m_status(RouteStatusCode::NOT_SET),
    m_statusHasBeenSet(false)
{
}

RouteStatus::RouteStatus(JsonView jsonValue) : 
    m_status(RouteStatusCode::NOT_SET),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

RouteStatus& RouteStatus::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("status"))
  {
    m_status = RouteStatusCodeMapper::GetRouteStatusCodeForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue RouteStatus::Jsonize() const
{
  JsonValue payload;

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", RouteStatusCodeMapper::GetNameForRouteStatusCode(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace AppMesh
} // namespace Aws
