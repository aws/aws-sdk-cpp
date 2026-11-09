/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/non-query-compatible-rpcv2-protocol/NonQueryCompatibleRpcV2Protocol_EXPORTS.h>

#include <cstddef>

namespace Aws {
namespace NonQueryCompatibleRpcV2Protocol {
class AWS_NONQUERYCOMPATIBLERPCV2PROTOCOL_LOCAL NonQueryCompatibleRpcV2ProtocolEndpointRules {
 public:
  static const size_t RulesBlobStrLen;
  static const size_t RulesBlobSize;

  static const char* GetRulesBlob();
};
}  // namespace NonQueryCompatibleRpcV2Protocol
}  // namespace Aws
