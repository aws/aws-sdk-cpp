/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/ListNotificationsResult.h>
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

ListNotificationsResult::ListNotificationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

ListNotificationsResult& ListNotificationsResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("NextToken")) {
    m_nextToken = jsonValue.GetString("NextToken");
    m_nextTokenHasBeenSet = true;
  }
  if (jsonValue.ValueExists("NotificationSummaryList")) {
    Aws::Utils::Array<JsonView> notificationSummaryListJsonList = jsonValue.GetArray("NotificationSummaryList");
    for (unsigned notificationSummaryListIndex = 0; notificationSummaryListIndex < notificationSummaryListJsonList.GetLength();
         ++notificationSummaryListIndex) {
      m_notificationSummaryList.push_back(notificationSummaryListJsonList[notificationSummaryListIndex].AsObject());
    }
    m_notificationSummaryListHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
