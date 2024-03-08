/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cost-optimization-hub/model/ListRecommendationSummariesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CostOptimizationHub::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListRecommendationSummariesResult::ListRecommendationSummariesResult() : 
    m_estimatedTotalDedupedSavings(0.0)
{
}

ListRecommendationSummariesResult::ListRecommendationSummariesResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_estimatedTotalDedupedSavings(0.0)
{
  *this = result;
}

ListRecommendationSummariesResult& ListRecommendationSummariesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("currencyCode"))
  {
    m_currencyCode = jsonValue.GetString("currencyCode");

  }

  if(jsonValue.ValueExists("estimatedTotalDedupedSavings"))
  {
    m_estimatedTotalDedupedSavings = jsonValue.GetDouble("estimatedTotalDedupedSavings");

  }

  if(jsonValue.ValueExists("groupBy"))
  {
    m_groupBy = jsonValue.GetString("groupBy");

  }

  if(jsonValue.ValueExists("items"))
  {
    Aws::Utils::Array<JsonView> itemsJsonList = jsonValue.GetArray("items");
    for(unsigned itemsIndex = 0; itemsIndex < itemsJsonList.GetLength(); ++itemsIndex)
    {
      m_items.push_back(itemsJsonList[itemsIndex].AsObject());
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
