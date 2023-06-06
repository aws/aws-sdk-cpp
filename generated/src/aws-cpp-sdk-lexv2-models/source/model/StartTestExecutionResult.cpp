/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/StartTestExecutionResult.h>
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

StartTestExecutionResult::StartTestExecutionResult() : 
    m_apiMode(TestExecutionApiMode::NOT_SET),
    m_testExecutionModality(TestExecutionModality::NOT_SET)
{
}

StartTestExecutionResult::StartTestExecutionResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_apiMode(TestExecutionApiMode::NOT_SET),
    m_testExecutionModality(TestExecutionModality::NOT_SET)
{
  *this = result;
}

StartTestExecutionResult& StartTestExecutionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
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

  if(jsonValue.ValueExists("testSetId"))
  {
    m_testSetId = jsonValue.GetString("testSetId");

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


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
