/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/DescribeRecommendationExportJobsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ComputeOptimizer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeRecommendationExportJobsResult::DescribeRecommendationExportJobsResult()
{
}

DescribeRecommendationExportJobsResult::DescribeRecommendationExportJobsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeRecommendationExportJobsResult& DescribeRecommendationExportJobsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("recommendationExportJobs"))
  {
    Aws::Utils::Array<JsonView> recommendationExportJobsJsonList = jsonValue.GetArray("recommendationExportJobs");
    for(unsigned recommendationExportJobsIndex = 0; recommendationExportJobsIndex < recommendationExportJobsJsonList.GetLength(); ++recommendationExportJobsIndex)
    {
      m_recommendationExportJobs.push_back(recommendationExportJobsJsonList[recommendationExportJobsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
