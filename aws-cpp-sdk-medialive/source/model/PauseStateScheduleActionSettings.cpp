/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/PauseStateScheduleActionSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaLive
{
namespace Model
{

PauseStateScheduleActionSettings::PauseStateScheduleActionSettings() : 
    m_pipelinesHasBeenSet(false)
{
}

PauseStateScheduleActionSettings::PauseStateScheduleActionSettings(JsonView jsonValue) : 
    m_pipelinesHasBeenSet(false)
{
  *this = jsonValue;
}

PauseStateScheduleActionSettings& PauseStateScheduleActionSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("pipelines"))
  {
    Aws::Utils::Array<JsonView> pipelinesJsonList = jsonValue.GetArray("pipelines");
    for(unsigned pipelinesIndex = 0; pipelinesIndex < pipelinesJsonList.GetLength(); ++pipelinesIndex)
    {
      m_pipelines.push_back(pipelinesJsonList[pipelinesIndex].AsObject());
    }
    m_pipelinesHasBeenSet = true;
  }

  return *this;
}

JsonValue PauseStateScheduleActionSettings::Jsonize() const
{
  JsonValue payload;

  if(m_pipelinesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> pipelinesJsonList(m_pipelines.size());
   for(unsigned pipelinesIndex = 0; pipelinesIndex < pipelinesJsonList.GetLength(); ++pipelinesIndex)
   {
     pipelinesJsonList[pipelinesIndex].AsObject(m_pipelines[pipelinesIndex].Jsonize());
   }
   payload.WithArray("pipelines", std::move(pipelinesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
