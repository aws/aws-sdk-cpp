/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/endusermessaging/EndUserMessaging_EXPORTS.h>

#include <cstddef>

namespace Aws {
namespace EndUserMessaging {
class AWS_ENDUSERMESSAGING_LOCAL EndUserMessagingEndpointRules {
 public:
  static const size_t RulesBlobStrLen;
  static const size_t RulesBlobSize;

  static const char* GetRulesBlob();
};
}  // namespace EndUserMessaging
}  // namespace Aws
