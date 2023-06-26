/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/ListFeaturedResultsSetsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::kendra::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListFeaturedResultsSetsResult::ListFeaturedResultsSetsResult()
{
}

ListFeaturedResultsSetsResult::ListFeaturedResultsSetsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListFeaturedResultsSetsResult& ListFeaturedResultsSetsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("FeaturedResultsSetSummaryItems"))
  {
    Aws::Utils::Array<JsonView> featuredResultsSetSummaryItemsJsonList = jsonValue.GetArray("FeaturedResultsSetSummaryItems");
    for(unsigned featuredResultsSetSummaryItemsIndex = 0; featuredResultsSetSummaryItemsIndex < featuredResultsSetSummaryItemsJsonList.GetLength(); ++featuredResultsSetSummaryItemsIndex)
    {
      m_featuredResultsSetSummaryItems.push_back(featuredResultsSetSummaryItemsJsonList[featuredResultsSetSummaryItemsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
