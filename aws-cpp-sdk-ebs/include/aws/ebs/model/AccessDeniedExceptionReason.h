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
  enum class AccessDeniedExceptionReason
  {
    NOT_SET,
    UNAUTHORIZED_ACCOUNT,
    DEPENDENCY_ACCESS_DENIED
  };

namespace AccessDeniedExceptionReasonMapper
{
AWS_EBS_API AccessDeniedExceptionReason GetAccessDeniedExceptionReasonForName(const Aws::String& name);

AWS_EBS_API Aws::String GetNameForAccessDeniedExceptionReason(AccessDeniedExceptionReason value);
} // namespace AccessDeniedExceptionReasonMapper
} // namespace Model
} // namespace EBS
} // namespace Aws
