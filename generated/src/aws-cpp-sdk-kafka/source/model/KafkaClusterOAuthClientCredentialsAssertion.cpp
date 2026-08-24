/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/kafka/model/KafkaClusterOAuthClientCredentialsAssertion.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Kafka {
namespace Model {

KafkaClusterOAuthClientCredentialsAssertion::KafkaClusterOAuthClientCredentialsAssertion(JsonView jsonValue) { *this = jsonValue; }

KafkaClusterOAuthClientCredentialsAssertion& KafkaClusterOAuthClientCredentialsAssertion::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("audience")) {
    m_audience = jsonValue.GetString("audience");
    m_audienceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("signingAlgorithm")) {
    m_signingAlgorithm = JwtSigningAlgorithmMapper::GetJwtSigningAlgorithmForName(jsonValue.GetString("signingAlgorithm"));
    m_signingAlgorithmHasBeenSet = true;
  }
  if (jsonValue.ValueExists("tokenRequestSecretArn")) {
    m_tokenRequestSecretArn = jsonValue.GetString("tokenRequestSecretArn");
    m_tokenRequestSecretArnHasBeenSet = true;
  }
  return *this;
}

JsonValue KafkaClusterOAuthClientCredentialsAssertion::Jsonize() const {
  JsonValue payload;

  if (m_audienceHasBeenSet) {
    payload.WithString("audience", m_audience);
  }

  if (m_signingAlgorithmHasBeenSet) {
    payload.WithString("signingAlgorithm", JwtSigningAlgorithmMapper::GetNameForJwtSigningAlgorithm(m_signingAlgorithm));
  }

  if (m_tokenRequestSecretArnHasBeenSet) {
    payload.WithString("tokenRequestSecretArn", m_tokenRequestSecretArn);
  }

  return payload;
}

}  // namespace Model
}  // namespace Kafka
}  // namespace Aws
