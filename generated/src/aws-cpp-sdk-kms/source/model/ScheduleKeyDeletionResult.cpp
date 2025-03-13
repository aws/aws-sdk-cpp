/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kms/model/ScheduleKeyDeletionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::KMS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ScheduleKeyDeletionResult::ScheduleKeyDeletionResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ScheduleKeyDeletionResult& ScheduleKeyDeletionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("KeyId"))
  {
    m_keyId = jsonValue.GetString("KeyId");
    m_keyIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DeletionDate"))
  {
    m_deletionDate = jsonValue.GetDouble("DeletionDate");
    m_deletionDateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("KeyState"))
  {
    m_keyState = KeyStateMapper::GetKeyStateForName(jsonValue.GetString("KeyState"));
    m_keyStateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PendingWindowInDays"))
  {
    m_pendingWindowInDays = jsonValue.GetInteger("PendingWindowInDays");
    m_pendingWindowInDaysHasBeenSet = true;
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
