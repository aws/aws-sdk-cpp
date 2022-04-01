﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotevents-data/model/DetectorStateDefinition.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTEventsData
{
namespace Model
{

DetectorStateDefinition::DetectorStateDefinition() : 
    m_stateNameHasBeenSet(false),
    m_variablesHasBeenSet(false),
    m_timersHasBeenSet(false)
{
}

DetectorStateDefinition::DetectorStateDefinition(JsonView jsonValue) : 
    m_stateNameHasBeenSet(false),
    m_variablesHasBeenSet(false),
    m_timersHasBeenSet(false)
{
  *this = jsonValue;
}

DetectorStateDefinition& DetectorStateDefinition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("stateName"))
  {
    m_stateName = jsonValue.GetString("stateName");

    m_stateNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("variables"))
  {
    Array<JsonView> variablesJsonList = jsonValue.GetArray("variables");
    for(unsigned variablesIndex = 0; variablesIndex < variablesJsonList.GetLength(); ++variablesIndex)
    {
      m_variables.push_back(variablesJsonList[variablesIndex].AsObject());
    }
    m_variablesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("timers"))
  {
    Array<JsonView> timersJsonList = jsonValue.GetArray("timers");
    for(unsigned timersIndex = 0; timersIndex < timersJsonList.GetLength(); ++timersIndex)
    {
      m_timers.push_back(timersJsonList[timersIndex].AsObject());
    }
    m_timersHasBeenSet = true;
  }

  return *this;
}

JsonValue DetectorStateDefinition::Jsonize() const
{
  JsonValue payload;

  if(m_stateNameHasBeenSet)
  {
   payload.WithString("stateName", m_stateName);

  }

  if(m_variablesHasBeenSet)
  {
   Array<JsonValue> variablesJsonList(m_variables.size());
   for(unsigned variablesIndex = 0; variablesIndex < variablesJsonList.GetLength(); ++variablesIndex)
   {
     variablesJsonList[variablesIndex].AsObject(m_variables[variablesIndex].Jsonize());
   }
   payload.WithArray("variables", std::move(variablesJsonList));

  }

  if(m_timersHasBeenSet)
  {
   Array<JsonValue> timersJsonList(m_timers.size());
   for(unsigned timersIndex = 0; timersIndex < timersJsonList.GetLength(); ++timersIndex)
   {
     timersJsonList[timersIndex].AsObject(m_timers[timersIndex].Jsonize());
   }
   payload.WithArray("timers", std::move(timersJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace IoTEventsData
} // namespace Aws
