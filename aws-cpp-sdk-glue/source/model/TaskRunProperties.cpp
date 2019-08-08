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

#include <aws/glue/model/TaskRunProperties.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

TaskRunProperties::TaskRunProperties() : 
    m_taskType(TaskType::NOT_SET),
    m_taskTypeHasBeenSet(false),
    m_importLabelsTaskRunPropertiesHasBeenSet(false),
    m_exportLabelsTaskRunPropertiesHasBeenSet(false),
    m_labelingSetGenerationTaskRunPropertiesHasBeenSet(false),
    m_findMatchesTaskRunPropertiesHasBeenSet(false)
{
}

TaskRunProperties::TaskRunProperties(JsonView jsonValue) : 
    m_taskType(TaskType::NOT_SET),
    m_taskTypeHasBeenSet(false),
    m_importLabelsTaskRunPropertiesHasBeenSet(false),
    m_exportLabelsTaskRunPropertiesHasBeenSet(false),
    m_labelingSetGenerationTaskRunPropertiesHasBeenSet(false),
    m_findMatchesTaskRunPropertiesHasBeenSet(false)
{
  *this = jsonValue;
}

TaskRunProperties& TaskRunProperties::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TaskType"))
  {
    m_taskType = TaskTypeMapper::GetTaskTypeForName(jsonValue.GetString("TaskType"));

    m_taskTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ImportLabelsTaskRunProperties"))
  {
    m_importLabelsTaskRunProperties = jsonValue.GetObject("ImportLabelsTaskRunProperties");

    m_importLabelsTaskRunPropertiesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExportLabelsTaskRunProperties"))
  {
    m_exportLabelsTaskRunProperties = jsonValue.GetObject("ExportLabelsTaskRunProperties");

    m_exportLabelsTaskRunPropertiesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LabelingSetGenerationTaskRunProperties"))
  {
    m_labelingSetGenerationTaskRunProperties = jsonValue.GetObject("LabelingSetGenerationTaskRunProperties");

    m_labelingSetGenerationTaskRunPropertiesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FindMatchesTaskRunProperties"))
  {
    m_findMatchesTaskRunProperties = jsonValue.GetObject("FindMatchesTaskRunProperties");

    m_findMatchesTaskRunPropertiesHasBeenSet = true;
  }

  return *this;
}

JsonValue TaskRunProperties::Jsonize() const
{
  JsonValue payload;

  if(m_taskTypeHasBeenSet)
  {
   payload.WithString("TaskType", TaskTypeMapper::GetNameForTaskType(m_taskType));
  }

  if(m_importLabelsTaskRunPropertiesHasBeenSet)
  {
   payload.WithObject("ImportLabelsTaskRunProperties", m_importLabelsTaskRunProperties.Jsonize());

  }

  if(m_exportLabelsTaskRunPropertiesHasBeenSet)
  {
   payload.WithObject("ExportLabelsTaskRunProperties", m_exportLabelsTaskRunProperties.Jsonize());

  }

  if(m_labelingSetGenerationTaskRunPropertiesHasBeenSet)
  {
   payload.WithObject("LabelingSetGenerationTaskRunProperties", m_labelingSetGenerationTaskRunProperties.Jsonize());

  }

  if(m_findMatchesTaskRunPropertiesHasBeenSet)
  {
   payload.WithObject("FindMatchesTaskRunProperties", m_findMatchesTaskRunProperties.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
