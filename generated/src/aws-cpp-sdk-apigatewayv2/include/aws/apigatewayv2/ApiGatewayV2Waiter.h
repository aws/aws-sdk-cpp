/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigatewayv2/ApiGatewayV2Client.h>
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>

#include <algorithm>

namespace Aws {
namespace ApiGatewayV2 {

template <typename DerivedClient = ApiGatewayV2Client>
class ApiGatewayV2Waiter {
 public:
};
}  // namespace ApiGatewayV2
}  // namespace Aws
