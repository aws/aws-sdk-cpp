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
enum class EndpointType { NOT_SET, LAMBDA };

namespace EndpointTypeMapper {
AWS_IOTMANAGEDINTEGRATIONS_API EndpointType GetEndpointTypeForName(const Aws::String& name);

AWS_IOTMANAGEDINTEGRATIONS_API Aws::String GetNameForEndpointType(EndpointType value);
}  // namespace EndpointTypeMapper
}  // namespace Model
}  // namespace IoTManagedIntegrations
}  // namespace Aws
