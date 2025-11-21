/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/InputTags.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Bedrock {
namespace Model {
namespace InputTagsMapper {

static const int HONOR_HASH = HashingUtils::HashString("HONOR");
static const int IGNORE_HASH = HashingUtils::HashString("IGNORE");

InputTags GetInputTagsForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == HONOR_HASH) {
    return InputTags::HONOR;
  } else if (hashCode == IGNORE_HASH) {
    return InputTags::IGNORE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<InputTags>(hashCode);
  }

  return InputTags::NOT_SET;
}

Aws::String GetNameForInputTags(InputTags enumValue) {
  switch (enumValue) {
    case InputTags::NOT_SET:
      return {};
    case InputTags::HONOR:
      return "HONOR";
    case InputTags::IGNORE:
      return "IGNORE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace InputTagsMapper
}  // namespace Model
}  // namespace Bedrock
}  // namespace Aws
