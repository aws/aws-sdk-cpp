/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/client/UserAgent.h>
#include <aws/core/utils/pagination/Paginator.h>

#include <memory>

namespace Aws {
namespace EC2InstanceConnect {

template <typename DerivedClient>
class EC2InstanceConnectPaginationBase {
 public:
  virtual ~EC2InstanceConnectPaginationBase() = default;
};
}  // namespace EC2InstanceConnect
}  // namespace Aws
