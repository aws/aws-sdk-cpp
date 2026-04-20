/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/kafka/model/KafkaClusterSaslScramMechanism.h>

using namespace Aws::Utils;

namespace Aws {
namespace Kafka {
namespace Model {
namespace KafkaClusterSaslScramMechanismMapper {

static const int SHA256_HASH = HashingUtils::HashString("SHA256");
static const int SHA512_HASH = HashingUtils::HashString("SHA512");

KafkaClusterSaslScramMechanism GetKafkaClusterSaslScramMechanismForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == SHA256_HASH) {
    return KafkaClusterSaslScramMechanism::SHA256;
  } else if (hashCode == SHA512_HASH) {
    return KafkaClusterSaslScramMechanism::SHA512;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<KafkaClusterSaslScramMechanism>(hashCode);
  }

  return KafkaClusterSaslScramMechanism::NOT_SET;
}

Aws::String GetNameForKafkaClusterSaslScramMechanism(KafkaClusterSaslScramMechanism enumValue) {
  switch (enumValue) {
    case KafkaClusterSaslScramMechanism::NOT_SET:
      return {};
    case KafkaClusterSaslScramMechanism::SHA256:
      return "SHA256";
    case KafkaClusterSaslScramMechanism::SHA512:
      return "SHA512";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace KafkaClusterSaslScramMechanismMapper
}  // namespace Model
}  // namespace Kafka
}  // namespace Aws
