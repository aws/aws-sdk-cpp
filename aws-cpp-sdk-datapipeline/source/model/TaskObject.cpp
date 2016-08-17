/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/datapipeline/model/TaskObject.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataPipeline
{
namespace Model
{

TaskObject::TaskObject() : 
    m_taskIdHasBeenSet(false),
    m_pipelineIdHasBeenSet(false),
    m_attemptIdHasBeenSet(false),
    m_objectsHasBeenSet(false)
{
}

TaskObject::TaskObject(const JsonValue& jsonValue) : 
    m_taskIdHasBeenSet(false),
    m_pipelineIdHasBeenSet(false),
    m_attemptIdHasBeenSet(false),
    m_objectsHasBeenSet(false)
{
  *this = jsonValue;
}

TaskObject& TaskObject::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("taskId"))
  {
    m_taskId = jsonValue.GetString("taskId");

    m_taskIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("pipelineId"))
  {
    m_pipelineId = jsonValue.GetString("pipelineId");

    m_pipelineIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("attemptId"))
  {
    m_attemptId = jsonValue.GetString("attemptId");

    m_attemptIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("objects"))
  {
    Aws::Map<Aws::String, JsonValue> objectsJsonMap = jsonValue.GetObject("objects").GetAllObjects();
    for(auto& objectsItem : objectsJsonMap)
    {
      m_objects[objectsItem.first] = objectsItem.second.AsObject();
    }
    m_objectsHasBeenSet = true;
  }

  return *this;
}

JsonValue TaskObject::Jsonize() const
{
  JsonValue payload;

  if(m_taskIdHasBeenSet)
  {
   payload.WithString("taskId", m_taskId);

  }

  if(m_pipelineIdHasBeenSet)
  {
   payload.WithString("pipelineId", m_pipelineId);

  }

  if(m_attemptIdHasBeenSet)
  {
   payload.WithString("attemptId", m_attemptId);

  }

  if(m_objectsHasBeenSet)
  {
   JsonValue objectsJsonMap;
   for(auto& objectsItem : m_objects)
   {
     objectsJsonMap.WithObject(objectsItem.first, objectsItem.second.Jsonize());
   }
   payload.WithObject("objects", std::move(objectsJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace DataPipeline
} // namespace Aws