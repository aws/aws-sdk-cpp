/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/JobSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoT
{
namespace Model
{

JobSummary::JobSummary() : 
    m_jobArnHasBeenSet(false),
    m_jobIdHasBeenSet(false),
    m_thingGroupIdHasBeenSet(false),
    m_targetSelection(TargetSelection::NOT_SET),
    m_targetSelectionHasBeenSet(false),
    m_status(JobStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_lastUpdatedAtHasBeenSet(false),
    m_completedAtHasBeenSet(false)
{
}

JobSummary::JobSummary(JsonView jsonValue) : 
    m_jobArnHasBeenSet(false),
    m_jobIdHasBeenSet(false),
    m_thingGroupIdHasBeenSet(false),
    m_targetSelection(TargetSelection::NOT_SET),
    m_targetSelectionHasBeenSet(false),
    m_status(JobStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_lastUpdatedAtHasBeenSet(false),
    m_completedAtHasBeenSet(false)
{
  *this = jsonValue;
}

JobSummary& JobSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("jobArn"))
  {
    m_jobArn = jsonValue.GetString("jobArn");

    m_jobArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("jobId"))
  {
    m_jobId = jsonValue.GetString("jobId");

    m_jobIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("thingGroupId"))
  {
    m_thingGroupId = jsonValue.GetString("thingGroupId");

    m_thingGroupIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("targetSelection"))
  {
    m_targetSelection = TargetSelectionMapper::GetTargetSelectionForName(jsonValue.GetString("targetSelection"));

    m_targetSelectionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = JobStatusMapper::GetJobStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastUpdatedAt"))
  {
    m_lastUpdatedAt = jsonValue.GetDouble("lastUpdatedAt");

    m_lastUpdatedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("completedAt"))
  {
    m_completedAt = jsonValue.GetDouble("completedAt");

    m_completedAtHasBeenSet = true;
  }

  return *this;
}

JsonValue JobSummary::Jsonize() const
{
  JsonValue payload;

  if(m_jobArnHasBeenSet)
  {
   payload.WithString("jobArn", m_jobArn);

  }

  if(m_jobIdHasBeenSet)
  {
   payload.WithString("jobId", m_jobId);

  }

  if(m_thingGroupIdHasBeenSet)
  {
   payload.WithString("thingGroupId", m_thingGroupId);

  }

  if(m_targetSelectionHasBeenSet)
  {
   payload.WithString("targetSelection", TargetSelectionMapper::GetNameForTargetSelection(m_targetSelection));
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", JobStatusMapper::GetNameForJobStatus(m_status));
  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_lastUpdatedAtHasBeenSet)
  {
   payload.WithDouble("lastUpdatedAt", m_lastUpdatedAt.SecondsWithMSPrecision());
  }

  if(m_completedAtHasBeenSet)
  {
   payload.WithDouble("completedAt", m_completedAt.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
