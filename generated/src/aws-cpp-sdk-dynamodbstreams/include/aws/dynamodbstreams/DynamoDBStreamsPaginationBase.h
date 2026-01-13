/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>

#include <memory>

namespace Aws {
namespace DynamoDBStreams {

class DynamoDBStreamsClient;

template <typename DerivedClient>
class DynamoDBStreamsPaginationBase {
 public:
  virtual ~DynamoDBStreamsPaginationBase() = default;
};
}  // namespace DynamoDBStreams
}  // namespace Aws
