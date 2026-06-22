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
enum class NetworkConnectorLastUpdateStatus { NOT_SET, Successful, Failed, InProgress };

namespace NetworkConnectorLastUpdateStatusMapper {
AWS_LAMBDACORE_API NetworkConnectorLastUpdateStatus GetNetworkConnectorLastUpdateStatusForName(const Aws::String& name);

AWS_LAMBDACORE_API Aws::String GetNameForNetworkConnectorLastUpdateStatus(NetworkConnectorLastUpdateStatus value);
}  // namespace NetworkConnectorLastUpdateStatusMapper
}  // namespace Model
}  // namespace LambdaCore
}  // namespace Aws
