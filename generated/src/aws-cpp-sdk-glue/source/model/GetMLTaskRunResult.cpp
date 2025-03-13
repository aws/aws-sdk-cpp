/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/GetMLTaskRunResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetMLTaskRunResult::GetMLTaskRunResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetMLTaskRunResult& GetMLTaskRunResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("TransformId"))
  {
    m_transformId = jsonValue.GetString("TransformId");
    m_transformIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TaskRunId"))
  {
    m_taskRunId = jsonValue.GetString("TaskRunId");
    m_taskRunIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Status"))
  {
    m_status = TaskStatusTypeMapper::GetTaskStatusTypeForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LogGroupName"))
  {
    m_logGroupName = jsonValue.GetString("LogGroupName");
    m_logGroupNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Properties"))
  {
    m_properties = jsonValue.GetObject("Properties");
    m_propertiesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ErrorString"))
  {
    m_errorString = jsonValue.GetString("ErrorString");
    m_errorStringHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StartedOn"))
  {
    m_startedOn = jsonValue.GetDouble("StartedOn");
    m_startedOnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastModifiedOn"))
  {
    m_lastModifiedOn = jsonValue.GetDouble("LastModifiedOn");
    m_lastModifiedOnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CompletedOn"))
  {
    m_completedOn = jsonValue.GetDouble("CompletedOn");
    m_completedOnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ExecutionTime"))
  {
    m_executionTime = jsonValue.GetInteger("ExecutionTime");
    m_executionTimeHasBeenSet = true;
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
