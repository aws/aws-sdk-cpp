/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/customer-profiles/model/PutSegmentSubscriptionResult.h>

#include <utility>

using namespace Aws::CustomerProfiles::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

PutSegmentSubscriptionResult::PutSegmentSubscriptionResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

PutSegmentSubscriptionResult& PutSegmentSubscriptionResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("Status")) {
    m_status = SegmentSubscriptionStatusMapper::GetSegmentSubscriptionStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ScheduleConfiguration")) {
    m_scheduleConfiguration = jsonValue.GetObject("ScheduleConfiguration");
    m_scheduleConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("StartedAt")) {
    m_startedAt = jsonValue.GetDouble("StartedAt");
    m_startedAtHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
