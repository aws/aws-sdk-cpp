/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/devops-agent/model/TriggerEvent.h>

using namespace Aws::Utils;

namespace Aws {
namespace DevOpsAgent {
namespace Model {
namespace TriggerEventMapper {

static const int PULL_REQUEST_READY_FOR_REVIEW_HASH = HashingUtils::HashString("PULL_REQUEST_READY_FOR_REVIEW");
static const int PULL_REQUEST_DRAFT_HASH = HashingUtils::HashString("PULL_REQUEST_DRAFT");

TriggerEvent GetTriggerEventForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PULL_REQUEST_READY_FOR_REVIEW_HASH) {
    return TriggerEvent::PULL_REQUEST_READY_FOR_REVIEW;
  } else if (hashCode == PULL_REQUEST_DRAFT_HASH) {
    return TriggerEvent::PULL_REQUEST_DRAFT;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<TriggerEvent>(hashCode);
  }

  return TriggerEvent::NOT_SET;
}

Aws::String GetNameForTriggerEvent(TriggerEvent enumValue) {
  switch (enumValue) {
    case TriggerEvent::NOT_SET:
      return {};
    case TriggerEvent::PULL_REQUEST_READY_FOR_REVIEW:
      return "PULL_REQUEST_READY_FOR_REVIEW";
    case TriggerEvent::PULL_REQUEST_DRAFT:
      return "PULL_REQUEST_DRAFT";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace TriggerEventMapper
}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
