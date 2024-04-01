/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/SearchWorkersResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::deadline::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

SearchWorkersResult::SearchWorkersResult() : 
    m_nextItemOffset(0),
    m_totalResults(0)
{
}

SearchWorkersResult::SearchWorkersResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_nextItemOffset(0),
    m_totalResults(0)
{
  *this = result;
}

SearchWorkersResult& SearchWorkersResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("nextItemOffset"))
  {
    m_nextItemOffset = jsonValue.GetInteger("nextItemOffset");

  }

  if(jsonValue.ValueExists("totalResults"))
  {
    m_totalResults = jsonValue.GetInteger("totalResults");

  }

  if(jsonValue.ValueExists("workers"))
  {
    Aws::Utils::Array<JsonView> workersJsonList = jsonValue.GetArray("workers");
    for(unsigned workersIndex = 0; workersIndex < workersJsonList.GetLength(); ++workersIndex)
    {
      m_workers.push_back(workersJsonList[workersIndex].AsObject());
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
