/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/DraftStatus.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {
namespace DraftStatusMapper {

static const int MODIFIED_HASH = HashingUtils::HashString("MODIFIED");
static const int UNMODIFIED_HASH = HashingUtils::HashString("UNMODIFIED");

DraftStatus GetDraftStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == MODIFIED_HASH) {
    return DraftStatus::MODIFIED;
  } else if (hashCode == UNMODIFIED_HASH) {
    return DraftStatus::UNMODIFIED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DraftStatus>(hashCode);
  }

  return DraftStatus::NOT_SET;
}

Aws::String GetNameForDraftStatus(DraftStatus enumValue) {
  switch (enumValue) {
    case DraftStatus::NOT_SET:
      return {};
    case DraftStatus::MODIFIED:
      return "MODIFIED";
    case DraftStatus::UNMODIFIED:
      return "UNMODIFIED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DraftStatusMapper
}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
