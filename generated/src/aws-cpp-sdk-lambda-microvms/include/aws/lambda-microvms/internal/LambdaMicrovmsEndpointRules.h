/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lambda-microvms/LambdaMicrovms_EXPORTS.h>

#include <cstddef>

namespace Aws {
namespace LambdaMicrovms {
class AWS_LAMBDAMICROVMS_LOCAL LambdaMicrovmsEndpointRules {
 public:
  static const size_t RulesBlobStrLen;
  static const size_t RulesBlobSize;

  static const char* GetRulesBlob();
};
}  // namespace LambdaMicrovms
}  // namespace Aws
