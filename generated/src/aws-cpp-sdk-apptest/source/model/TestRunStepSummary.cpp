/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apptest/model/TestRunStepSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppTest
{
namespace Model
{

TestRunStepSummary::TestRunStepSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

TestRunStepSummary& TestRunStepSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("stepName"))
  {
    m_stepName = jsonValue.GetString("stepName");
    m_stepNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("testRunId"))
  {
    m_testRunId = jsonValue.GetString("testRunId");
    m_testRunIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("testCaseId"))
  {
    m_testCaseId = jsonValue.GetString("testCaseId");
    m_testCaseIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("testCaseVersion"))
  {
    m_testCaseVersion = jsonValue.GetInteger("testCaseVersion");
    m_testCaseVersionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("testSuiteId"))
  {
    m_testSuiteId = jsonValue.GetString("testSuiteId");
    m_testSuiteIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("testSuiteVersion"))
  {
    m_testSuiteVersion = jsonValue.GetInteger("testSuiteVersion");
    m_testSuiteVersionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("beforeStep"))
  {
    m_beforeStep = jsonValue.GetBool("beforeStep");
    m_beforeStepHasBeenSet = true;
  }
  if(jsonValue.ValueExists("afterStep"))
  {
    m_afterStep = jsonValue.GetBool("afterStep");
    m_afterStepHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = StepRunStatusMapper::GetStepRunStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("statusReason"))
  {
    m_statusReason = jsonValue.GetString("statusReason");
    m_statusReasonHasBeenSet = true;
  }
  if(jsonValue.ValueExists("runStartTime"))
  {
    m_runStartTime = jsonValue.GetDouble("runStartTime");
    m_runStartTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("runEndTime"))
  {
    m_runEndTime = jsonValue.GetDouble("runEndTime");
    m_runEndTimeHasBeenSet = true;
  }
  return *this;
}

JsonValue TestRunStepSummary::Jsonize() const
{
  JsonValue payload;

  if(m_stepNameHasBeenSet)
  {
   payload.WithString("stepName", m_stepName);

  }

  if(m_testRunIdHasBeenSet)
  {
   payload.WithString("testRunId", m_testRunId);

  }

  if(m_testCaseIdHasBeenSet)
  {
   payload.WithString("testCaseId", m_testCaseId);

  }

  if(m_testCaseVersionHasBeenSet)
  {
   payload.WithInteger("testCaseVersion", m_testCaseVersion);

  }

  if(m_testSuiteIdHasBeenSet)
  {
   payload.WithString("testSuiteId", m_testSuiteId);

  }

  if(m_testSuiteVersionHasBeenSet)
  {
   payload.WithInteger("testSuiteVersion", m_testSuiteVersion);

  }

  if(m_beforeStepHasBeenSet)
  {
   payload.WithBool("beforeStep", m_beforeStep);

  }

  if(m_afterStepHasBeenSet)
  {
   payload.WithBool("afterStep", m_afterStep);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", StepRunStatusMapper::GetNameForStepRunStatus(m_status));
  }

  if(m_statusReasonHasBeenSet)
  {
   payload.WithString("statusReason", m_statusReason);

  }

  if(m_runStartTimeHasBeenSet)
  {
   payload.WithDouble("runStartTime", m_runStartTime.SecondsWithMSPrecision());
  }

  if(m_runEndTimeHasBeenSet)
  {
   payload.WithDouble("runEndTime", m_runEndTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace AppTest
} // namespace Aws
