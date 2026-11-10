/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/lakeformation/model/GetGlueFunctionSessionContextResult.h>

#include <utility>

using namespace Aws::LakeFormation::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetGlueFunctionSessionContextResult::GetGlueFunctionSessionContextResult(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  *this = result;
}

GetGlueFunctionSessionContextResult& GetGlueFunctionSessionContextResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("SessionContextId")) {
    m_sessionContextId = jsonValue.GetString("SessionContextId");
    m_sessionContextIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Expiration")) {
    m_expiration = jsonValue.GetDouble("Expiration");
    m_expirationHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
