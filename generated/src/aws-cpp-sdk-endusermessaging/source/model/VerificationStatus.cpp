/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/endusermessaging/model/VerificationStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace EndUserMessaging {
namespace Model {
namespace VerificationStatusMapper {

static const int VALID_HASH = HashingUtils::HashString("VALID");
static const int INVALID_HASH = HashingUtils::HashString("INVALID");

VerificationStatus GetVerificationStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == VALID_HASH) {
    return VerificationStatus::VALID;
  } else if (hashCode == INVALID_HASH) {
    return VerificationStatus::INVALID;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<VerificationStatus>(hashCode);
  }

  return VerificationStatus::NOT_SET;
}

Aws::String GetNameForVerificationStatus(VerificationStatus enumValue) {
  switch (enumValue) {
    case VerificationStatus::NOT_SET:
      return {};
    case VerificationStatus::VALID:
      return "VALID";
    case VerificationStatus::INVALID:
      return "INVALID";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace VerificationStatusMapper
}  // namespace Model
}  // namespace EndUserMessaging
}  // namespace Aws
