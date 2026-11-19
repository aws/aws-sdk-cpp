/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/inspector2/model/IntegrationStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace Inspector2 {
namespace Model {
namespace IntegrationStatusMapper {

static const int PENDING_HASH = HashingUtils::HashString("PENDING");
static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
static const int INACTIVE_HASH = HashingUtils::HashString("INACTIVE");
static const int DISABLING_HASH = HashingUtils::HashString("DISABLING");
static const int ESTABLISHING_CONNECTION_IN_PROGRESS_HASH = HashingUtils::HashString("ESTABLISHING_CONNECTION_IN_PROGRESS");
static const int ESTABLISHING_CONNECTION_COMPLETED_HASH = HashingUtils::HashString("ESTABLISHING_CONNECTION_COMPLETED");
static const int ESTABLISHING_CONNECTION_FAILED_HASH = HashingUtils::HashString("ESTABLISHING_CONNECTION_FAILED");
static const int PENDING_MANIFEST_CODE_HASH = HashingUtils::HashString("PENDING_MANIFEST_CODE");
static const int DELETE_IN_PROGRESS_HASH = HashingUtils::HashString("DELETE_IN_PROGRESS");
static const int DELETE_FAILED_HASH = HashingUtils::HashString("DELETE_FAILED");

IntegrationStatus GetIntegrationStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PENDING_HASH) {
    return IntegrationStatus::PENDING;
  } else if (hashCode == IN_PROGRESS_HASH) {
    return IntegrationStatus::IN_PROGRESS;
  } else if (hashCode == ACTIVE_HASH) {
    return IntegrationStatus::ACTIVE;
  } else if (hashCode == INACTIVE_HASH) {
    return IntegrationStatus::INACTIVE;
  } else if (hashCode == DISABLING_HASH) {
    return IntegrationStatus::DISABLING;
  } else if (hashCode == ESTABLISHING_CONNECTION_IN_PROGRESS_HASH) {
    return IntegrationStatus::ESTABLISHING_CONNECTION_IN_PROGRESS;
  } else if (hashCode == ESTABLISHING_CONNECTION_COMPLETED_HASH) {
    return IntegrationStatus::ESTABLISHING_CONNECTION_COMPLETED;
  } else if (hashCode == ESTABLISHING_CONNECTION_FAILED_HASH) {
    return IntegrationStatus::ESTABLISHING_CONNECTION_FAILED;
  } else if (hashCode == PENDING_MANIFEST_CODE_HASH) {
    return IntegrationStatus::PENDING_MANIFEST_CODE;
  } else if (hashCode == DELETE_IN_PROGRESS_HASH) {
    return IntegrationStatus::DELETE_IN_PROGRESS;
  } else if (hashCode == DELETE_FAILED_HASH) {
    return IntegrationStatus::DELETE_FAILED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<IntegrationStatus>(hashCode);
  }

  return IntegrationStatus::NOT_SET;
}

Aws::String GetNameForIntegrationStatus(IntegrationStatus enumValue) {
  switch (enumValue) {
    case IntegrationStatus::NOT_SET:
      return {};
    case IntegrationStatus::PENDING:
      return "PENDING";
    case IntegrationStatus::IN_PROGRESS:
      return "IN_PROGRESS";
    case IntegrationStatus::ACTIVE:
      return "ACTIVE";
    case IntegrationStatus::INACTIVE:
      return "INACTIVE";
    case IntegrationStatus::DISABLING:
      return "DISABLING";
    case IntegrationStatus::ESTABLISHING_CONNECTION_IN_PROGRESS:
      return "ESTABLISHING_CONNECTION_IN_PROGRESS";
    case IntegrationStatus::ESTABLISHING_CONNECTION_COMPLETED:
      return "ESTABLISHING_CONNECTION_COMPLETED";
    case IntegrationStatus::ESTABLISHING_CONNECTION_FAILED:
      return "ESTABLISHING_CONNECTION_FAILED";
    case IntegrationStatus::PENDING_MANIFEST_CODE:
      return "PENDING_MANIFEST_CODE";
    case IntegrationStatus::DELETE_IN_PROGRESS:
      return "DELETE_IN_PROGRESS";
    case IntegrationStatus::DELETE_FAILED:
      return "DELETE_FAILED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace IntegrationStatusMapper
}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
