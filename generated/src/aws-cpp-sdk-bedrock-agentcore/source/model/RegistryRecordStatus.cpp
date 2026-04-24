/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/RegistryRecordStatus.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {
namespace RegistryRecordStatusMapper {

static const int DRAFT_HASH = HashingUtils::HashString("DRAFT");
static const int PENDING_APPROVAL_HASH = HashingUtils::HashString("PENDING_APPROVAL");
static const int APPROVED_HASH = HashingUtils::HashString("APPROVED");
static const int REJECTED_HASH = HashingUtils::HashString("REJECTED");
static const int DEPRECATED_HASH = HashingUtils::HashString("DEPRECATED");

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
}  // namespace BedrockAgentCore
}  // namespace Aws
