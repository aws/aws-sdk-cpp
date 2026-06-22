/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/lambda-microvms/model/CreateMicrovmAuthTokenResult.h>

#include <utility>

using namespace Aws::LambdaMicrovms::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateMicrovmAuthTokenResult::CreateMicrovmAuthTokenResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

CreateMicrovmAuthTokenResult& CreateMicrovmAuthTokenResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("authToken")) {
    Aws::Map<Aws::String, JsonView> authTokenJsonMap = jsonValue.GetObject("authToken").GetAllObjects();
    for (auto& authTokenItem : authTokenJsonMap) {
      m_authToken[authTokenItem.first] = authTokenItem.second.AsString();
    }
    m_authTokenHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
