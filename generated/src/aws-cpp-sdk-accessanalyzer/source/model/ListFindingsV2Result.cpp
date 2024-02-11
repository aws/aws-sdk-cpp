/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/accessanalyzer/model/ListFindingsV2Result.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::AccessAnalyzer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListFindingsV2Result::ListFindingsV2Result()
{
}

ListFindingsV2Result::ListFindingsV2Result(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListFindingsV2Result& ListFindingsV2Result::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("findings"))
  {
    Aws::Utils::Array<JsonView> findingsJsonList = jsonValue.GetArray("findings");
    for(unsigned findingsIndex = 0; findingsIndex < findingsJsonList.GetLength(); ++findingsIndex)
    {
      m_findings.push_back(findingsJsonList[findingsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
