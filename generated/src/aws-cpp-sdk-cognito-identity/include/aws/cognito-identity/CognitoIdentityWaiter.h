/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-identity/CognitoIdentityClient.h>
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>

#include <algorithm>

namespace Aws {
namespace CognitoIdentity {

template <typename DerivedClient = CognitoIdentityClient>
class CognitoIdentityWaiter {
 public:
};
}  // namespace CognitoIdentity
}  // namespace Aws
