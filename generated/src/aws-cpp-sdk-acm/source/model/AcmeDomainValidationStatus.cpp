/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/acm/model/AcmeDomainValidationStatus.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace ACM {
namespace Model {
namespace AcmeDomainValidationStatusMapper {

static const int VALIDATING_HASH = HashingUtils::HashString("VALIDATING");
static const int VALID_HASH = HashingUtils::HashString("VALID");
static const int INVALID_HASH = HashingUtils::HashString("INVALID");
static const int DELETING_HASH = HashingUtils::HashString("DELETING");

AcmeDomainValidationStatus GetAcmeDomainValidationStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == VALIDATING_HASH) {
    return AcmeDomainValidationStatus::VALIDATING;
  } else if (hashCode == VALID_HASH) {
    return AcmeDomainValidationStatus::VALID;
  } else if (hashCode == INVALID_HASH) {
    return AcmeDomainValidationStatus::INVALID;
  } else if (hashCode == DELETING_HASH) {
    return AcmeDomainValidationStatus::DELETING;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AcmeDomainValidationStatus>(hashCode);
  }

  return AcmeDomainValidationStatus::NOT_SET;
}

Aws::String GetNameForAcmeDomainValidationStatus(AcmeDomainValidationStatus enumValue) {
  switch (enumValue) {
    case AcmeDomainValidationStatus::NOT_SET:
      return {};
    case AcmeDomainValidationStatus::VALIDATING:
      return "VALIDATING";
    case AcmeDomainValidationStatus::VALID:
      return "VALID";
    case AcmeDomainValidationStatus::INVALID:
      return "INVALID";
    case AcmeDomainValidationStatus::DELETING:
      return "DELETING";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AcmeDomainValidationStatusMapper
}  // namespace Model
}  // namespace ACM
}  // namespace Aws
