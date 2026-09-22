/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudwatchomni/model/IntegrationStatus.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace CloudWatchOmni {
namespace Model {
namespace IntegrationStatusMapper {

static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
static const int DELETED_HASH = HashingUtils::HashString("DELETED");
static const int PENDING_HASH = HashingUtils::HashString("PENDING");
static const int PENDING_OAUTH_HASH = HashingUtils::HashString("PENDING_OAUTH");
static const int ERROR__HASH = HashingUtils::HashString("ERROR");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");

IntegrationStatus GetIntegrationStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ACTIVE_HASH) {
    return IntegrationStatus::ACTIVE;
  } else if (hashCode == DELETED_HASH) {
    return IntegrationStatus::DELETED;
  } else if (hashCode == PENDING_HASH) {
    return IntegrationStatus::PENDING;
  } else if (hashCode == PENDING_OAUTH_HASH) {
    return IntegrationStatus::PENDING_OAUTH;
  } else if (hashCode == ERROR__HASH) {
    return IntegrationStatus::ERROR_;
  } else if (hashCode == FAILED_HASH) {
    return IntegrationStatus::FAILED;
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
    case IntegrationStatus::ACTIVE:
      return "ACTIVE";
    case IntegrationStatus::DELETED:
      return "DELETED";
    case IntegrationStatus::PENDING:
      return "PENDING";
    case IntegrationStatus::PENDING_OAUTH:
      return "PENDING_OAUTH";
    case IntegrationStatus::ERROR_:
      return "ERROR";
    case IntegrationStatus::FAILED:
      return "FAILED";
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
}  // namespace CloudWatchOmni
}  // namespace Aws
