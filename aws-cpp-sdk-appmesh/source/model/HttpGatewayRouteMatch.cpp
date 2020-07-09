/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appmesh/model/HttpGatewayRouteMatch.h>
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

HttpGatewayRouteMatch::HttpGatewayRouteMatch() : 
    m_prefixHasBeenSet(false)
{
}

HttpGatewayRouteMatch::HttpGatewayRouteMatch(JsonView jsonValue) : 
    m_prefixHasBeenSet(false)
{
  *this = jsonValue;
}

HttpGatewayRouteMatch& HttpGatewayRouteMatch::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("prefix"))
  {
    m_prefix = jsonValue.GetString("prefix");

    m_prefixHasBeenSet = true;
  }

  return *this;
}

JsonValue HttpGatewayRouteMatch::Jsonize() const
{
  JsonValue payload;

  if(m_prefixHasBeenSet)
  {
   payload.WithString("prefix", m_prefix);

  }

  return payload;
}

} // namespace Model
} // namespace AppMesh
} // namespace Aws
