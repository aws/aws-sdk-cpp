/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/frauddetector/FraudDetectorClient.h>

#include <algorithm>

namespace Aws {
namespace FraudDetector {

template <typename DerivedClient = FraudDetectorClient>
class FraudDetectorWaiter {
 public:
};
}  // namespace FraudDetector
}  // namespace Aws
