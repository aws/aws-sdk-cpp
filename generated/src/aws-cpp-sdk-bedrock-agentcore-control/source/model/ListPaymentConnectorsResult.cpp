/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/ListPaymentConnectorsResult.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::BedrockAgentCoreControl::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListPaymentConnectorsResult::ListPaymentConnectorsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

ListPaymentConnectorsResult& ListPaymentConnectorsResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("paymentConnectors")) {
    Aws::Utils::Array<JsonView> paymentConnectorsJsonList = jsonValue.GetArray("paymentConnectors");
    for (unsigned paymentConnectorsIndex = 0; paymentConnectorsIndex < paymentConnectorsJsonList.GetLength(); ++paymentConnectorsIndex) {
      m_paymentConnectors.push_back(paymentConnectorsJsonList[paymentConnectorsIndex].AsObject());
    }
    m_paymentConnectorsHasBeenSet = true;
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
