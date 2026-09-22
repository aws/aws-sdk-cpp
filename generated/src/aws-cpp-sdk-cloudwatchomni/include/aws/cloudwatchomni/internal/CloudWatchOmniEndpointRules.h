/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudwatchomni/CloudWatchOmni_EXPORTS.h>

#include <cstddef>

namespace Aws {
namespace CloudWatchOmni {
class AWS_CLOUDWATCHOMNI_LOCAL CloudWatchOmniEndpointRules {
 public:
  static const size_t RulesBlobStrLen;
  static const size_t RulesBlobSize;

  static const char* GetRulesBlob();
};
}  // namespace CloudWatchOmni
}  // namespace Aws
