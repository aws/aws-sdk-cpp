/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/CancelMLTaskRunResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CancelMLTaskRunResult::CancelMLTaskRunResult() : 
    m_status(TaskStatusType::NOT_SET)
{
}

CancelMLTaskRunResult::CancelMLTaskRunResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(TaskStatusType::NOT_SET)
{
  *this = result;
}

CancelMLTaskRunResult& CancelMLTaskRunResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
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



  return *this;
}
