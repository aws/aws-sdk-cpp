/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotfleetwise/model/Node.h>
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

Node::Node() : 
    m_branchHasBeenSet(false),
    m_sensorHasBeenSet(false),
    m_actuatorHasBeenSet(false),
    m_attributeHasBeenSet(false)
{
}

Node::Node(JsonView jsonValue) : 
    m_branchHasBeenSet(false),
    m_sensorHasBeenSet(false),
    m_actuatorHasBeenSet(false),
    m_attributeHasBeenSet(false)
{
  *this = jsonValue;
}

Node& Node::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("branch"))
  {
    m_branch = jsonValue.GetObject("branch");

    m_branchHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sensor"))
  {
    m_sensor = jsonValue.GetObject("sensor");

    m_sensorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("actuator"))
  {
    m_actuator = jsonValue.GetObject("actuator");

    m_actuatorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("attribute"))
  {
    m_attribute = jsonValue.GetObject("attribute");

    m_attributeHasBeenSet = true;
  }

  return *this;
}

JsonValue Node::Jsonize() const
{
  JsonValue payload;

  if(m_branchHasBeenSet)
  {
   payload.WithObject("branch", m_branch.Jsonize());

  }

  if(m_sensorHasBeenSet)
  {
   payload.WithObject("sensor", m_sensor.Jsonize());

  }

  if(m_actuatorHasBeenSet)
  {
   payload.WithObject("actuator", m_actuator.Jsonize());

  }

  if(m_attributeHasBeenSet)
  {
   payload.WithObject("attribute", m_attribute.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
