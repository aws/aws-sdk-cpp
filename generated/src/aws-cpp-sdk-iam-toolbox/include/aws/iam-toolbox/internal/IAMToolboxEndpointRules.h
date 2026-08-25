/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iam-toolbox/IAMToolbox_EXPORTS.h>

#include <cstddef>

namespace Aws {
namespace IAMToolbox {
class AWS_IAMTOOLBOX_LOCAL IAMToolboxEndpointRules {
 public:
  static const size_t RulesBlobStrLen;
  static const size_t RulesBlobSize;

  static const char* GetRulesBlob();
};
}  // namespace IAMToolbox
}  // namespace Aws
