/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>

#include <memory>

namespace Aws {
namespace KinesisAnalytics {

class KinesisAnalyticsClient;

template <typename DerivedClient>
class KinesisAnalyticsPaginationBase {
 public:
  virtual ~KinesisAnalyticsPaginationBase() = default;
};
}  // namespace KinesisAnalytics
}  // namespace Aws
