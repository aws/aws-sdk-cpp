/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/kafka/model/KafkaClusterOAuthClientCredentials.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Kafka {
namespace Model {

KafkaClusterOAuthClientCredentials::KafkaClusterOAuthClientCredentials(JsonView jsonValue) { *this = jsonValue; }

KafkaClusterOAuthClientCredentials& KafkaClusterOAuthClientCredentials::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("tokenRequestSecretArn")) {
    m_tokenRequestSecretArn = jsonValue.GetString("tokenRequestSecretArn");
    m_tokenRequestSecretArnHasBeenSet = true;
  }
  return *this;
}

JsonValue KafkaClusterOAuthClientCredentials::Jsonize() const {
  JsonValue payload;

  if (m_tokenRequestSecretArnHasBeenSet) {
    payload.WithString("tokenRequestSecretArn", m_tokenRequestSecretArn);
  }

  return payload;
}

}  // namespace Model
}  // namespace Kafka
}  // namespace Aws
