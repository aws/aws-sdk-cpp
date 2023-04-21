/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fms/FMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace FMS
{
namespace Model
{
  enum class OrganizationStatus
  {
    NOT_SET,
    ONBOARDING,
    ONBOARDING_COMPLETE,
    OFFBOARDING,
    OFFBOARDING_COMPLETE
  };

namespace OrganizationStatusMapper
{
AWS_FMS_API OrganizationStatus GetOrganizationStatusForName(const Aws::String& name);

AWS_FMS_API Aws::String GetNameForOrganizationStatus(OrganizationStatus value);
} // namespace OrganizationStatusMapper
} // namespace Model
} // namespace FMS
} // namespace Aws
