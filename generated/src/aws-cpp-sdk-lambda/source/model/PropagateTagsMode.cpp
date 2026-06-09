/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/lambda/model/PropagateTagsMode.h>

using namespace Aws::Utils;

namespace Aws {
namespace Lambda {
namespace Model {
namespace PropagateTagsModeMapper {

static const int None_HASH = HashingUtils::HashString("None");
static const int Explicit_HASH = HashingUtils::HashString("Explicit");

PropagateTagsMode GetPropagateTagsModeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == None_HASH) {
    return PropagateTagsMode::None;
  } else if (hashCode == Explicit_HASH) {
    return PropagateTagsMode::Explicit;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<PropagateTagsMode>(hashCode);
  }

  return PropagateTagsMode::NOT_SET;
}

Aws::String GetNameForPropagateTagsMode(PropagateTagsMode enumValue) {
  switch (enumValue) {
    case PropagateTagsMode::NOT_SET:
      return {};
    case PropagateTagsMode::None:
      return "None";
    case PropagateTagsMode::Explicit:
      return "Explicit";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace PropagateTagsModeMapper
}  // namespace Model
}  // namespace Lambda
}  // namespace Aws
