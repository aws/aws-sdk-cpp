/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/GetStepResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::deadline::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetStepResult::GetStepResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetStepResult& GetStepResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("stepId"))
  {
    m_stepId = jsonValue.GetString("stepId");
    m_stepIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lifecycleStatus"))
  {
    m_lifecycleStatus = StepLifecycleStatusMapper::GetStepLifecycleStatusForName(jsonValue.GetString("lifecycleStatus"));
    m_lifecycleStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lifecycleStatusMessage"))
  {
    m_lifecycleStatusMessage = jsonValue.GetString("lifecycleStatusMessage");
    m_lifecycleStatusMessageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("taskRunStatus"))
  {
    m_taskRunStatus = TaskRunStatusMapper::GetTaskRunStatusForName(jsonValue.GetString("taskRunStatus"));
    m_taskRunStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("taskRunStatusCounts"))
  {
    Aws::Map<Aws::String, JsonView> taskRunStatusCountsJsonMap = jsonValue.GetObject("taskRunStatusCounts").GetAllObjects();
    for(auto& taskRunStatusCountsItem : taskRunStatusCountsJsonMap)
    {
      m_taskRunStatusCounts[TaskRunStatusMapper::GetTaskRunStatusForName(taskRunStatusCountsItem.first)] = taskRunStatusCountsItem.second.AsInteger();
    }
    m_taskRunStatusCountsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("taskFailureRetryCount"))
  {
    m_taskFailureRetryCount = jsonValue.GetInteger("taskFailureRetryCount");
    m_taskFailureRetryCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("targetTaskRunStatus"))
  {
    m_targetTaskRunStatus = StepTargetTaskRunStatusMapper::GetStepTargetTaskRunStatusForName(jsonValue.GetString("targetTaskRunStatus"));
    m_targetTaskRunStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetString("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createdBy"))
  {
    m_createdBy = jsonValue.GetString("createdBy");
    m_createdByHasBeenSet = true;
  }
  if(jsonValue.ValueExists("updatedAt"))
  {
    m_updatedAt = jsonValue.GetString("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("updatedBy"))
  {
    m_updatedBy = jsonValue.GetString("updatedBy");
    m_updatedByHasBeenSet = true;
  }
  if(jsonValue.ValueExists("startedAt"))
  {
    m_startedAt = jsonValue.GetString("startedAt");
    m_startedAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("endedAt"))
  {
    m_endedAt = jsonValue.GetString("endedAt");
    m_endedAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("dependencyCounts"))
  {
    m_dependencyCounts = jsonValue.GetObject("dependencyCounts");
    m_dependencyCountsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("requiredCapabilities"))
  {
    m_requiredCapabilities = jsonValue.GetObject("requiredCapabilities");
    m_requiredCapabilitiesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("parameterSpace"))
  {
    m_parameterSpace = jsonValue.GetObject("parameterSpace");
    m_parameterSpaceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
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
