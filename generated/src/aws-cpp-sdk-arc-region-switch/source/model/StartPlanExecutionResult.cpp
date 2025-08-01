/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/arc-region-switch/model/StartPlanExecutionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::ARCRegionswitch::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

StartPlanExecutionResult::StartPlanExecutionResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

StartPlanExecutionResult& StartPlanExecutionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("executionId"))
  {
    m_executionId = jsonValue.GetString("executionId");
    m_executionIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("plan"))
  {
    m_plan = jsonValue.GetString("plan");
    m_planHasBeenSet = true;
  }
  if(jsonValue.ValueExists("planVersion"))
  {
    m_planVersion = jsonValue.GetString("planVersion");
    m_planVersionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("activateRegion"))
  {
    m_activateRegion = jsonValue.GetString("activateRegion");
    m_activateRegionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("deactivateRegion"))
  {
    m_deactivateRegion = jsonValue.GetString("deactivateRegion");
    m_deactivateRegionHasBeenSet = true;
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
