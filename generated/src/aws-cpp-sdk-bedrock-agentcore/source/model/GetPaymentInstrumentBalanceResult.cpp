/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/GetPaymentInstrumentBalanceResult.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::BedrockAgentCore::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetPaymentInstrumentBalanceResult::GetPaymentInstrumentBalanceResult(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  *this = result;
}

GetPaymentInstrumentBalanceResult& GetPaymentInstrumentBalanceResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("paymentInstrumentId")) {
    m_paymentInstrumentId = jsonValue.GetString("paymentInstrumentId");
    m_paymentInstrumentIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("tokenBalance")) {
    m_tokenBalance = jsonValue.GetObject("tokenBalance");
    m_tokenBalanceHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
