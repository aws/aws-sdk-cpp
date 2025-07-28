/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/ExecutionSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTSiteWise
{
namespace Model
{

ExecutionSummary::ExecutionSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

ExecutionSummary& ExecutionSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("executionId"))
  {
    m_executionId = jsonValue.GetString("executionId");
    m_executionIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("actionType"))
  {
    m_actionType = jsonValue.GetString("actionType");
    m_actionTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("targetResource"))
  {
    m_targetResource = jsonValue.GetObject("targetResource");
    m_targetResourceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("targetResourceVersion"))
  {
    m_targetResourceVersion = jsonValue.GetString("targetResourceVersion");
    m_targetResourceVersionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("resolveTo"))
  {
    m_resolveTo = jsonValue.GetObject("resolveTo");
    m_resolveToHasBeenSet = true;
  }
  if(jsonValue.ValueExists("executionStartTime"))
  {
    m_executionStartTime = jsonValue.GetDouble("executionStartTime");
    m_executionStartTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("executionEndTime"))
  {
    m_executionEndTime = jsonValue.GetDouble("executionEndTime");
    m_executionEndTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("executionStatus"))
  {
    m_executionStatus = jsonValue.GetObject("executionStatus");
    m_executionStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("executionEntityVersion"))
  {
    m_executionEntityVersion = jsonValue.GetString("executionEntityVersion");
    m_executionEntityVersionHasBeenSet = true;
  }
  return *this;
}

JsonValue ExecutionSummary::Jsonize() const
{
  JsonValue payload;

  if(m_executionIdHasBeenSet)
  {
   payload.WithString("executionId", m_executionId);

  }

  if(m_actionTypeHasBeenSet)
  {
   payload.WithString("actionType", m_actionType);

  }

  if(m_targetResourceHasBeenSet)
  {
   payload.WithObject("targetResource", m_targetResource.Jsonize());

  }

  if(m_targetResourceVersionHasBeenSet)
  {
   payload.WithString("targetResourceVersion", m_targetResourceVersion);

  }

  if(m_resolveToHasBeenSet)
  {
   payload.WithObject("resolveTo", m_resolveTo.Jsonize());

  }

  if(m_executionStartTimeHasBeenSet)
  {
   payload.WithDouble("executionStartTime", m_executionStartTime.SecondsWithMSPrecision());
  }

  if(m_executionEndTimeHasBeenSet)
  {
   payload.WithDouble("executionEndTime", m_executionEndTime.SecondsWithMSPrecision());
  }

  if(m_executionStatusHasBeenSet)
  {
   payload.WithObject("executionStatus", m_executionStatus.Jsonize());

  }

  if(m_executionEntityVersionHasBeenSet)
  {
   payload.WithString("executionEntityVersion", m_executionEntityVersion);

  }

  return payload;
}

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
