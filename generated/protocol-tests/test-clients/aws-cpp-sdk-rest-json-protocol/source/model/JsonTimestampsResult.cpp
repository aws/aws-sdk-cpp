/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/rest-json-protocol/model/JsonTimestampsResult.h>

#include <utility>

using namespace Aws::RestJsonProtocol::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

JsonTimestampsResult::JsonTimestampsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

JsonTimestampsResult& JsonTimestampsResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("normal")) {
    m_normal = jsonValue.GetDouble("normal");
    m_normalHasBeenSet = true;
  }
  if (jsonValue.ValueExists("dateTime")) {
    m_dateTime = jsonValue.GetString("dateTime");
    m_dateTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("dateTimeOnTarget")) {
    m_dateTimeOnTarget = jsonValue.GetString("dateTimeOnTarget");
    m_dateTimeOnTargetHasBeenSet = true;
  }
  if (jsonValue.ValueExists("epochSeconds")) {
    m_epochSeconds = jsonValue.GetDouble("epochSeconds");
    m_epochSecondsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("epochSecondsOnTarget")) {
    m_epochSecondsOnTarget = jsonValue.GetDouble("epochSecondsOnTarget");
    m_epochSecondsOnTargetHasBeenSet = true;
  }
  if (jsonValue.ValueExists("httpDate")) {
    m_httpDate = jsonValue.GetString("httpDate");
    m_httpDateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("httpDateOnTarget")) {
    m_httpDateOnTarget = jsonValue.GetString("httpDateOnTarget");
    m_httpDateOnTargetHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
