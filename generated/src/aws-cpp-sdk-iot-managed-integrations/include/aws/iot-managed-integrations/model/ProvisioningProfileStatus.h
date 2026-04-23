/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot-managed-integrations/IoTManagedIntegrations_EXPORTS.h>

namespace Aws {
namespace IoTManagedIntegrations {
namespace Model {
enum class ProvisioningProfileStatus { NOT_SET, CREATE_IN_PROGRESS, CREATE_FAILED, CREATED, DELETE_IN_PROGRESS, DELETE_FAILED };

namespace ProvisioningProfileStatusMapper {
AWS_IOTMANAGEDINTEGRATIONS_API ProvisioningProfileStatus GetProvisioningProfileStatusForName(const Aws::String& name);

AWS_IOTMANAGEDINTEGRATIONS_API Aws::String GetNameForProvisioningProfileStatus(ProvisioningProfileStatus value);
}  // namespace ProvisioningProfileStatusMapper
}  // namespace Model
}  // namespace IoTManagedIntegrations
}  // namespace Aws
