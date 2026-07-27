/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>

#include <cstddef>

namespace Aws {
namespace CognitoIdentityProvider {
class AWS_COGNITOIDENTITYPROVIDER_LOCAL CognitoIdentityProviderEndpointRules {
 public:
  static const size_t RulesBlobStrLen;
  static const size_t RulesBlobSize;

  static const char* GetRulesBlob();
};
}  // namespace CognitoIdentityProvider
}  // namespace Aws
