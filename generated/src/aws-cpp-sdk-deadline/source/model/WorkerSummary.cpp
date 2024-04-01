/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/WorkerSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace deadline
{
namespace Model
{

WorkerSummary::WorkerSummary() : 
    m_createdAtHasBeenSet(false),
    m_createdByHasBeenSet(false),
    m_farmIdHasBeenSet(false),
    m_fleetIdHasBeenSet(false),
    m_hostPropertiesHasBeenSet(false),
    m_logHasBeenSet(false),
    m_status(WorkerStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_updatedByHasBeenSet(false),
    m_workerIdHasBeenSet(false)
{
}

WorkerSummary::WorkerSummary(JsonView jsonValue) : 
    m_createdAtHasBeenSet(false),
    m_createdByHasBeenSet(false),
    m_farmIdHasBeenSet(false),
    m_fleetIdHasBeenSet(false),
    m_hostPropertiesHasBeenSet(false),
    m_logHasBeenSet(false),
    m_status(WorkerStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_updatedByHasBeenSet(false),
    m_workerIdHasBeenSet(false)
{
  *this = jsonValue;
}

WorkerSummary& WorkerSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetString("createdAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdBy"))
  {
    m_createdBy = jsonValue.GetString("createdBy");

    m_createdByHasBeenSet = true;
  }

  if(jsonValue.ValueExists("farmId"))
  {
    m_farmId = jsonValue.GetString("farmId");

    m_farmIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("fleetId"))
  {
    m_fleetId = jsonValue.GetString("fleetId");

    m_fleetIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("hostProperties"))
  {
    m_hostProperties = jsonValue.GetObject("hostProperties");

    m_hostPropertiesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("log"))
  {
    m_log = jsonValue.GetObject("log");

    m_logHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = WorkerStatusMapper::GetWorkerStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("updatedAt"))
  {
    m_updatedAt = jsonValue.GetString("updatedAt");

    m_updatedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("updatedBy"))
  {
    m_updatedBy = jsonValue.GetString("updatedBy");

    m_updatedByHasBeenSet = true;
  }

  if(jsonValue.ValueExists("workerId"))
  {
    m_workerId = jsonValue.GetString("workerId");

    m_workerIdHasBeenSet = true;
  }

  return *this;
}

JsonValue WorkerSummary::Jsonize() const
{
  JsonValue payload;

  if(m_createdAtHasBeenSet)
  {
   payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_createdByHasBeenSet)
  {
   payload.WithString("createdBy", m_createdBy);

  }

  if(m_farmIdHasBeenSet)
  {
   payload.WithString("farmId", m_farmId);

  }

  if(m_fleetIdHasBeenSet)
  {
   payload.WithString("fleetId", m_fleetId);

  }

  if(m_hostPropertiesHasBeenSet)
  {
   payload.WithObject("hostProperties", m_hostProperties.Jsonize());

  }

  if(m_logHasBeenSet)
  {
   payload.WithObject("log", m_log.Jsonize());

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", WorkerStatusMapper::GetNameForWorkerStatus(m_status));
  }

  if(m_updatedAtHasBeenSet)
  {
   payload.WithString("updatedAt", m_updatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_updatedByHasBeenSet)
  {
   payload.WithString("updatedBy", m_updatedBy);

  }

  if(m_workerIdHasBeenSet)
  {
   payload.WithString("workerId", m_workerId);

  }

  return payload;
}

} // namespace Model
} // namespace deadline
} // namespace Aws
