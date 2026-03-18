/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigatewaymanagementapi/ApiGatewayManagementApiClient.h>
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>

#include <algorithm>

namespace Aws {
namespace ApiGatewayManagementApi {

template <typename DerivedClient = ApiGatewayManagementApiClient>
class ApiGatewayManagementApiWaiter {
 public:
};
}  // namespace ApiGatewayManagementApi
}  // namespace Aws
