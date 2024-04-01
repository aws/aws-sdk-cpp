/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/GetQueueFleetAssociationResult.h>
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

GetQueueFleetAssociationResult::GetQueueFleetAssociationResult() : 
    m_status(QueueFleetAssociationStatus::NOT_SET)
{
}

GetQueueFleetAssociationResult::GetQueueFleetAssociationResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(QueueFleetAssociationStatus::NOT_SET)
{
  *this = result;
}

GetQueueFleetAssociationResult& GetQueueFleetAssociationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
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

  if(jsonValue.ValueExists("fleetId"))
  {
    m_fleetId = jsonValue.GetString("fleetId");

  }

  if(jsonValue.ValueExists("queueId"))
  {
    m_queueId = jsonValue.GetString("queueId");

  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = QueueFleetAssociationStatusMapper::GetQueueFleetAssociationStatusForName(jsonValue.GetString("status"));

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
