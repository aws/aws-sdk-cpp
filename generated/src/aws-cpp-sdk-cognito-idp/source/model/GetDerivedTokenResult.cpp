/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/GetDerivedTokenResult.h>
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

GetDerivedTokenResult::GetDerivedTokenResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

GetDerivedTokenResult& GetDerivedTokenResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("IssuedToken")) {
    m_issuedToken = jsonValue.GetString("IssuedToken");
    m_issuedTokenHasBeenSet = true;
  }
  if (jsonValue.ValueExists("IssuedTokenType")) {
    m_issuedTokenType =
        IssuedTokenTypeIdentifierTypeMapper::GetIssuedTokenTypeIdentifierTypeForName(jsonValue.GetString("IssuedTokenType"));
    m_issuedTokenTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TokenType")) {
    m_tokenType = OAuthTokenTypeTypeMapper::GetOAuthTokenTypeTypeForName(jsonValue.GetString("TokenType"));
    m_tokenTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ExpiresIn")) {
    m_expiresIn = jsonValue.GetInteger("ExpiresIn");
    m_expiresInHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Scopes")) {
    Aws::Utils::Array<JsonView> scopesJsonList = jsonValue.GetArray("Scopes");
    for (unsigned scopesIndex = 0; scopesIndex < scopesJsonList.GetLength(); ++scopesIndex) {
      m_scopes.push_back(scopesJsonList[scopesIndex].AsString());
    }
    m_scopesHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
