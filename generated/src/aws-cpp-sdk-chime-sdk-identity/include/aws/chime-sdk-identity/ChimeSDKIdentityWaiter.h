/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-identity/ChimeSDKIdentityClient.h>
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>

#include <algorithm>

namespace Aws {
namespace ChimeSDKIdentity {

template <typename DerivedClient = ChimeSDKIdentityClient>
class ChimeSDKIdentityWaiter {
 public:
};
}  // namespace ChimeSDKIdentity
}  // namespace Aws
