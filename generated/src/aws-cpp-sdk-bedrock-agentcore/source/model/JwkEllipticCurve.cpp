/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/JwkEllipticCurve.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {
namespace JwkEllipticCurveMapper {

static const int P_256_HASH = HashingUtils::HashString("P-256");
static const int P_384_HASH = HashingUtils::HashString("P-384");
static const int P_521_HASH = HashingUtils::HashString("P-521");

JwkEllipticCurve GetJwkEllipticCurveForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == P_256_HASH) {
    return JwkEllipticCurve::P_256;
  } else if (hashCode == P_384_HASH) {
    return JwkEllipticCurve::P_384;
  } else if (hashCode == P_521_HASH) {
    return JwkEllipticCurve::P_521;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<JwkEllipticCurve>(hashCode);
  }

  return JwkEllipticCurve::NOT_SET;
}

Aws::String GetNameForJwkEllipticCurve(JwkEllipticCurve enumValue) {
  switch (enumValue) {
    case JwkEllipticCurve::NOT_SET:
      return {};
    case JwkEllipticCurve::P_256:
      return "P-256";
    case JwkEllipticCurve::P_384:
      return "P-384";
    case JwkEllipticCurve::P_521:
      return "P-521";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace JwkEllipticCurveMapper
}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
