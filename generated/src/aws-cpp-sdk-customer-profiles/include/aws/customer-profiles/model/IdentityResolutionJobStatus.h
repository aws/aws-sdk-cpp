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
  enum class IdentityResolutionJobStatus
  {
    NOT_SET,
    PENDING,
    PREPROCESSING,
    FIND_MATCHING,
    MERGING,
    COMPLETED,
    PARTIAL_SUCCESS,
    FAILED
  };

namespace IdentityResolutionJobStatusMapper
{
AWS_CUSTOMERPROFILES_API IdentityResolutionJobStatus GetIdentityResolutionJobStatusForName(const Aws::String& name);

AWS_CUSTOMERPROFILES_API Aws::String GetNameForIdentityResolutionJobStatus(IdentityResolutionJobStatus value);
} // namespace IdentityResolutionJobStatusMapper
} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
