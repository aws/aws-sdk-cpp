/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/ListCIMDPoliciesResult.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CognitoIdentityProvider::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListCIMDPoliciesResult::ListCIMDPoliciesResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

ListCIMDPoliciesResult& ListCIMDPoliciesResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("NextToken")) {
    m_nextToken = jsonValue.GetString("NextToken");
    m_nextTokenHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CIMDPolicies")) {
    Aws::Utils::Array<JsonView> cIMDPoliciesJsonList = jsonValue.GetArray("CIMDPolicies");
    for (unsigned cIMDPoliciesIndex = 0; cIMDPoliciesIndex < cIMDPoliciesJsonList.GetLength(); ++cIMDPoliciesIndex) {
      m_cIMDPolicies.push_back(cIMDPoliciesJsonList[cIMDPoliciesIndex].AsObject());
    }
    m_cIMDPoliciesHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
