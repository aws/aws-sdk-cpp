/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>

#include <memory>

namespace Aws {
namespace ApiGatewayManagementApi {

class ApiGatewayManagementApiClient;

template <typename DerivedClient>
class ApiGatewayManagementApiPaginationBase {
 public:
  virtual ~ApiGatewayManagementApiPaginationBase() = default;
};
}  // namespace ApiGatewayManagementApi
}  // namespace Aws
