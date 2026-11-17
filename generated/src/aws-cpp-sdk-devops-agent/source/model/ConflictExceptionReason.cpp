/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/devops-agent/model/ConflictExceptionReason.h>

using namespace Aws::Utils;

namespace Aws {
namespace DevOpsAgent {
namespace Model {
namespace ConflictExceptionReasonMapper {

static const int CHAT_ARCHIVED_HASH = HashingUtils::HashString("CHAT_ARCHIVED");

ConflictExceptionReason GetConflictExceptionReasonForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CHAT_ARCHIVED_HASH) {
    return ConflictExceptionReason::CHAT_ARCHIVED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ConflictExceptionReason>(hashCode);
  }

  return ConflictExceptionReason::NOT_SET;
}

Aws::String GetNameForConflictExceptionReason(ConflictExceptionReason enumValue) {
  switch (enumValue) {
    case ConflictExceptionReason::NOT_SET:
      return {};
    case ConflictExceptionReason::CHAT_ARCHIVED:
      return "CHAT_ARCHIVED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ConflictExceptionReasonMapper
}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
