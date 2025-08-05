/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/arc-region-switch/model/GetPlanExecutionResult.h>
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

GetPlanExecutionResult::GetPlanExecutionResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetPlanExecutionResult& GetPlanExecutionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("planArn"))
  {
    m_planArn = jsonValue.GetString("planArn");
    m_planArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("executionId"))
  {
    m_executionId = jsonValue.GetString("executionId");
    m_executionIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("version"))
  {
    m_version = jsonValue.GetString("version");
    m_versionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("updatedAt"))
  {
    m_updatedAt = jsonValue.GetDouble("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("comment"))
  {
    m_comment = jsonValue.GetString("comment");
    m_commentHasBeenSet = true;
  }
  if(jsonValue.ValueExists("startTime"))
  {
    m_startTime = jsonValue.GetDouble("startTime");
    m_startTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("endTime"))
  {
    m_endTime = jsonValue.GetDouble("endTime");
    m_endTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("mode"))
  {
    m_mode = ExecutionModeMapper::GetExecutionModeForName(jsonValue.GetString("mode"));
    m_modeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("executionState"))
  {
    m_executionState = ExecutionStateMapper::GetExecutionStateForName(jsonValue.GetString("executionState"));
    m_executionStateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("executionAction"))
  {
    m_executionAction = ExecutionActionMapper::GetExecutionActionForName(jsonValue.GetString("executionAction"));
    m_executionActionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("executionRegion"))
  {
    m_executionRegion = jsonValue.GetString("executionRegion");
    m_executionRegionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("stepStates"))
  {
    Aws::Utils::Array<JsonView> stepStatesJsonList = jsonValue.GetArray("stepStates");
    for(unsigned stepStatesIndex = 0; stepStatesIndex < stepStatesJsonList.GetLength(); ++stepStatesIndex)
    {
      m_stepStates.push_back(stepStatesJsonList[stepStatesIndex].AsObject());
    }
    m_stepStatesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("plan"))
  {
    m_plan = jsonValue.GetObject("plan");
    m_planHasBeenSet = true;
  }
  if(jsonValue.ValueExists("actualRecoveryTime"))
  {
    m_actualRecoveryTime = jsonValue.GetString("actualRecoveryTime");
    m_actualRecoveryTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");
    m_nextTokenHasBeenSet = true;
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
