/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lambda-core/LambdaCore_EXPORTS.h>

#include <cstddef>

namespace Aws {
namespace LambdaCore {
class LambdaCoreEndpointRules {
 public:
  static const size_t RulesBlobStrLen;
  static const size_t RulesBlobSize;

  static const char* GetRulesBlob();
};
}  // namespace LambdaCore
}  // namespace Aws
