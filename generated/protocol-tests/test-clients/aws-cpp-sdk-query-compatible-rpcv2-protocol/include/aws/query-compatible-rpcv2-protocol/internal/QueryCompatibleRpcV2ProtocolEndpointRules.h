/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/query-compatible-rpcv2-protocol/QueryCompatibleRpcV2Protocol_EXPORTS.h>

#include <cstddef>

namespace Aws {
namespace QueryCompatibleRpcV2Protocol {
class AWS_QUERYCOMPATIBLERPCV2PROTOCOL_LOCAL QueryCompatibleRpcV2ProtocolEndpointRules {
 public:
  static const size_t RulesBlobStrLen;
  static const size_t RulesBlobSize;

  static const char* GetRulesBlob();
};
}  // namespace QueryCompatibleRpcV2Protocol
}  // namespace Aws
