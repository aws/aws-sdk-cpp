/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/m2/model/JobStep.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MainframeModernization
{
namespace Model
{

JobStep::JobStep(JsonView jsonValue)
{
  *this = jsonValue;
}

JobStep& JobStep::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("procStepName"))
  {
    m_procStepName = jsonValue.GetString("procStepName");
    m_procStepNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("procStepNumber"))
  {
    m_procStepNumber = jsonValue.GetInteger("procStepNumber");
    m_procStepNumberHasBeenSet = true;
  }
  if(jsonValue.ValueExists("stepCheckpoint"))
  {
    m_stepCheckpoint = jsonValue.GetInteger("stepCheckpoint");
    m_stepCheckpointHasBeenSet = true;
  }
  if(jsonValue.ValueExists("stepCheckpointStatus"))
  {
    m_stepCheckpointStatus = jsonValue.GetString("stepCheckpointStatus");
    m_stepCheckpointStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("stepCheckpointTime"))
  {
    m_stepCheckpointTime = jsonValue.GetDouble("stepCheckpointTime");
    m_stepCheckpointTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("stepCondCode"))
  {
    m_stepCondCode = jsonValue.GetString("stepCondCode");
    m_stepCondCodeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("stepName"))
  {
    m_stepName = jsonValue.GetString("stepName");
    m_stepNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("stepNumber"))
  {
    m_stepNumber = jsonValue.GetInteger("stepNumber");
    m_stepNumberHasBeenSet = true;
  }
  if(jsonValue.ValueExists("stepRestartable"))
  {
    m_stepRestartable = jsonValue.GetBool("stepRestartable");
    m_stepRestartableHasBeenSet = true;
  }
  return *this;
}

JsonValue JobStep::Jsonize() const
{
  JsonValue payload;

  if(m_procStepNameHasBeenSet)
  {
   payload.WithString("procStepName", m_procStepName);

  }

  if(m_procStepNumberHasBeenSet)
  {
   payload.WithInteger("procStepNumber", m_procStepNumber);

  }

  if(m_stepCheckpointHasBeenSet)
  {
   payload.WithInteger("stepCheckpoint", m_stepCheckpoint);

  }

  if(m_stepCheckpointStatusHasBeenSet)
  {
   payload.WithString("stepCheckpointStatus", m_stepCheckpointStatus);

  }

  if(m_stepCheckpointTimeHasBeenSet)
  {
   payload.WithDouble("stepCheckpointTime", m_stepCheckpointTime.SecondsWithMSPrecision());
  }

  if(m_stepCondCodeHasBeenSet)
  {
   payload.WithString("stepCondCode", m_stepCondCode);

  }

  if(m_stepNameHasBeenSet)
  {
   payload.WithString("stepName", m_stepName);

  }

  if(m_stepNumberHasBeenSet)
  {
   payload.WithInteger("stepNumber", m_stepNumber);

  }

  if(m_stepRestartableHasBeenSet)
  {
   payload.WithBool("stepRestartable", m_stepRestartable);

  }

  return payload;
}

} // namespace Model
} // namespace MainframeModernization
} // namespace Aws
