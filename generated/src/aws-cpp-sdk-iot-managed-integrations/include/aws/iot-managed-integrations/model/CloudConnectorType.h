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
enum class CloudConnectorType { NOT_SET, LISTED, UNLISTED };

namespace CloudConnectorTypeMapper {
AWS_IOTMANAGEDINTEGRATIONS_API CloudConnectorType GetCloudConnectorTypeForName(const Aws::String& name);

AWS_IOTMANAGEDINTEGRATIONS_API Aws::String GetNameForCloudConnectorType(CloudConnectorType value);
}  // namespace CloudConnectorTypeMapper
}  // namespace Model
}  // namespace IoTManagedIntegrations
}  // namespace Aws
