/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/lambda-microvms/model/BuildState.h>

using namespace Aws::Utils;

namespace Aws {
namespace LambdaMicrovms {
namespace Model {
namespace BuildStateMapper {

static const int PENDING_HASH = HashingUtils::HashString("PENDING");
static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
static const int SUCCESSFUL_HASH = HashingUtils::HashString("SUCCESSFUL");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");

BuildState GetBuildStateForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PENDING_HASH) {
    return BuildState::PENDING;
  } else if (hashCode == IN_PROGRESS_HASH) {
    return BuildState::IN_PROGRESS;
  } else if (hashCode == SUCCESSFUL_HASH) {
    return BuildState::SUCCESSFUL;
  } else if (hashCode == FAILED_HASH) {
    return BuildState::FAILED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<BuildState>(hashCode);
  }

  return BuildState::NOT_SET;
}

Aws::String GetNameForBuildState(BuildState enumValue) {
  switch (enumValue) {
    case BuildState::NOT_SET:
      return {};
    case BuildState::PENDING:
      return "PENDING";
    case BuildState::IN_PROGRESS:
      return "IN_PROGRESS";
    case BuildState::SUCCESSFUL:
      return "SUCCESSFUL";
    case BuildState::FAILED:
      return "FAILED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace BuildStateMapper
}  // namespace Model
}  // namespace LambdaMicrovms
}  // namespace Aws
