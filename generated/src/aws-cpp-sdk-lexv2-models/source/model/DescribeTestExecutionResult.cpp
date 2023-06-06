/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/DescribeTestExecutionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::LexModelsV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeTestExecutionResult::DescribeTestExecutionResult() : 
    m_testExecutionStatus(TestExecutionStatus::NOT_SET),
    m_apiMode(TestExecutionApiMode::NOT_SET),
    m_testExecutionModality(TestExecutionModality::NOT_SET)
{
}

DescribeTestExecutionResult::DescribeTestExecutionResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_testExecutionStatus(TestExecutionStatus::NOT_SET),
    m_apiMode(TestExecutionApiMode::NOT_SET),
    m_testExecutionModality(TestExecutionModality::NOT_SET)
{
  *this = result;
}

DescribeTestExecutionResult& DescribeTestExecutionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("testExecutionId"))
  {
    m_testExecutionId = jsonValue.GetString("testExecutionId");

  }

  if(jsonValue.ValueExists("creationDateTime"))
  {
    m_creationDateTime = jsonValue.GetDouble("creationDateTime");

  }

  if(jsonValue.ValueExists("lastUpdatedDateTime"))
  {
    m_lastUpdatedDateTime = jsonValue.GetDouble("lastUpdatedDateTime");

  }

  if(jsonValue.ValueExists("testExecutionStatus"))
  {
    m_testExecutionStatus = TestExecutionStatusMapper::GetTestExecutionStatusForName(jsonValue.GetString("testExecutionStatus"));

  }

  if(jsonValue.ValueExists("testSetId"))
  {
    m_testSetId = jsonValue.GetString("testSetId");

  }

  if(jsonValue.ValueExists("testSetName"))
  {
    m_testSetName = jsonValue.GetString("testSetName");

  }

  if(jsonValue.ValueExists("target"))
  {
    m_target = jsonValue.GetObject("target");

  }

  if(jsonValue.ValueExists("apiMode"))
  {
    m_apiMode = TestExecutionApiModeMapper::GetTestExecutionApiModeForName(jsonValue.GetString("apiMode"));

  }

  if(jsonValue.ValueExists("testExecutionModality"))
  {
    m_testExecutionModality = TestExecutionModalityMapper::GetTestExecutionModalityForName(jsonValue.GetString("testExecutionModality"));

  }

  if(jsonValue.ValueExists("failureReasons"))
  {
    Aws::Utils::Array<JsonView> failureReasonsJsonList = jsonValue.GetArray("failureReasons");
    for(unsigned failureReasonsIndex = 0; failureReasonsIndex < failureReasonsJsonList.GetLength(); ++failureReasonsIndex)
    {
      m_failureReasons.push_back(failureReasonsJsonList[failureReasonsIndex].AsString());
    }
  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
