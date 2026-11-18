/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/abuse-signal/model/ReasonCode.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace AbuseSignal {
namespace Model {
namespace ReasonCodeMapper {

static const int ACTIONED_HASH = HashingUtils::HashString("ACTIONED");
static const int NOT_RESOLVABLE_TO_AWS_HASH = HashingUtils::HashString("NOT_RESOLVABLE_TO_AWS");
static const int REVIEWED_NO_AWS_ACTION_HASH = HashingUtils::HashString("REVIEWED_NO_AWS_ACTION");
static const int CONTENT_DOWN_OR_INACCESSIBLE_HASH = HashingUtils::HashString("CONTENT_DOWN_OR_INACCESSIBLE");
static const int NEED_MORE_INFORMATION_HASH = HashingUtils::HashString("NEED_MORE_INFORMATION");

ReasonCode GetReasonCodeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ACTIONED_HASH) {
    return ReasonCode::ACTIONED;
  } else if (hashCode == NOT_RESOLVABLE_TO_AWS_HASH) {
    return ReasonCode::NOT_RESOLVABLE_TO_AWS;
  } else if (hashCode == REVIEWED_NO_AWS_ACTION_HASH) {
    return ReasonCode::REVIEWED_NO_AWS_ACTION;
  } else if (hashCode == CONTENT_DOWN_OR_INACCESSIBLE_HASH) {
    return ReasonCode::CONTENT_DOWN_OR_INACCESSIBLE;
  } else if (hashCode == NEED_MORE_INFORMATION_HASH) {
    return ReasonCode::NEED_MORE_INFORMATION;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ReasonCode>(hashCode);
  }

  return ReasonCode::NOT_SET;
}

Aws::String GetNameForReasonCode(ReasonCode enumValue) {
  switch (enumValue) {
    case ReasonCode::NOT_SET:
      return {};
    case ReasonCode::ACTIONED:
      return "ACTIONED";
    case ReasonCode::NOT_RESOLVABLE_TO_AWS:
      return "NOT_RESOLVABLE_TO_AWS";
    case ReasonCode::REVIEWED_NO_AWS_ACTION:
      return "REVIEWED_NO_AWS_ACTION";
    case ReasonCode::CONTENT_DOWN_OR_INACCESSIBLE:
      return "CONTENT_DOWN_OR_INACCESSIBLE";
    case ReasonCode::NEED_MORE_INFORMATION:
      return "NEED_MORE_INFORMATION";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ReasonCodeMapper
}  // namespace Model
}  // namespace AbuseSignal
}  // namespace Aws
