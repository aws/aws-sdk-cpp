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
  enum class OtaStatus
  {
    NOT_SET,
    IN_PROGRESS,
    CANCELED,
    COMPLETED,
    DELETION_IN_PROGRESS,
    SCHEDULED
  };

namespace OtaStatusMapper
{
AWS_IOTMANAGEDINTEGRATIONS_API OtaStatus GetOtaStatusForName(const Aws::String& name);

AWS_IOTMANAGEDINTEGRATIONS_API Aws::String GetNameForOtaStatus(OtaStatus value);
} // namespace OtaStatusMapper
} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
