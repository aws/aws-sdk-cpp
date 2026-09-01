/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/iotsitewise/model/DescribePipelineExecutionResult.h>

#include <utility>

using namespace Aws::IoTSiteWise::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribePipelineExecutionResult::DescribePipelineExecutionResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

DescribePipelineExecutionResult& DescribePipelineExecutionResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("pipelineExecutionId")) {
    m_pipelineExecutionId = jsonValue.GetString("pipelineExecutionId");
    m_pipelineExecutionIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("pipelineName")) {
    m_pipelineName = jsonValue.GetString("pipelineName");
    m_pipelineNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("workspaceName")) {
    m_workspaceName = jsonValue.GetString("workspaceName");
    m_workspaceNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("pipelineVersion")) {
    m_pipelineVersion = jsonValue.GetString("pipelineVersion");
    m_pipelineVersionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = jsonValue.GetObject("status");
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("startTime")) {
    m_startTime = jsonValue.GetDouble("startTime");
    m_startTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("endTime")) {
    m_endTime = jsonValue.GetDouble("endTime");
    m_endTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("requestEnvironmentVariables")) {
    m_requestEnvironmentVariables = jsonValue.GetObject("requestEnvironmentVariables");
    m_requestEnvironmentVariablesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("requestMountOverrides")) {
    m_requestMountOverrides = jsonValue.GetObject("requestMountOverrides");
    m_requestMountOverridesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("executionPriority")) {
    m_executionPriority = jsonValue.GetInteger("executionPriority");
    m_executionPriorityHasBeenSet = true;
  }
  if (jsonValue.ValueExists("computeNodeExecutionDetails")) {
    Aws::Utils::Array<JsonView> computeNodeExecutionDetailsJsonList = jsonValue.GetArray("computeNodeExecutionDetails");
    for (unsigned computeNodeExecutionDetailsIndex = 0; computeNodeExecutionDetailsIndex < computeNodeExecutionDetailsJsonList.GetLength();
         ++computeNodeExecutionDetailsIndex) {
      m_computeNodeExecutionDetails.push_back(computeNodeExecutionDetailsJsonList[computeNodeExecutionDetailsIndex].AsObject());
    }
    m_computeNodeExecutionDetailsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("nextToken")) {
    m_nextToken = jsonValue.GetString("nextToken");
    m_nextTokenHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
