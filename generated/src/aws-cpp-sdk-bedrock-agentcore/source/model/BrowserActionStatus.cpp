/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/BrowserActionStatus.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {
namespace BrowserActionStatusMapper {

static const int SUCCESS_HASH = HashingUtils::HashString("SUCCESS");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");

BrowserActionStatus GetBrowserActionStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == SUCCESS_HASH) {
    return BrowserActionStatus::SUCCESS;
  } else if (hashCode == FAILED_HASH) {
    return BrowserActionStatus::FAILED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<BrowserActionStatus>(hashCode);
  }

  return BrowserActionStatus::NOT_SET;
}

Aws::String GetNameForBrowserActionStatus(BrowserActionStatus enumValue) {
  switch (enumValue) {
    case BrowserActionStatus::NOT_SET:
      return {};
    case BrowserActionStatus::SUCCESS:
      return "SUCCESS";
    case BrowserActionStatus::FAILED:
      return "FAILED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace BrowserActionStatusMapper
}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
