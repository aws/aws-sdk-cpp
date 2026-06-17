/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/InterceptorPayloadExclusion.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {
namespace InterceptorPayloadExclusionMapper {

static const int RESPONSE_BODY_HASH = HashingUtils::HashString("RESPONSE_BODY");

InterceptorPayloadExclusion GetInterceptorPayloadExclusionForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == RESPONSE_BODY_HASH) {
    return InterceptorPayloadExclusion::RESPONSE_BODY;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<InterceptorPayloadExclusion>(hashCode);
  }

  return InterceptorPayloadExclusion::NOT_SET;
}

Aws::String GetNameForInterceptorPayloadExclusion(InterceptorPayloadExclusion enumValue) {
  switch (enumValue) {
    case InterceptorPayloadExclusion::NOT_SET:
      return {};
    case InterceptorPayloadExclusion::RESPONSE_BODY:
      return "RESPONSE_BODY";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace InterceptorPayloadExclusionMapper
}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
