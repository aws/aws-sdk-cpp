/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/RegistryRecordStatus.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {
namespace RegistryRecordStatusMapper {

static const int DRAFT_HASH = HashingUtils::HashString("DRAFT");
static const int PENDING_APPROVAL_HASH = HashingUtils::HashString("PENDING_APPROVAL");
static const int APPROVED_HASH = HashingUtils::HashString("APPROVED");
static const int REJECTED_HASH = HashingUtils::HashString("REJECTED");
static const int DEPRECATED_HASH = HashingUtils::HashString("DEPRECATED");
static const int CREATING_HASH = HashingUtils::HashString("CREATING");
static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
static const int CREATE_FAILED_HASH = HashingUtils::HashString("CREATE_FAILED");
static const int UPDATE_FAILED_HASH = HashingUtils::HashString("UPDATE_FAILED");

RegistryRecordStatus GetRegistryRecordStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == DRAFT_HASH) {
    return RegistryRecordStatus::DRAFT;
  } else if (hashCode == PENDING_APPROVAL_HASH) {
    return RegistryRecordStatus::PENDING_APPROVAL;
  } else if (hashCode == APPROVED_HASH) {
    return RegistryRecordStatus::APPROVED;
  } else if (hashCode == REJECTED_HASH) {
    return RegistryRecordStatus::REJECTED;
  } else if (hashCode == DEPRECATED_HASH) {
    return RegistryRecordStatus::DEPRECATED;
  } else if (hashCode == CREATING_HASH) {
    return RegistryRecordStatus::CREATING;
  } else if (hashCode == UPDATING_HASH) {
    return RegistryRecordStatus::UPDATING;
  } else if (hashCode == CREATE_FAILED_HASH) {
    return RegistryRecordStatus::CREATE_FAILED;
  } else if (hashCode == UPDATE_FAILED_HASH) {
    return RegistryRecordStatus::UPDATE_FAILED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RegistryRecordStatus>(hashCode);
  }

  return RegistryRecordStatus::NOT_SET;
}

Aws::String GetNameForRegistryRecordStatus(RegistryRecordStatus enumValue) {
  switch (enumValue) {
    case RegistryRecordStatus::NOT_SET:
      return {};
    case RegistryRecordStatus::DRAFT:
      return "DRAFT";
    case RegistryRecordStatus::PENDING_APPROVAL:
      return "PENDING_APPROVAL";
    case RegistryRecordStatus::APPROVED:
      return "APPROVED";
    case RegistryRecordStatus::REJECTED:
      return "REJECTED";
    case RegistryRecordStatus::DEPRECATED:
      return "DEPRECATED";
    case RegistryRecordStatus::CREATING:
      return "CREATING";
    case RegistryRecordStatus::UPDATING:
      return "UPDATING";
    case RegistryRecordStatus::CREATE_FAILED:
      return "CREATE_FAILED";
    case RegistryRecordStatus::UPDATE_FAILED:
      return "UPDATE_FAILED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RegistryRecordStatusMapper
}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
