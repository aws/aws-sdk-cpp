/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/AssignedTaskRunSessionActionDefinition.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace deadline
{
namespace Model
{

AssignedTaskRunSessionActionDefinition::AssignedTaskRunSessionActionDefinition() : 
    m_parametersHasBeenSet(false),
    m_stepIdHasBeenSet(false),
    m_taskIdHasBeenSet(false)
{
}

AssignedTaskRunSessionActionDefinition::AssignedTaskRunSessionActionDefinition(JsonView jsonValue) : 
    m_parametersHasBeenSet(false),
    m_stepIdHasBeenSet(false),
    m_taskIdHasBeenSet(false)
{
  *this = jsonValue;
}

AssignedTaskRunSessionActionDefinition& AssignedTaskRunSessionActionDefinition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("parameters"))
  {
    Aws::Map<Aws::String, JsonView> parametersJsonMap = jsonValue.GetObject("parameters").GetAllObjects();
    for(auto& parametersItem : parametersJsonMap)
    {
      m_parameters[parametersItem.first] = parametersItem.second.AsObject();
    }
    m_parametersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("stepId"))
  {
    m_stepId = jsonValue.GetString("stepId");

    m_stepIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("taskId"))
  {
    m_taskId = jsonValue.GetString("taskId");

    m_taskIdHasBeenSet = true;
  }

  return *this;
}

JsonValue AssignedTaskRunSessionActionDefinition::Jsonize() const
{
  JsonValue payload;

  if(m_parametersHasBeenSet)
  {
   JsonValue parametersJsonMap;
   for(auto& parametersItem : m_parameters)
   {
     parametersJsonMap.WithObject(parametersItem.first, parametersItem.second.Jsonize());
   }
   payload.WithObject("parameters", std::move(parametersJsonMap));

  }

  if(m_stepIdHasBeenSet)
  {
   payload.WithString("stepId", m_stepId);

  }

  if(m_taskIdHasBeenSet)
  {
   payload.WithString("taskId", m_taskId);

  }

  return payload;
}

} // namespace Model
} // namespace deadline
} // namespace Aws
