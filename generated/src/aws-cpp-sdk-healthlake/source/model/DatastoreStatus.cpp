/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/healthlake/model/DatastoreStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace HealthLake {
namespace Model {
namespace DatastoreStatusMapper {

static const int CREATING_HASH = HashingUtils::HashString("CREATING");
static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
static const int DELETING_HASH = HashingUtils::HashString("DELETING");
static const int DELETED_HASH = HashingUtils::HashString("DELETED");
static const int CREATE_FAILED_HASH = HashingUtils::HashString("CREATE_FAILED");
static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
static const int UPDATE_FAILED_HASH = HashingUtils::HashString("UPDATE_FAILED");

DatastoreStatus GetDatastoreStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CREATING_HASH) {
    return DatastoreStatus::CREATING;
  } else if (hashCode == ACTIVE_HASH) {
    return DatastoreStatus::ACTIVE;
  } else if (hashCode == DELETING_HASH) {
    return DatastoreStatus::DELETING;
  } else if (hashCode == DELETED_HASH) {
    return DatastoreStatus::DELETED;
  } else if (hashCode == CREATE_FAILED_HASH) {
    return DatastoreStatus::CREATE_FAILED;
  } else if (hashCode == UPDATING_HASH) {
    return DatastoreStatus::UPDATING;
  } else if (hashCode == UPDATE_FAILED_HASH) {
    return DatastoreStatus::UPDATE_FAILED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DatastoreStatus>(hashCode);
  }

  return DatastoreStatus::NOT_SET;
}

Aws::String GetNameForDatastoreStatus(DatastoreStatus enumValue) {
  switch (enumValue) {
    case DatastoreStatus::NOT_SET:
      return {};
    case DatastoreStatus::CREATING:
      return "CREATING";
    case DatastoreStatus::ACTIVE:
      return "ACTIVE";
    case DatastoreStatus::DELETING:
      return "DELETING";
    case DatastoreStatus::DELETED:
      return "DELETED";
    case DatastoreStatus::CREATE_FAILED:
      return "CREATE_FAILED";
    case DatastoreStatus::UPDATING:
      return "UPDATING";
    case DatastoreStatus::UPDATE_FAILED:
      return "UPDATE_FAILED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DatastoreStatusMapper
}  // namespace Model
}  // namespace HealthLake
}  // namespace Aws
