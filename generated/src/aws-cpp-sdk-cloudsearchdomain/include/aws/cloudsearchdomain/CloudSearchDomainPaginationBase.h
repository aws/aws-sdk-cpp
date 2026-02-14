/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>

#include <memory>

namespace Aws {
namespace CloudSearchDomain {

class CloudSearchDomainClient;

template <typename DerivedClient>
class CloudSearchDomainPaginationBase {
 public:
  virtual ~CloudSearchDomainPaginationBase() = default;
};
}  // namespace CloudSearchDomain
}  // namespace Aws
