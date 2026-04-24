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
enum class DeliveryDestinationType { NOT_SET, KINESIS };

namespace DeliveryDestinationTypeMapper {
AWS_IOTMANAGEDINTEGRATIONS_API DeliveryDestinationType GetDeliveryDestinationTypeForName(const Aws::String& name);

AWS_IOTMANAGEDINTEGRATIONS_API Aws::String GetNameForDeliveryDestinationType(DeliveryDestinationType value);
}  // namespace DeliveryDestinationTypeMapper
}  // namespace Model
}  // namespace IoTManagedIntegrations
}  // namespace Aws
