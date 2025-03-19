/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/QueryResult.h>
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

QueryResult::QueryResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

QueryResult& QueryResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("QueryId"))
  {
    m_queryId = jsonValue.GetString("QueryId");
    m_queryIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ResultItems"))
  {
    Aws::Utils::Array<JsonView> resultItemsJsonList = jsonValue.GetArray("ResultItems");
    for(unsigned resultItemsIndex = 0; resultItemsIndex < resultItemsJsonList.GetLength(); ++resultItemsIndex)
    {
      m_resultItems.push_back(resultItemsJsonList[resultItemsIndex].AsObject());
    }
    m_resultItemsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FacetResults"))
  {
    Aws::Utils::Array<JsonView> facetResultsJsonList = jsonValue.GetArray("FacetResults");
    for(unsigned facetResultsIndex = 0; facetResultsIndex < facetResultsJsonList.GetLength(); ++facetResultsIndex)
    {
      m_facetResults.push_back(facetResultsJsonList[facetResultsIndex].AsObject());
    }
    m_facetResultsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TotalNumberOfResults"))
  {
    m_totalNumberOfResults = jsonValue.GetInteger("TotalNumberOfResults");
    m_totalNumberOfResultsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Warnings"))
  {
    Aws::Utils::Array<JsonView> warningsJsonList = jsonValue.GetArray("Warnings");
    for(unsigned warningsIndex = 0; warningsIndex < warningsJsonList.GetLength(); ++warningsIndex)
    {
      m_warnings.push_back(warningsJsonList[warningsIndex].AsObject());
    }
    m_warningsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SpellCorrectedQueries"))
  {
    Aws::Utils::Array<JsonView> spellCorrectedQueriesJsonList = jsonValue.GetArray("SpellCorrectedQueries");
    for(unsigned spellCorrectedQueriesIndex = 0; spellCorrectedQueriesIndex < spellCorrectedQueriesJsonList.GetLength(); ++spellCorrectedQueriesIndex)
    {
      m_spellCorrectedQueries.push_back(spellCorrectedQueriesJsonList[spellCorrectedQueriesIndex].AsObject());
    }
    m_spellCorrectedQueriesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FeaturedResultsItems"))
  {
    Aws::Utils::Array<JsonView> featuredResultsItemsJsonList = jsonValue.GetArray("FeaturedResultsItems");
    for(unsigned featuredResultsItemsIndex = 0; featuredResultsItemsIndex < featuredResultsItemsJsonList.GetLength(); ++featuredResultsItemsIndex)
    {
      m_featuredResultsItems.push_back(featuredResultsItemsJsonList[featuredResultsItemsIndex].AsObject());
    }
    m_featuredResultsItemsHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
