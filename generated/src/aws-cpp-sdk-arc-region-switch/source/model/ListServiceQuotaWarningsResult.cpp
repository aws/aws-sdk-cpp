/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/arc-region-switch/model/ListServiceQuotaWarningsResult.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::ARCRegionswitch::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListServiceQuotaWarningsResult::ListServiceQuotaWarningsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

ListServiceQuotaWarningsResult& ListServiceQuotaWarningsResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("serviceQuotaWarningSummaries")) {
    Aws::Utils::Array<JsonView> serviceQuotaWarningSummariesJsonList = jsonValue.GetArray("serviceQuotaWarningSummaries");
    for (unsigned serviceQuotaWarningSummariesIndex = 0;
         serviceQuotaWarningSummariesIndex < serviceQuotaWarningSummariesJsonList.GetLength(); ++serviceQuotaWarningSummariesIndex) {
      m_serviceQuotaWarningSummaries.push_back(serviceQuotaWarningSummariesJsonList[serviceQuotaWarningSummariesIndex].AsObject());
    }
    m_serviceQuotaWarningSummariesHasBeenSet = true;
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
