/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ConfigService
{
namespace Model
{
  enum class DeliveryStatus
  {
    NOT_SET,
    Success,
    Failure,
    Not_Applicable
  };

namespace DeliveryStatusMapper
{
AWS_CONFIGSERVICE_API DeliveryStatus GetDeliveryStatusForName(const Aws::String& name);

AWS_CONFIGSERVICE_API Aws::String GetNameForDeliveryStatus(DeliveryStatus value);
} // namespace DeliveryStatusMapper
} // namespace Model
} // namespace ConfigService
} // namespace Aws
