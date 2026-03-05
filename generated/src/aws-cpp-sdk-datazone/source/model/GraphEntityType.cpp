/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/datazone/model/GraphEntityType.h>

using namespace Aws::Utils;

namespace Aws {
namespace DataZone {
namespace Model {
namespace GraphEntityTypeMapper {

static const int LINEAGE_NODE_HASH = HashingUtils::HashString("LINEAGE_NODE");

GraphEntityType GetGraphEntityTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == LINEAGE_NODE_HASH) {
    return GraphEntityType::LINEAGE_NODE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<GraphEntityType>(hashCode);
  }

  return GraphEntityType::NOT_SET;
}

Aws::String GetNameForGraphEntityType(GraphEntityType enumValue) {
  switch (enumValue) {
    case GraphEntityType::NOT_SET:
      return {};
    case GraphEntityType::LINEAGE_NODE:
      return "LINEAGE_NODE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace GraphEntityTypeMapper
}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
