/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/accessanalyzer/model/GetPolicyPreviewConfigurationResult.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::AccessAnalyzer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetPolicyPreviewConfigurationResult::GetPolicyPreviewConfigurationResult(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  *this = result;
}

GetPolicyPreviewConfigurationResult& GetPolicyPreviewConfigurationResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("policyPreviewConfigurations")) {
    Aws::Utils::Array<JsonView> policyPreviewConfigurationsJsonList = jsonValue.GetArray("policyPreviewConfigurations");
    for (unsigned policyPreviewConfigurationsIndex = 0; policyPreviewConfigurationsIndex < policyPreviewConfigurationsJsonList.GetLength();
         ++policyPreviewConfigurationsIndex) {
      m_policyPreviewConfigurations.push_back(policyPreviewConfigurationsJsonList[policyPreviewConfigurationsIndex].AsObject());
    }
    m_policyPreviewConfigurationsHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
