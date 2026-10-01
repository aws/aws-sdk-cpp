/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/lambda-web/model/RevisionState.h>

using namespace Aws::Utils;

namespace Aws {
namespace LambdaWeb {
namespace Model {
namespace RevisionStateMapper {

static const int Pending_HASH = HashingUtils::HashString("Pending");
static const int Active_HASH = HashingUtils::HashString("Active");
static const int Failed_HASH = HashingUtils::HashString("Failed");

RevisionState GetRevisionStateForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Pending_HASH) {
    return RevisionState::Pending;
  } else if (hashCode == Active_HASH) {
    return RevisionState::Active;
  } else if (hashCode == Failed_HASH) {
    return RevisionState::Failed;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RevisionState>(hashCode);
  }

  return RevisionState::NOT_SET;
}

Aws::String GetNameForRevisionState(RevisionState enumValue) {
  switch (enumValue) {
    case RevisionState::NOT_SET:
      return {};
    case RevisionState::Pending:
      return "Pending";
    case RevisionState::Active:
      return "Active";
    case RevisionState::Failed:
      return "Failed";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RevisionStateMapper
}  // namespace Model
}  // namespace LambdaWeb
}  // namespace Aws
