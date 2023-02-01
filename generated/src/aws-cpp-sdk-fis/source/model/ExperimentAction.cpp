/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fis/model/ExperimentAction.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FIS
{
namespace Model
{

ExperimentAction::ExperimentAction() : 
    m_actionIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_parametersHasBeenSet(false),
    m_targetsHasBeenSet(false),
    m_startAfterHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false)
{
}

ExperimentAction::ExperimentAction(JsonView jsonValue) : 
    m_actionIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_parametersHasBeenSet(false),
    m_targetsHasBeenSet(false),
    m_startAfterHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false)
{
  *this = jsonValue;
}

ExperimentAction& ExperimentAction::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("actionId"))
  {
    m_actionId = jsonValue.GetString("actionId");

    m_actionIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("parameters"))
  {
    Aws::Map<Aws::String, JsonView> parametersJsonMap = jsonValue.GetObject("parameters").GetAllObjects();
    for(auto& parametersItem : parametersJsonMap)
    {
      m_parameters[parametersItem.first] = parametersItem.second.AsString();
    }
    m_parametersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("targets"))
  {
    Aws::Map<Aws::String, JsonView> targetsJsonMap = jsonValue.GetObject("targets").GetAllObjects();
    for(auto& targetsItem : targetsJsonMap)
    {
      m_targets[targetsItem.first] = targetsItem.second.AsString();
    }
    m_targetsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("startAfter"))
  {
    Aws::Utils::Array<JsonView> startAfterJsonList = jsonValue.GetArray("startAfter");
    for(unsigned startAfterIndex = 0; startAfterIndex < startAfterJsonList.GetLength(); ++startAfterIndex)
    {
      m_startAfter.push_back(startAfterJsonList[startAfterIndex].AsString());
    }
    m_startAfterHasBeenSet = true;
  }

  if(jsonValue.ValueExists("state"))
  {
    m_state = jsonValue.GetObject("state");

    m_stateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("startTime"))
  {
    m_startTime = jsonValue.GetDouble("startTime");

    m_startTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("endTime"))
  {
    m_endTime = jsonValue.GetDouble("endTime");

    m_endTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue ExperimentAction::Jsonize() const
{
  JsonValue payload;

  if(m_actionIdHasBeenSet)
  {
   payload.WithString("actionId", m_actionId);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_parametersHasBeenSet)
  {
   JsonValue parametersJsonMap;
   for(auto& parametersItem : m_parameters)
   {
     parametersJsonMap.WithString(parametersItem.first, parametersItem.second);
   }
   payload.WithObject("parameters", std::move(parametersJsonMap));

  }

  if(m_targetsHasBeenSet)
  {
   JsonValue targetsJsonMap;
   for(auto& targetsItem : m_targets)
   {
     targetsJsonMap.WithString(targetsItem.first, targetsItem.second);
   }
   payload.WithObject("targets", std::move(targetsJsonMap));

  }

  if(m_startAfterHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> startAfterJsonList(m_startAfter.size());
   for(unsigned startAfterIndex = 0; startAfterIndex < startAfterJsonList.GetLength(); ++startAfterIndex)
   {
     startAfterJsonList[startAfterIndex].AsString(m_startAfter[startAfterIndex]);
   }
   payload.WithArray("startAfter", std::move(startAfterJsonList));

  }

  if(m_stateHasBeenSet)
  {
   payload.WithObject("state", m_state.Jsonize());

  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithDouble("startTime", m_startTime.SecondsWithMSPrecision());
  }

  if(m_endTimeHasBeenSet)
  {
   payload.WithDouble("endTime", m_endTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace FIS
} // namespace Aws
