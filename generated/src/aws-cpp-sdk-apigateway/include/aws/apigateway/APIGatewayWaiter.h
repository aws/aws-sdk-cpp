/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigateway/APIGatewayClient.h>
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>

#include <algorithm>

namespace Aws {
namespace APIGateway {

template <typename DerivedClient = APIGatewayClient>
class APIGatewayWaiter {
 public:
};
}  // namespace APIGateway
}  // namespace Aws
