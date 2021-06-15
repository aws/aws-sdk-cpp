/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace-data/FinSpaceData_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace FinSpaceData
{
namespace Model
{
  enum class ErrorCategory
  {
    NOT_SET,
    The_inputs_to_this_request_are_invalid,
    Service_limits_have_been_exceeded,
    Missing_required_permission_to_perform_this_request,
    One_or_more_inputs_to_this_request_were_not_found,
    The_system_temporarily_lacks_sufficient_resources_to_process_the_request,
    An_internal_error_has_occurred,
    Cancelled,
    A_user_recoverable_error_has_occurred
  };

namespace ErrorCategoryMapper
{
AWS_FINSPACEDATA_API ErrorCategory GetErrorCategoryForName(const Aws::String& name);

AWS_FINSPACEDATA_API Aws::String GetNameForErrorCategory(ErrorCategory value);
} // namespace ErrorCategoryMapper
} // namespace Model
} // namespace FinSpaceData
} // namespace Aws
