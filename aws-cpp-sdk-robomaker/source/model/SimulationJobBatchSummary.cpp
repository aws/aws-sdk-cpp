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

#include <aws/robomaker/model/SimulationJobBatchSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace RoboMaker
{
namespace Model
{

SimulationJobBatchSummary::SimulationJobBatchSummary() : 
    m_arnHasBeenSet(false),
    m_lastUpdatedAtHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_status(SimulationJobBatchStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_failedRequestCount(0),
    m_failedRequestCountHasBeenSet(false),
    m_pendingRequestCount(0),
    m_pendingRequestCountHasBeenSet(false),
    m_createdRequestCount(0),
    m_createdRequestCountHasBeenSet(false)
{
}

SimulationJobBatchSummary::SimulationJobBatchSummary(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_lastUpdatedAtHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_status(SimulationJobBatchStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_failedRequestCount(0),
    m_failedRequestCountHasBeenSet(false),
    m_pendingRequestCount(0),
    m_pendingRequestCountHasBeenSet(false),
    m_createdRequestCount(0),
    m_createdRequestCountHasBeenSet(false)
{
  *this = jsonValue;
}

SimulationJobBatchSummary& SimulationJobBatchSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastUpdatedAt"))
  {
    m_lastUpdatedAt = jsonValue.GetDouble("lastUpdatedAt");

    m_lastUpdatedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = SimulationJobBatchStatusMapper::GetSimulationJobBatchStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("failedRequestCount"))
  {
    m_failedRequestCount = jsonValue.GetInteger("failedRequestCount");

    m_failedRequestCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("pendingRequestCount"))
  {
    m_pendingRequestCount = jsonValue.GetInteger("pendingRequestCount");

    m_pendingRequestCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdRequestCount"))
  {
    m_createdRequestCount = jsonValue.GetInteger("createdRequestCount");

    m_createdRequestCountHasBeenSet = true;
  }

  return *this;
}

JsonValue SimulationJobBatchSummary::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_lastUpdatedAtHasBeenSet)
  {
   payload.WithDouble("lastUpdatedAt", m_lastUpdatedAt.SecondsWithMSPrecision());
  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", SimulationJobBatchStatusMapper::GetNameForSimulationJobBatchStatus(m_status));
  }

  if(m_failedRequestCountHasBeenSet)
  {
   payload.WithInteger("failedRequestCount", m_failedRequestCount);

  }

  if(m_pendingRequestCountHasBeenSet)
  {
   payload.WithInteger("pendingRequestCount", m_pendingRequestCount);

  }

  if(m_createdRequestCountHasBeenSet)
  {
   payload.WithInteger("createdRequestCount", m_createdRequestCount);

  }

  return payload;
}

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
