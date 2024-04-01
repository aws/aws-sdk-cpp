/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/GetJobResult.h>
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

GetJobResult::GetJobResult() : 
    m_lifecycleStatus(JobLifecycleStatus::NOT_SET),
    m_maxFailedTasksCount(0),
    m_maxRetriesPerTask(0),
    m_priority(0),
    m_targetTaskRunStatus(JobTargetTaskRunStatus::NOT_SET),
    m_taskRunStatus(TaskRunStatus::NOT_SET)
{
}

GetJobResult::GetJobResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_lifecycleStatus(JobLifecycleStatus::NOT_SET),
    m_maxFailedTasksCount(0),
    m_maxRetriesPerTask(0),
    m_priority(0),
    m_targetTaskRunStatus(JobTargetTaskRunStatus::NOT_SET),
    m_taskRunStatus(TaskRunStatus::NOT_SET)
{
  *this = result;
}

GetJobResult& GetJobResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("attachments"))
  {
    m_attachments = jsonValue.GetObject("attachments");

  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetString("createdAt");

  }

  if(jsonValue.ValueExists("createdBy"))
  {
    m_createdBy = jsonValue.GetString("createdBy");

  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

  }

  if(jsonValue.ValueExists("endedAt"))
  {
    m_endedAt = jsonValue.GetString("endedAt");

  }

  if(jsonValue.ValueExists("jobId"))
  {
    m_jobId = jsonValue.GetString("jobId");

  }

  if(jsonValue.ValueExists("lifecycleStatus"))
  {
    m_lifecycleStatus = JobLifecycleStatusMapper::GetJobLifecycleStatusForName(jsonValue.GetString("lifecycleStatus"));

  }

  if(jsonValue.ValueExists("lifecycleStatusMessage"))
  {
    m_lifecycleStatusMessage = jsonValue.GetString("lifecycleStatusMessage");

  }

  if(jsonValue.ValueExists("maxFailedTasksCount"))
  {
    m_maxFailedTasksCount = jsonValue.GetInteger("maxFailedTasksCount");

  }

  if(jsonValue.ValueExists("maxRetriesPerTask"))
  {
    m_maxRetriesPerTask = jsonValue.GetInteger("maxRetriesPerTask");

  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

  }

  if(jsonValue.ValueExists("parameters"))
  {
    Aws::Map<Aws::String, JsonView> parametersJsonMap = jsonValue.GetObject("parameters").GetAllObjects();
    for(auto& parametersItem : parametersJsonMap)
    {
      m_parameters[parametersItem.first] = parametersItem.second.AsObject();
    }
  }

  if(jsonValue.ValueExists("priority"))
  {
    m_priority = jsonValue.GetInteger("priority");

  }

  if(jsonValue.ValueExists("startedAt"))
  {
    m_startedAt = jsonValue.GetString("startedAt");

  }

  if(jsonValue.ValueExists("storageProfileId"))
  {
    m_storageProfileId = jsonValue.GetString("storageProfileId");

  }

  if(jsonValue.ValueExists("targetTaskRunStatus"))
  {
    m_targetTaskRunStatus = JobTargetTaskRunStatusMapper::GetJobTargetTaskRunStatusForName(jsonValue.GetString("targetTaskRunStatus"));

  }

  if(jsonValue.ValueExists("taskRunStatus"))
  {
    m_taskRunStatus = TaskRunStatusMapper::GetTaskRunStatusForName(jsonValue.GetString("taskRunStatus"));

  }

  if(jsonValue.ValueExists("taskRunStatusCounts"))
  {
    Aws::Map<Aws::String, JsonView> taskRunStatusCountsJsonMap = jsonValue.GetObject("taskRunStatusCounts").GetAllObjects();
    for(auto& taskRunStatusCountsItem : taskRunStatusCountsJsonMap)
    {
      m_taskRunStatusCounts[TaskRunStatusMapper::GetTaskRunStatusForName(taskRunStatusCountsItem.first)] = taskRunStatusCountsItem.second.AsInteger();
    }
  }

  if(jsonValue.ValueExists("updatedAt"))
  {
    m_updatedAt = jsonValue.GetString("updatedAt");

  }

  if(jsonValue.ValueExists("updatedBy"))
  {
    m_updatedBy = jsonValue.GetString("updatedBy");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
