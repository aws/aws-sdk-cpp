/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotevents/IoTEvents_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IoTEvents
{
namespace Model
{
  enum class DetectorModelVersionStatus
  {
    NOT_SET,
    ACTIVE,
    ACTIVATING,
    INACTIVE,
    DEPRECATED,
    DRAFT,
    PAUSED,
    FAILED
  };

namespace DetectorModelVersionStatusMapper
{
AWS_IOTEVENTS_API DetectorModelVersionStatus GetDetectorModelVersionStatusForName(const Aws::String& name);

AWS_IOTEVENTS_API Aws::String GetNameForDetectorModelVersionStatus(DetectorModelVersionStatus value);
} // namespace DetectorModelVersionStatusMapper
} // namespace Model
} // namespace IoTEvents
} // namespace Aws
