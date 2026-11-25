/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elb-proxy/ELBProxy_EXPORTS.h>

#include <cstddef>

namespace Aws {
namespace ELBProxy {
class AWS_ELBPROXY_LOCAL ELBProxyEndpointRules {
 public:
  static const size_t RulesBlobStrLen;
  static const size_t RulesBlobSize;

  static const char* GetRulesBlob();
};
}  // namespace ELBProxy
}  // namespace Aws
