/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/kafka/model/KafkaClusterEncryptionInTransit.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Kafka {
namespace Model {

KafkaClusterEncryptionInTransit::KafkaClusterEncryptionInTransit(JsonView jsonValue) { *this = jsonValue; }

KafkaClusterEncryptionInTransit& KafkaClusterEncryptionInTransit::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("encryptionType")) {
    m_encryptionType =
        KafkaClusterEncryptionInTransitTypeMapper::GetKafkaClusterEncryptionInTransitTypeForName(jsonValue.GetString("encryptionType"));
    m_encryptionTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("rootCaCertificate")) {
    m_rootCaCertificate = jsonValue.GetString("rootCaCertificate");
    m_rootCaCertificateHasBeenSet = true;
  }
  return *this;
}

JsonValue KafkaClusterEncryptionInTransit::Jsonize() const {
  JsonValue payload;

  if (m_encryptionTypeHasBeenSet) {
    payload.WithString("encryptionType",
                       KafkaClusterEncryptionInTransitTypeMapper::GetNameForKafkaClusterEncryptionInTransitType(m_encryptionType));
  }

  if (m_rootCaCertificateHasBeenSet) {
    payload.WithString("rootCaCertificate", m_rootCaCertificate);
  }

  return payload;
}

}  // namespace Model
}  // namespace Kafka
}  // namespace Aws
