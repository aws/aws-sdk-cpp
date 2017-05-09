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

#include <aws/ecs/model/PlacementStrategy.h>
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

PlacementStrategy::PlacementStrategy() : 
    m_type(PlacementStrategyType::NOT_SET),
    m_typeHasBeenSet(false),
    m_fieldHasBeenSet(false)
{
}

PlacementStrategy::PlacementStrategy(const JsonValue& jsonValue) : 
    m_type(PlacementStrategyType::NOT_SET),
    m_typeHasBeenSet(false),
    m_fieldHasBeenSet(false)
{
  *this = jsonValue;
}

PlacementStrategy& PlacementStrategy::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("type"))
  {
    m_type = PlacementStrategyTypeMapper::GetPlacementStrategyTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("field"))
  {
    m_field = jsonValue.GetString("field");

    m_fieldHasBeenSet = true;
  }

  return *this;
}

JsonValue PlacementStrategy::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", PlacementStrategyTypeMapper::GetNameForPlacementStrategyType(m_type));
  }

  if(m_fieldHasBeenSet)
  {
   payload.WithString("field", m_field);

  }

  return payload;
}

} // namespace Model
} // namespace ECS
} // namespace Aws