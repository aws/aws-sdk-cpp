/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotfleetwise/model/ROS2PrimitiveMessageDefinition.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTFleetWise
{
namespace Model
{

ROS2PrimitiveMessageDefinition::ROS2PrimitiveMessageDefinition() : 
    m_primitiveType(ROS2PrimitiveType::NOT_SET),
    m_primitiveTypeHasBeenSet(false),
    m_offset(0.0),
    m_offsetHasBeenSet(false),
    m_scaling(0.0),
    m_scalingHasBeenSet(false),
    m_upperBound(0),
    m_upperBoundHasBeenSet(false)
{
}

ROS2PrimitiveMessageDefinition::ROS2PrimitiveMessageDefinition(JsonView jsonValue) : 
    m_primitiveType(ROS2PrimitiveType::NOT_SET),
    m_primitiveTypeHasBeenSet(false),
    m_offset(0.0),
    m_offsetHasBeenSet(false),
    m_scaling(0.0),
    m_scalingHasBeenSet(false),
    m_upperBound(0),
    m_upperBoundHasBeenSet(false)
{
  *this = jsonValue;
}

ROS2PrimitiveMessageDefinition& ROS2PrimitiveMessageDefinition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("primitiveType"))
  {
    m_primitiveType = ROS2PrimitiveTypeMapper::GetROS2PrimitiveTypeForName(jsonValue.GetString("primitiveType"));

    m_primitiveTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("offset"))
  {
    m_offset = jsonValue.GetDouble("offset");

    m_offsetHasBeenSet = true;
  }

  if(jsonValue.ValueExists("scaling"))
  {
    m_scaling = jsonValue.GetDouble("scaling");

    m_scalingHasBeenSet = true;
  }

  if(jsonValue.ValueExists("upperBound"))
  {
    m_upperBound = jsonValue.GetInt64("upperBound");

    m_upperBoundHasBeenSet = true;
  }

  return *this;
}

JsonValue ROS2PrimitiveMessageDefinition::Jsonize() const
{
  JsonValue payload;

  if(m_primitiveTypeHasBeenSet)
  {
   payload.WithString("primitiveType", ROS2PrimitiveTypeMapper::GetNameForROS2PrimitiveType(m_primitiveType));
  }

  if(m_offsetHasBeenSet)
  {
   payload.WithDouble("offset", m_offset);

  }

  if(m_scalingHasBeenSet)
  {
   payload.WithDouble("scaling", m_scaling);

  }

  if(m_upperBoundHasBeenSet)
  {
   payload.WithInt64("upperBound", m_upperBound);

  }

  return payload;
}

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
