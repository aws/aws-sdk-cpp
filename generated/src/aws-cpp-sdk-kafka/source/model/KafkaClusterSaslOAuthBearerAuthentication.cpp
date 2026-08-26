/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/kafka/model/KafkaClusterSaslOAuthBearerAuthentication.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Kafka {
namespace Model {

KafkaClusterSaslOAuthBearerAuthentication::KafkaClusterSaslOAuthBearerAuthentication(JsonView jsonValue) { *this = jsonValue; }

KafkaClusterSaslOAuthBearerAuthentication& KafkaClusterSaslOAuthBearerAuthentication::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("tokenEndpointUrl")) {
    m_tokenEndpointUrl = jsonValue.GetString("tokenEndpointUrl");
    m_tokenEndpointUrlHasBeenSet = true;
  }
  if (jsonValue.ValueExists("clientCredentials")) {
    m_clientCredentials = jsonValue.GetObject("clientCredentials");
    m_clientCredentialsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("iamJwtBearer")) {
    m_iamJwtBearer = jsonValue.GetObject("iamJwtBearer");
    m_iamJwtBearerHasBeenSet = true;
  }
  if (jsonValue.ValueExists("clientCredentialsAssertion")) {
    m_clientCredentialsAssertion = jsonValue.GetObject("clientCredentialsAssertion");
    m_clientCredentialsAssertionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("tokenEndpointAuthenticationMethod")) {
    m_tokenEndpointAuthenticationMethod = TokenEndpointAuthenticationMethodMapper::GetTokenEndpointAuthenticationMethodForName(
        jsonValue.GetString("tokenEndpointAuthenticationMethod"));
    m_tokenEndpointAuthenticationMethodHasBeenSet = true;
  }
  if (jsonValue.ValueExists("scope")) {
    m_scope = jsonValue.GetString("scope");
    m_scopeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("tokenEndpointTlsCertificateArn")) {
    m_tokenEndpointTlsCertificateArn = jsonValue.GetString("tokenEndpointTlsCertificateArn");
    m_tokenEndpointTlsCertificateArnHasBeenSet = true;
  }
  return *this;
}

JsonValue KafkaClusterSaslOAuthBearerAuthentication::Jsonize() const {
  JsonValue payload;

  if (m_tokenEndpointUrlHasBeenSet) {
    payload.WithString("tokenEndpointUrl", m_tokenEndpointUrl);
  }

  if (m_clientCredentialsHasBeenSet) {
    payload.WithObject("clientCredentials", m_clientCredentials.Jsonize());
  }

  if (m_iamJwtBearerHasBeenSet) {
    payload.WithObject("iamJwtBearer", m_iamJwtBearer.Jsonize());
  }

  if (m_clientCredentialsAssertionHasBeenSet) {
    payload.WithObject("clientCredentialsAssertion", m_clientCredentialsAssertion.Jsonize());
  }

  if (m_tokenEndpointAuthenticationMethodHasBeenSet) {
    payload.WithString(
        "tokenEndpointAuthenticationMethod",
        TokenEndpointAuthenticationMethodMapper::GetNameForTokenEndpointAuthenticationMethod(m_tokenEndpointAuthenticationMethod));
  }

  if (m_scopeHasBeenSet) {
    payload.WithString("scope", m_scope);
  }

  if (m_tokenEndpointTlsCertificateArnHasBeenSet) {
    payload.WithString("tokenEndpointTlsCertificateArn", m_tokenEndpointTlsCertificateArn);
  }

  return payload;
}

}  // namespace Model
}  // namespace Kafka
}  // namespace Aws
