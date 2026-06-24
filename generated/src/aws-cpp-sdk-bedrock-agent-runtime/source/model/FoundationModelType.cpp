/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/FoundationModelType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentRuntime {
namespace Model {
namespace FoundationModelTypeMapper {

static const int CUSTOM_HASH = HashingUtils::HashString("CUSTOM");
static const int MANAGED_HASH = HashingUtils::HashString("MANAGED");

FoundationModelType GetFoundationModelTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CUSTOM_HASH) {
    return FoundationModelType::CUSTOM;
  } else if (hashCode == MANAGED_HASH) {
    return FoundationModelType::MANAGED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<FoundationModelType>(hashCode);
  }

  return FoundationModelType::NOT_SET;
}

Aws::String GetNameForFoundationModelType(FoundationModelType enumValue) {
  switch (enumValue) {
    case FoundationModelType::NOT_SET:
      return {};
    case FoundationModelType::CUSTOM:
      return "CUSTOM";
    case FoundationModelType::MANAGED:
      return "MANAGED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace FoundationModelTypeMapper
}  // namespace Model
}  // namespace BedrockAgentRuntime
}  // namespace Aws
