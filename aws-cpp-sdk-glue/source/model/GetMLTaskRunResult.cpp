/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/glue/model/GetMLTaskRunResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetMLTaskRunResult::GetMLTaskRunResult() : 
    m_status(TaskStatusType::NOT_SET),
    m_executionTime(0)
{
}

GetMLTaskRunResult::GetMLTaskRunResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(TaskStatusType::NOT_SET),
    m_executionTime(0)
{
  *this = result;
}

GetMLTaskRunResult& GetMLTaskRunResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("TransformId"))
  {
    m_transformId = jsonValue.GetString("TransformId");

  }

  if(jsonValue.ValueExists("TaskRunId"))
  {
    m_taskRunId = jsonValue.GetString("TaskRunId");

  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = TaskStatusTypeMapper::GetTaskStatusTypeForName(jsonValue.GetString("Status"));

  }

  if(jsonValue.ValueExists("LogGroupName"))
  {
    m_logGroupName = jsonValue.GetString("LogGroupName");

  }

  if(jsonValue.ValueExists("Properties"))
  {
    m_properties = jsonValue.GetObject("Properties");

  }

  if(jsonValue.ValueExists("ErrorString"))
  {
    m_errorString = jsonValue.GetString("ErrorString");

  }

  if(jsonValue.ValueExists("StartedOn"))
  {
    m_startedOn = jsonValue.GetDouble("StartedOn");

  }

  if(jsonValue.ValueExists("LastModifiedOn"))
  {
    m_lastModifiedOn = jsonValue.GetDouble("LastModifiedOn");

  }

  if(jsonValue.ValueExists("CompletedOn"))
  {
    m_completedOn = jsonValue.GetDouble("CompletedOn");

  }

  if(jsonValue.ValueExists("ExecutionTime"))
  {
    m_executionTime = jsonValue.GetInteger("ExecutionTime");

  }



  return *this;
}
