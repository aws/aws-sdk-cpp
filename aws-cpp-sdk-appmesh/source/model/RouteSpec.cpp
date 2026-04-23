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

#include <aws/appmesh/model/RouteSpec.h>
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

RouteSpec::RouteSpec() : 
    m_httpRouteHasBeenSet(false),
    m_tcpRouteHasBeenSet(false)
{
}

RouteSpec::RouteSpec(JsonView jsonValue) : 
    m_httpRouteHasBeenSet(false),
    m_tcpRouteHasBeenSet(false)
{
  *this = jsonValue;
}

RouteSpec& RouteSpec::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("httpRoute"))
  {
    m_httpRoute = jsonValue.GetObject("httpRoute");

    m_httpRouteHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tcpRoute"))
  {
    m_tcpRoute = jsonValue.GetObject("tcpRoute");

    m_tcpRouteHasBeenSet = true;
  }

  return *this;
}

JsonValue RouteSpec::Jsonize() const
{
  JsonValue payload;

  if(m_httpRouteHasBeenSet)
  {
   payload.WithObject("httpRoute", m_httpRoute.Jsonize());

  }

  if(m_tcpRouteHasBeenSet)
  {
   payload.WithObject("tcpRoute", m_tcpRoute.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace AppMesh
} // namespace Aws
