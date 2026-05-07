/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/ListPaymentInstrumentsResult.h>
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

ListPaymentInstrumentsResult::ListPaymentInstrumentsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

ListPaymentInstrumentsResult& ListPaymentInstrumentsResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("paymentInstruments")) {
    Aws::Utils::Array<JsonView> paymentInstrumentsJsonList = jsonValue.GetArray("paymentInstruments");
    for (unsigned paymentInstrumentsIndex = 0; paymentInstrumentsIndex < paymentInstrumentsJsonList.GetLength();
         ++paymentInstrumentsIndex) {
      m_paymentInstruments.push_back(paymentInstrumentsJsonList[paymentInstrumentsIndex].AsObject());
    }
    m_paymentInstrumentsHasBeenSet = true;
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
