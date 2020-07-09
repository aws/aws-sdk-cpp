/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ebs/EBS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace EBS
{
namespace Model
{
  enum class ValidationExceptionReason
  {
    NOT_SET,
    INVALID_CUSTOMER_KEY,
    INVALID_PAGE_TOKEN,
    INVALID_BLOCK_TOKEN,
    INVALID_SNAPSHOT_ID,
    UNRELATED_SNAPSHOTS,
    INVALID_BLOCK,
    INVALID_CONTENT_ENCODING,
    INVALID_TAG,
    INVALID_DEPENDENCY_REQUEST,
    INVALID_PARAMETER_VALUE,
    INVALID_VOLUME_SIZE
  };

namespace ValidationExceptionReasonMapper
{
AWS_EBS_API ValidationExceptionReason GetValidationExceptionReasonForName(const Aws::String& name);

AWS_EBS_API Aws::String GetNameForValidationExceptionReason(ValidationExceptionReason value);
} // namespace ValidationExceptionReasonMapper
} // namespace Model
} // namespace EBS
} // namespace Aws
