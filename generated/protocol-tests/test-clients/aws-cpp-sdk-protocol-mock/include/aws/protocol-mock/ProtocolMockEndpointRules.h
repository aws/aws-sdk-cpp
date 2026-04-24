/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/protocol-mock/ProtocolMock_EXPORTS.h>

#include <cstddef>

namespace Aws {
namespace ProtocolMock {
class ProtocolMockEndpointRules {
 public:
  static const size_t RulesBlobStrLen;
  static const size_t RulesBlobSize;

  static const char* GetRulesBlob();
};
}  // namespace ProtocolMock
}  // namespace Aws
