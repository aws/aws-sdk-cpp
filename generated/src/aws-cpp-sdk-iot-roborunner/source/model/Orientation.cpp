/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot-roborunner/model/Orientation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTRoboRunner
{
namespace Model
{

Orientation::Orientation() : 
    m_degrees(0.0),
    m_degreesHasBeenSet(false)
{
}

Orientation::Orientation(JsonView jsonValue) : 
    m_degrees(0.0),
    m_degreesHasBeenSet(false)
{
  *this = jsonValue;
}

Orientation& Orientation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("degrees"))
  {
    m_degrees = jsonValue.GetDouble("degrees");

    m_degreesHasBeenSet = true;
  }

  return *this;
}

JsonValue Orientation::Jsonize() const
{
  JsonValue payload;

  if(m_degreesHasBeenSet)
  {
   payload.WithDouble("degrees", m_degrees);

  }

  return payload;
}

} // namespace Model
} // namespace IoTRoboRunner
} // namespace Aws
