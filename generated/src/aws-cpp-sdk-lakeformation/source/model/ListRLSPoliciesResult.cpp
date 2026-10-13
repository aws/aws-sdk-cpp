/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/lakeformation/model/ListRLSPoliciesResult.h>

#include <utility>

using namespace Aws::LakeFormation::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListRLSPoliciesResult::ListRLSPoliciesResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

ListRLSPoliciesResult& ListRLSPoliciesResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("RLSPolicies")) {
    Aws::Utils::Array<JsonView> rLSPoliciesJsonList = jsonValue.GetArray("RLSPolicies");
    for (unsigned rLSPoliciesIndex = 0; rLSPoliciesIndex < rLSPoliciesJsonList.GetLength(); ++rLSPoliciesIndex) {
      m_rLSPolicies.push_back(rLSPoliciesJsonList[rLSPoliciesIndex].AsObject());
    }
    m_rLSPoliciesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("NextToken")) {
    m_nextToken = jsonValue.GetString("NextToken");
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
