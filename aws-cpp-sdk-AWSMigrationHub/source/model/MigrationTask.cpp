/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

MigrationTask::MigrationTask(JsonView jsonValue) : 
    m_progressUpdateStreamHasBeenSet(false),
    m_migrationTaskNameHasBeenSet(false),
    m_taskHasBeenSet(false),
    m_updateDateTimeHasBeenSet(false),
    m_resourceAttributeListHasBeenSet(false)
{
  *this = jsonValue;
}

MigrationTask& MigrationTask::operator =(JsonView jsonValue)
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
    Aws::Utils::Array<JsonView> resourceAttributeListJsonList = jsonValue.GetArray("ResourceAttributeList");
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
   Aws::Utils::Array<JsonValue> resourceAttributeListJsonList(m_resourceAttributeList.size());
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
