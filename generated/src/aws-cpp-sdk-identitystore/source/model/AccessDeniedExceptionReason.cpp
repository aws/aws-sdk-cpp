/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/identitystore/model/AccessDeniedExceptionReason.h>

using namespace Aws::Utils;

namespace Aws {
namespace IdentityStore {
namespace Model {
namespace AccessDeniedExceptionReasonMapper {

static const int KMS_ACCESS_DENIED_HASH = HashingUtils::HashString("KMS_ACCESS_DENIED");

AccessDeniedExceptionReason GetAccessDeniedExceptionReasonForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == KMS_ACCESS_DENIED_HASH) {
    return AccessDeniedExceptionReason::KMS_ACCESS_DENIED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AccessDeniedExceptionReason>(hashCode);
  }

  return AccessDeniedExceptionReason::NOT_SET;
}

Aws::String GetNameForAccessDeniedExceptionReason(AccessDeniedExceptionReason enumValue) {
  switch (enumValue) {
    case AccessDeniedExceptionReason::NOT_SET:
      return {};
    case AccessDeniedExceptionReason::KMS_ACCESS_DENIED:
      return "KMS_ACCESS_DENIED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AccessDeniedExceptionReasonMapper
}  // namespace Model
}  // namespace IdentityStore
}  // namespace Aws
