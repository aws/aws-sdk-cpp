/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/GetLambdaFunctionRecommendationsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ComputeOptimizer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetLambdaFunctionRecommendationsResult::GetLambdaFunctionRecommendationsResult()
{
}

GetLambdaFunctionRecommendationsResult::GetLambdaFunctionRecommendationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetLambdaFunctionRecommendationsResult& GetLambdaFunctionRecommendationsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }

  if(jsonValue.ValueExists("lambdaFunctionRecommendations"))
  {
    Aws::Utils::Array<JsonView> lambdaFunctionRecommendationsJsonList = jsonValue.GetArray("lambdaFunctionRecommendations");
    for(unsigned lambdaFunctionRecommendationsIndex = 0; lambdaFunctionRecommendationsIndex < lambdaFunctionRecommendationsJsonList.GetLength(); ++lambdaFunctionRecommendationsIndex)
    {
      m_lambdaFunctionRecommendations.push_back(lambdaFunctionRecommendationsJsonList[lambdaFunctionRecommendationsIndex].AsObject());
    }
  }



  return *this;
}
