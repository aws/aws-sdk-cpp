/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/braket/model/SearchSpendingLimitsResult.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Braket::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

SearchSpendingLimitsResult::SearchSpendingLimitsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

SearchSpendingLimitsResult& SearchSpendingLimitsResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("spendingLimits")) {
    Aws::Utils::Array<JsonView> spendingLimitsJsonList = jsonValue.GetArray("spendingLimits");
    for (unsigned spendingLimitsIndex = 0; spendingLimitsIndex < spendingLimitsJsonList.GetLength(); ++spendingLimitsIndex) {
      m_spendingLimits.push_back(spendingLimitsJsonList[spendingLimitsIndex].AsObject());
    }
    m_spendingLimitsHasBeenSet = true;
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
