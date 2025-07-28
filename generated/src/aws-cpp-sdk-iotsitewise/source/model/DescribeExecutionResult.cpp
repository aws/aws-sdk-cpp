/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/DescribeExecutionResult.h>
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

DescribeExecutionResult::DescribeExecutionResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeExecutionResult& DescribeExecutionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("executionId"))
  {
    m_executionId = jsonValue.GetString("executionId");
    m_executionIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("actionType"))
  {
    m_actionType = jsonValue.GetString("actionType");
    m_actionTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("targetResource"))
  {
    m_targetResource = jsonValue.GetObject("targetResource");
    m_targetResourceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("targetResourceVersion"))
  {
    m_targetResourceVersion = jsonValue.GetString("targetResourceVersion");
    m_targetResourceVersionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("resolveTo"))
  {
    m_resolveTo = jsonValue.GetObject("resolveTo");
    m_resolveToHasBeenSet = true;
  }
  if(jsonValue.ValueExists("executionStartTime"))
  {
    m_executionStartTime = jsonValue.GetDouble("executionStartTime");
    m_executionStartTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("executionEndTime"))
  {
    m_executionEndTime = jsonValue.GetDouble("executionEndTime");
    m_executionEndTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("executionStatus"))
  {
    m_executionStatus = jsonValue.GetObject("executionStatus");
    m_executionStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("executionResult"))
  {
    Aws::Map<Aws::String, JsonView> executionResultJsonMap = jsonValue.GetObject("executionResult").GetAllObjects();
    for(auto& executionResultItem : executionResultJsonMap)
    {
      m_executionResult[executionResultItem.first] = executionResultItem.second.AsString();
    }
    m_executionResultHasBeenSet = true;
  }
  if(jsonValue.ValueExists("executionDetails"))
  {
    Aws::Map<Aws::String, JsonView> executionDetailsJsonMap = jsonValue.GetObject("executionDetails").GetAllObjects();
    for(auto& executionDetailsItem : executionDetailsJsonMap)
    {
      m_executionDetails[executionDetailsItem.first] = executionDetailsItem.second.AsString();
    }
    m_executionDetailsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("executionEntityVersion"))
  {
    m_executionEntityVersion = jsonValue.GetString("executionEntityVersion");
    m_executionEntityVersionHasBeenSet = true;
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
