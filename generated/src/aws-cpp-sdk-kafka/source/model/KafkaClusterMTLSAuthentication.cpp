/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/kafka/model/KafkaClusterMTLSAuthentication.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Kafka {
namespace Model {

KafkaClusterMTLSAuthentication::KafkaClusterMTLSAuthentication(JsonView jsonValue) { *this = jsonValue; }

KafkaClusterMTLSAuthentication& KafkaClusterMTLSAuthentication::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("secretArn")) {
    m_secretArn = jsonValue.GetString("secretArn");
    m_secretArnHasBeenSet = true;
  }
  return *this;
}

JsonValue KafkaClusterMTLSAuthentication::Jsonize() const {
  JsonValue payload;

  if (m_secretArnHasBeenSet) {
    payload.WithString("secretArn", m_secretArn);
  }

  return payload;
}

}  // namespace Model
}  // namespace Kafka
}  // namespace Aws
