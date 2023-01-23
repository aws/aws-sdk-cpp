/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appmesh/model/GatewayRouteHostnameMatch.h>
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

GatewayRouteHostnameMatch::GatewayRouteHostnameMatch() : 
    m_exactHasBeenSet(false),
    m_suffixHasBeenSet(false)
{
}

GatewayRouteHostnameMatch::GatewayRouteHostnameMatch(JsonView jsonValue) : 
    m_exactHasBeenSet(false),
    m_suffixHasBeenSet(false)
{
  *this = jsonValue;
}

GatewayRouteHostnameMatch& GatewayRouteHostnameMatch::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("exact"))
  {
    m_exact = jsonValue.GetString("exact");

    m_exactHasBeenSet = true;
  }

  if(jsonValue.ValueExists("suffix"))
  {
    m_suffix = jsonValue.GetString("suffix");

    m_suffixHasBeenSet = true;
  }

  return *this;
}

JsonValue GatewayRouteHostnameMatch::Jsonize() const
{
  JsonValue payload;

  if(m_exactHasBeenSet)
  {
   payload.WithString("exact", m_exact);

  }

  if(m_suffixHasBeenSet)
  {
   payload.WithString("suffix", m_suffix);

  }

  return payload;
}

} // namespace Model
} // namespace AppMesh
} // namespace Aws
