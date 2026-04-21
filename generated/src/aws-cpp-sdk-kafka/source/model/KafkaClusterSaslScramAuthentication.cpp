/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/kafka/model/KafkaClusterSaslScramAuthentication.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Kafka {
namespace Model {

KafkaClusterSaslScramAuthentication::KafkaClusterSaslScramAuthentication(JsonView jsonValue) { *this = jsonValue; }

KafkaClusterSaslScramAuthentication& KafkaClusterSaslScramAuthentication::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("mechanism")) {
    m_mechanism = KafkaClusterSaslScramMechanismMapper::GetKafkaClusterSaslScramMechanismForName(jsonValue.GetString("mechanism"));
    m_mechanismHasBeenSet = true;
  }
  if (jsonValue.ValueExists("secretArn")) {
    m_secretArn = jsonValue.GetString("secretArn");
    m_secretArnHasBeenSet = true;
  }
  return *this;
}

JsonValue KafkaClusterSaslScramAuthentication::Jsonize() const {
  JsonValue payload;

  if (m_mechanismHasBeenSet) {
    payload.WithString("mechanism", KafkaClusterSaslScramMechanismMapper::GetNameForKafkaClusterSaslScramMechanism(m_mechanism));
  }

  if (m_secretArnHasBeenSet) {
    payload.WithString("secretArn", m_secretArn);
  }

  return payload;
}

}  // namespace Model
}  // namespace Kafka
}  // namespace Aws
