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
  enum class DashboardStatus
  {
    NOT_SET,
    CREATING,
    CREATED,
    UPDATING,
    UPDATED,
    DELETING
  };

namespace DashboardStatusMapper
{
AWS_CLOUDTRAIL_API DashboardStatus GetDashboardStatusForName(const Aws::String& name);

AWS_CLOUDTRAIL_API Aws::String GetNameForDashboardStatus(DashboardStatus value);
} // namespace DashboardStatusMapper
} // namespace Model
} // namespace CloudTrail
} // namespace Aws
