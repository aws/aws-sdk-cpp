/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/ResourceStatus.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace CleanRooms {
namespace Model {
namespace ResourceStatusMapper {

static const int CREATED_HASH = HashingUtils::HashString("CREATED");
static const int POPULATE_STARTED_HASH = HashingUtils::HashString("POPULATE_STARTED");
static const int POPULATE_SUCCESS_HASH = HashingUtils::HashString("POPULATE_SUCCESS");
static const int POPULATE_FAILED_HASH = HashingUtils::HashString("POPULATE_FAILED");
static const int DISALLOWED_BY_DATA_PROVIDER_HASH = HashingUtils::HashString("DISALLOWED_BY_DATA_PROVIDER");
static const int BASE_TABLE_REMOVED_HASH = HashingUtils::HashString("BASE_TABLE_REMOVED");
static const int RETENTION_PERIOD_EXPIRED_HASH = HashingUtils::HashString("RETENTION_PERIOD_EXPIRED");

ResourceStatus GetResourceStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CREATED_HASH) {
    return ResourceStatus::CREATED;
  } else if (hashCode == POPULATE_STARTED_HASH) {
    return ResourceStatus::POPULATE_STARTED;
  } else if (hashCode == POPULATE_SUCCESS_HASH) {
    return ResourceStatus::POPULATE_SUCCESS;
  } else if (hashCode == POPULATE_FAILED_HASH) {
    return ResourceStatus::POPULATE_FAILED;
  } else if (hashCode == DISALLOWED_BY_DATA_PROVIDER_HASH) {
    return ResourceStatus::DISALLOWED_BY_DATA_PROVIDER;
  } else if (hashCode == BASE_TABLE_REMOVED_HASH) {
    return ResourceStatus::BASE_TABLE_REMOVED;
  } else if (hashCode == RETENTION_PERIOD_EXPIRED_HASH) {
    return ResourceStatus::RETENTION_PERIOD_EXPIRED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ResourceStatus>(hashCode);
  }

  return ResourceStatus::NOT_SET;
}

Aws::String GetNameForResourceStatus(ResourceStatus enumValue) {
  switch (enumValue) {
    case ResourceStatus::NOT_SET:
      return {};
    case ResourceStatus::CREATED:
      return "CREATED";
    case ResourceStatus::POPULATE_STARTED:
      return "POPULATE_STARTED";
    case ResourceStatus::POPULATE_SUCCESS:
      return "POPULATE_SUCCESS";
    case ResourceStatus::POPULATE_FAILED:
      return "POPULATE_FAILED";
    case ResourceStatus::DISALLOWED_BY_DATA_PROVIDER:
      return "DISALLOWED_BY_DATA_PROVIDER";
    case ResourceStatus::BASE_TABLE_REMOVED:
      return "BASE_TABLE_REMOVED";
    case ResourceStatus::RETENTION_PERIOD_EXPIRED:
      return "RETENTION_PERIOD_EXPIRED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ResourceStatusMapper
}  // namespace Model
}  // namespace CleanRooms
}  // namespace Aws
