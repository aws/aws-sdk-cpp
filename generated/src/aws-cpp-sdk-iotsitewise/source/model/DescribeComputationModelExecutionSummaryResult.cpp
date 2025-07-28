/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/DescribeComputationModelExecutionSummaryResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoTSiteWise::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeComputationModelExecutionSummaryResult::DescribeComputationModelExecutionSummaryResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeComputationModelExecutionSummaryResult& DescribeComputationModelExecutionSummaryResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("computationModelId"))
  {
    m_computationModelId = jsonValue.GetString("computationModelId");
    m_computationModelIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("resolveTo"))
  {
    m_resolveTo = jsonValue.GetObject("resolveTo");
    m_resolveToHasBeenSet = true;
  }
  if(jsonValue.ValueExists("computationModelExecutionSummary"))
  {
    Aws::Map<Aws::String, JsonView> computationModelExecutionSummaryJsonMap = jsonValue.GetObject("computationModelExecutionSummary").GetAllObjects();
    for(auto& computationModelExecutionSummaryItem : computationModelExecutionSummaryJsonMap)
    {
      m_computationModelExecutionSummary[computationModelExecutionSummaryItem.first] = computationModelExecutionSummaryItem.second.AsString();
    }
    m_computationModelExecutionSummaryHasBeenSet = true;
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
