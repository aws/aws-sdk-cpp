/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace deadline
{
namespace Model
{
  enum class LicenseEndpointStatus
  {
    NOT_SET,
    CREATE_IN_PROGRESS,
    DELETE_IN_PROGRESS,
    READY,
    NOT_READY
  };

namespace LicenseEndpointStatusMapper
{
AWS_DEADLINE_API LicenseEndpointStatus GetLicenseEndpointStatusForName(const Aws::String& name);

AWS_DEADLINE_API Aws::String GetNameForLicenseEndpointStatus(LicenseEndpointStatus value);
} // namespace LicenseEndpointStatusMapper
} // namespace Model
} // namespace deadline
} // namespace Aws
