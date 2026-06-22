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
enum class NetworkConnectorState { NOT_SET, PENDING, ACTIVE, INACTIVE, FAILED, DELETING, DELETE_FAILED };

namespace NetworkConnectorStateMapper {
AWS_LAMBDACORE_API NetworkConnectorState GetNetworkConnectorStateForName(const Aws::String& name);

AWS_LAMBDACORE_API Aws::String GetNameForNetworkConnectorState(NetworkConnectorState value);
}  // namespace NetworkConnectorStateMapper
}  // namespace Model
}  // namespace LambdaCore
}  // namespace Aws
