/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Macie2
{
namespace Model
{
  enum class UnavailabilityReasonCode
  {
    NOT_SET,
    OBJECT_EXCEEDS_SIZE_QUOTA,
    UNSUPPORTED_OBJECT_TYPE,
    UNSUPPORTED_FINDING_TYPE,
    INVALID_CLASSIFICATION_RESULT,
    OBJECT_UNAVAILABLE,
    ACCOUNT_NOT_IN_ORGANIZATION,
    MISSING_GET_MEMBER_PERMISSION,
    ROLE_TOO_PERMISSIVE,
    MEMBER_ROLE_TOO_PERMISSIVE,
    INVALID_RESULT_SIGNATURE,
    RESULT_NOT_SIGNED
  };

namespace UnavailabilityReasonCodeMapper
{
AWS_MACIE2_API UnavailabilityReasonCode GetUnavailabilityReasonCodeForName(const Aws::String& name);

AWS_MACIE2_API Aws::String GetNameForUnavailabilityReasonCode(UnavailabilityReasonCode value);
} // namespace UnavailabilityReasonCodeMapper
} // namespace Model
} // namespace Macie2
} // namespace Aws
