/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigateway/model/ApiStatus.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace APIGateway {
namespace Model {
namespace ApiStatusMapper {

static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
static const int AVAILABLE_HASH = HashingUtils::HashString("AVAILABLE");
static const int PENDING_HASH = HashingUtils::HashString("PENDING");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");

ApiStatus GetApiStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == UPDATING_HASH) {
    return ApiStatus::UPDATING;
  } else if (hashCode == AVAILABLE_HASH) {
    return ApiStatus::AVAILABLE;
  } else if (hashCode == PENDING_HASH) {
    return ApiStatus::PENDING;
  } else if (hashCode == FAILED_HASH) {
    return ApiStatus::FAILED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ApiStatus>(hashCode);
  }

  return ApiStatus::NOT_SET;
}

Aws::String GetNameForApiStatus(ApiStatus enumValue) {
  switch (enumValue) {
    case ApiStatus::NOT_SET:
      return {};
    case ApiStatus::UPDATING:
      return "UPDATING";
    case ApiStatus::AVAILABLE:
      return "AVAILABLE";
    case ApiStatus::PENDING:
      return "PENDING";
    case ApiStatus::FAILED:
      return "FAILED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ApiStatusMapper
}  // namespace Model
}  // namespace APIGateway
}  // namespace Aws
