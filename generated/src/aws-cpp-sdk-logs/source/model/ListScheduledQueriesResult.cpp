/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/logs/model/ListScheduledQueriesResult.h>

#include <utility>

using namespace Aws::CloudWatchLogs::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListScheduledQueriesResult::ListScheduledQueriesResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

ListScheduledQueriesResult& ListScheduledQueriesResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("nextToken")) {
    m_nextToken = jsonValue.GetString("nextToken");
    m_nextTokenHasBeenSet = true;
  }
  if (jsonValue.ValueExists("scheduledQueries")) {
    Aws::Utils::Array<JsonView> scheduledQueriesJsonList = jsonValue.GetArray("scheduledQueries");
    for (unsigned scheduledQueriesIndex = 0; scheduledQueriesIndex < scheduledQueriesJsonList.GetLength(); ++scheduledQueriesIndex) {
      m_scheduledQueries.push_back(scheduledQueriesJsonList[scheduledQueriesIndex].AsObject());
    }
    m_scheduledQueriesHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
