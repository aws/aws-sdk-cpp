/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CustomerProfiles
{
namespace Model
{
  enum class StatusReason
  {
    NOT_SET,
    VALIDATION_FAILURE,
    INTERNAL_FAILURE
  };

namespace StatusReasonMapper
{
AWS_CUSTOMERPROFILES_API StatusReason GetStatusReasonForName(const Aws::String& name);

AWS_CUSTOMERPROFILES_API Aws::String GetNameForStatusReason(StatusReason value);
} // namespace StatusReasonMapper
} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
