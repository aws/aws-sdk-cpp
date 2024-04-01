/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/GetQueueResult.h>
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

GetQueueResult::GetQueueResult() : 
    m_blockedReason(QueueBlockedReason::NOT_SET),
    m_defaultBudgetAction(DefaultQueueBudgetAction::NOT_SET),
    m_status(QueueStatus::NOT_SET)
{
}

GetQueueResult::GetQueueResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_blockedReason(QueueBlockedReason::NOT_SET),
    m_defaultBudgetAction(DefaultQueueBudgetAction::NOT_SET),
    m_status(QueueStatus::NOT_SET)
{
  *this = result;
}

GetQueueResult& GetQueueResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("allowedStorageProfileIds"))
  {
    Aws::Utils::Array<JsonView> allowedStorageProfileIdsJsonList = jsonValue.GetArray("allowedStorageProfileIds");
    for(unsigned allowedStorageProfileIdsIndex = 0; allowedStorageProfileIdsIndex < allowedStorageProfileIdsJsonList.GetLength(); ++allowedStorageProfileIdsIndex)
    {
      m_allowedStorageProfileIds.push_back(allowedStorageProfileIdsJsonList[allowedStorageProfileIdsIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("blockedReason"))
  {
    m_blockedReason = QueueBlockedReasonMapper::GetQueueBlockedReasonForName(jsonValue.GetString("blockedReason"));

  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetString("createdAt");

  }

  if(jsonValue.ValueExists("createdBy"))
  {
    m_createdBy = jsonValue.GetString("createdBy");

  }

  if(jsonValue.ValueExists("defaultBudgetAction"))
  {
    m_defaultBudgetAction = DefaultQueueBudgetActionMapper::GetDefaultQueueBudgetActionForName(jsonValue.GetString("defaultBudgetAction"));

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

  if(jsonValue.ValueExists("jobAttachmentSettings"))
  {
    m_jobAttachmentSettings = jsonValue.GetObject("jobAttachmentSettings");

  }

  if(jsonValue.ValueExists("jobRunAsUser"))
  {
    m_jobRunAsUser = jsonValue.GetObject("jobRunAsUser");

  }

  if(jsonValue.ValueExists("queueId"))
  {
    m_queueId = jsonValue.GetString("queueId");

  }

  if(jsonValue.ValueExists("requiredFileSystemLocationNames"))
  {
    Aws::Utils::Array<JsonView> requiredFileSystemLocationNamesJsonList = jsonValue.GetArray("requiredFileSystemLocationNames");
    for(unsigned requiredFileSystemLocationNamesIndex = 0; requiredFileSystemLocationNamesIndex < requiredFileSystemLocationNamesJsonList.GetLength(); ++requiredFileSystemLocationNamesIndex)
    {
      m_requiredFileSystemLocationNames.push_back(requiredFileSystemLocationNamesJsonList[requiredFileSystemLocationNamesIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("roleArn"))
  {
    m_roleArn = jsonValue.GetString("roleArn");

  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = QueueStatusMapper::GetQueueStatusForName(jsonValue.GetString("status"));

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
