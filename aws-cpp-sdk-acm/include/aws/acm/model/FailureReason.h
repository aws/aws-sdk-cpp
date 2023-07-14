/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm/ACM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ACM
{
namespace Model
{
  enum class FailureReason
  {
    NOT_SET,
    NO_AVAILABLE_CONTACTS,
    ADDITIONAL_VERIFICATION_REQUIRED,
    DOMAIN_NOT_ALLOWED,
    INVALID_PUBLIC_DOMAIN,
    DOMAIN_VALIDATION_DENIED,
    CAA_ERROR,
    PCA_LIMIT_EXCEEDED,
    PCA_INVALID_ARN,
    PCA_INVALID_STATE,
    PCA_REQUEST_FAILED,
    PCA_NAME_CONSTRAINTS_VALIDATION,
    PCA_RESOURCE_NOT_FOUND,
    PCA_INVALID_ARGS,
    PCA_INVALID_DURATION,
    PCA_ACCESS_DENIED,
    SLR_NOT_FOUND,
    OTHER
  };

namespace FailureReasonMapper
{
AWS_ACM_API FailureReason GetFailureReasonForName(const Aws::String& name);

AWS_ACM_API Aws::String GetNameForFailureReason(FailureReason value);
} // namespace FailureReasonMapper
} // namespace Model
} // namespace ACM
} // namespace Aws
