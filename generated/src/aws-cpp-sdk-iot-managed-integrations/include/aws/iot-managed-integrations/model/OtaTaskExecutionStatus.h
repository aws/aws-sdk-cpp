/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-managed-integrations/IoTManagedIntegrations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IoTManagedIntegrations
{
namespace Model
{
  enum class OtaTaskExecutionStatus
  {
    NOT_SET,
    QUEUED,
    IN_PROGRESS,
    SUCCEEDED,
    FAILED,
    TIMED_OUT,
    REJECTED,
    REMOVED,
    CANCELED
  };

namespace OtaTaskExecutionStatusMapper
{
AWS_IOTMANAGEDINTEGRATIONS_API OtaTaskExecutionStatus GetOtaTaskExecutionStatusForName(const Aws::String& name);

AWS_IOTMANAGEDINTEGRATIONS_API Aws::String GetNameForOtaTaskExecutionStatus(OtaTaskExecutionStatus value);
} // namespace OtaTaskExecutionStatusMapper
} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
