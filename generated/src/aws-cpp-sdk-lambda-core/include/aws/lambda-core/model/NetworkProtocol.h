/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lambda-core/LambdaCore_EXPORTS.h>

namespace Aws {
namespace LambdaCore {
namespace Model {
enum class NetworkProtocol { NOT_SET, IPv4, DualStack };

namespace NetworkProtocolMapper {
AWS_LAMBDACORE_API NetworkProtocol GetNetworkProtocolForName(const Aws::String& name);

AWS_LAMBDACORE_API Aws::String GetNameForNetworkProtocol(NetworkProtocol value);
}  // namespace NetworkProtocolMapper
}  // namespace Model
}  // namespace LambdaCore
}  // namespace Aws
