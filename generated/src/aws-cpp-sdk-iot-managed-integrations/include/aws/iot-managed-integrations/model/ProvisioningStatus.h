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
  enum class ProvisioningStatus
  {
    NOT_SET,
    UNASSOCIATED,
    PRE_ASSOCIATED,
    DISCOVERED,
    ACTIVATED,
    DELETION_FAILED,
    DELETE_IN_PROGRESS,
    ISOLATED,
    DELETED
  };

namespace ProvisioningStatusMapper
{
AWS_IOTMANAGEDINTEGRATIONS_API ProvisioningStatus GetProvisioningStatusForName(const Aws::String& name);

AWS_IOTMANAGEDINTEGRATIONS_API Aws::String GetNameForProvisioningStatus(ProvisioningStatus value);
} // namespace ProvisioningStatusMapper
} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
