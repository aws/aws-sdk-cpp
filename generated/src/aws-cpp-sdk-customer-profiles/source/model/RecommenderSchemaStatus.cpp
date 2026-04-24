/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/customer-profiles/model/RecommenderSchemaStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace CustomerProfiles {
namespace Model {
namespace RecommenderSchemaStatusMapper {

static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
static const int DELETING_HASH = HashingUtils::HashString("DELETING");

RecommenderSchemaStatus GetRecommenderSchemaStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ACTIVE_HASH) {
    return RecommenderSchemaStatus::ACTIVE;
  } else if (hashCode == DELETING_HASH) {
    return RecommenderSchemaStatus::DELETING;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RecommenderSchemaStatus>(hashCode);
  }

  return RecommenderSchemaStatus::NOT_SET;
}

Aws::String GetNameForRecommenderSchemaStatus(RecommenderSchemaStatus enumValue) {
  switch (enumValue) {
    case RecommenderSchemaStatus::NOT_SET:
      return {};
    case RecommenderSchemaStatus::ACTIVE:
      return "ACTIVE";
    case RecommenderSchemaStatus::DELETING:
      return "DELETING";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RecommenderSchemaStatusMapper
}  // namespace Model
}  // namespace CustomerProfiles
}  // namespace Aws
