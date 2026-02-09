/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>

#include <memory>

namespace Aws {
namespace CloudWatchEvents {

class CloudWatchEventsClient;

template <typename DerivedClient>
class CloudWatchEventsPaginationBase {
 public:
  virtual ~CloudWatchEventsPaginationBase() = default;
};
}  // namespace CloudWatchEvents
}  // namespace Aws
