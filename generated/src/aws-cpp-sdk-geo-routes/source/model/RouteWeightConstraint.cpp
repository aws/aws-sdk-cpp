/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/RouteWeightConstraint.h>
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

RouteWeightConstraint::RouteWeightConstraint(JsonView jsonValue)
{
  *this = jsonValue;
}

RouteWeightConstraint& RouteWeightConstraint::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Type"))
  {
    m_type = RouteWeightConstraintTypeMapper::GetRouteWeightConstraintTypeForName(jsonValue.GetString("Type"));
    m_typeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Value"))
  {
    m_value = jsonValue.GetInt64("Value");
    m_valueHasBeenSet = true;
  }
  return *this;
}

JsonValue RouteWeightConstraint::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", RouteWeightConstraintTypeMapper::GetNameForRouteWeightConstraintType(m_type));
  }

  if(m_valueHasBeenSet)
  {
   payload.WithInt64("Value", m_value);

  }

  return payload;
}

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
