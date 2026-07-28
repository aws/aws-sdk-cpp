/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/SigningAlgorithm.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {
namespace SigningAlgorithmMapper {

static const int RS256_HASH = HashingUtils::HashString("RS256");
static const int PS256_HASH = HashingUtils::HashString("PS256");
static const int ES256_HASH = HashingUtils::HashString("ES256");

SigningAlgorithm GetSigningAlgorithmForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == RS256_HASH) {
    return SigningAlgorithm::RS256;
  } else if (hashCode == PS256_HASH) {
    return SigningAlgorithm::PS256;
  } else if (hashCode == ES256_HASH) {
    return SigningAlgorithm::ES256;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SigningAlgorithm>(hashCode);
  }

  return SigningAlgorithm::NOT_SET;
}

Aws::String GetNameForSigningAlgorithm(SigningAlgorithm enumValue) {
  switch (enumValue) {
    case SigningAlgorithm::NOT_SET:
      return {};
    case SigningAlgorithm::RS256:
      return "RS256";
    case SigningAlgorithm::PS256:
      return "PS256";
    case SigningAlgorithm::ES256:
      return "ES256";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SigningAlgorithmMapper
}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
