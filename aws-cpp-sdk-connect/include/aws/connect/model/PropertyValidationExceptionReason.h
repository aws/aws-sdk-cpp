/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Connect
{
namespace Model
{
  enum class PropertyValidationExceptionReason
  {
    NOT_SET,
    INVALID_FORMAT,
    UNIQUE_CONSTRAINT_VIOLATED,
    REFERENCED_RESOURCE_NOT_FOUND,
    RESOURCE_NAME_ALREADY_EXISTS,
    REQUIRED_PROPERTY_MISSING,
    NOT_SUPPORTED
  };

namespace PropertyValidationExceptionReasonMapper
{
AWS_CONNECT_API PropertyValidationExceptionReason GetPropertyValidationExceptionReasonForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForPropertyValidationExceptionReason(PropertyValidationExceptionReason value);
} // namespace PropertyValidationExceptionReasonMapper
} // namespace Model
} // namespace Connect
} // namespace Aws
