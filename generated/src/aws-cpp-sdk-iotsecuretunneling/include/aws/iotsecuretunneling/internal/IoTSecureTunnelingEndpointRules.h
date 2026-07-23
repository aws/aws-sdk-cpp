/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsecuretunneling/IoTSecureTunneling_EXPORTS.h>

#include <cstddef>

namespace Aws {
namespace IoTSecureTunneling {
class AWS_IOTSECURETUNNELING_LOCAL IoTSecureTunnelingEndpointRules {
 public:
  static const size_t RulesBlobStrLen;
  static const size_t RulesBlobSize;

  static const char* GetRulesBlob();
};
}  // namespace IoTSecureTunneling
}  // namespace Aws
