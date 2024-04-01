/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/GetFleetResult.h>
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

GetFleetResult::GetFleetResult() : 
    m_autoScalingStatus(AutoScalingStatus::NOT_SET),
    m_maxWorkerCount(0),
    m_minWorkerCount(0),
    m_status(FleetStatus::NOT_SET),
    m_targetWorkerCount(0),
    m_workerCount(0)
{
}

GetFleetResult::GetFleetResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_autoScalingStatus(AutoScalingStatus::NOT_SET),
    m_maxWorkerCount(0),
    m_minWorkerCount(0),
    m_status(FleetStatus::NOT_SET),
    m_targetWorkerCount(0),
    m_workerCount(0)
{
  *this = result;
}

GetFleetResult& GetFleetResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("autoScalingStatus"))
  {
    m_autoScalingStatus = AutoScalingStatusMapper::GetAutoScalingStatusForName(jsonValue.GetString("autoScalingStatus"));

  }

  if(jsonValue.ValueExists("capabilities"))
  {
    m_capabilities = jsonValue.GetObject("capabilities");

  }

  if(jsonValue.ValueExists("configuration"))
  {
    m_configuration = jsonValue.GetObject("configuration");

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

  if(jsonValue.ValueExists("displayName"))
  {
    m_displayName = jsonValue.GetString("displayName");

  }

  if(jsonValue.ValueExists("farmId"))
  {
    m_farmId = jsonValue.GetString("farmId");

  }

  if(jsonValue.ValueExists("fleetId"))
  {
    m_fleetId = jsonValue.GetString("fleetId");

  }

  if(jsonValue.ValueExists("maxWorkerCount"))
  {
    m_maxWorkerCount = jsonValue.GetInteger("maxWorkerCount");

  }

  if(jsonValue.ValueExists("minWorkerCount"))
  {
    m_minWorkerCount = jsonValue.GetInteger("minWorkerCount");

  }

  if(jsonValue.ValueExists("roleArn"))
  {
    m_roleArn = jsonValue.GetString("roleArn");

  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = FleetStatusMapper::GetFleetStatusForName(jsonValue.GetString("status"));

  }

  if(jsonValue.ValueExists("targetWorkerCount"))
  {
    m_targetWorkerCount = jsonValue.GetInteger("targetWorkerCount");

  }

  if(jsonValue.ValueExists("updatedAt"))
  {
    m_updatedAt = jsonValue.GetString("updatedAt");

  }

  if(jsonValue.ValueExists("updatedBy"))
  {
    m_updatedBy = jsonValue.GetString("updatedBy");

  }

  if(jsonValue.ValueExists("workerCount"))
  {
    m_workerCount = jsonValue.GetInteger("workerCount");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
