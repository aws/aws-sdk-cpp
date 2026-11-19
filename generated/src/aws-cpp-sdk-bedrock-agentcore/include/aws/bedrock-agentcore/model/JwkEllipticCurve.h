/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace BedrockAgentCore {
namespace Model {
enum class JwkEllipticCurve { NOT_SET, P_256, P_384, P_521 };

namespace JwkEllipticCurveMapper {
AWS_BEDROCKAGENTCORE_API JwkEllipticCurve GetJwkEllipticCurveForName(const Aws::String& name);

AWS_BEDROCKAGENTCORE_API Aws::String GetNameForJwkEllipticCurve(JwkEllipticCurve value);
}  // namespace JwkEllipticCurveMapper
}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
