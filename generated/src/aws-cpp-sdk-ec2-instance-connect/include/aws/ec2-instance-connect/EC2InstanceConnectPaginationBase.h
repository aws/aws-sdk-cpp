/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>

#include <memory>

namespace Aws {
namespace EC2InstanceConnect {

class EC2InstanceConnectClient;

template <typename DerivedClient>
class EC2InstanceConnectPaginationBase {
 public:
  virtual ~EC2InstanceConnectPaginationBase() = default;
};
}  // namespace EC2InstanceConnect
}  // namespace Aws
