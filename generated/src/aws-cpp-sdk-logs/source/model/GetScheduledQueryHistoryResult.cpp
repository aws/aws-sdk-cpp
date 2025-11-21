/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/logs/model/GetScheduledQueryHistoryResult.h>

#include <utility>

using namespace Aws::CloudWatchLogs::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetScheduledQueryHistoryResult::GetScheduledQueryHistoryResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

GetScheduledQueryHistoryResult& GetScheduledQueryHistoryResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("scheduledQueryArn")) {
    m_scheduledQueryArn = jsonValue.GetString("scheduledQueryArn");
    m_scheduledQueryArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("triggerHistory")) {
    Aws::Utils::Array<JsonView> triggerHistoryJsonList = jsonValue.GetArray("triggerHistory");
    for (unsigned triggerHistoryIndex = 0; triggerHistoryIndex < triggerHistoryJsonList.GetLength(); ++triggerHistoryIndex) {
      m_triggerHistory.push_back(triggerHistoryJsonList[triggerHistoryIndex].AsObject());
    }
    m_triggerHistoryHasBeenSet = true;
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
