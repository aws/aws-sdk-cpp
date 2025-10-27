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
enum class OtaProtocol { NOT_SET, HTTP };

namespace OtaProtocolMapper {
AWS_IOTMANAGEDINTEGRATIONS_API OtaProtocol GetOtaProtocolForName(const Aws::String& name);

AWS_IOTMANAGEDINTEGRATIONS_API Aws::String GetNameForOtaProtocol(OtaProtocol value);
}  // namespace OtaProtocolMapper
}  // namespace Model
}  // namespace IoTManagedIntegrations
}  // namespace Aws
