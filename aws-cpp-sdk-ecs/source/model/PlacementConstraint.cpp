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

#include <aws/ecs/model/PlacementConstraint.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ECS
{
namespace Model
{

PlacementConstraint::PlacementConstraint() : 
    m_type(PlacementConstraintType::NOT_SET),
    m_typeHasBeenSet(false),
    m_expressionHasBeenSet(false)
{
}

PlacementConstraint::PlacementConstraint(const JsonValue& jsonValue) : 
    m_type(PlacementConstraintType::NOT_SET),
    m_typeHasBeenSet(false),
    m_expressionHasBeenSet(false)
{
  *this = jsonValue;
}

PlacementConstraint& PlacementConstraint::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("type"))
  {
    m_type = PlacementConstraintTypeMapper::GetPlacementConstraintTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("expression"))
  {
    m_expression = jsonValue.GetString("expression");

    m_expressionHasBeenSet = true;
  }

  return *this;
}

JsonValue PlacementConstraint::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", PlacementConstraintTypeMapper::GetNameForPlacementConstraintType(m_type));
  }

  if(m_expressionHasBeenSet)
  {
   payload.WithString("expression", m_expression);

  }

  return payload;
}

} // namespace Model
} // namespace ECS
} // namespace Aws