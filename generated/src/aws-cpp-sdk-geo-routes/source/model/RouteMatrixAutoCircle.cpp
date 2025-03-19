/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/RouteMatrixAutoCircle.h>
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

RouteMatrixAutoCircle::RouteMatrixAutoCircle(JsonView jsonValue)
{
  *this = jsonValue;
}

RouteMatrixAutoCircle& RouteMatrixAutoCircle::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Margin"))
  {
    m_margin = jsonValue.GetInt64("Margin");
    m_marginHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MaxRadius"))
  {
    m_maxRadius = jsonValue.GetInt64("MaxRadius");
    m_maxRadiusHasBeenSet = true;
  }
  return *this;
}

JsonValue RouteMatrixAutoCircle::Jsonize() const
{
  JsonValue payload;

  if(m_marginHasBeenSet)
  {
   payload.WithInt64("Margin", m_margin);

  }

  if(m_maxRadiusHasBeenSet)
  {
   payload.WithInt64("MaxRadius", m_maxRadius);

  }

  return payload;
}

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
