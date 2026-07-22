/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/discovery/ApplicationDiscoveryService_EXPORTS.h>

#include <cstddef>

namespace Aws {
namespace ApplicationDiscoveryService {
class AWS_APPLICATIONDISCOVERYSERVICE_LOCAL ApplicationDiscoveryServiceEndpointRules {
 public:
  static const size_t RulesBlobStrLen;
  static const size_t RulesBlobSize;

  static const char* GetRulesBlob();
};
}  // namespace ApplicationDiscoveryService
}  // namespace Aws
