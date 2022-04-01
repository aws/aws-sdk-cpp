/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace NetworkManager
{
namespace Model
{
  enum class ValidationExceptionReason
  {
    NOT_SET,
    UnknownOperation,
    CannotParse,
    FieldValidationFailed,
    Other
  };

namespace ValidationExceptionReasonMapper
{
AWS_NETWORKMANAGER_API ValidationExceptionReason GetValidationExceptionReasonForName(const Aws::String& name);

AWS_NETWORKMANAGER_API Aws::String GetNameForValidationExceptionReason(ValidationExceptionReason value);
} // namespace ValidationExceptionReasonMapper
} // namespace Model
} // namespace NetworkManager
} // namespace Aws
