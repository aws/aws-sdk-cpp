/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/DriftIgnoredReason.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace CloudFormation {
namespace Model {
namespace DriftIgnoredReasonMapper {

static const int MANAGED_BY_AWS_HASH = HashingUtils::HashString("MANAGED_BY_AWS");
static const int WRITE_ONLY_PROPERTY_HASH = HashingUtils::HashString("WRITE_ONLY_PROPERTY");

DriftIgnoredReason GetDriftIgnoredReasonForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == MANAGED_BY_AWS_HASH) {
    return DriftIgnoredReason::MANAGED_BY_AWS;
  } else if (hashCode == WRITE_ONLY_PROPERTY_HASH) {
    return DriftIgnoredReason::WRITE_ONLY_PROPERTY;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DriftIgnoredReason>(hashCode);
  }

  return DriftIgnoredReason::NOT_SET;
}

Aws::String GetNameForDriftIgnoredReason(DriftIgnoredReason enumValue) {
  switch (enumValue) {
    case DriftIgnoredReason::NOT_SET:
      return {};
    case DriftIgnoredReason::MANAGED_BY_AWS:
      return "MANAGED_BY_AWS";
    case DriftIgnoredReason::WRITE_ONLY_PROPERTY:
      return "WRITE_ONLY_PROPERTY";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DriftIgnoredReasonMapper
}  // namespace Model
}  // namespace CloudFormation
}  // namespace Aws
