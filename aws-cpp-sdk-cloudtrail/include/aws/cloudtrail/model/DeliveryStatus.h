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
  enum class DeliveryStatus
  {
    NOT_SET,
    SUCCESS,
    FAILED,
    FAILED_SIGNING_FILE,
    PENDING,
    RESOURCE_NOT_FOUND,
    ACCESS_DENIED,
    ACCESS_DENIED_SIGNING_FILE,
    CANCELLED,
    UNKNOWN
  };

namespace DeliveryStatusMapper
{
AWS_CLOUDTRAIL_API DeliveryStatus GetDeliveryStatusForName(const Aws::String& name);

AWS_CLOUDTRAIL_API Aws::String GetNameForDeliveryStatus(DeliveryStatus value);
} // namespace DeliveryStatusMapper
} // namespace Model
} // namespace CloudTrail
} // namespace Aws
