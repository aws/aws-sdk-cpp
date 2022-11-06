/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/model/Task.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CustomerProfiles
{
namespace Model
{

Task::Task() : 
    m_connectorOperatorHasBeenSet(false),
    m_destinationFieldHasBeenSet(false),
    m_sourceFieldsHasBeenSet(false),
    m_taskPropertiesHasBeenSet(false),
    m_taskType(TaskType::NOT_SET),
    m_taskTypeHasBeenSet(false)
{
}

Task::Task(JsonView jsonValue) : 
    m_connectorOperatorHasBeenSet(false),
    m_destinationFieldHasBeenSet(false),
    m_sourceFieldsHasBeenSet(false),
    m_taskPropertiesHasBeenSet(false),
    m_taskType(TaskType::NOT_SET),
    m_taskTypeHasBeenSet(false)
{
  *this = jsonValue;
}

Task& Task::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ConnectorOperator"))
  {
    m_connectorOperator = jsonValue.GetObject("ConnectorOperator");

    m_connectorOperatorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DestinationField"))
  {
    m_destinationField = jsonValue.GetString("DestinationField");

    m_destinationFieldHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SourceFields"))
  {
    Aws::Utils::Array<JsonView> sourceFieldsJsonList = jsonValue.GetArray("SourceFields");
    for(unsigned sourceFieldsIndex = 0; sourceFieldsIndex < sourceFieldsJsonList.GetLength(); ++sourceFieldsIndex)
    {
      m_sourceFields.push_back(sourceFieldsJsonList[sourceFieldsIndex].AsString());
    }
    m_sourceFieldsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TaskProperties"))
  {
    Aws::Map<Aws::String, JsonView> taskPropertiesJsonMap = jsonValue.GetObject("TaskProperties").GetAllObjects();
    for(auto& taskPropertiesItem : taskPropertiesJsonMap)
    {
      m_taskProperties[OperatorPropertiesKeysMapper::GetOperatorPropertiesKeysForName(taskPropertiesItem.first)] = taskPropertiesItem.second.AsString();
    }
    m_taskPropertiesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TaskType"))
  {
    m_taskType = TaskTypeMapper::GetTaskTypeForName(jsonValue.GetString("TaskType"));

    m_taskTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue Task::Jsonize() const
{
  JsonValue payload;

  if(m_connectorOperatorHasBeenSet)
  {
   payload.WithObject("ConnectorOperator", m_connectorOperator.Jsonize());

  }

  if(m_destinationFieldHasBeenSet)
  {
   payload.WithString("DestinationField", m_destinationField);

  }

  if(m_sourceFieldsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> sourceFieldsJsonList(m_sourceFields.size());
   for(unsigned sourceFieldsIndex = 0; sourceFieldsIndex < sourceFieldsJsonList.GetLength(); ++sourceFieldsIndex)
   {
     sourceFieldsJsonList[sourceFieldsIndex].AsString(m_sourceFields[sourceFieldsIndex]);
   }
   payload.WithArray("SourceFields", std::move(sourceFieldsJsonList));

  }

  if(m_taskPropertiesHasBeenSet)
  {
   JsonValue taskPropertiesJsonMap;
   for(auto& taskPropertiesItem : m_taskProperties)
   {
     taskPropertiesJsonMap.WithString(OperatorPropertiesKeysMapper::GetNameForOperatorPropertiesKeys(taskPropertiesItem.first), taskPropertiesItem.second);
   }
   payload.WithObject("TaskProperties", std::move(taskPropertiesJsonMap));

  }

  if(m_taskTypeHasBeenSet)
  {
   payload.WithString("TaskType", TaskTypeMapper::GetNameForTaskType(m_taskType));
  }

  return payload;
}

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
