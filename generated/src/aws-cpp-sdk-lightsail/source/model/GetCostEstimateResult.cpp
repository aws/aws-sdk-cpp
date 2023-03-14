/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/GetCostEstimateResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Lightsail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetCostEstimateResult::GetCostEstimateResult()
{
}

GetCostEstimateResult::GetCostEstimateResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetCostEstimateResult& GetCostEstimateResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("resourcesBudgetEstimate"))
  {
    Aws::Utils::Array<JsonView> resourcesBudgetEstimateJsonList = jsonValue.GetArray("resourcesBudgetEstimate");
    for(unsigned resourcesBudgetEstimateIndex = 0; resourcesBudgetEstimateIndex < resourcesBudgetEstimateJsonList.GetLength(); ++resourcesBudgetEstimateIndex)
    {
      m_resourcesBudgetEstimate.push_back(resourcesBudgetEstimateJsonList[resourcesBudgetEstimateIndex].AsObject());
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
