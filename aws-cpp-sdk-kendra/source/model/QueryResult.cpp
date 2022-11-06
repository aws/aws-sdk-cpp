/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/QueryResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::kendra::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

QueryResult::QueryResult() : 
    m_totalNumberOfResults(0)
{
}

QueryResult::QueryResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_totalNumberOfResults(0)
{
  *this = result;
}

QueryResult& QueryResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("QueryId"))
  {
    m_queryId = jsonValue.GetString("QueryId");

  }

  if(jsonValue.ValueExists("ResultItems"))
  {
    Aws::Utils::Array<JsonView> resultItemsJsonList = jsonValue.GetArray("ResultItems");
    for(unsigned resultItemsIndex = 0; resultItemsIndex < resultItemsJsonList.GetLength(); ++resultItemsIndex)
    {
      m_resultItems.push_back(resultItemsJsonList[resultItemsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("FacetResults"))
  {
    Aws::Utils::Array<JsonView> facetResultsJsonList = jsonValue.GetArray("FacetResults");
    for(unsigned facetResultsIndex = 0; facetResultsIndex < facetResultsJsonList.GetLength(); ++facetResultsIndex)
    {
      m_facetResults.push_back(facetResultsJsonList[facetResultsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("TotalNumberOfResults"))
  {
    m_totalNumberOfResults = jsonValue.GetInteger("TotalNumberOfResults");

  }

  if(jsonValue.ValueExists("Warnings"))
  {
    Aws::Utils::Array<JsonView> warningsJsonList = jsonValue.GetArray("Warnings");
    for(unsigned warningsIndex = 0; warningsIndex < warningsJsonList.GetLength(); ++warningsIndex)
    {
      m_warnings.push_back(warningsJsonList[warningsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("SpellCorrectedQueries"))
  {
    Aws::Utils::Array<JsonView> spellCorrectedQueriesJsonList = jsonValue.GetArray("SpellCorrectedQueries");
    for(unsigned spellCorrectedQueriesIndex = 0; spellCorrectedQueriesIndex < spellCorrectedQueriesJsonList.GetLength(); ++spellCorrectedQueriesIndex)
    {
      m_spellCorrectedQueries.push_back(spellCorrectedQueriesJsonList[spellCorrectedQueriesIndex].AsObject());
    }
  }



  return *this;
}
