/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/elementalinference/model/BedrockApi.h>

using namespace Aws::Utils;

namespace Aws {
namespace ElementalInference {
namespace Model {
namespace BedrockApiMapper {

static const int INVOKE_MODEL_HASH = HashingUtils::HashString("INVOKE_MODEL");

BedrockApi GetBedrockApiForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == INVOKE_MODEL_HASH) {
    return BedrockApi::INVOKE_MODEL;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<BedrockApi>(hashCode);
  }

  return BedrockApi::NOT_SET;
}

Aws::String GetNameForBedrockApi(BedrockApi enumValue) {
  switch (enumValue) {
    case BedrockApi::NOT_SET:
      return {};
    case BedrockApi::INVOKE_MODEL:
      return "INVOKE_MODEL";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace BedrockApiMapper
}  // namespace Model
}  // namespace ElementalInference
}  // namespace Aws
