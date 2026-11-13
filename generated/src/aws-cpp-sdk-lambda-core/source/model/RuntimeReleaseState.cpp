/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/lambda-core/model/RuntimeReleaseState.h>

using namespace Aws::Utils;

namespace Aws {
namespace LambdaCore {
namespace Model {
namespace RuntimeReleaseStateMapper {

static const int PREVIEW_HASH = HashingUtils::HashString("PREVIEW");
static const int GA_HASH = HashingUtils::HashString("GA");
static const int DEPRECATED_HASH = HashingUtils::HashString("DEPRECATED");

RuntimeReleaseState GetRuntimeReleaseStateForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PREVIEW_HASH) {
    return RuntimeReleaseState::PREVIEW;
  } else if (hashCode == GA_HASH) {
    return RuntimeReleaseState::GA;
  } else if (hashCode == DEPRECATED_HASH) {
    return RuntimeReleaseState::DEPRECATED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RuntimeReleaseState>(hashCode);
  }

  return RuntimeReleaseState::NOT_SET;
}

Aws::String GetNameForRuntimeReleaseState(RuntimeReleaseState enumValue) {
  switch (enumValue) {
    case RuntimeReleaseState::NOT_SET:
      return {};
    case RuntimeReleaseState::PREVIEW:
      return "PREVIEW";
    case RuntimeReleaseState::GA:
      return "GA";
    case RuntimeReleaseState::DEPRECATED:
      return "DEPRECATED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RuntimeReleaseStateMapper
}  // namespace Model
}  // namespace LambdaCore
}  // namespace Aws
