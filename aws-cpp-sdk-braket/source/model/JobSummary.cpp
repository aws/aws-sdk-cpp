/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/braket/model/JobSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Braket
{
namespace Model
{

JobSummary::JobSummary() : 
    m_createdAtHasBeenSet(false),
    m_deviceHasBeenSet(false),
    m_endedAtHasBeenSet(false),
    m_jobArnHasBeenSet(false),
    m_jobNameHasBeenSet(false),
    m_startedAtHasBeenSet(false),
    m_status(JobPrimaryStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

JobSummary::JobSummary(JsonView jsonValue) : 
    m_createdAtHasBeenSet(false),
    m_deviceHasBeenSet(false),
    m_endedAtHasBeenSet(false),
    m_jobArnHasBeenSet(false),
    m_jobNameHasBeenSet(false),
    m_startedAtHasBeenSet(false),
    m_status(JobPrimaryStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = jsonValue;
}

JobSummary& JobSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetString("createdAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("device"))
  {
    m_device = jsonValue.GetString("device");

    m_deviceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("endedAt"))
  {
    m_endedAt = jsonValue.GetString("endedAt");

    m_endedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("jobArn"))
  {
    m_jobArn = jsonValue.GetString("jobArn");

    m_jobArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("jobName"))
  {
    m_jobName = jsonValue.GetString("jobName");

    m_jobNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("startedAt"))
  {
    m_startedAt = jsonValue.GetString("startedAt");

    m_startedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = JobPrimaryStatusMapper::GetJobPrimaryStatusForName(jsonValue.GetString("status"));

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

  return *this;
}

JsonValue JobSummary::Jsonize() const
{
  JsonValue payload;

  if(m_createdAtHasBeenSet)
  {
   payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_deviceHasBeenSet)
  {
   payload.WithString("device", m_device);

  }

  if(m_endedAtHasBeenSet)
  {
   payload.WithString("endedAt", m_endedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_jobArnHasBeenSet)
  {
   payload.WithString("jobArn", m_jobArn);

  }

  if(m_jobNameHasBeenSet)
  {
   payload.WithString("jobName", m_jobName);

  }

  if(m_startedAtHasBeenSet)
  {
   payload.WithString("startedAt", m_startedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", JobPrimaryStatusMapper::GetNameForJobPrimaryStatus(m_status));
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

  return payload;
}

} // namespace Model
} // namespace Braket
} // namespace Aws
