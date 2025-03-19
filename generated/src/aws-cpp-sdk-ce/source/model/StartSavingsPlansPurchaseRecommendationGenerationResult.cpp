/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/StartSavingsPlansPurchaseRecommendationGenerationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CostExplorer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

StartSavingsPlansPurchaseRecommendationGenerationResult::StartSavingsPlansPurchaseRecommendationGenerationResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

StartSavingsPlansPurchaseRecommendationGenerationResult& StartSavingsPlansPurchaseRecommendationGenerationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("RecommendationId"))
  {
    m_recommendationId = jsonValue.GetString("RecommendationId");
    m_recommendationIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("GenerationStartedTime"))
  {
    m_generationStartedTime = jsonValue.GetString("GenerationStartedTime");
    m_generationStartedTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EstimatedCompletionTime"))
  {
    m_estimatedCompletionTime = jsonValue.GetString("EstimatedCompletionTime");
    m_estimatedCompletionTimeHasBeenSet = true;
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
