/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/agent-discovery/AgentDiscovery_EXPORTS.h>

#include <cstddef>

namespace Aws {
namespace AgentDiscovery {
class AWS_AGENTDISCOVERY_LOCAL AgentDiscoveryEndpointRules {
 public:
  static const size_t RulesBlobStrLen;
  static const size_t RulesBlobSize;

  static const char* GetRulesBlob();
};
}  // namespace AgentDiscovery
}  // namespace Aws
