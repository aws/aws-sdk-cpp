/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>

#include <memory>

namespace Aws {
namespace CloudHSM {

class CloudHSMClient;

template <typename DerivedClient>
class CloudHSMPaginationBase {
 public:
  virtual ~CloudHSMPaginationBase() = default;
};
}  // namespace CloudHSM
}  // namespace Aws
