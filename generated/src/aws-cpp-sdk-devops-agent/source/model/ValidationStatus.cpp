/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/devops-agent/model/ValidationStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace DevOpsAgent {
namespace Model {
namespace ValidationStatusMapper {

static const int valid_HASH = HashingUtils::HashString("valid");
static const int invalid_HASH = HashingUtils::HashString("invalid");
static const int pending_confirmation_HASH = HashingUtils::HashString("pending-confirmation");

ValidationStatus GetValidationStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == valid_HASH) {
    return ValidationStatus::valid;
  } else if (hashCode == invalid_HASH) {
    return ValidationStatus::invalid;
  } else if (hashCode == pending_confirmation_HASH) {
    return ValidationStatus::pending_confirmation;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ValidationStatus>(hashCode);
  }

  return ValidationStatus::NOT_SET;
}

Aws::String GetNameForValidationStatus(ValidationStatus enumValue) {
  switch (enumValue) {
    case ValidationStatus::NOT_SET:
      return {};
    case ValidationStatus::valid:
      return "valid";
    case ValidationStatus::invalid:
      return "invalid";
    case ValidationStatus::pending_confirmation:
      return "pending-confirmation";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ValidationStatusMapper
}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
