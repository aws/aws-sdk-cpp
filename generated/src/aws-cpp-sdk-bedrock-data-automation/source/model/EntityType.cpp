/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-data-automation/model/EntityType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockDataAutomation {
namespace Model {
namespace EntityTypeMapper {

static const int VOCABULARY_HASH = HashingUtils::HashString("VOCABULARY");

EntityType GetEntityTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == VOCABULARY_HASH) {
    return EntityType::VOCABULARY;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<EntityType>(hashCode);
  }

  return EntityType::NOT_SET;
}

Aws::String GetNameForEntityType(EntityType enumValue) {
  switch (enumValue) {
    case EntityType::NOT_SET:
      return {};
    case EntityType::VOCABULARY:
      return "VOCABULARY";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace EntityTypeMapper
}  // namespace Model
}  // namespace BedrockDataAutomation
}  // namespace Aws
