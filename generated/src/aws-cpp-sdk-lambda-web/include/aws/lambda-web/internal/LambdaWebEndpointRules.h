/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lambda-web/LambdaWeb_EXPORTS.h>

#include <cstddef>

namespace Aws {
namespace LambdaWeb {
class AWS_LAMBDAWEB_LOCAL LambdaWebEndpointRules {
 public:
  static const size_t RulesBlobStrLen;
  static const size_t RulesBlobSize;

  static const char* GetRulesBlob();
};
}  // namespace LambdaWeb
}  // namespace Aws
