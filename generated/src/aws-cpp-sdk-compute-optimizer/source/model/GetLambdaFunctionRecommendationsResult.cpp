/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/GetLambdaFunctionRecommendationsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::ComputeOptimizer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

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
    m_nextTokenHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lambdaFunctionRecommendations"))
  {
    Aws::Utils::Array<JsonView> lambdaFunctionRecommendationsJsonList = jsonValue.GetArray("lambdaFunctionRecommendations");
    for(unsigned lambdaFunctionRecommendationsIndex = 0; lambdaFunctionRecommendationsIndex < lambdaFunctionRecommendationsJsonList.GetLength(); ++lambdaFunctionRecommendationsIndex)
    {
      m_lambdaFunctionRecommendations.push_back(lambdaFunctionRecommendationsJsonList[lambdaFunctionRecommendationsIndex].AsObject());
    }
    m_lambdaFunctionRecommendationsHasBeenSet = true;
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
