/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/CreatePaymentManagerResult.h>
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

CreatePaymentManagerResult::CreatePaymentManagerResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

CreatePaymentManagerResult& CreatePaymentManagerResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("paymentManagerArn")) {
    m_paymentManagerArn = jsonValue.GetString("paymentManagerArn");
    m_paymentManagerArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("paymentManagerId")) {
    m_paymentManagerId = jsonValue.GetString("paymentManagerId");
    m_paymentManagerIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("authorizerType")) {
    m_authorizerType = PaymentsAuthorizerTypeMapper::GetPaymentsAuthorizerTypeForName(jsonValue.GetString("authorizerType"));
    m_authorizerTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("authorizerConfiguration")) {
    m_authorizerConfiguration = jsonValue.GetObject("authorizerConfiguration");
    m_authorizerConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("roleArn")) {
    m_roleArn = jsonValue.GetString("roleArn");
    m_roleArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("workloadIdentityDetails")) {
    m_workloadIdentityDetails = jsonValue.GetObject("workloadIdentityDetails");
    m_workloadIdentityDetailsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetString("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = PaymentManagerStatusMapper::GetPaymentManagerStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("tags")) {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for (auto& tagsItem : tagsJsonMap) {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
