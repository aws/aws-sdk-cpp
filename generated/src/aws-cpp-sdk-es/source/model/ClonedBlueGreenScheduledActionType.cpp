/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/es/model/ClonedBlueGreenScheduledActionType.h>

using namespace Aws::Utils;

namespace Aws {
namespace ElasticsearchService {
namespace Model {
namespace ClonedBlueGreenScheduledActionTypeMapper {

static const int AutomaticCutoverToPrimaryCluster_HASH = HashingUtils::HashString("AutomaticCutoverToPrimaryCluster");
static const int DeletePrimaryCluster_HASH = HashingUtils::HashString("DeletePrimaryCluster");

ClonedBlueGreenScheduledActionType GetClonedBlueGreenScheduledActionTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == AutomaticCutoverToPrimaryCluster_HASH) {
    return ClonedBlueGreenScheduledActionType::AutomaticCutoverToPrimaryCluster;
  } else if (hashCode == DeletePrimaryCluster_HASH) {
    return ClonedBlueGreenScheduledActionType::DeletePrimaryCluster;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ClonedBlueGreenScheduledActionType>(hashCode);
  }

  return ClonedBlueGreenScheduledActionType::NOT_SET;
}

Aws::String GetNameForClonedBlueGreenScheduledActionType(ClonedBlueGreenScheduledActionType enumValue) {
  switch (enumValue) {
    case ClonedBlueGreenScheduledActionType::NOT_SET:
      return {};
    case ClonedBlueGreenScheduledActionType::AutomaticCutoverToPrimaryCluster:
      return "AutomaticCutoverToPrimaryCluster";
    case ClonedBlueGreenScheduledActionType::DeletePrimaryCluster:
      return "DeletePrimaryCluster";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ClonedBlueGreenScheduledActionTypeMapper
}  // namespace Model
}  // namespace ElasticsearchService
}  // namespace Aws
