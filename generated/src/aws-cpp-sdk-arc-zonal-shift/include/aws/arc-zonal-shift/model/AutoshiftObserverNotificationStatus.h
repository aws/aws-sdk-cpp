/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/arc-zonal-shift/ARCZonalShift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ARCZonalShift
{
namespace Model
{
  enum class AutoshiftObserverNotificationStatus
  {
    NOT_SET,
    ENABLED,
    DISABLED
  };

namespace AutoshiftObserverNotificationStatusMapper
{
AWS_ARCZONALSHIFT_API AutoshiftObserverNotificationStatus GetAutoshiftObserverNotificationStatusForName(const Aws::String& name);

AWS_ARCZONALSHIFT_API Aws::String GetNameForAutoshiftObserverNotificationStatus(AutoshiftObserverNotificationStatus value);
} // namespace AutoshiftObserverNotificationStatusMapper
} // namespace Model
} // namespace ARCZonalShift
} // namespace Aws
