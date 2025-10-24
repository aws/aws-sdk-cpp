/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecs/ECS_EXPORTS.h>

namespace Aws {
namespace ECS {
namespace Model {
enum class TransportProtocol { NOT_SET, tcp, udp };

namespace TransportProtocolMapper {
AWS_ECS_API TransportProtocol GetTransportProtocolForName(const Aws::String& name);

AWS_ECS_API Aws::String GetNameForTransportProtocol(TransportProtocol value);
}  // namespace TransportProtocolMapper
}  // namespace Model
}  // namespace ECS
}  // namespace Aws
