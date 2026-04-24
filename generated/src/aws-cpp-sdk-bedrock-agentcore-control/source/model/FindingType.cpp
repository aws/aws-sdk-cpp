/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/FindingType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {
namespace FindingTypeMapper {

static const int VALID_HASH = HashingUtils::HashString("VALID");
static const int INVALID_HASH = HashingUtils::HashString("INVALID");
static const int NOT_TRANSLATABLE_HASH = HashingUtils::HashString("NOT_TRANSLATABLE");
static const int ALLOW_ALL_HASH = HashingUtils::HashString("ALLOW_ALL");
static const int ALLOW_NONE_HASH = HashingUtils::HashString("ALLOW_NONE");
static const int DENY_ALL_HASH = HashingUtils::HashString("DENY_ALL");
static const int DENY_NONE_HASH = HashingUtils::HashString("DENY_NONE");

FindingType GetFindingTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == VALID_HASH) {
    return FindingType::VALID;
  } else if (hashCode == INVALID_HASH) {
    return FindingType::INVALID;
  } else if (hashCode == NOT_TRANSLATABLE_HASH) {
    return FindingType::NOT_TRANSLATABLE;
  } else if (hashCode == ALLOW_ALL_HASH) {
    return FindingType::ALLOW_ALL;
  } else if (hashCode == ALLOW_NONE_HASH) {
    return FindingType::ALLOW_NONE;
  } else if (hashCode == DENY_ALL_HASH) {
    return FindingType::DENY_ALL;
  } else if (hashCode == DENY_NONE_HASH) {
    return FindingType::DENY_NONE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<FindingType>(hashCode);
  }

  return FindingType::NOT_SET;
}

Aws::String GetNameForFindingType(FindingType enumValue) {
  switch (enumValue) {
    case FindingType::NOT_SET:
      return {};
    case FindingType::VALID:
      return "VALID";
    case FindingType::INVALID:
      return "INVALID";
    case FindingType::NOT_TRANSLATABLE:
      return "NOT_TRANSLATABLE";
    case FindingType::ALLOW_ALL:
      return "ALLOW_ALL";
    case FindingType::ALLOW_NONE:
      return "ALLOW_NONE";
    case FindingType::DENY_ALL:
      return "DENY_ALL";
    case FindingType::DENY_NONE:
      return "DENY_NONE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace FindingTypeMapper
}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
