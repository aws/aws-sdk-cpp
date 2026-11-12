/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/guardduty/model/ListInvestigationRecordsResult.h>

#include <utility>

using namespace Aws::GuardDuty::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListInvestigationRecordsResult::ListInvestigationRecordsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

ListInvestigationRecordsResult& ListInvestigationRecordsResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("investigationId")) {
    m_investigationId = jsonValue.GetString("investigationId");
    m_investigationIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = InvestigationStatusMapper::GetInvestigationStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("records")) {
    Aws::Utils::Array<JsonView> recordsJsonList = jsonValue.GetArray("records");
    for (unsigned recordsIndex = 0; recordsIndex < recordsJsonList.GetLength(); ++recordsIndex) {
      m_records.push_back(recordsJsonList[recordsIndex].AsObject());
    }
    m_recordsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("nextToken")) {
    m_nextToken = jsonValue.GetString("nextToken");
    m_nextTokenHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
