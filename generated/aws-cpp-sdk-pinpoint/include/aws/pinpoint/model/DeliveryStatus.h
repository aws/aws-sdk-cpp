/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Pinpoint
{
namespace Model
{
  enum class DeliveryStatus
  {
    NOT_SET,
    SUCCESSFUL,
    THROTTLED,
    TEMPORARY_FAILURE,
    PERMANENT_FAILURE,
    UNKNOWN_FAILURE,
    OPT_OUT,
    DUPLICATE
  };

namespace DeliveryStatusMapper
{
AWS_PINPOINT_API DeliveryStatus GetDeliveryStatusForName(const Aws::String& name);

AWS_PINPOINT_API Aws::String GetNameForDeliveryStatus(DeliveryStatus value);
} // namespace DeliveryStatusMapper
} // namespace Model
} // namespace Pinpoint
} // namespace Aws
