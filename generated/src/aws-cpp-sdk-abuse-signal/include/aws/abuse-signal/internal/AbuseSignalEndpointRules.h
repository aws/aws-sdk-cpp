/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/abuse-signal/AbuseSignal_EXPORTS.h>

#include <cstddef>

namespace Aws {
namespace AbuseSignal {
class AWS_ABUSESIGNAL_LOCAL AbuseSignalEndpointRules {
 public:
  static const size_t RulesBlobStrLen;
  static const size_t RulesBlobSize;

  static const char* GetRulesBlob();
};
}  // namespace AbuseSignal
}  // namespace Aws
