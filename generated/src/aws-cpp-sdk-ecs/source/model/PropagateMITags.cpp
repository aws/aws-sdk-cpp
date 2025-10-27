/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ecs/model/PropagateMITags.h>

using namespace Aws::Utils;

namespace Aws {
namespace ECS {
namespace Model {
namespace PropagateMITagsMapper {

static const int CAPACITY_PROVIDER_HASH = HashingUtils::HashString("CAPACITY_PROVIDER");
static const int NONE_HASH = HashingUtils::HashString("NONE");

PropagateMITags GetPropagateMITagsForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CAPACITY_PROVIDER_HASH) {
    return PropagateMITags::CAPACITY_PROVIDER;
  } else if (hashCode == NONE_HASH) {
    return PropagateMITags::NONE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<PropagateMITags>(hashCode);
  }

  return PropagateMITags::NOT_SET;
}

Aws::String GetNameForPropagateMITags(PropagateMITags enumValue) {
  switch (enumValue) {
    case PropagateMITags::NOT_SET:
      return {};
    case PropagateMITags::CAPACITY_PROVIDER:
      return "CAPACITY_PROVIDER";
    case PropagateMITags::NONE:
      return "NONE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace PropagateMITagsMapper
}  // namespace Model
}  // namespace ECS
}  // namespace Aws
