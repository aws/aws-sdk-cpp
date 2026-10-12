/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/RecordExpiryAction.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {
namespace RecordExpiryActionMapper {

static const int REMOVE_HASH = HashingUtils::HashString("REMOVE");

RecordExpiryAction GetRecordExpiryActionForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == REMOVE_HASH) {
    return RecordExpiryAction::REMOVE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RecordExpiryAction>(hashCode);
  }

  return RecordExpiryAction::NOT_SET;
}

Aws::String GetNameForRecordExpiryAction(RecordExpiryAction enumValue) {
  switch (enumValue) {
    case RecordExpiryAction::NOT_SET:
      return {};
    case RecordExpiryAction::REMOVE:
      return "REMOVE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RecordExpiryActionMapper
}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
