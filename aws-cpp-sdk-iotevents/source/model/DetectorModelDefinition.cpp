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
    Array<JsonView> statesJsonList = jsonValue.GetArray("states");
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
   Array<JsonValue> statesJsonList(m_states.size());
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
