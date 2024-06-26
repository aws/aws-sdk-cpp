/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apptest/model/UpdateTestCaseResult.h>
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

UpdateTestCaseResult::UpdateTestCaseResult() : 
    m_testCaseVersion(0)
{
}

UpdateTestCaseResult::UpdateTestCaseResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : UpdateTestCaseResult()
{
  *this = result;
}

UpdateTestCaseResult& UpdateTestCaseResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("testCaseId"))
  {
    m_testCaseId = jsonValue.GetString("testCaseId");

  }

  if(jsonValue.ValueExists("testCaseVersion"))
  {
    m_testCaseVersion = jsonValue.GetInteger("testCaseVersion");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
