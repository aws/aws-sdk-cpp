/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/arc-zonal-shift/ARCZonalShift_EXPORTS.h>

#include <cstddef>

namespace Aws {
namespace ARCZonalShift {
class AWS_ARCZONALSHIFT_LOCAL ARCZonalShiftEndpointRules {
 public:
  static const size_t RulesBlobStrLen;
  static const size_t RulesBlobSize;

  static const char* GetRulesBlob();
};
}  // namespace ARCZonalShift
}  // namespace Aws
