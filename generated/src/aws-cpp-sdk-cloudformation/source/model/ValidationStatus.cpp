/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/ValidationStatus.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace CloudFormation {
namespace Model {
namespace ValidationStatusMapper {

static const int FAILED_HASH = HashingUtils::HashString("FAILED");
static const int SKIPPED_HASH = HashingUtils::HashString("SKIPPED");

ValidationStatus GetValidationStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == FAILED_HASH) {
    return ValidationStatus::FAILED;
  } else if (hashCode == SKIPPED_HASH) {
    return ValidationStatus::SKIPPED;
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
    case ValidationStatus::FAILED:
      return "FAILED";
    case ValidationStatus::SKIPPED:
      return "SKIPPED";
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
}  // namespace CloudFormation
}  // namespace Aws
