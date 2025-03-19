/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apptest/model/TestRunSummary.h>
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

TestRunSummary::TestRunSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

TestRunSummary& TestRunSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("testRunId"))
  {
    m_testRunId = jsonValue.GetString("testRunId");
    m_testRunIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("testRunArn"))
  {
    m_testRunArn = jsonValue.GetString("testRunArn");
    m_testRunArnHasBeenSet = true;
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
  if(jsonValue.ValueExists("testConfigurationId"))
  {
    m_testConfigurationId = jsonValue.GetString("testConfigurationId");
    m_testConfigurationIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("testConfigurationVersion"))
  {
    m_testConfigurationVersion = jsonValue.GetInteger("testConfigurationVersion");
    m_testConfigurationVersionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = TestRunStatusMapper::GetTestRunStatusForName(jsonValue.GetString("status"));
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

JsonValue TestRunSummary::Jsonize() const
{
  JsonValue payload;

  if(m_testRunIdHasBeenSet)
  {
   payload.WithString("testRunId", m_testRunId);

  }

  if(m_testRunArnHasBeenSet)
  {
   payload.WithString("testRunArn", m_testRunArn);

  }

  if(m_testSuiteIdHasBeenSet)
  {
   payload.WithString("testSuiteId", m_testSuiteId);

  }

  if(m_testSuiteVersionHasBeenSet)
  {
   payload.WithInteger("testSuiteVersion", m_testSuiteVersion);

  }

  if(m_testConfigurationIdHasBeenSet)
  {
   payload.WithString("testConfigurationId", m_testConfigurationId);

  }

  if(m_testConfigurationVersionHasBeenSet)
  {
   payload.WithInteger("testConfigurationVersion", m_testConfigurationVersion);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", TestRunStatusMapper::GetNameForTestRunStatus(m_status));
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
