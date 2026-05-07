/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/UpdatePaymentConnectorResult.h>
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

UpdatePaymentConnectorResult::UpdatePaymentConnectorResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

UpdatePaymentConnectorResult& UpdatePaymentConnectorResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("paymentConnectorId")) {
    m_paymentConnectorId = jsonValue.GetString("paymentConnectorId");
    m_paymentConnectorIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("paymentManagerId")) {
    m_paymentManagerId = jsonValue.GetString("paymentManagerId");
    m_paymentManagerIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("type")) {
    m_type = PaymentConnectorTypeMapper::GetPaymentConnectorTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("credentialProviderConfigurations")) {
    Aws::Utils::Array<JsonView> credentialProviderConfigurationsJsonList = jsonValue.GetArray("credentialProviderConfigurations");
    for (unsigned credentialProviderConfigurationsIndex = 0;
         credentialProviderConfigurationsIndex < credentialProviderConfigurationsJsonList.GetLength();
         ++credentialProviderConfigurationsIndex) {
      m_credentialProviderConfigurations.push_back(
          credentialProviderConfigurationsJsonList[credentialProviderConfigurationsIndex].AsObject());
    }
    m_credentialProviderConfigurationsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("lastUpdatedAt")) {
    m_lastUpdatedAt = jsonValue.GetString("lastUpdatedAt");
    m_lastUpdatedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = PaymentConnectorStatusMapper::GetPaymentConnectorStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
