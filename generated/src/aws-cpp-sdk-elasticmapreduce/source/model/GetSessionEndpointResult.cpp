/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/elasticmapreduce/model/GetSessionEndpointResult.h>

#include <utility>

using namespace Aws::EMR::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetSessionEndpointResult::GetSessionEndpointResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

GetSessionEndpointResult& GetSessionEndpointResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("Endpoint")) {
    m_endpoint = jsonValue.GetString("Endpoint");
    m_endpointHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AuthToken")) {
    m_authToken = jsonValue.GetString("AuthToken");
    m_authTokenHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AuthTokenExpirationTime")) {
    m_authTokenExpirationTime = jsonValue.GetDouble("AuthTokenExpirationTime");
    m_authTokenExpirationTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Credentials")) {
    m_credentials = jsonValue.GetObject("Credentials");
    m_credentialsHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
