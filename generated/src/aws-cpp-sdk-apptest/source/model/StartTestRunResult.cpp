/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apptest/model/StartTestRunResult.h>
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

StartTestRunResult::StartTestRunResult() : 
    m_testRunStatus(TestRunStatus::NOT_SET)
{
}

StartTestRunResult::StartTestRunResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : StartTestRunResult()
{
  *this = result;
}

StartTestRunResult& StartTestRunResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("testRunId"))
  {
    m_testRunId = jsonValue.GetString("testRunId");

  }

  if(jsonValue.ValueExists("testRunStatus"))
  {
    m_testRunStatus = TestRunStatusMapper::GetTestRunStatusForName(jsonValue.GetString("testRunStatus"));

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
