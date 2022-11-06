/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ListInferenceRecommendationsJobsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListInferenceRecommendationsJobsResult::ListInferenceRecommendationsJobsResult()
{
}

ListInferenceRecommendationsJobsResult::ListInferenceRecommendationsJobsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListInferenceRecommendationsJobsResult& ListInferenceRecommendationsJobsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("InferenceRecommendationsJobs"))
  {
    Aws::Utils::Array<JsonView> inferenceRecommendationsJobsJsonList = jsonValue.GetArray("InferenceRecommendationsJobs");
    for(unsigned inferenceRecommendationsJobsIndex = 0; inferenceRecommendationsJobsIndex < inferenceRecommendationsJobsJsonList.GetLength(); ++inferenceRecommendationsJobsIndex)
    {
      m_inferenceRecommendationsJobs.push_back(inferenceRecommendationsJobsJsonList[inferenceRecommendationsJobsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
