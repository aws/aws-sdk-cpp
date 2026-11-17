/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/elementalinference/model/FrameSamplingMode.h>

using namespace Aws::Utils;

namespace Aws {
namespace ElementalInference {
namespace Model {
namespace FrameSamplingModeMapper {

static const int FIRST_HASH = HashingUtils::HashString("FIRST");
static const int UNIFORM_HASH = HashingUtils::HashString("UNIFORM");
static const int LAST_HASH = HashingUtils::HashString("LAST");

FrameSamplingMode GetFrameSamplingModeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == FIRST_HASH) {
    return FrameSamplingMode::FIRST;
  } else if (hashCode == UNIFORM_HASH) {
    return FrameSamplingMode::UNIFORM;
  } else if (hashCode == LAST_HASH) {
    return FrameSamplingMode::LAST;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<FrameSamplingMode>(hashCode);
  }

  return FrameSamplingMode::NOT_SET;
}

Aws::String GetNameForFrameSamplingMode(FrameSamplingMode enumValue) {
  switch (enumValue) {
    case FrameSamplingMode::NOT_SET:
      return {};
    case FrameSamplingMode::FIRST:
      return "FIRST";
    case FrameSamplingMode::UNIFORM:
      return "UNIFORM";
    case FrameSamplingMode::LAST:
      return "LAST";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace FrameSamplingModeMapper
}  // namespace Model
}  // namespace ElementalInference
}  // namespace Aws
