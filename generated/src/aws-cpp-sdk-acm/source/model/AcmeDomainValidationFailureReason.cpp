/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/acm/model/AcmeDomainValidationFailureReason.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace ACM {
namespace Model {
namespace AcmeDomainValidationFailureReasonMapper {

static const int ACCESS_DENIED_HASH = HashingUtils::HashString("ACCESS_DENIED");
static const int DOMAIN_MISMATCH_HASH = HashingUtils::HashString("DOMAIN_MISMATCH");
static const int DOMAIN_NOT_ALLOWED_HASH = HashingUtils::HashString("DOMAIN_NOT_ALLOWED");
static const int ENDPOINT_NOT_ACTIVE_HASH = HashingUtils::HashString("ENDPOINT_NOT_ACTIVE");
static const int HOSTED_ZONE_NOT_FOUND_HASH = HashingUtils::HashString("HOSTED_ZONE_NOT_FOUND");
static const int INTERNAL_FAILURE_HASH = HashingUtils::HashString("INTERNAL_FAILURE");
static const int INVALID_CHANGE_BATCH_HASH = HashingUtils::HashString("INVALID_CHANGE_BATCH");
static const int INVALID_PUBLIC_DOMAIN_HASH = HashingUtils::HashString("INVALID_PUBLIC_DOMAIN");
static const int TIMED_OUT_HASH = HashingUtils::HashString("TIMED_OUT");

AcmeDomainValidationFailureReason GetAcmeDomainValidationFailureReasonForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ACCESS_DENIED_HASH) {
    return AcmeDomainValidationFailureReason::ACCESS_DENIED;
  } else if (hashCode == DOMAIN_MISMATCH_HASH) {
    return AcmeDomainValidationFailureReason::DOMAIN_MISMATCH;
  } else if (hashCode == DOMAIN_NOT_ALLOWED_HASH) {
    return AcmeDomainValidationFailureReason::DOMAIN_NOT_ALLOWED;
  } else if (hashCode == ENDPOINT_NOT_ACTIVE_HASH) {
    return AcmeDomainValidationFailureReason::ENDPOINT_NOT_ACTIVE;
  } else if (hashCode == HOSTED_ZONE_NOT_FOUND_HASH) {
    return AcmeDomainValidationFailureReason::HOSTED_ZONE_NOT_FOUND;
  } else if (hashCode == INTERNAL_FAILURE_HASH) {
    return AcmeDomainValidationFailureReason::INTERNAL_FAILURE;
  } else if (hashCode == INVALID_CHANGE_BATCH_HASH) {
    return AcmeDomainValidationFailureReason::INVALID_CHANGE_BATCH;
  } else if (hashCode == INVALID_PUBLIC_DOMAIN_HASH) {
    return AcmeDomainValidationFailureReason::INVALID_PUBLIC_DOMAIN;
  } else if (hashCode == TIMED_OUT_HASH) {
    return AcmeDomainValidationFailureReason::TIMED_OUT;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AcmeDomainValidationFailureReason>(hashCode);
  }

  return AcmeDomainValidationFailureReason::NOT_SET;
}

Aws::String GetNameForAcmeDomainValidationFailureReason(AcmeDomainValidationFailureReason enumValue) {
  switch (enumValue) {
    case AcmeDomainValidationFailureReason::NOT_SET:
      return {};
    case AcmeDomainValidationFailureReason::ACCESS_DENIED:
      return "ACCESS_DENIED";
    case AcmeDomainValidationFailureReason::DOMAIN_MISMATCH:
      return "DOMAIN_MISMATCH";
    case AcmeDomainValidationFailureReason::DOMAIN_NOT_ALLOWED:
      return "DOMAIN_NOT_ALLOWED";
    case AcmeDomainValidationFailureReason::ENDPOINT_NOT_ACTIVE:
      return "ENDPOINT_NOT_ACTIVE";
    case AcmeDomainValidationFailureReason::HOSTED_ZONE_NOT_FOUND:
      return "HOSTED_ZONE_NOT_FOUND";
    case AcmeDomainValidationFailureReason::INTERNAL_FAILURE:
      return "INTERNAL_FAILURE";
    case AcmeDomainValidationFailureReason::INVALID_CHANGE_BATCH:
      return "INVALID_CHANGE_BATCH";
    case AcmeDomainValidationFailureReason::INVALID_PUBLIC_DOMAIN:
      return "INVALID_PUBLIC_DOMAIN";
    case AcmeDomainValidationFailureReason::TIMED_OUT:
      return "TIMED_OUT";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AcmeDomainValidationFailureReasonMapper
}  // namespace Model
}  // namespace ACM
}  // namespace Aws
