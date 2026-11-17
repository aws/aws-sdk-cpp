/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigateway/model/JwtIssuer.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace APIGateway {
namespace Model {

JwtIssuer::JwtIssuer(JsonView jsonValue) { *this = jsonValue; }

JwtIssuer& JwtIssuer::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("issuer")) {
    m_issuer = jsonValue.GetString("issuer");
    m_issuerHasBeenSet = true;
  }
  if (jsonValue.ValueExists("audiences")) {
    Aws::Utils::Array<JsonView> audiencesJsonList = jsonValue.GetArray("audiences");
    for (unsigned audiencesIndex = 0; audiencesIndex < audiencesJsonList.GetLength(); ++audiencesIndex) {
      m_audiences.push_back(audiencesJsonList[audiencesIndex].AsString());
    }
    m_audiencesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("additionalClaims")) {
    Aws::Utils::Array<JsonView> additionalClaimsJsonList = jsonValue.GetArray("additionalClaims");
    for (unsigned additionalClaimsIndex = 0; additionalClaimsIndex < additionalClaimsJsonList.GetLength(); ++additionalClaimsIndex) {
      m_additionalClaims.push_back(additionalClaimsJsonList[additionalClaimsIndex].AsObject());
    }
    m_additionalClaimsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("jwksUri")) {
    m_jwksUri = jsonValue.GetString("jwksUri");
    m_jwksUriHasBeenSet = true;
  }
  return *this;
}

JsonValue JwtIssuer::Jsonize() const {
  JsonValue payload;

  if (m_issuerHasBeenSet) {
    payload.WithString("issuer", m_issuer);
  }

  if (m_audiencesHasBeenSet) {
    Aws::Utils::Array<JsonValue> audiencesJsonList(m_audiences.size());
    for (unsigned audiencesIndex = 0; audiencesIndex < audiencesJsonList.GetLength(); ++audiencesIndex) {
      audiencesJsonList[audiencesIndex].AsString(m_audiences[audiencesIndex]);
    }
    payload.WithArray("audiences", std::move(audiencesJsonList));
  }

  if (m_additionalClaimsHasBeenSet) {
    Aws::Utils::Array<JsonValue> additionalClaimsJsonList(m_additionalClaims.size());
    for (unsigned additionalClaimsIndex = 0; additionalClaimsIndex < additionalClaimsJsonList.GetLength(); ++additionalClaimsIndex) {
      additionalClaimsJsonList[additionalClaimsIndex].AsObject(m_additionalClaims[additionalClaimsIndex].Jsonize());
    }
    payload.WithArray("additionalClaims", std::move(additionalClaimsJsonList));
  }

  if (m_jwksUriHasBeenSet) {
    payload.WithString("jwksUri", m_jwksUri);
  }

  return payload;
}

}  // namespace Model
}  // namespace APIGateway
}  // namespace Aws
