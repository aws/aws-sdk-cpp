/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>

#include <memory>

namespace Aws {
namespace EKSAuth {

class EKSAuthClient;

template <typename DerivedClient>
class EKSAuthPaginationBase {
 public:
  virtual ~EKSAuthPaginationBase() = default;
};
}  // namespace EKSAuth
}  // namespace Aws
