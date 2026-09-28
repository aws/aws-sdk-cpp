/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billing/model/ListBusinessSupportSubscriptionHistoryResult.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Billing::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListBusinessSupportSubscriptionHistoryResult::ListBusinessSupportSubscriptionHistoryResult(
    const Aws::AmazonWebServiceResult<JsonValue>& result) {
  *this = result;
}

ListBusinessSupportSubscriptionHistoryResult& ListBusinessSupportSubscriptionHistoryResult::operator=(
    const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("subscriptionContracts")) {
    Aws::Utils::Array<JsonView> subscriptionContractsJsonList = jsonValue.GetArray("subscriptionContracts");
    for (unsigned subscriptionContractsIndex = 0; subscriptionContractsIndex < subscriptionContractsJsonList.GetLength();
         ++subscriptionContractsIndex) {
      m_subscriptionContracts.push_back(subscriptionContractsJsonList[subscriptionContractsIndex].AsObject());
    }
    m_subscriptionContractsHasBeenSet = true;
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
