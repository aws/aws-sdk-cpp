/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/DataRepositoryTask.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FSx
{
namespace Model
{

DataRepositoryTask::DataRepositoryTask() : 
    m_taskIdHasBeenSet(false),
    m_lifecycle(DataRepositoryTaskLifecycle::NOT_SET),
    m_lifecycleHasBeenSet(false),
    m_type(DataRepositoryTaskType::NOT_SET),
    m_typeHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_resourceARNHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_fileSystemIdHasBeenSet(false),
    m_pathsHasBeenSet(false),
    m_failureDetailsHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_reportHasBeenSet(false),
    m_capacityToRelease(0),
    m_capacityToReleaseHasBeenSet(false),
    m_fileCacheIdHasBeenSet(false)
{
}

DataRepositoryTask::DataRepositoryTask(JsonView jsonValue) : 
    m_taskIdHasBeenSet(false),
    m_lifecycle(DataRepositoryTaskLifecycle::NOT_SET),
    m_lifecycleHasBeenSet(false),
    m_type(DataRepositoryTaskType::NOT_SET),
    m_typeHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_resourceARNHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_fileSystemIdHasBeenSet(false),
    m_pathsHasBeenSet(false),
    m_failureDetailsHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_reportHasBeenSet(false),
    m_capacityToRelease(0),
    m_capacityToReleaseHasBeenSet(false),
    m_fileCacheIdHasBeenSet(false)
{
  *this = jsonValue;
}

DataRepositoryTask& DataRepositoryTask::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TaskId"))
  {
    m_taskId = jsonValue.GetString("TaskId");

    m_taskIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Lifecycle"))
  {
    m_lifecycle = DataRepositoryTaskLifecycleMapper::GetDataRepositoryTaskLifecycleForName(jsonValue.GetString("Lifecycle"));

    m_lifecycleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = DataRepositoryTaskTypeMapper::GetDataRepositoryTaskTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StartTime"))
  {
    m_startTime = jsonValue.GetDouble("StartTime");

    m_startTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndTime"))
  {
    m_endTime = jsonValue.GetDouble("EndTime");

    m_endTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceARN"))
  {
    m_resourceARN = jsonValue.GetString("ResourceARN");

    m_resourceARNHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Utils::Array<JsonView> tagsJsonList = jsonValue.GetArray("Tags");
    for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
    {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
    }
    m_tagsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FileSystemId"))
  {
    m_fileSystemId = jsonValue.GetString("FileSystemId");

    m_fileSystemIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Paths"))
  {
    Aws::Utils::Array<JsonView> pathsJsonList = jsonValue.GetArray("Paths");
    for(unsigned pathsIndex = 0; pathsIndex < pathsJsonList.GetLength(); ++pathsIndex)
    {
      m_paths.push_back(pathsJsonList[pathsIndex].AsString());
    }
    m_pathsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FailureDetails"))
  {
    m_failureDetails = jsonValue.GetObject("FailureDetails");

    m_failureDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = jsonValue.GetObject("Status");

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Report"))
  {
    m_report = jsonValue.GetObject("Report");

    m_reportHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CapacityToRelease"))
  {
    m_capacityToRelease = jsonValue.GetInt64("CapacityToRelease");

    m_capacityToReleaseHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FileCacheId"))
  {
    m_fileCacheId = jsonValue.GetString("FileCacheId");

    m_fileCacheIdHasBeenSet = true;
  }

  return *this;
}

JsonValue DataRepositoryTask::Jsonize() const
{
  JsonValue payload;

  if(m_taskIdHasBeenSet)
  {
   payload.WithString("TaskId", m_taskId);

  }

  if(m_lifecycleHasBeenSet)
  {
   payload.WithString("Lifecycle", DataRepositoryTaskLifecycleMapper::GetNameForDataRepositoryTaskLifecycle(m_lifecycle));
  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", DataRepositoryTaskTypeMapper::GetNameForDataRepositoryTaskType(m_type));
  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithDouble("StartTime", m_startTime.SecondsWithMSPrecision());
  }

  if(m_endTimeHasBeenSet)
  {
   payload.WithDouble("EndTime", m_endTime.SecondsWithMSPrecision());
  }

  if(m_resourceARNHasBeenSet)
  {
   payload.WithString("ResourceARN", m_resourceARN);

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  if(m_fileSystemIdHasBeenSet)
  {
   payload.WithString("FileSystemId", m_fileSystemId);

  }

  if(m_pathsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> pathsJsonList(m_paths.size());
   for(unsigned pathsIndex = 0; pathsIndex < pathsJsonList.GetLength(); ++pathsIndex)
   {
     pathsJsonList[pathsIndex].AsString(m_paths[pathsIndex]);
   }
   payload.WithArray("Paths", std::move(pathsJsonList));

  }

  if(m_failureDetailsHasBeenSet)
  {
   payload.WithObject("FailureDetails", m_failureDetails.Jsonize());

  }

  if(m_statusHasBeenSet)
  {
   payload.WithObject("Status", m_status.Jsonize());

  }

  if(m_reportHasBeenSet)
  {
   payload.WithObject("Report", m_report.Jsonize());

  }

  if(m_capacityToReleaseHasBeenSet)
  {
   payload.WithInt64("CapacityToRelease", m_capacityToRelease);

  }

  if(m_fileCacheIdHasBeenSet)
  {
   payload.WithString("FileCacheId", m_fileCacheId);

  }

  return payload;
}

} // namespace Model
} // namespace FSx
} // namespace Aws
