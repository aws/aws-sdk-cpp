/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/datazone/model/RelationDirection.h>

using namespace Aws::Utils;

namespace Aws {
namespace DataZone {
namespace Model {
namespace RelationDirectionMapper {

static const int IN_HASH = HashingUtils::HashString("IN");
static const int OUT_HASH = HashingUtils::HashString("OUT");

RelationDirection GetRelationDirectionForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == IN_HASH) {
    return RelationDirection::IN;
  } else if (hashCode == OUT_HASH) {
    return RelationDirection::OUT;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RelationDirection>(hashCode);
  }

  return RelationDirection::NOT_SET;
}

Aws::String GetNameForRelationDirection(RelationDirection enumValue) {
  switch (enumValue) {
    case RelationDirection::NOT_SET:
      return {};
    case RelationDirection::IN:
      return "IN";
    case RelationDirection::OUT:
      return "OUT";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RelationDirectionMapper
}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
