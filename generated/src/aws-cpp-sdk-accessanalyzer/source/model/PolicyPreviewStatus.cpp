/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/accessanalyzer/model/PolicyPreviewStatus.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace AccessAnalyzer {
namespace Model {
namespace PolicyPreviewStatusMapper {

static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
static const int PENDING_CREATION_HASH = HashingUtils::HashString("PENDING_CREATION");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");

PolicyPreviewStatus GetPolicyPreviewStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ACTIVE_HASH) {
    return PolicyPreviewStatus::ACTIVE;
  } else if (hashCode == PENDING_CREATION_HASH) {
    return PolicyPreviewStatus::PENDING_CREATION;
  } else if (hashCode == FAILED_HASH) {
    return PolicyPreviewStatus::FAILED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<PolicyPreviewStatus>(hashCode);
  }

  return PolicyPreviewStatus::NOT_SET;
}

Aws::String GetNameForPolicyPreviewStatus(PolicyPreviewStatus enumValue) {
  switch (enumValue) {
    case PolicyPreviewStatus::NOT_SET:
      return {};
    case PolicyPreviewStatus::ACTIVE:
      return "ACTIVE";
    case PolicyPreviewStatus::PENDING_CREATION:
      return "PENDING_CREATION";
    case PolicyPreviewStatus::FAILED:
      return "FAILED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace PolicyPreviewStatusMapper
}  // namespace Model
}  // namespace AccessAnalyzer
}  // namespace Aws
