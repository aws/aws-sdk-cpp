/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>

#include <memory>

namespace Aws {
namespace ComprehendMedical {

class ComprehendMedicalClient;

template <typename DerivedClient>
class ComprehendMedicalPaginationBase {
 public:
  virtual ~ComprehendMedicalPaginationBase() = default;
};
}  // namespace ComprehendMedical
}  // namespace Aws
