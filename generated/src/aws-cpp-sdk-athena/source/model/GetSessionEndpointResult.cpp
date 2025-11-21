/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/athena/model/GetSessionEndpointResult.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Athena::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetSessionEndpointResult::GetSessionEndpointResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

GetSessionEndpointResult& GetSessionEndpointResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("EndpointUrl")) {
    m_endpointUrl = jsonValue.GetString("EndpointUrl");
    m_endpointUrlHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AuthToken")) {
    m_authToken = jsonValue.GetString("AuthToken");
    m_authTokenHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AuthTokenExpirationTime")) {
    m_authTokenExpirationTime = jsonValue.GetDouble("AuthTokenExpirationTime");
    m_authTokenExpirationTimeHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
