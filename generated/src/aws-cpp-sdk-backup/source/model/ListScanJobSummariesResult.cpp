/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/ListScanJobSummariesResult.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Backup::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListScanJobSummariesResult::ListScanJobSummariesResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

ListScanJobSummariesResult& ListScanJobSummariesResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("ScanJobSummaries")) {
    Aws::Utils::Array<JsonView> scanJobSummariesJsonList = jsonValue.GetArray("ScanJobSummaries");
    for (unsigned scanJobSummariesIndex = 0; scanJobSummariesIndex < scanJobSummariesJsonList.GetLength(); ++scanJobSummariesIndex) {
      m_scanJobSummaries.push_back(scanJobSummariesJsonList[scanJobSummariesIndex].AsObject());
    }
    m_scanJobSummariesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AggregationPeriod")) {
    m_aggregationPeriod = jsonValue.GetString("AggregationPeriod");
    m_aggregationPeriodHasBeenSet = true;
  }
  if (jsonValue.ValueExists("NextToken")) {
    m_nextToken = jsonValue.GetString("NextToken");
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
