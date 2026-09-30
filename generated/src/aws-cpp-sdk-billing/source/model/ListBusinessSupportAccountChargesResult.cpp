/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billing/model/ListBusinessSupportAccountChargesResult.h>
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

ListBusinessSupportAccountChargesResult::ListBusinessSupportAccountChargesResult(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  *this = result;
}

ListBusinessSupportAccountChargesResult& ListBusinessSupportAccountChargesResult::operator=(
    const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("billingMonth")) {
    m_billingMonth = jsonValue.GetString("billingMonth");
    m_billingMonthHasBeenSet = true;
  }
  if (jsonValue.ValueExists("isEstimated")) {
    m_isEstimated = jsonValue.GetBool("isEstimated");
    m_isEstimatedHasBeenSet = true;
  }
  if (jsonValue.ValueExists("totalSupportCharge")) {
    m_totalSupportCharge = jsonValue.GetString("totalSupportCharge");
    m_totalSupportChargeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("totalSupportEligibleSpend")) {
    m_totalSupportEligibleSpend = jsonValue.GetString("totalSupportEligibleSpend");
    m_totalSupportEligibleSpendHasBeenSet = true;
  }
  if (jsonValue.ValueExists("accountCount")) {
    m_accountCount = jsonValue.GetInteger("accountCount");
    m_accountCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("accountCharges")) {
    Aws::Utils::Array<JsonView> accountChargesJsonList = jsonValue.GetArray("accountCharges");
    for (unsigned accountChargesIndex = 0; accountChargesIndex < accountChargesJsonList.GetLength(); ++accountChargesIndex) {
      m_accountCharges.push_back(accountChargesJsonList[accountChargesIndex].AsObject());
    }
    m_accountChargesHasBeenSet = true;
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
