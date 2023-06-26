/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace GuardDuty
{
namespace Model
{
  enum class DetectorStatus
  {
    NOT_SET,
    ENABLED,
    DISABLED
  };

namespace DetectorStatusMapper
{
AWS_GUARDDUTY_API DetectorStatus GetDetectorStatusForName(const Aws::String& name);

AWS_GUARDDUTY_API Aws::String GetNameForDetectorStatus(DetectorStatus value);
} // namespace DetectorStatusMapper
} // namespace Model
} // namespace GuardDuty
} // namespace Aws
