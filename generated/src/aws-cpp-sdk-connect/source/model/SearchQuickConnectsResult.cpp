/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/SearchQuickConnectsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

SearchQuickConnectsResult::SearchQuickConnectsResult() : 
    m_approximateTotalCount(0)
{
}

SearchQuickConnectsResult::SearchQuickConnectsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_approximateTotalCount(0)
{
  *this = result;
}

SearchQuickConnectsResult& SearchQuickConnectsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("QuickConnects"))
  {
    Aws::Utils::Array<JsonView> quickConnectsJsonList = jsonValue.GetArray("QuickConnects");
    for(unsigned quickConnectsIndex = 0; quickConnectsIndex < quickConnectsJsonList.GetLength(); ++quickConnectsIndex)
    {
      m_quickConnects.push_back(quickConnectsJsonList[quickConnectsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }

  if(jsonValue.ValueExists("ApproximateTotalCount"))
  {
    m_approximateTotalCount = jsonValue.GetInt64("ApproximateTotalCount");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
