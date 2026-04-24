/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/glue/model/JWTBearerProperties.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Glue {
namespace Model {

JWTBearerProperties::JWTBearerProperties(JsonView jsonValue) { *this = jsonValue; }

JWTBearerProperties& JWTBearerProperties::operator=(JsonView jsonValue) {
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
  if (jsonValue.ValueExists("JwtToken")) {
    m_jwtToken = jsonValue.GetObject("JwtToken");
    m_jwtTokenHasBeenSet = true;
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

JsonValue JWTBearerProperties::Jsonize() const {
  JsonValue payload;

  if (m_tokenUrlHasBeenSet) {
    payload.WithObject("TokenUrl", m_tokenUrl.Jsonize());
  }

  if (m_requestMethodHasBeenSet) {
    payload.WithString("RequestMethod", HTTPMethodMapper::GetNameForHTTPMethod(m_requestMethod));
  }

  if (m_contentTypeHasBeenSet) {
    payload.WithString("ContentType", ContentTypeMapper::GetNameForContentType(m_contentType));
  }

  if (m_jwtTokenHasBeenSet) {
    payload.WithObject("JwtToken", m_jwtToken.Jsonize());
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
