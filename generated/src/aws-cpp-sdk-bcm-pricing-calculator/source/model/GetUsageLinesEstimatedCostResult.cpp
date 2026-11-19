/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bcm-pricing-calculator/model/GetUsageLinesEstimatedCostResult.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::BCMPricingCalculator::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetUsageLinesEstimatedCostResult::GetUsageLinesEstimatedCostResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

GetUsageLinesEstimatedCostResult& GetUsageLinesEstimatedCostResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("rateType")) {
    m_rateType = RateTypeMapper::GetRateTypeForName(jsonValue.GetString("rateType"));
    m_rateTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("totalCost")) {
    m_totalCost = jsonValue.GetDouble("totalCost");
    m_totalCostHasBeenSet = true;
  }
  if (jsonValue.ValueExists("currency")) {
    m_currency = CurrencyCodeMapper::GetCurrencyCodeForName(jsonValue.GetString("currency"));
    m_currencyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("lineItems")) {
    Aws::Utils::Array<JsonView> lineItemsJsonList = jsonValue.GetArray("lineItems");
    for (unsigned lineItemsIndex = 0; lineItemsIndex < lineItemsJsonList.GetLength(); ++lineItemsIndex) {
      m_lineItems.push_back(lineItemsJsonList[lineItemsIndex].AsObject());
    }
    m_lineItemsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("errors")) {
    Aws::Utils::Array<JsonView> errorsJsonList = jsonValue.GetArray("errors");
    for (unsigned errorsIndex = 0; errorsIndex < errorsJsonList.GetLength(); ++errorsIndex) {
      m_errors.push_back(errorsJsonList[errorsIndex].AsObject());
    }
    m_errorsHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
