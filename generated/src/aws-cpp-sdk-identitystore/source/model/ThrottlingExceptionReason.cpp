/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/identitystore/model/ThrottlingExceptionReason.h>

using namespace Aws::Utils;

namespace Aws {
namespace IdentityStore {
namespace Model {
namespace ThrottlingExceptionReasonMapper {

static const int KMS_THROTTLING_HASH = HashingUtils::HashString("KMS_THROTTLING");

ThrottlingExceptionReason GetThrottlingExceptionReasonForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == KMS_THROTTLING_HASH) {
    return ThrottlingExceptionReason::KMS_THROTTLING;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ThrottlingExceptionReason>(hashCode);
  }

  return ThrottlingExceptionReason::NOT_SET;
}

Aws::String GetNameForThrottlingExceptionReason(ThrottlingExceptionReason enumValue) {
  switch (enumValue) {
    case ThrottlingExceptionReason::NOT_SET:
      return {};
    case ThrottlingExceptionReason::KMS_THROTTLING:
      return "KMS_THROTTLING";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ThrottlingExceptionReasonMapper
}  // namespace Model
}  // namespace IdentityStore
}  // namespace Aws
