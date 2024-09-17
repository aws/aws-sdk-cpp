/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apptest/model/UpdateTestSuiteResult.h>
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

UpdateTestSuiteResult::UpdateTestSuiteResult() : 
    m_testSuiteVersion(0)
{
}

UpdateTestSuiteResult::UpdateTestSuiteResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : UpdateTestSuiteResult()
{
  *this = result;
}

UpdateTestSuiteResult& UpdateTestSuiteResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("testSuiteId"))
  {
    m_testSuiteId = jsonValue.GetString("testSuiteId");

  }

  if(jsonValue.ValueExists("testSuiteVersion"))
  {
    m_testSuiteVersion = jsonValue.GetInteger("testSuiteVersion");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
