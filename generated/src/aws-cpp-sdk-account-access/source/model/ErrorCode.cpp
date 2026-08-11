/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/account-access/model/ErrorCode.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace AccountAccess {
namespace Model {
namespace ErrorCodeMapper {

static const int AUTHORIZATION_ERROR_HASH = HashingUtils::HashString("AUTHORIZATION_ERROR");
static const int RESOURCE_NOT_FOUND_ERROR_HASH = HashingUtils::HashString("RESOURCE_NOT_FOUND_ERROR");
static const int SERVICE_QUOTA_EXCEEDED_ERROR_HASH = HashingUtils::HashString("SERVICE_QUOTA_EXCEEDED_ERROR");
static const int INTERNAL_SERVICE_ERROR_HASH = HashingUtils::HashString("INTERNAL_SERVICE_ERROR");

ErrorCode GetErrorCodeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == AUTHORIZATION_ERROR_HASH) {
    return ErrorCode::AUTHORIZATION_ERROR;
  } else if (hashCode == RESOURCE_NOT_FOUND_ERROR_HASH) {
    return ErrorCode::RESOURCE_NOT_FOUND_ERROR;
  } else if (hashCode == SERVICE_QUOTA_EXCEEDED_ERROR_HASH) {
    return ErrorCode::SERVICE_QUOTA_EXCEEDED_ERROR;
  } else if (hashCode == INTERNAL_SERVICE_ERROR_HASH) {
    return ErrorCode::INTERNAL_SERVICE_ERROR;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ErrorCode>(hashCode);
  }

  return ErrorCode::NOT_SET;
}

Aws::String GetNameForErrorCode(ErrorCode enumValue) {
  switch (enumValue) {
    case ErrorCode::NOT_SET:
      return {};
    case ErrorCode::AUTHORIZATION_ERROR:
      return "AUTHORIZATION_ERROR";
    case ErrorCode::RESOURCE_NOT_FOUND_ERROR:
      return "RESOURCE_NOT_FOUND_ERROR";
    case ErrorCode::SERVICE_QUOTA_EXCEEDED_ERROR:
      return "SERVICE_QUOTA_EXCEEDED_ERROR";
    case ErrorCode::INTERNAL_SERVICE_ERROR:
      return "INTERNAL_SERVICE_ERROR";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ErrorCodeMapper
}  // namespace Model
}  // namespace AccountAccess
}  // namespace Aws
