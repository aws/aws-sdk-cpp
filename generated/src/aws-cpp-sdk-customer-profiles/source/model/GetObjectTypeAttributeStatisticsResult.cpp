/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/customer-profiles/model/GetObjectTypeAttributeStatisticsResult.h>

#include <utility>

using namespace Aws::CustomerProfiles::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetObjectTypeAttributeStatisticsResult::GetObjectTypeAttributeStatisticsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  *this = result;
}

GetObjectTypeAttributeStatisticsResult& GetObjectTypeAttributeStatisticsResult::operator=(
    const Aws::AmazonWebServiceResult<JsonValue>& result) {
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("Statistics")) {
    m_statistics = jsonValue.GetObject("Statistics");
    m_statisticsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CalculatedAt")) {
    m_calculatedAt = jsonValue.GetDouble("CalculatedAt");
    m_calculatedAtHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
