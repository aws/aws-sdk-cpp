/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/ecr/model/DeleteSigningConfigurationResult.h>

#include <utility>

using namespace Aws::ECR::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DeleteSigningConfigurationResult::DeleteSigningConfigurationResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

DeleteSigningConfigurationResult& DeleteSigningConfigurationResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("registryId")) {
    m_registryId = jsonValue.GetString("registryId");
    m_registryIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("signingConfiguration")) {
    m_signingConfiguration = jsonValue.GetObject("signingConfiguration");
    m_signingConfigurationHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
