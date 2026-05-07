/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/UpdatePaymentCredentialProviderResult.h>
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

UpdatePaymentCredentialProviderResult::UpdatePaymentCredentialProviderResult(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  *this = result;
}

UpdatePaymentCredentialProviderResult& UpdatePaymentCredentialProviderResult::operator=(
    const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("credentialProviderVendor")) {
    m_credentialProviderVendor = PaymentCredentialProviderVendorTypeMapper::GetPaymentCredentialProviderVendorTypeForName(
        jsonValue.GetString("credentialProviderVendor"));
    m_credentialProviderVendorHasBeenSet = true;
  }
  if (jsonValue.ValueExists("credentialProviderArn")) {
    m_credentialProviderArn = jsonValue.GetString("credentialProviderArn");
    m_credentialProviderArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("providerConfigurationOutput")) {
    m_providerConfigurationOutput = jsonValue.GetObject("providerConfigurationOutput");
    m_providerConfigurationOutputHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdTime")) {
    m_createdTime = jsonValue.GetDouble("createdTime");
    m_createdTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("lastUpdatedTime")) {
    m_lastUpdatedTime = jsonValue.GetDouble("lastUpdatedTime");
    m_lastUpdatedTimeHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
