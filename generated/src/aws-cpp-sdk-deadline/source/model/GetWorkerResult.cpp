/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/GetWorkerResult.h>
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

GetWorkerResult::GetWorkerResult() : 
    m_status(WorkerStatus::NOT_SET)
{
}

GetWorkerResult::GetWorkerResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(WorkerStatus::NOT_SET)
{
  *this = result;
}

GetWorkerResult& GetWorkerResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetString("createdAt");

  }

  if(jsonValue.ValueExists("createdBy"))
  {
    m_createdBy = jsonValue.GetString("createdBy");

  }

  if(jsonValue.ValueExists("farmId"))
  {
    m_farmId = jsonValue.GetString("farmId");

  }

  if(jsonValue.ValueExists("fleetId"))
  {
    m_fleetId = jsonValue.GetString("fleetId");

  }

  if(jsonValue.ValueExists("hostProperties"))
  {
    m_hostProperties = jsonValue.GetObject("hostProperties");

  }

  if(jsonValue.ValueExists("log"))
  {
    m_log = jsonValue.GetObject("log");

  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = WorkerStatusMapper::GetWorkerStatusForName(jsonValue.GetString("status"));

  }

  if(jsonValue.ValueExists("updatedAt"))
  {
    m_updatedAt = jsonValue.GetString("updatedAt");

  }

  if(jsonValue.ValueExists("updatedBy"))
  {
    m_updatedBy = jsonValue.GetString("updatedBy");

  }

  if(jsonValue.ValueExists("workerId"))
  {
    m_workerId = jsonValue.GetString("workerId");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
