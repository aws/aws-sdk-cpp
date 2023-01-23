/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/frauddetector/model/GetBatchPredictionJobsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::FraudDetector::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetBatchPredictionJobsResult::GetBatchPredictionJobsResult()
{
}

GetBatchPredictionJobsResult::GetBatchPredictionJobsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetBatchPredictionJobsResult& GetBatchPredictionJobsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("batchPredictions"))
  {
    Aws::Utils::Array<JsonView> batchPredictionsJsonList = jsonValue.GetArray("batchPredictions");
    for(unsigned batchPredictionsIndex = 0; batchPredictionsIndex < batchPredictionsJsonList.GetLength(); ++batchPredictionsIndex)
    {
      m_batchPredictions.push_back(batchPredictionsJsonList[batchPredictionsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
