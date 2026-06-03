/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/inspector2/model/VMScannerStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace Inspector2 {
namespace Model {
namespace VMScannerStatusMapper {

static const int SUCCESS_HASH = HashingUtils::HashString("SUCCESS");
static const int PENDING_HASH = HashingUtils::HashString("PENDING");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");

VMScannerStatus GetVMScannerStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == SUCCESS_HASH) {
    return VMScannerStatus::SUCCESS;
  } else if (hashCode == PENDING_HASH) {
    return VMScannerStatus::PENDING;
  } else if (hashCode == FAILED_HASH) {
    return VMScannerStatus::FAILED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<VMScannerStatus>(hashCode);
  }

  return VMScannerStatus::NOT_SET;
}

Aws::String GetNameForVMScannerStatus(VMScannerStatus enumValue) {
  switch (enumValue) {
    case VMScannerStatus::NOT_SET:
      return {};
    case VMScannerStatus::SUCCESS:
      return "SUCCESS";
    case VMScannerStatus::PENDING:
      return "PENDING";
    case VMScannerStatus::FAILED:
      return "FAILED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace VMScannerStatusMapper
}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
