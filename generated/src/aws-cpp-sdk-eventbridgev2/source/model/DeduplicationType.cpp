/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/eventbridgev2/model/DeduplicationType.h>

using namespace Aws::Utils;

namespace Aws {
namespace EventBridgeV2 {
namespace Model {
namespace DeduplicationTypeMapper {

static const int CONTENT_BASED_HASH = HashingUtils::HashString("CONTENT_BASED");

DeduplicationType GetDeduplicationTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CONTENT_BASED_HASH) {
    return DeduplicationType::CONTENT_BASED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DeduplicationType>(hashCode);
  }

  return DeduplicationType::NOT_SET;
}

Aws::String GetNameForDeduplicationType(DeduplicationType enumValue) {
  switch (enumValue) {
    case DeduplicationType::NOT_SET:
      return {};
    case DeduplicationType::CONTENT_BASED:
      return "CONTENT_BASED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DeduplicationTypeMapper
}  // namespace Model
}  // namespace EventBridgeV2
}  // namespace Aws
