/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/kafka/model/JwtSigningAlgorithm.h>

using namespace Aws::Utils;

namespace Aws {
namespace Kafka {
namespace Model {
namespace JwtSigningAlgorithmMapper {

static const int RS256_HASH = HashingUtils::HashString("RS256");
static const int ES384_HASH = HashingUtils::HashString("ES384");

JwtSigningAlgorithm GetJwtSigningAlgorithmForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == RS256_HASH) {
    return JwtSigningAlgorithm::RS256;
  } else if (hashCode == ES384_HASH) {
    return JwtSigningAlgorithm::ES384;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<JwtSigningAlgorithm>(hashCode);
  }

  return JwtSigningAlgorithm::NOT_SET;
}

Aws::String GetNameForJwtSigningAlgorithm(JwtSigningAlgorithm enumValue) {
  switch (enumValue) {
    case JwtSigningAlgorithm::NOT_SET:
      return {};
    case JwtSigningAlgorithm::RS256:
      return "RS256";
    case JwtSigningAlgorithm::ES384:
      return "ES384";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace JwtSigningAlgorithmMapper
}  // namespace Model
}  // namespace Kafka
}  // namespace Aws
