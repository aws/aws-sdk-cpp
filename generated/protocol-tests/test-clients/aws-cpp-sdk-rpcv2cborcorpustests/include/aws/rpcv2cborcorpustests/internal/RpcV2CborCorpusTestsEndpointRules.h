/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rpcv2cborcorpustests/RpcV2CborCorpusTests_EXPORTS.h>

#include <cstddef>

namespace Aws {
namespace RpcV2CborCorpusTests {
class AWS_RPCV2CBORCORPUSTESTS_LOCAL RpcV2CborCorpusTestsEndpointRules {
 public:
  static const size_t RulesBlobStrLen;
  static const size_t RulesBlobSize;

  static const char* GetRulesBlob();
};
}  // namespace RpcV2CborCorpusTests
}  // namespace Aws
