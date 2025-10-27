/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/customer-profiles/model/GetProfileHistoryRecordResult.h>

#include <utility>

using namespace Aws::CustomerProfiles::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetProfileHistoryRecordResult::GetProfileHistoryRecordResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

GetProfileHistoryRecordResult& GetProfileHistoryRecordResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("Id")) {
    m_id = jsonValue.GetString("Id");
    m_idHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ObjectTypeName")) {
    m_objectTypeName = jsonValue.GetString("ObjectTypeName");
    m_objectTypeNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreatedAt")) {
    m_createdAt = jsonValue.GetDouble("CreatedAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LastUpdatedAt")) {
    m_lastUpdatedAt = jsonValue.GetDouble("LastUpdatedAt");
    m_lastUpdatedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ActionType")) {
    m_actionType = ActionTypeMapper::GetActionTypeForName(jsonValue.GetString("ActionType"));
    m_actionTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ProfileObjectUniqueKey")) {
    m_profileObjectUniqueKey = jsonValue.GetString("ProfileObjectUniqueKey");
    m_profileObjectUniqueKeyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Content")) {
    m_content = jsonValue.GetString("Content");
    m_contentHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PerformedBy")) {
    m_performedBy = jsonValue.GetString("PerformedBy");
    m_performedByHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
