/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectscheduling/model/ApprovalType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace ConnectScheduling {
namespace Model {
namespace ApprovalTypeMapper {

static const int AWAIT_APPROVAL_HASH = HashingUtils::HashString("AWAIT_APPROVAL");
static const int AUTOMATIC_HASH = HashingUtils::HashString("AUTOMATIC");

ApprovalType GetApprovalTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == AWAIT_APPROVAL_HASH) {
    return ApprovalType::AWAIT_APPROVAL;
  } else if (hashCode == AUTOMATIC_HASH) {
    return ApprovalType::AUTOMATIC;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ApprovalType>(hashCode);
  }

  return ApprovalType::NOT_SET;
}

Aws::String GetNameForApprovalType(ApprovalType enumValue) {
  switch (enumValue) {
    case ApprovalType::NOT_SET:
      return {};
    case ApprovalType::AWAIT_APPROVAL:
      return "AWAIT_APPROVAL";
    case ApprovalType::AUTOMATIC:
      return "AUTOMATIC";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ApprovalTypeMapper
}  // namespace Model
}  // namespace ConnectScheduling
}  // namespace Aws
