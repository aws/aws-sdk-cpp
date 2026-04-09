/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bcm-dashboards/model/ListScheduledReportsResult.h>
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

ListScheduledReportsResult::ListScheduledReportsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

ListScheduledReportsResult& ListScheduledReportsResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("scheduledReports")) {
    Aws::Utils::Array<JsonView> scheduledReportsJsonList = jsonValue.GetArray("scheduledReports");
    for (unsigned scheduledReportsIndex = 0; scheduledReportsIndex < scheduledReportsJsonList.GetLength(); ++scheduledReportsIndex) {
      m_scheduledReports.push_back(scheduledReportsJsonList[scheduledReportsIndex].AsObject());
    }
    m_scheduledReportsHasBeenSet = true;
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
