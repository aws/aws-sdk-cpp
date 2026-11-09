/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/account-access-runtime/AccountAccessRuntime_EXPORTS.h>

#include <cstddef>

namespace Aws {
namespace AccountAccessRuntime {
class AWS_ACCOUNTACCESSRUNTIME_LOCAL AccountAccessRuntimeEndpointRules {
 public:
  static const size_t RulesBlobStrLen;
  static const size_t RulesBlobSize;

  static const char* GetRulesBlob();
};
}  // namespace AccountAccessRuntime
}  // namespace Aws
