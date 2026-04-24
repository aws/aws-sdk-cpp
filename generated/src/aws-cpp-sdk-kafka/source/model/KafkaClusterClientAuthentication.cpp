/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/kafka/model/KafkaClusterClientAuthentication.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Kafka {
namespace Model {

KafkaClusterClientAuthentication::KafkaClusterClientAuthentication(JsonView jsonValue) { *this = jsonValue; }

KafkaClusterClientAuthentication& KafkaClusterClientAuthentication::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("saslScram")) {
    m_saslScram = jsonValue.GetObject("saslScram");
    m_saslScramHasBeenSet = true;
  }
  return *this;
}

JsonValue KafkaClusterClientAuthentication::Jsonize() const {
  JsonValue payload;

  if (m_saslScramHasBeenSet) {
    payload.WithObject("saslScram", m_saslScram.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace Kafka
}  // namespace Aws
