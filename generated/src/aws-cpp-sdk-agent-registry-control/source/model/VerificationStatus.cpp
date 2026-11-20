/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/agent-registry-control/model/VerificationStatus.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace AgentRegistryControl {
namespace Model {
namespace VerificationStatusMapper {

static const int ACTION_REQUIRED_HASH = HashingUtils::HashString("ACTION_REQUIRED");
static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");
static const int SUSPENDED_HASH = HashingUtils::HashString("SUSPENDED");
static const int DELETING_HASH = HashingUtils::HashString("DELETING");

VerificationStatus GetVerificationStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ACTION_REQUIRED_HASH) {
    return VerificationStatus::ACTION_REQUIRED;
  } else if (hashCode == ACTIVE_HASH) {
    return VerificationStatus::ACTIVE;
  } else if (hashCode == FAILED_HASH) {
    return VerificationStatus::FAILED;
  } else if (hashCode == SUSPENDED_HASH) {
    return VerificationStatus::SUSPENDED;
  } else if (hashCode == DELETING_HASH) {
    return VerificationStatus::DELETING;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<VerificationStatus>(hashCode);
  }

  return VerificationStatus::NOT_SET;
}

Aws::String GetNameForVerificationStatus(VerificationStatus enumValue) {
  switch (enumValue) {
    case VerificationStatus::NOT_SET:
      return {};
    case VerificationStatus::ACTION_REQUIRED:
      return "ACTION_REQUIRED";
    case VerificationStatus::ACTIVE:
      return "ACTIVE";
    case VerificationStatus::FAILED:
      return "FAILED";
    case VerificationStatus::SUSPENDED:
      return "SUSPENDED";
    case VerificationStatus::DELETING:
      return "DELETING";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace VerificationStatusMapper
}  // namespace Model
}  // namespace AgentRegistryControl
}  // namespace Aws
