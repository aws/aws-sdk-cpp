/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectscheduling/model/GetTimeOffResult.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::ConnectScheduling::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetTimeOffResult::GetTimeOffResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

GetTimeOffResult& GetTimeOffResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("TimeOffId")) {
    m_timeOffId = jsonValue.GetString("TimeOffId");
    m_timeOffIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UserId")) {
    m_userId = jsonValue.GetString("UserId");
    m_userIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ShiftActivityId")) {
    m_shiftActivityId = jsonValue.GetString("ShiftActivityId");
    m_shiftActivityIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("StartAt")) {
    m_startAt = jsonValue.GetDouble("StartAt");
    m_startAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("EndAt")) {
    m_endAt = jsonValue.GetDouble("EndAt");
    m_endAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Status")) {
    m_status = TimeOffStatusMapper::GetTimeOffStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Description")) {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ValidationResults")) {
    Aws::Utils::Array<JsonView> validationResultsJsonList = jsonValue.GetArray("ValidationResults");
    for (unsigned validationResultsIndex = 0; validationResultsIndex < validationResultsJsonList.GetLength(); ++validationResultsIndex) {
      m_validationResults.push_back(validationResultsJsonList[validationResultsIndex].AsObject());
    }
    m_validationResultsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreatedBy")) {
    m_createdBy = jsonValue.GetObject("CreatedBy");
    m_createdByHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreatedAt")) {
    m_createdAt = jsonValue.GetDouble("CreatedAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UpdatedBy")) {
    m_updatedBy = jsonValue.GetObject("UpdatedBy");
    m_updatedByHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UpdatedAt")) {
    m_updatedAt = jsonValue.GetDouble("UpdatedAt");
    m_updatedAtHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
