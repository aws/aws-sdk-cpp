/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/acm/model/UpdateStatus.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace ACM {
namespace Model {
namespace UpdateStatusMapper {

static const int PENDING_DOMAIN_VALIDATION_HASH = HashingUtils::HashString("PENDING_DOMAIN_VALIDATION");
static const int SUCCESS_HASH = HashingUtils::HashString("SUCCESS");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");

UpdateStatus GetUpdateStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PENDING_DOMAIN_VALIDATION_HASH) {
    return UpdateStatus::PENDING_DOMAIN_VALIDATION;
  } else if (hashCode == SUCCESS_HASH) {
    return UpdateStatus::SUCCESS;
  } else if (hashCode == FAILED_HASH) {
    return UpdateStatus::FAILED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<UpdateStatus>(hashCode);
  }

  return UpdateStatus::NOT_SET;
}

Aws::String GetNameForUpdateStatus(UpdateStatus enumValue) {
  switch (enumValue) {
    case UpdateStatus::NOT_SET:
      return {};
    case UpdateStatus::PENDING_DOMAIN_VALIDATION:
      return "PENDING_DOMAIN_VALIDATION";
    case UpdateStatus::SUCCESS:
      return "SUCCESS";
    case UpdateStatus::FAILED:
      return "FAILED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace UpdateStatusMapper
}  // namespace Model
}  // namespace ACM
}  // namespace Aws
