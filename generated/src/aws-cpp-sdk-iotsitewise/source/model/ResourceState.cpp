/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/iotsitewise/model/ResourceState.h>

using namespace Aws::Utils;

namespace Aws {
namespace IoTSiteWise {
namespace Model {
namespace ResourceStateMapper {

static const int CREATING_HASH = HashingUtils::HashString("CREATING");
static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
static const int DELETING_HASH = HashingUtils::HashString("DELETING");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");

ResourceState GetResourceStateForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CREATING_HASH) {
    return ResourceState::CREATING;
  } else if (hashCode == ACTIVE_HASH) {
    return ResourceState::ACTIVE;
  } else if (hashCode == UPDATING_HASH) {
    return ResourceState::UPDATING;
  } else if (hashCode == DELETING_HASH) {
    return ResourceState::DELETING;
  } else if (hashCode == FAILED_HASH) {
    return ResourceState::FAILED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ResourceState>(hashCode);
  }

  return ResourceState::NOT_SET;
}

Aws::String GetNameForResourceState(ResourceState enumValue) {
  switch (enumValue) {
    case ResourceState::NOT_SET:
      return {};
    case ResourceState::CREATING:
      return "CREATING";
    case ResourceState::ACTIVE:
      return "ACTIVE";
    case ResourceState::UPDATING:
      return "UPDATING";
    case ResourceState::DELETING:
      return "DELETING";
    case ResourceState::FAILED:
      return "FAILED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ResourceStateMapper
}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
