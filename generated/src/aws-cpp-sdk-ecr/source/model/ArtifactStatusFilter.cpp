/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ecr/model/ArtifactStatusFilter.h>

using namespace Aws::Utils;

namespace Aws {
namespace ECR {
namespace Model {
namespace ArtifactStatusFilterMapper {

static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
static const int ARCHIVED_HASH = HashingUtils::HashString("ARCHIVED");
static const int ACTIVATING_HASH = HashingUtils::HashString("ACTIVATING");
static const int ANY_HASH = HashingUtils::HashString("ANY");

ArtifactStatusFilter GetArtifactStatusFilterForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ACTIVE_HASH) {
    return ArtifactStatusFilter::ACTIVE;
  } else if (hashCode == ARCHIVED_HASH) {
    return ArtifactStatusFilter::ARCHIVED;
  } else if (hashCode == ACTIVATING_HASH) {
    return ArtifactStatusFilter::ACTIVATING;
  } else if (hashCode == ANY_HASH) {
    return ArtifactStatusFilter::ANY;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ArtifactStatusFilter>(hashCode);
  }

  return ArtifactStatusFilter::NOT_SET;
}

Aws::String GetNameForArtifactStatusFilter(ArtifactStatusFilter enumValue) {
  switch (enumValue) {
    case ArtifactStatusFilter::NOT_SET:
      return {};
    case ArtifactStatusFilter::ACTIVE:
      return "ACTIVE";
    case ArtifactStatusFilter::ARCHIVED:
      return "ARCHIVED";
    case ArtifactStatusFilter::ACTIVATING:
      return "ACTIVATING";
    case ArtifactStatusFilter::ANY:
      return "ANY";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ArtifactStatusFilterMapper
}  // namespace Model
}  // namespace ECR
}  // namespace Aws
