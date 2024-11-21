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
  enum class RefreshScheduleStatus
  {
    NOT_SET,
    ENABLED,
    DISABLED
  };

namespace RefreshScheduleStatusMapper
{
AWS_CLOUDTRAIL_API RefreshScheduleStatus GetRefreshScheduleStatusForName(const Aws::String& name);

AWS_CLOUDTRAIL_API Aws::String GetNameForRefreshScheduleStatus(RefreshScheduleStatus value);
} // namespace RefreshScheduleStatusMapper
} // namespace Model
} // namespace CloudTrail
} // namespace Aws
