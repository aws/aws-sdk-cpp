/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/ListSavingsPlansPurchaseRecommendationGenerationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CostExplorer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListSavingsPlansPurchaseRecommendationGenerationResult::ListSavingsPlansPurchaseRecommendationGenerationResult()
{
}

ListSavingsPlansPurchaseRecommendationGenerationResult::ListSavingsPlansPurchaseRecommendationGenerationResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListSavingsPlansPurchaseRecommendationGenerationResult& ListSavingsPlansPurchaseRecommendationGenerationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("GenerationSummaryList"))
  {
    Aws::Utils::Array<JsonView> generationSummaryListJsonList = jsonValue.GetArray("GenerationSummaryList");
    for(unsigned generationSummaryListIndex = 0; generationSummaryListIndex < generationSummaryListJsonList.GetLength(); ++generationSummaryListIndex)
    {
      m_generationSummaryList.push_back(generationSummaryListJsonList[generationSummaryListIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextPageToken"))
  {
    m_nextPageToken = jsonValue.GetString("NextPageToken");

  }



  return *this;
}
