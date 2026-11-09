/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/continuum/model/ValidationTerminalStatus.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Continuum {
namespace Model {
namespace ValidationTerminalStatusMapper {

static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");
static const int NO_SOURCE_AVAILABLE_HASH = HashingUtils::HashString("NO_SOURCE_AVAILABLE");
static const int PARTIAL_HASH = HashingUtils::HashString("PARTIAL");

ValidationTerminalStatus GetValidationTerminalStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == COMPLETED_HASH) {
    return ValidationTerminalStatus::COMPLETED;
  } else if (hashCode == FAILED_HASH) {
    return ValidationTerminalStatus::FAILED;
  } else if (hashCode == NO_SOURCE_AVAILABLE_HASH) {
    return ValidationTerminalStatus::NO_SOURCE_AVAILABLE;
  } else if (hashCode == PARTIAL_HASH) {
    return ValidationTerminalStatus::PARTIAL;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ValidationTerminalStatus>(hashCode);
  }

  return ValidationTerminalStatus::NOT_SET;
}

Aws::String GetNameForValidationTerminalStatus(ValidationTerminalStatus enumValue) {
  switch (enumValue) {
    case ValidationTerminalStatus::NOT_SET:
      return {};
    case ValidationTerminalStatus::COMPLETED:
      return "COMPLETED";
    case ValidationTerminalStatus::FAILED:
      return "FAILED";
    case ValidationTerminalStatus::NO_SOURCE_AVAILABLE:
      return "NO_SOURCE_AVAILABLE";
    case ValidationTerminalStatus::PARTIAL:
      return "PARTIAL";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ValidationTerminalStatusMapper
}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
