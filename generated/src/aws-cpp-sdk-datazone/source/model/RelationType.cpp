/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/datazone/model/RelationType.h>

using namespace Aws::Utils;

namespace Aws {
namespace DataZone {
namespace Model {
namespace RelationTypeMapper {

static const int LINEAGE_HASH = HashingUtils::HashString("LINEAGE");

RelationType GetRelationTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == LINEAGE_HASH) {
    return RelationType::LINEAGE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RelationType>(hashCode);
  }

  return RelationType::NOT_SET;
}

Aws::String GetNameForRelationType(RelationType enumValue) {
  switch (enumValue) {
    case RelationType::NOT_SET:
      return {};
    case RelationType::LINEAGE:
      return "LINEAGE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RelationTypeMapper
}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
