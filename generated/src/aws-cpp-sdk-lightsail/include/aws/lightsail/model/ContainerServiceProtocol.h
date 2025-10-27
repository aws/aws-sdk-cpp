/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lightsail/Lightsail_EXPORTS.h>

namespace Aws {
namespace Lightsail {
namespace Model {
enum class ContainerServiceProtocol { NOT_SET, HTTP, HTTPS, TCP, UDP };

namespace ContainerServiceProtocolMapper {
AWS_LIGHTSAIL_API ContainerServiceProtocol GetContainerServiceProtocolForName(const Aws::String& name);

AWS_LIGHTSAIL_API Aws::String GetNameForContainerServiceProtocol(ContainerServiceProtocol value);
}  // namespace ContainerServiceProtocolMapper
}  // namespace Model
}  // namespace Lightsail
}  // namespace Aws
