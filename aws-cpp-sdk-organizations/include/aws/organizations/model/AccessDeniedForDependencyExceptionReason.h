/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/organizations/Organizations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Organizations
{
namespace Model
{
  enum class AccessDeniedForDependencyExceptionReason
  {
    NOT_SET,
    ACCESS_DENIED_DURING_CREATE_SERVICE_LINKED_ROLE
  };

namespace AccessDeniedForDependencyExceptionReasonMapper
{
AWS_ORGANIZATIONS_API AccessDeniedForDependencyExceptionReason GetAccessDeniedForDependencyExceptionReasonForName(const Aws::String& name);

AWS_ORGANIZATIONS_API Aws::String GetNameForAccessDeniedForDependencyExceptionReason(AccessDeniedForDependencyExceptionReason value);
} // namespace AccessDeniedForDependencyExceptionReasonMapper
} // namespace Model
} // namespace Organizations
} // namespace Aws
