/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotfleetwise/model/PrimitiveMessageDefinition.h>
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

PrimitiveMessageDefinition::PrimitiveMessageDefinition() : 
    m_ros2PrimitiveMessageDefinitionHasBeenSet(false)
{
}

PrimitiveMessageDefinition::PrimitiveMessageDefinition(JsonView jsonValue) : 
    m_ros2PrimitiveMessageDefinitionHasBeenSet(false)
{
  *this = jsonValue;
}

PrimitiveMessageDefinition& PrimitiveMessageDefinition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ros2PrimitiveMessageDefinition"))
  {
    m_ros2PrimitiveMessageDefinition = jsonValue.GetObject("ros2PrimitiveMessageDefinition");

    m_ros2PrimitiveMessageDefinitionHasBeenSet = true;
  }

  return *this;
}

JsonValue PrimitiveMessageDefinition::Jsonize() const
{
  JsonValue payload;

  if(m_ros2PrimitiveMessageDefinitionHasBeenSet)
  {
   payload.WithObject("ros2PrimitiveMessageDefinition", m_ros2PrimitiveMessageDefinition.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
