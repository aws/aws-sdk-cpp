/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/RouteAllowOptions.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GeoRoutes
{
namespace Model
{

RouteAllowOptions::RouteAllowOptions() : 
    m_hot(false),
    m_hotHasBeenSet(false),
    m_hov(false),
    m_hovHasBeenSet(false)
{
}

RouteAllowOptions::RouteAllowOptions(JsonView jsonValue)
  : RouteAllowOptions()
{
  *this = jsonValue;
}

RouteAllowOptions& RouteAllowOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Hot"))
  {
    m_hot = jsonValue.GetBool("Hot");

    m_hotHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Hov"))
  {
    m_hov = jsonValue.GetBool("Hov");

    m_hovHasBeenSet = true;
  }

  return *this;
}

JsonValue RouteAllowOptions::Jsonize() const
{
  JsonValue payload;

  if(m_hotHasBeenSet)
  {
   payload.WithBool("Hot", m_hot);

  }

  if(m_hovHasBeenSet)
  {
   payload.WithBool("Hov", m_hov);

  }

  return payload;
}

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
