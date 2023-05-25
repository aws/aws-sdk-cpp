/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/Accuracy.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTWireless
{
namespace Model
{

Accuracy::Accuracy() : 
    m_horizontalAccuracy(0.0),
    m_horizontalAccuracyHasBeenSet(false),
    m_verticalAccuracy(0.0),
    m_verticalAccuracyHasBeenSet(false)
{
}

Accuracy::Accuracy(JsonView jsonValue) : 
    m_horizontalAccuracy(0.0),
    m_horizontalAccuracyHasBeenSet(false),
    m_verticalAccuracy(0.0),
    m_verticalAccuracyHasBeenSet(false)
{
  *this = jsonValue;
}

Accuracy& Accuracy::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("HorizontalAccuracy"))
  {
    m_horizontalAccuracy = jsonValue.GetDouble("HorizontalAccuracy");

    m_horizontalAccuracyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VerticalAccuracy"))
  {
    m_verticalAccuracy = jsonValue.GetDouble("VerticalAccuracy");

    m_verticalAccuracyHasBeenSet = true;
  }

  return *this;
}

JsonValue Accuracy::Jsonize() const
{
  JsonValue payload;

  if(m_horizontalAccuracyHasBeenSet)
  {
   payload.WithDouble("HorizontalAccuracy", m_horizontalAccuracy);

  }

  if(m_verticalAccuracyHasBeenSet)
  {
   payload.WithDouble("VerticalAccuracy", m_verticalAccuracy);

  }

  return payload;
}

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
