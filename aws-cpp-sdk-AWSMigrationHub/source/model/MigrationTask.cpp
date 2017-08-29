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

#include <aws/AWSMigrationHub/model/MigrationTask.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MigrationHub
{
namespace Model
{

MigrationTask::MigrationTask() : 
    m_progressUpdateStreamHasBeenSet(false),
    m_migrationTaskNameHasBeenSet(false),
    m_taskHasBeenSet(false),
    m_updateDateTimeHasBeenSet(false),
    m_resourceAttributeListHasBeenSet(false)
{
}

MigrationTask::MigrationTask(const JsonValue& jsonValue) : 
    m_progressUpdateStreamHasBeenSet(false),
    m_migrationTaskNameHasBeenSet(false),
    m_taskHasBeenSet(false),
    m_updateDateTimeHasBeenSet(false),
    m_resourceAttributeListHasBeenSet(false)
{
  *this = jsonValue;
}

MigrationTask& MigrationTask::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("ProgressUpdateStream"))
  {
    m_progressUpdateStream = jsonValue.GetString("ProgressUpdateStream");

    m_progressUpdateStreamHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MigrationTaskName"))
  {
    m_migrationTaskName = jsonValue.GetString("MigrationTaskName");

    m_migrationTaskNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Task"))
  {
    m_task = jsonValue.GetObject("Task");

    m_taskHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UpdateDateTime"))
  {
    m_updateDateTime = jsonValue.GetDouble("UpdateDateTime");

    m_updateDateTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceAttributeList"))
  {
    Array<JsonValue> resourceAttributeListJsonList = jsonValue.GetArray("ResourceAttributeList");
    for(unsigned resourceAttributeListIndex = 0; resourceAttributeListIndex < resourceAttributeListJsonList.GetLength(); ++resourceAttributeListIndex)
    {
      m_resourceAttributeList.push_back(resourceAttributeListJsonList[resourceAttributeListIndex].AsObject());
    }
    m_resourceAttributeListHasBeenSet = true;
  }

  return *this;
}

JsonValue MigrationTask::Jsonize() const
{
  JsonValue payload;

  if(m_progressUpdateStreamHasBeenSet)
  {
   payload.WithString("ProgressUpdateStream", m_progressUpdateStream);

  }

  if(m_migrationTaskNameHasBeenSet)
  {
   payload.WithString("MigrationTaskName", m_migrationTaskName);

  }

  if(m_taskHasBeenSet)
  {
   payload.WithObject("Task", m_task.Jsonize());

  }

  if(m_updateDateTimeHasBeenSet)
  {
   payload.WithDouble("UpdateDateTime", m_updateDateTime.SecondsWithMSPrecision());
  }

  if(m_resourceAttributeListHasBeenSet)
  {
   Array<JsonValue> resourceAttributeListJsonList(m_resourceAttributeList.size());
   for(unsigned resourceAttributeListIndex = 0; resourceAttributeListIndex < resourceAttributeListJsonList.GetLength(); ++resourceAttributeListIndex)
   {
     resourceAttributeListJsonList[resourceAttributeListIndex].AsObject(m_resourceAttributeList[resourceAttributeListIndex].Jsonize());
   }
   payload.WithArray("ResourceAttributeList", std::move(resourceAttributeListJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace MigrationHub
} // namespace Aws
