/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>

#include <memory>

namespace Aws {
namespace IoTEvents {

class IoTEventsClient;

template <typename DerivedClient>
class IoTEventsPaginationBase {
 public:
  virtual ~IoTEventsPaginationBase() = default;
};
}  // namespace IoTEvents
}  // namespace Aws
