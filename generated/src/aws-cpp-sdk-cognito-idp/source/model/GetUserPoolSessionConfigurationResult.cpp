/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/GetUserPoolSessionConfigurationResult.h>
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

GetUserPoolSessionConfigurationResult::GetUserPoolSessionConfigurationResult(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  *this = result;
}

GetUserPoolSessionConfigurationResult& GetUserPoolSessionConfigurationResult::operator=(
    const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("UserPoolId")) {
    m_userPoolId = jsonValue.GetString("UserPoolId");
    m_userPoolIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UserSessionTracking")) {
    m_userSessionTracking = UserSessionTrackingTypeMapper::GetUserSessionTrackingTypeForName(jsonValue.GetString("UserSessionTracking"));
    m_userSessionTrackingHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TokenSession")) {
    m_tokenSession = jsonValue.GetObject("TokenSession");
    m_tokenSessionHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
