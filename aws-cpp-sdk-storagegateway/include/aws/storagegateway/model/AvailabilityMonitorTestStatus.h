/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace StorageGateway
{
namespace Model
{
  enum class AvailabilityMonitorTestStatus
  {
    NOT_SET,
    COMPLETE,
    FAILED,
    PENDING
  };

namespace AvailabilityMonitorTestStatusMapper
{
AWS_STORAGEGATEWAY_API AvailabilityMonitorTestStatus GetAvailabilityMonitorTestStatusForName(const Aws::String& name);

AWS_STORAGEGATEWAY_API Aws::String GetNameForAvailabilityMonitorTestStatus(AvailabilityMonitorTestStatus value);
} // namespace AvailabilityMonitorTestStatusMapper
} // namespace Model
} // namespace StorageGateway
} // namespace Aws
