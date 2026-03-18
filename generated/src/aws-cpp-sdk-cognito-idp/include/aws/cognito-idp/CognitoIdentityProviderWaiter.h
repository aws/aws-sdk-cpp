/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProviderClient.h>
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>

#include <algorithm>

namespace Aws {
namespace CognitoIdentityProvider {

template <typename DerivedClient = CognitoIdentityProviderClient>
class CognitoIdentityProviderWaiter {
 public:
};
}  // namespace CognitoIdentityProvider
}  // namespace Aws
