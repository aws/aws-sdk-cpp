/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/acm/model/RootHierarchyType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace ACM {
namespace Model {
namespace RootHierarchyTypeMapper {

static const int N2_AMAZON_MANAGED_HASH = HashingUtils::HashString("N2_AMAZON_MANAGED");
static const int N2_SFG2_AMAZON_MANAGED_HASH = HashingUtils::HashString("N2_SFG2_AMAZON_MANAGED");

RootHierarchyType GetRootHierarchyTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == N2_AMAZON_MANAGED_HASH) {
    return RootHierarchyType::N2_AMAZON_MANAGED;
  } else if (hashCode == N2_SFG2_AMAZON_MANAGED_HASH) {
    return RootHierarchyType::N2_SFG2_AMAZON_MANAGED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RootHierarchyType>(hashCode);
  }

  return RootHierarchyType::NOT_SET;
}

Aws::String GetNameForRootHierarchyType(RootHierarchyType enumValue) {
  switch (enumValue) {
    case RootHierarchyType::NOT_SET:
      return {};
    case RootHierarchyType::N2_AMAZON_MANAGED:
      return "N2_AMAZON_MANAGED";
    case RootHierarchyType::N2_SFG2_AMAZON_MANAGED:
      return "N2_SFG2_AMAZON_MANAGED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RootHierarchyTypeMapper
}  // namespace Model
}  // namespace ACM
}  // namespace Aws
