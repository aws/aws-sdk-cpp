/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm/ACM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace ACM {
namespace Model {
enum class AcmeDomainValidationFailureReason {
  NOT_SET,
  ACCESS_DENIED,
  DOMAIN_MISMATCH,
  DOMAIN_NOT_ALLOWED,
  ENDPOINT_NOT_ACTIVE,
  HOSTED_ZONE_NOT_FOUND,
  INTERNAL_FAILURE,
  INVALID_CHANGE_BATCH,
  INVALID_PUBLIC_DOMAIN,
  TIMED_OUT
};

namespace AcmeDomainValidationFailureReasonMapper {
AWS_ACM_API AcmeDomainValidationFailureReason GetAcmeDomainValidationFailureReasonForName(const Aws::String& name);

AWS_ACM_API Aws::String GetNameForAcmeDomainValidationFailureReason(AcmeDomainValidationFailureReason value);
}  // namespace AcmeDomainValidationFailureReasonMapper
}  // namespace Model
}  // namespace ACM
}  // namespace Aws
