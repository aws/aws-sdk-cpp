/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/location/model/InferredState.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LocationService
{
namespace Model
{

InferredState::InferredState(JsonView jsonValue)
{
  *this = jsonValue;
}

InferredState& InferredState::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Position"))
  {
    Aws::Utils::Array<JsonView> positionJsonList = jsonValue.GetArray("Position");
    for(unsigned positionIndex = 0; positionIndex < positionJsonList.GetLength(); ++positionIndex)
    {
      m_position.push_back(positionJsonList[positionIndex].AsDouble());
    }
    m_positionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Accuracy"))
  {
    m_accuracy = jsonValue.GetObject("Accuracy");
    m_accuracyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DeviationDistance"))
  {
    m_deviationDistance = jsonValue.GetDouble("DeviationDistance");
    m_deviationDistanceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ProxyDetected"))
  {
    m_proxyDetected = jsonValue.GetBool("ProxyDetected");
    m_proxyDetectedHasBeenSet = true;
  }
  return *this;
}

JsonValue InferredState::Jsonize() const
{
  JsonValue payload;

  if(m_positionHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> positionJsonList(m_position.size());
   for(unsigned positionIndex = 0; positionIndex < positionJsonList.GetLength(); ++positionIndex)
   {
     positionJsonList[positionIndex].AsDouble(m_position[positionIndex]);
   }
   payload.WithArray("Position", std::move(positionJsonList));

  }

  if(m_accuracyHasBeenSet)
  {
   payload.WithObject("Accuracy", m_accuracy.Jsonize());

  }

  if(m_deviationDistanceHasBeenSet)
  {
   payload.WithDouble("DeviationDistance", m_deviationDistance);

  }

  if(m_proxyDetectedHasBeenSet)
  {
   payload.WithBool("ProxyDetected", m_proxyDetected);

  }

  return payload;
}

} // namespace Model
} // namespace LocationService
} // namespace Aws
