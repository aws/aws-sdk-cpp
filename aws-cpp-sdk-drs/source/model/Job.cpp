/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/drs/model/Job.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace drs
{
namespace Model
{

Job::Job() : 
    m_arnHasBeenSet(false),
    m_creationDateTimeHasBeenSet(false),
    m_endDateTimeHasBeenSet(false),
    m_initiatedBy(InitiatedBy::NOT_SET),
    m_initiatedByHasBeenSet(false),
    m_jobIDHasBeenSet(false),
    m_participatingServersHasBeenSet(false),
    m_status(JobStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_type(JobType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

Job::Job(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_creationDateTimeHasBeenSet(false),
    m_endDateTimeHasBeenSet(false),
    m_initiatedBy(InitiatedBy::NOT_SET),
    m_initiatedByHasBeenSet(false),
    m_jobIDHasBeenSet(false),
    m_participatingServersHasBeenSet(false),
    m_status(JobStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_type(JobType::NOT_SET),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

Job& Job::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("creationDateTime"))
  {
    m_creationDateTime = jsonValue.GetString("creationDateTime");

    m_creationDateTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("endDateTime"))
  {
    m_endDateTime = jsonValue.GetString("endDateTime");

    m_endDateTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("initiatedBy"))
  {
    m_initiatedBy = InitiatedByMapper::GetInitiatedByForName(jsonValue.GetString("initiatedBy"));

    m_initiatedByHasBeenSet = true;
  }

  if(jsonValue.ValueExists("jobID"))
  {
    m_jobID = jsonValue.GetString("jobID");

    m_jobIDHasBeenSet = true;
  }

  if(jsonValue.ValueExists("participatingServers"))
  {
    Aws::Utils::Array<JsonView> participatingServersJsonList = jsonValue.GetArray("participatingServers");
    for(unsigned participatingServersIndex = 0; participatingServersIndex < participatingServersJsonList.GetLength(); ++participatingServersIndex)
    {
      m_participatingServers.push_back(participatingServersJsonList[participatingServersIndex].AsObject());
    }
    m_participatingServersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = JobStatusMapper::GetJobStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = JobTypeMapper::GetJobTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue Job::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_creationDateTimeHasBeenSet)
  {
   payload.WithString("creationDateTime", m_creationDateTime);

  }

  if(m_endDateTimeHasBeenSet)
  {
   payload.WithString("endDateTime", m_endDateTime);

  }

  if(m_initiatedByHasBeenSet)
  {
   payload.WithString("initiatedBy", InitiatedByMapper::GetNameForInitiatedBy(m_initiatedBy));
  }

  if(m_jobIDHasBeenSet)
  {
   payload.WithString("jobID", m_jobID);

  }

  if(m_participatingServersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> participatingServersJsonList(m_participatingServers.size());
   for(unsigned participatingServersIndex = 0; participatingServersIndex < participatingServersJsonList.GetLength(); ++participatingServersIndex)
   {
     participatingServersJsonList[participatingServersIndex].AsObject(m_participatingServers[participatingServersIndex].Jsonize());
   }
   payload.WithArray("participatingServers", std::move(participatingServersJsonList));

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", JobStatusMapper::GetNameForJobStatus(m_status));
  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", JobTypeMapper::GetNameForJobType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace drs
} // namespace Aws
