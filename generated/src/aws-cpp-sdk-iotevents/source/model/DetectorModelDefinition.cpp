/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotevents/model/DetectorModelDefinition.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTEvents
{
namespace Model
{

DetectorModelDefinition::DetectorModelDefinition() : 
    m_statesHasBeenSet(false),
    m_initialStateNameHasBeenSet(false)
{
}

DetectorModelDefinition::DetectorModelDefinition(JsonView jsonValue) : 
    m_statesHasBeenSet(false),
    m_initialStateNameHasBeenSet(false)
{
  *this = jsonValue;
}

DetectorModelDefinition& DetectorModelDefinition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("states"))
  {
    Aws::Utils::Array<JsonView> statesJsonList = jsonValue.GetArray("states");
    for(unsigned statesIndex = 0; statesIndex < statesJsonList.GetLength(); ++statesIndex)
    {
      m_states.push_back(statesJsonList[statesIndex].AsObject());
    }
    m_statesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("initialStateName"))
  {
    m_initialStateName = jsonValue.GetString("initialStateName");

    m_initialStateNameHasBeenSet = true;
  }

  return *this;
}

JsonValue DetectorModelDefinition::Jsonize() const
{
  JsonValue payload;

  if(m_statesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> statesJsonList(m_states.size());
   for(unsigned statesIndex = 0; statesIndex < statesJsonList.GetLength(); ++statesIndex)
   {
     statesJsonList[statesIndex].AsObject(m_states[statesIndex].Jsonize());
   }
   payload.WithArray("states", std::move(statesJsonList));

  }

  if(m_initialStateNameHasBeenSet)
  {
   payload.WithString("initialStateName", m_initialStateName);

  }

  return payload;
}

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
