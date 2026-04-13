/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bcm-dashboards/model/ExecuteScheduledReportResult.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::BCMDashboards::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ExecuteScheduledReportResult::ExecuteScheduledReportResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

ExecuteScheduledReportResult& ExecuteScheduledReportResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("healthStatus")) {
    m_healthStatus = jsonValue.GetObject("healthStatus");
    m_healthStatusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("executionTriggered")) {
    m_executionTriggered = jsonValue.GetBool("executionTriggered");
    m_executionTriggeredHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
