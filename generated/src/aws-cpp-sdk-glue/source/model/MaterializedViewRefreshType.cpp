/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/glue/model/MaterializedViewRefreshType.h>

using namespace Aws::Utils;

namespace Aws {
namespace Glue {
namespace Model {
namespace MaterializedViewRefreshTypeMapper {

static const int FULL_HASH = HashingUtils::HashString("FULL");
static const int INCREMENTAL_HASH = HashingUtils::HashString("INCREMENTAL");

MaterializedViewRefreshType GetMaterializedViewRefreshTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == FULL_HASH) {
    return MaterializedViewRefreshType::FULL;
  } else if (hashCode == INCREMENTAL_HASH) {
    return MaterializedViewRefreshType::INCREMENTAL;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<MaterializedViewRefreshType>(hashCode);
  }

  return MaterializedViewRefreshType::NOT_SET;
}

Aws::String GetNameForMaterializedViewRefreshType(MaterializedViewRefreshType enumValue) {
  switch (enumValue) {
    case MaterializedViewRefreshType::NOT_SET:
      return {};
    case MaterializedViewRefreshType::FULL:
      return "FULL";
    case MaterializedViewRefreshType::INCREMENTAL:
      return "INCREMENTAL";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace MaterializedViewRefreshTypeMapper
}  // namespace Model
}  // namespace Glue
}  // namespace Aws
