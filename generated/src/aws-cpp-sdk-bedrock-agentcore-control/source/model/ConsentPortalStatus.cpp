/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/ConsentPortalStatus.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {
namespace ConsentPortalStatusMapper {

static const int CREATING_HASH = HashingUtils::HashString("CREATING");
static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
static const int UPDATE_FAILED_HASH = HashingUtils::HashString("UPDATE_FAILED");
static const int DELETING_HASH = HashingUtils::HashString("DELETING");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");

ConsentPortalStatus GetConsentPortalStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CREATING_HASH) {
    return ConsentPortalStatus::CREATING;
  } else if (hashCode == ACTIVE_HASH) {
    return ConsentPortalStatus::ACTIVE;
  } else if (hashCode == UPDATING_HASH) {
    return ConsentPortalStatus::UPDATING;
  } else if (hashCode == UPDATE_FAILED_HASH) {
    return ConsentPortalStatus::UPDATE_FAILED;
  } else if (hashCode == DELETING_HASH) {
    return ConsentPortalStatus::DELETING;
  } else if (hashCode == FAILED_HASH) {
    return ConsentPortalStatus::FAILED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ConsentPortalStatus>(hashCode);
  }

  return ConsentPortalStatus::NOT_SET;
}

Aws::String GetNameForConsentPortalStatus(ConsentPortalStatus enumValue) {
  switch (enumValue) {
    case ConsentPortalStatus::NOT_SET:
      return {};
    case ConsentPortalStatus::CREATING:
      return "CREATING";
    case ConsentPortalStatus::ACTIVE:
      return "ACTIVE";
    case ConsentPortalStatus::UPDATING:
      return "UPDATING";
    case ConsentPortalStatus::UPDATE_FAILED:
      return "UPDATE_FAILED";
    case ConsentPortalStatus::DELETING:
      return "DELETING";
    case ConsentPortalStatus::FAILED:
      return "FAILED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ConsentPortalStatusMapper
}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
