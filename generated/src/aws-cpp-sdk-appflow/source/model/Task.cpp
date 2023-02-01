/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appflow/model/Task.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Appflow
{
namespace Model
{

Task::Task() : 
    m_sourceFieldsHasBeenSet(false),
    m_connectorOperatorHasBeenSet(false),
    m_destinationFieldHasBeenSet(false),
    m_taskType(TaskType::NOT_SET),
    m_taskTypeHasBeenSet(false),
    m_taskPropertiesHasBeenSet(false)
{
}

Task::Task(JsonView jsonValue) : 
    m_sourceFieldsHasBeenSet(false),
    m_connectorOperatorHasBeenSet(false),
    m_destinationFieldHasBeenSet(false),
    m_taskType(TaskType::NOT_SET),
    m_taskTypeHasBeenSet(false),
    m_taskPropertiesHasBeenSet(false)
{
  *this = jsonValue;
}

Task& Task::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("sourceFields"))
  {
    Aws::Utils::Array<JsonView> sourceFieldsJsonList = jsonValue.GetArray("sourceFields");
    for(unsigned sourceFieldsIndex = 0; sourceFieldsIndex < sourceFieldsJsonList.GetLength(); ++sourceFieldsIndex)
    {
      m_sourceFields.push_back(sourceFieldsJsonList[sourceFieldsIndex].AsString());
    }
    m_sourceFieldsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("connectorOperator"))
  {
    m_connectorOperator = jsonValue.GetObject("connectorOperator");

    m_connectorOperatorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("destinationField"))
  {
    m_destinationField = jsonValue.GetString("destinationField");

    m_destinationFieldHasBeenSet = true;
  }

  if(jsonValue.ValueExists("taskType"))
  {
    m_taskType = TaskTypeMapper::GetTaskTypeForName(jsonValue.GetString("taskType"));

    m_taskTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("taskProperties"))
  {
    Aws::Map<Aws::String, JsonView> taskPropertiesJsonMap = jsonValue.GetObject("taskProperties").GetAllObjects();
    for(auto& taskPropertiesItem : taskPropertiesJsonMap)
    {
      m_taskProperties[OperatorPropertiesKeysMapper::GetOperatorPropertiesKeysForName(taskPropertiesItem.first)] = taskPropertiesItem.second.AsString();
    }
    m_taskPropertiesHasBeenSet = true;
  }

  return *this;
}

JsonValue Task::Jsonize() const
{
  JsonValue payload;

  if(m_sourceFieldsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> sourceFieldsJsonList(m_sourceFields.size());
   for(unsigned sourceFieldsIndex = 0; sourceFieldsIndex < sourceFieldsJsonList.GetLength(); ++sourceFieldsIndex)
   {
     sourceFieldsJsonList[sourceFieldsIndex].AsString(m_sourceFields[sourceFieldsIndex]);
   }
   payload.WithArray("sourceFields", std::move(sourceFieldsJsonList));

  }

  if(m_connectorOperatorHasBeenSet)
  {
   payload.WithObject("connectorOperator", m_connectorOperator.Jsonize());

  }

  if(m_destinationFieldHasBeenSet)
  {
   payload.WithString("destinationField", m_destinationField);

  }

  if(m_taskTypeHasBeenSet)
  {
   payload.WithString("taskType", TaskTypeMapper::GetNameForTaskType(m_taskType));
  }

  if(m_taskPropertiesHasBeenSet)
  {
   JsonValue taskPropertiesJsonMap;
   for(auto& taskPropertiesItem : m_taskProperties)
   {
     taskPropertiesJsonMap.WithString(OperatorPropertiesKeysMapper::GetNameForOperatorPropertiesKeys(taskPropertiesItem.first), taskPropertiesItem.second);
   }
   payload.WithObject("taskProperties", std::move(taskPropertiesJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace Appflow
} // namespace Aws
