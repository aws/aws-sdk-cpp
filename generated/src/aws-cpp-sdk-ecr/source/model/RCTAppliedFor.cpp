/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ecr/model/RCTAppliedFor.h>

using namespace Aws::Utils;

namespace Aws {
namespace ECR {
namespace Model {
namespace RCTAppliedForMapper {

static const int REPLICATION_HASH = HashingUtils::HashString("REPLICATION");
static const int PULL_THROUGH_CACHE_HASH = HashingUtils::HashString("PULL_THROUGH_CACHE");
static const int CREATE_ON_PUSH_HASH = HashingUtils::HashString("CREATE_ON_PUSH");

RCTAppliedFor GetRCTAppliedForForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == REPLICATION_HASH) {
    return RCTAppliedFor::REPLICATION;
  } else if (hashCode == PULL_THROUGH_CACHE_HASH) {
    return RCTAppliedFor::PULL_THROUGH_CACHE;
  } else if (hashCode == CREATE_ON_PUSH_HASH) {
    return RCTAppliedFor::CREATE_ON_PUSH;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RCTAppliedFor>(hashCode);
  }

  return RCTAppliedFor::NOT_SET;
}

Aws::String GetNameForRCTAppliedFor(RCTAppliedFor enumValue) {
  switch (enumValue) {
    case RCTAppliedFor::NOT_SET:
      return {};
    case RCTAppliedFor::REPLICATION:
      return "REPLICATION";
    case RCTAppliedFor::PULL_THROUGH_CACHE:
      return "PULL_THROUGH_CACHE";
    case RCTAppliedFor::CREATE_ON_PUSH:
      return "CREATE_ON_PUSH";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RCTAppliedForMapper
}  // namespace Model
}  // namespace ECR
}  // namespace Aws
