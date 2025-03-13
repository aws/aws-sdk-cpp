/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apptest/model/GetTestRunStepResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::AppTest::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetTestRunStepResult::GetTestRunStepResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetTestRunStepResult& GetTestRunStepResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
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
  if(jsonValue.ValueExists("stepRunSummary"))
  {
    m_stepRunSummary = jsonValue.GetObject("stepRunSummary");
    m_stepRunSummaryHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
