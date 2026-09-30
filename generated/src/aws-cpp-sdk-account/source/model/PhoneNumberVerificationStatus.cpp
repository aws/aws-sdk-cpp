/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/account/model/PhoneNumberVerificationStatus.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Account {
namespace Model {
namespace PhoneNumberVerificationStatusMapper {

static const int PENDING_HASH = HashingUtils::HashString("PENDING");
static const int VERIFIED_HASH = HashingUtils::HashString("VERIFIED");
static const int UNVERIFIED_HASH = HashingUtils::HashString("UNVERIFIED");
static const int NOT_SUPPORTED_HASH = HashingUtils::HashString("NOT_SUPPORTED");

PhoneNumberVerificationStatus GetPhoneNumberVerificationStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PENDING_HASH) {
    return PhoneNumberVerificationStatus::PENDING;
  } else if (hashCode == VERIFIED_HASH) {
    return PhoneNumberVerificationStatus::VERIFIED;
  } else if (hashCode == UNVERIFIED_HASH) {
    return PhoneNumberVerificationStatus::UNVERIFIED;
  } else if (hashCode == NOT_SUPPORTED_HASH) {
    return PhoneNumberVerificationStatus::NOT_SUPPORTED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<PhoneNumberVerificationStatus>(hashCode);
  }

  return PhoneNumberVerificationStatus::NOT_SET;
}

Aws::String GetNameForPhoneNumberVerificationStatus(PhoneNumberVerificationStatus enumValue) {
  switch (enumValue) {
    case PhoneNumberVerificationStatus::NOT_SET:
      return {};
    case PhoneNumberVerificationStatus::PENDING:
      return "PENDING";
    case PhoneNumberVerificationStatus::VERIFIED:
      return "VERIFIED";
    case PhoneNumberVerificationStatus::UNVERIFIED:
      return "UNVERIFIED";
    case PhoneNumberVerificationStatus::NOT_SUPPORTED:
      return "NOT_SUPPORTED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace PhoneNumberVerificationStatusMapper
}  // namespace Model
}  // namespace Account
}  // namespace Aws
