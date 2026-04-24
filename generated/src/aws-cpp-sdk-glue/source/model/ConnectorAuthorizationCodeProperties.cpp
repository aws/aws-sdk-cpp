/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/glue/model/ConnectorAuthorizationCodeProperties.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Glue {
namespace Model {

ConnectorAuthorizationCodeProperties::ConnectorAuthorizationCodeProperties(JsonView jsonValue) { *this = jsonValue; }

ConnectorAuthorizationCodeProperties& ConnectorAuthorizationCodeProperties::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("AuthorizationCodeUrl")) {
    m_authorizationCodeUrl = jsonValue.GetObject("AuthorizationCodeUrl");
    m_authorizationCodeUrlHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AuthorizationCode")) {
    m_authorizationCode = jsonValue.GetObject("AuthorizationCode");
    m_authorizationCodeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RedirectUri")) {
    m_redirectUri = jsonValue.GetObject("RedirectUri");
    m_redirectUriHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TokenUrl")) {
    m_tokenUrl = jsonValue.GetObject("TokenUrl");
    m_tokenUrlHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RequestMethod")) {
    m_requestMethod = HTTPMethodMapper::GetHTTPMethodForName(jsonValue.GetString("RequestMethod"));
    m_requestMethodHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ContentType")) {
    m_contentType = ContentTypeMapper::GetContentTypeForName(jsonValue.GetString("ContentType"));
    m_contentTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ClientId")) {
    m_clientId = jsonValue.GetObject("ClientId");
    m_clientIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ClientSecret")) {
    m_clientSecret = jsonValue.GetObject("ClientSecret");
    m_clientSecretHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Scope")) {
    m_scope = jsonValue.GetObject("Scope");
    m_scopeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Prompt")) {
    m_prompt = jsonValue.GetObject("Prompt");
    m_promptHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TokenUrlParameters")) {
    Aws::Utils::Array<JsonView> tokenUrlParametersJsonList = jsonValue.GetArray("TokenUrlParameters");
    for (unsigned tokenUrlParametersIndex = 0; tokenUrlParametersIndex < tokenUrlParametersJsonList.GetLength();
         ++tokenUrlParametersIndex) {
      m_tokenUrlParameters.push_back(tokenUrlParametersJsonList[tokenUrlParametersIndex].AsObject());
    }
    m_tokenUrlParametersHasBeenSet = true;
  }
  return *this;
}

JsonValue ConnectorAuthorizationCodeProperties::Jsonize() const {
  JsonValue payload;

  if (m_authorizationCodeUrlHasBeenSet) {
    payload.WithObject("AuthorizationCodeUrl", m_authorizationCodeUrl.Jsonize());
  }

  if (m_authorizationCodeHasBeenSet) {
    payload.WithObject("AuthorizationCode", m_authorizationCode.Jsonize());
  }

  if (m_redirectUriHasBeenSet) {
    payload.WithObject("RedirectUri", m_redirectUri.Jsonize());
  }

  if (m_tokenUrlHasBeenSet) {
    payload.WithObject("TokenUrl", m_tokenUrl.Jsonize());
  }

  if (m_requestMethodHasBeenSet) {
    payload.WithString("RequestMethod", HTTPMethodMapper::GetNameForHTTPMethod(m_requestMethod));
  }

  if (m_contentTypeHasBeenSet) {
    payload.WithString("ContentType", ContentTypeMapper::GetNameForContentType(m_contentType));
  }

  if (m_clientIdHasBeenSet) {
    payload.WithObject("ClientId", m_clientId.Jsonize());
  }

  if (m_clientSecretHasBeenSet) {
    payload.WithObject("ClientSecret", m_clientSecret.Jsonize());
  }

  if (m_scopeHasBeenSet) {
    payload.WithObject("Scope", m_scope.Jsonize());
  }

  if (m_promptHasBeenSet) {
    payload.WithObject("Prompt", m_prompt.Jsonize());
  }

  if (m_tokenUrlParametersHasBeenSet) {
    Aws::Utils::Array<JsonValue> tokenUrlParametersJsonList(m_tokenUrlParameters.size());
    for (unsigned tokenUrlParametersIndex = 0; tokenUrlParametersIndex < tokenUrlParametersJsonList.GetLength();
         ++tokenUrlParametersIndex) {
      tokenUrlParametersJsonList[tokenUrlParametersIndex].AsObject(m_tokenUrlParameters[tokenUrlParametersIndex].Jsonize());
    }
    payload.WithArray("TokenUrlParameters", std::move(tokenUrlParametersJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
