/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eventbridgev2/EventBridgeV2_EXPORTS.h>

#include <cstddef>

namespace Aws {
namespace EventBridgeV2 {
class AWS_EVENTBRIDGEV2_LOCAL EventBridgeV2EndpointRules {
 public:
  static const size_t RulesBlobStrLen;
  static const size_t RulesBlobSize;

  static const char* GetRulesBlob();
};
}  // namespace EventBridgeV2
}  // namespace Aws
