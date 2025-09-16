/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/query-compatible-json-rpc-10/QueryCompatibleJSONRPC10_EXPORTS.h>

#include <cstddef>

namespace Aws {
namespace QueryCompatibleJSONRPC10 {
class QueryCompatibleJSONRPC10EndpointRules {
 public:
  static const size_t RulesBlobStrLen;
  static const size_t RulesBlobSize;

  static const char* GetRulesBlob();
};
}  // namespace QueryCompatibleJSONRPC10
}  // namespace Aws
