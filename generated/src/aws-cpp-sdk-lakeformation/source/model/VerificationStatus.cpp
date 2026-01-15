/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/lakeformation/model/VerificationStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace LakeFormation {
namespace Model {
namespace VerificationStatusMapper {

static const int VERIFIED_HASH = HashingUtils::HashString("VERIFIED");
static const int VERIFICATION_FAILED_HASH = HashingUtils::HashString("VERIFICATION_FAILED");
static const int NOT_VERIFIED_HASH = HashingUtils::HashString("NOT_VERIFIED");

VerificationStatus GetVerificationStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == VERIFIED_HASH) {
    return VerificationStatus::VERIFIED;
  } else if (hashCode == VERIFICATION_FAILED_HASH) {
    return VerificationStatus::VERIFICATION_FAILED;
  } else if (hashCode == NOT_VERIFIED_HASH) {
    return VerificationStatus::NOT_VERIFIED;
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
    case VerificationStatus::VERIFIED:
      return "VERIFIED";
    case VerificationStatus::VERIFICATION_FAILED:
      return "VERIFICATION_FAILED";
    case VerificationStatus::NOT_VERIFIED:
      return "NOT_VERIFIED";
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
}  // namespace LakeFormation
}  // namespace Aws
