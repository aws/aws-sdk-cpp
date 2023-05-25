/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CleanRooms
{
namespace Model
{
  enum class AccessDeniedExceptionReason
  {
    NOT_SET,
    INSUFFICIENT_PERMISSIONS
  };

namespace AccessDeniedExceptionReasonMapper
{
AWS_CLEANROOMS_API AccessDeniedExceptionReason GetAccessDeniedExceptionReasonForName(const Aws::String& name);

AWS_CLEANROOMS_API Aws::String GetNameForAccessDeniedExceptionReason(AccessDeniedExceptionReason value);
} // namespace AccessDeniedExceptionReasonMapper
} // namespace Model
} // namespace CleanRooms
} // namespace Aws
