/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/GetTestCaseExecutionSummaryResult.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetTestCaseExecutionSummaryResult::GetTestCaseExecutionSummaryResult(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  *this = result;
}

GetTestCaseExecutionSummaryResult& GetTestCaseExecutionSummaryResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("StartTime")) {
    m_startTime = jsonValue.GetDouble("StartTime");
    m_startTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("EndTime")) {
    m_endTime = jsonValue.GetDouble("EndTime");
    m_endTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Status")) {
    m_status = TestCaseExecutionStatusMapper::GetTestCaseExecutionStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ObservationSummary")) {
    m_observationSummary = jsonValue.GetObject("ObservationSummary");
    m_observationSummaryHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
