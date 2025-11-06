/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/identitystore/model/ValidationExceptionReason.h>

using namespace Aws::Utils;

namespace Aws {
namespace IdentityStore {
namespace Model {
namespace ValidationExceptionReasonMapper {

static const int KMS_INVALID_ARN_HASH = HashingUtils::HashString("KMS_INVALID_ARN");
static const int KMS_INVALID_KEY_USAGE_HASH = HashingUtils::HashString("KMS_INVALID_KEY_USAGE");
static const int KMS_INVALID_STATE_HASH = HashingUtils::HashString("KMS_INVALID_STATE");
static const int KMS_DISABLED_HASH = HashingUtils::HashString("KMS_DISABLED");

ValidationExceptionReason GetValidationExceptionReasonForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == KMS_INVALID_ARN_HASH) {
    return ValidationExceptionReason::KMS_INVALID_ARN;
  } else if (hashCode == KMS_INVALID_KEY_USAGE_HASH) {
    return ValidationExceptionReason::KMS_INVALID_KEY_USAGE;
  } else if (hashCode == KMS_INVALID_STATE_HASH) {
    return ValidationExceptionReason::KMS_INVALID_STATE;
  } else if (hashCode == KMS_DISABLED_HASH) {
    return ValidationExceptionReason::KMS_DISABLED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ValidationExceptionReason>(hashCode);
  }

  return ValidationExceptionReason::NOT_SET;
}

Aws::String GetNameForValidationExceptionReason(ValidationExceptionReason enumValue) {
  switch (enumValue) {
    case ValidationExceptionReason::NOT_SET:
      return {};
    case ValidationExceptionReason::KMS_INVALID_ARN:
      return "KMS_INVALID_ARN";
    case ValidationExceptionReason::KMS_INVALID_KEY_USAGE:
      return "KMS_INVALID_KEY_USAGE";
    case ValidationExceptionReason::KMS_INVALID_STATE:
      return "KMS_INVALID_STATE";
    case ValidationExceptionReason::KMS_DISABLED:
      return "KMS_DISABLED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ValidationExceptionReasonMapper
}  // namespace Model
}  // namespace IdentityStore
}  // namespace Aws
