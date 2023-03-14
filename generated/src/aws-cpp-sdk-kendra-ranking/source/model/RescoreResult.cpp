/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra-ranking/model/RescoreResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::KendraRanking::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

RescoreResult::RescoreResult()
{
}

RescoreResult::RescoreResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

RescoreResult& RescoreResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("RescoreId"))
  {
    m_rescoreId = jsonValue.GetString("RescoreId");

  }

  if(jsonValue.ValueExists("ResultItems"))
  {
    Aws::Utils::Array<JsonView> resultItemsJsonList = jsonValue.GetArray("ResultItems");
    for(unsigned resultItemsIndex = 0; resultItemsIndex < resultItemsJsonList.GetLength(); ++resultItemsIndex)
    {
      m_resultItems.push_back(resultItemsJsonList[resultItemsIndex].AsObject());
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
