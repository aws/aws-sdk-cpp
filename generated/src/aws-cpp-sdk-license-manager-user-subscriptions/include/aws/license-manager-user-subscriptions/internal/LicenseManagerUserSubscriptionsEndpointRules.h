/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager-user-subscriptions/LicenseManagerUserSubscriptions_EXPORTS.h>

#include <cstddef>

namespace Aws {
namespace LicenseManagerUserSubscriptions {
class AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_LOCAL LicenseManagerUserSubscriptionsEndpointRules {
 public:
  static const size_t RulesBlobStrLen;
  static const size_t RulesBlobSize;

  static const char* GetRulesBlob();
};
}  // namespace LicenseManagerUserSubscriptions
}  // namespace Aws
