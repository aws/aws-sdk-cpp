/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codebuild/model/DescribeTestCasesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CodeBuild::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeTestCasesResult::DescribeTestCasesResult()
{
}

DescribeTestCasesResult::DescribeTestCasesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeTestCasesResult& DescribeTestCasesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }

  if(jsonValue.ValueExists("testCases"))
  {
    Aws::Utils::Array<JsonView> testCasesJsonList = jsonValue.GetArray("testCases");
    for(unsigned testCasesIndex = 0; testCasesIndex < testCasesJsonList.GetLength(); ++testCasesIndex)
    {
      m_testCases.push_back(testCasesJsonList[testCasesIndex].AsObject());
    }
  }



  return *this;
}
