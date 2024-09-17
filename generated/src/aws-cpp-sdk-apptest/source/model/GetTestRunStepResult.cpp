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

GetTestRunStepResult::GetTestRunStepResult() : 
    m_testCaseVersion(0),
    m_testSuiteVersion(0),
    m_beforeStep(false),
    m_afterStep(false),
    m_status(StepRunStatus::NOT_SET)
{
}

GetTestRunStepResult::GetTestRunStepResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : GetTestRunStepResult()
{
  *this = result;
}

GetTestRunStepResult& GetTestRunStepResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("stepName"))
  {
    m_stepName = jsonValue.GetString("stepName");

  }

  if(jsonValue.ValueExists("testRunId"))
  {
    m_testRunId = jsonValue.GetString("testRunId");

  }

  if(jsonValue.ValueExists("testCaseId"))
  {
    m_testCaseId = jsonValue.GetString("testCaseId");

  }

  if(jsonValue.ValueExists("testCaseVersion"))
  {
    m_testCaseVersion = jsonValue.GetInteger("testCaseVersion");

  }

  if(jsonValue.ValueExists("testSuiteId"))
  {
    m_testSuiteId = jsonValue.GetString("testSuiteId");

  }

  if(jsonValue.ValueExists("testSuiteVersion"))
  {
    m_testSuiteVersion = jsonValue.GetInteger("testSuiteVersion");

  }

  if(jsonValue.ValueExists("beforeStep"))
  {
    m_beforeStep = jsonValue.GetBool("beforeStep");

  }

  if(jsonValue.ValueExists("afterStep"))
  {
    m_afterStep = jsonValue.GetBool("afterStep");

  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = StepRunStatusMapper::GetStepRunStatusForName(jsonValue.GetString("status"));

  }

  if(jsonValue.ValueExists("statusReason"))
  {
    m_statusReason = jsonValue.GetString("statusReason");

  }

  if(jsonValue.ValueExists("runStartTime"))
  {
    m_runStartTime = jsonValue.GetDouble("runStartTime");

  }

  if(jsonValue.ValueExists("runEndTime"))
  {
    m_runEndTime = jsonValue.GetDouble("runEndTime");

  }

  if(jsonValue.ValueExists("stepRunSummary"))
  {
    m_stepRunSummary = jsonValue.GetObject("stepRunSummary");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
