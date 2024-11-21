/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudtrail/CloudTrail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CloudTrail
{
namespace Model
{
  enum class DashboardType
  {
    NOT_SET,
    MANAGED,
    CUSTOM
  };

namespace DashboardTypeMapper
{
AWS_CLOUDTRAIL_API DashboardType GetDashboardTypeForName(const Aws::String& name);

AWS_CLOUDTRAIL_API Aws::String GetNameForDashboardType(DashboardType value);
} // namespace DashboardTypeMapper
} // namespace Model
} // namespace CloudTrail
} // namespace Aws
