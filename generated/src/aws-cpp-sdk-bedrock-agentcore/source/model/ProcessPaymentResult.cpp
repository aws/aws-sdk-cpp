/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/ProcessPaymentResult.h>
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

ProcessPaymentResult::ProcessPaymentResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

ProcessPaymentResult& ProcessPaymentResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("processPaymentId")) {
    m_processPaymentId = jsonValue.GetString("processPaymentId");
    m_processPaymentIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("paymentManagerArn")) {
    m_paymentManagerArn = jsonValue.GetString("paymentManagerArn");
    m_paymentManagerArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("paymentSessionId")) {
    m_paymentSessionId = jsonValue.GetString("paymentSessionId");
    m_paymentSessionIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("paymentInstrumentId")) {
    m_paymentInstrumentId = jsonValue.GetString("paymentInstrumentId");
    m_paymentInstrumentIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("paymentType")) {
    m_paymentType = PaymentTypeMapper::GetPaymentTypeForName(jsonValue.GetString("paymentType"));
    m_paymentTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = PaymentStatusMapper::GetPaymentStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("paymentOutput")) {
    m_paymentOutput = jsonValue.GetObject("paymentOutput");
    m_paymentOutputHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetString("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updatedAt")) {
    m_updatedAt = jsonValue.GetString("updatedAt");
    m_updatedAtHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
