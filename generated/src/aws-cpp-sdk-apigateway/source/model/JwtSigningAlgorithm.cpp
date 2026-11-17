/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigateway/model/JwtSigningAlgorithm.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace APIGateway {
namespace Model {
namespace JwtSigningAlgorithmMapper {

static const int RS256_HASH = HashingUtils::HashString("RS256");
static const int RS384_HASH = HashingUtils::HashString("RS384");
static const int RS512_HASH = HashingUtils::HashString("RS512");
static const int ES256_HASH = HashingUtils::HashString("ES256");
static const int ES384_HASH = HashingUtils::HashString("ES384");
static const int ES512_HASH = HashingUtils::HashString("ES512");

JwtSigningAlgorithm GetJwtSigningAlgorithmForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == RS256_HASH) {
    return JwtSigningAlgorithm::RS256;
  } else if (hashCode == RS384_HASH) {
    return JwtSigningAlgorithm::RS384;
  } else if (hashCode == RS512_HASH) {
    return JwtSigningAlgorithm::RS512;
  } else if (hashCode == ES256_HASH) {
    return JwtSigningAlgorithm::ES256;
  } else if (hashCode == ES384_HASH) {
    return JwtSigningAlgorithm::ES384;
  } else if (hashCode == ES512_HASH) {
    return JwtSigningAlgorithm::ES512;
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
    case JwtSigningAlgorithm::RS384:
      return "RS384";
    case JwtSigningAlgorithm::RS512:
      return "RS512";
    case JwtSigningAlgorithm::ES256:
      return "ES256";
    case JwtSigningAlgorithm::ES384:
      return "ES384";
    case JwtSigningAlgorithm::ES512:
      return "ES512";
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
}  // namespace APIGateway
}  // namespace Aws
