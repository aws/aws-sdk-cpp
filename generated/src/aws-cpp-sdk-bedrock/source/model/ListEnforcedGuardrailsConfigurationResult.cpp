/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/ListEnforcedGuardrailsConfigurationResult.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Bedrock::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListEnforcedGuardrailsConfigurationResult::ListEnforcedGuardrailsConfigurationResult(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  *this = result;
}

ListEnforcedGuardrailsConfigurationResult& ListEnforcedGuardrailsConfigurationResult::operator=(
    const Aws::AmazonWebServiceResult<JsonValue>& result) {
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("guardrailsConfig")) {
    Aws::Utils::Array<JsonView> guardrailsConfigJsonList = jsonValue.GetArray("guardrailsConfig");
    for (unsigned guardrailsConfigIndex = 0; guardrailsConfigIndex < guardrailsConfigJsonList.GetLength(); ++guardrailsConfigIndex) {
      m_guardrailsConfig.push_back(guardrailsConfigJsonList[guardrailsConfigIndex].AsObject());
    }
    m_guardrailsConfigHasBeenSet = true;
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
