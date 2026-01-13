/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>

#include <memory>

namespace Aws {
namespace CognitoSync {

class CognitoSyncClient;

template <typename DerivedClient>
class CognitoSyncPaginationBase {
 public:
  virtual ~CognitoSyncPaginationBase() = default;
};
}  // namespace CognitoSync
}  // namespace Aws
