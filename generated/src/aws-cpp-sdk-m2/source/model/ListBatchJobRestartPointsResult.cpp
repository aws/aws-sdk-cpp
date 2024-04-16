/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/m2/model/ListBatchJobRestartPointsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::MainframeModernization::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListBatchJobRestartPointsResult::ListBatchJobRestartPointsResult()
{
}

ListBatchJobRestartPointsResult::ListBatchJobRestartPointsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListBatchJobRestartPointsResult& ListBatchJobRestartPointsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("batchJobSteps"))
  {
    Aws::Utils::Array<JsonView> batchJobStepsJsonList = jsonValue.GetArray("batchJobSteps");
    for(unsigned batchJobStepsIndex = 0; batchJobStepsIndex < batchJobStepsJsonList.GetLength(); ++batchJobStepsIndex)
    {
      m_batchJobSteps.push_back(batchJobStepsJsonList[batchJobStepsIndex].AsObject());
    }
  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
