/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotfleetwise/IoTFleetWise_EXPORTS.h>

#include <cstddef>

namespace Aws {
namespace IoTFleetWise {
class AWS_IOTFLEETWISE_LOCAL IoTFleetWiseEndpointRules {
 public:
  static const size_t RulesBlobStrLen;
  static const size_t RulesBlobSize;

  static const char* GetRulesBlob();
};
}  // namespace IoTFleetWise
}  // namespace Aws
