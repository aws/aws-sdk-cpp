/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/logs/model/CreateScheduledQueryResult.h>

#include <utility>

using namespace Aws::CloudWatchLogs::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateScheduledQueryResult::CreateScheduledQueryResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

CreateScheduledQueryResult& CreateScheduledQueryResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("scheduledQueryArn")) {
    m_scheduledQueryArn = jsonValue.GetString("scheduledQueryArn");
    m_scheduledQueryArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("state")) {
    m_state = ScheduledQueryStateMapper::GetScheduledQueryStateForName(jsonValue.GetString("state"));
    m_stateHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
