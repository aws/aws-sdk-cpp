/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/acm/model/ListAcmeEndpointsResult.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::ACM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListAcmeEndpointsResult::ListAcmeEndpointsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

ListAcmeEndpointsResult& ListAcmeEndpointsResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("AcmeEndpoints")) {
    Aws::Utils::Array<JsonView> acmeEndpointsJsonList = jsonValue.GetArray("AcmeEndpoints");
    for (unsigned acmeEndpointsIndex = 0; acmeEndpointsIndex < acmeEndpointsJsonList.GetLength(); ++acmeEndpointsIndex) {
      m_acmeEndpoints.push_back(acmeEndpointsJsonList[acmeEndpointsIndex].AsObject());
    }
    m_acmeEndpointsHasBeenSet = true;
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
