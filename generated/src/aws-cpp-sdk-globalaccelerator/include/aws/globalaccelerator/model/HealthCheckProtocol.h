/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/globalaccelerator/GlobalAccelerator_EXPORTS.h>

namespace Aws {
namespace GlobalAccelerator {
namespace Model {
enum class HealthCheckProtocol { NOT_SET, TCP, HTTP, HTTPS };

namespace HealthCheckProtocolMapper {
AWS_GLOBALACCELERATOR_API HealthCheckProtocol GetHealthCheckProtocolForName(const Aws::String& name);

AWS_GLOBALACCELERATOR_API Aws::String GetNameForHealthCheckProtocol(HealthCheckProtocol value);
}  // namespace HealthCheckProtocolMapper
}  // namespace Model
}  // namespace GlobalAccelerator
}  // namespace Aws
