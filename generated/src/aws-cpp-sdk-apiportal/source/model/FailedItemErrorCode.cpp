/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apiportal/model/FailedItemErrorCode.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace APIPortal {
namespace Model {
namespace FailedItemErrorCodeMapper {

static const int MANAGED_API_NOT_FOUND_HASH = HashingUtils::HashString("MANAGED_API_NOT_FOUND");
static const int INTERNAL_ERROR_HASH = HashingUtils::HashString("INTERNAL_ERROR");

FailedItemErrorCode GetFailedItemErrorCodeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == MANAGED_API_NOT_FOUND_HASH) {
    return FailedItemErrorCode::MANAGED_API_NOT_FOUND;
  } else if (hashCode == INTERNAL_ERROR_HASH) {
    return FailedItemErrorCode::INTERNAL_ERROR;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<FailedItemErrorCode>(hashCode);
  }

  return FailedItemErrorCode::NOT_SET;
}

Aws::String GetNameForFailedItemErrorCode(FailedItemErrorCode enumValue) {
  switch (enumValue) {
    case FailedItemErrorCode::NOT_SET:
      return {};
    case FailedItemErrorCode::MANAGED_API_NOT_FOUND:
      return "MANAGED_API_NOT_FOUND";
    case FailedItemErrorCode::INTERNAL_ERROR:
      return "INTERNAL_ERROR";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace FailedItemErrorCodeMapper
}  // namespace Model
}  // namespace APIPortal
}  // namespace Aws
