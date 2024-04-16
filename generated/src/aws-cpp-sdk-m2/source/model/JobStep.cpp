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

JobStep::JobStep() : 
    m_procStepNameHasBeenSet(false),
    m_procStepNumber(0),
    m_procStepNumberHasBeenSet(false),
    m_stepCondCodeHasBeenSet(false),
    m_stepNameHasBeenSet(false),
    m_stepNumber(0),
    m_stepNumberHasBeenSet(false),
    m_stepRestartable(false),
    m_stepRestartableHasBeenSet(false)
{
}

JobStep::JobStep(JsonView jsonValue) : 
    m_procStepNameHasBeenSet(false),
    m_procStepNumber(0),
    m_procStepNumberHasBeenSet(false),
    m_stepCondCodeHasBeenSet(false),
    m_stepNameHasBeenSet(false),
    m_stepNumber(0),
    m_stepNumberHasBeenSet(false),
    m_stepRestartable(false),
    m_stepRestartableHasBeenSet(false)
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
